#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "MS5837.hpp"


namespace sonia_common_cpp
{

	
	MS5837::MS5837() {
		_fluidDensity = 1029;
	}

	int MS5837::init(char *filename, int slave) {
		file = open(filename, O_RDWR);
		MS5837_ADDR = slave;

		if (file < 0) {
			perror("Failed to open the i2c bus");
			return false;
		}

		// Set the port options and set the address of the device
		if (ioctl(file, I2C_SLAVE, slave) < 0) {
			perror("Failed to open the ioctl");
			close(file);
			return false;
		}


		// Reset the MS5837, per datasheet
		int succes = i2c_smbus_write_byte(file,MS5837_RESET);
		// Wait for reset to complete
		usleep(10000);

		uint8_t res[64];
		// Read calibration values and CRC
		for ( uint8_t i = 0 ; i < 7 ; i++ ) {
                        succes += i2c_smbus_read_i2c_block_data(file,MS5837_PROM_READ+i*2,2,res);
			C[i] = (res[0] << 8) | res[1];
		}

		// Verify that data is correct with CRC
		uint8_t crcRead = C[0] >> 12;
		uint8_t crcCalculated = crc4(C);

		_model = MS5837_30BA;

		if ( crcCalculated != crcRead ) {
			return succes; // CRC fail
		}
		cptTemp =50;
                return true;
	}

	void MS5837::setModel(uint8_t model) {
		_model = model;
	}

	uint8_t MS5837::getModel() {
		return (_model);
	}

	void MS5837::setFluidDensity(float density) {
		_fluidDensity = density;
	}

	int MS5837::read() {

		uint8_t res[64];

		//Check that _i2cPort is not NULL
		if (this->file < 0)
		{
			perror("Failed to open the i2c bus");
			return 0;
		}

		int succes = i2c_smbus_write_byte(file,MS5837_CONVERT_D1_8192);

		usleep(12500); // Max conversion time per datasheet

		succes += i2c_smbus_read_i2c_block_data(this->file,MS5837_ADC_READ,3,res);

		D1_pres = uint32_t(res[0]) << 16 | uint32_t(res[1]) << 8 | uint32_t(res[2]);

		if(cptTemp >= 50){
			// Request D2 conversion
			i2c_smbus_write_byte(file,MS5837_CONVERT_D2_8192);

			usleep(10000); // Max conversion time per datasheet

			i2c_smbus_read_i2c_block_data(file,MS5837_ADC_READ,3,res);
			D2_temp = 0;
			D2_temp = uint32_t(res[0]) << 16 | uint32_t(res[1]) << 8 | uint32_t(res[2]);
			cptTemp = 0;
		}else{
			++cptTemp;
		}

		calculate();
                return succes;
	}

	void MS5837::calculate() {
		// Given C1-C6 and D1, D2, calculated TEMP and P
		// Do conversion first and then second order temp compensation

		int32_t dT = 0;
		int64_t SENS = 0;
		int64_t OFF = 0;
		int32_t SENSi = 0;
		int32_t OFFi = 0;
		int32_t Ti = 0;
		int64_t OFF2 = 0;
		int64_t SENS2 = 0;

		// Terms called
		dT = D2_temp-uint32_t(C[5])*256l;
		if ( _model == MS5837_30BA ) {
			SENS = int64_t(C[1])*65536l+(int64_t(C[3])*dT)/128l;
			OFF = int64_t(C[2])*131072l+(int64_t(C[4])*dT)/64l;
			P = (D1_pres*SENS/(2097152l)-OFF)/(32768l);
		} else {
			SENS = int64_t(C[1])*32768l+(int64_t(C[3])*dT)/256l;
			OFF = int64_t(C[2])*65536l+(int64_t(C[4])*dT)/128l;
			P = (D1_pres*SENS/(2097152l)-OFF)/(8192l);
		}

		// Temp conversion
		TEMP = 2000l+int64_t(dT)*C[6]/8388608LL;

		//Second order compensation
		if ( _model == MS5837_30BA ) {
			if((TEMP/100)<20){         //Low temp
				Ti = (11*int64_t(dT)*int64_t(dT))/(34359738368LL);
				OFFi = (31*(TEMP-2000)*(TEMP-2000))/8;
				SENSi = (63*(TEMP-2000)*(TEMP-2000))/32;
			}
		} else {
			if((TEMP/100)<20){         //Low temp
				Ti = (3*int64_t(dT)*int64_t(dT))/(8589934592LL);
				OFFi = (3*(TEMP-2000)*(TEMP-2000))/2;
				SENSi = (5*(TEMP-2000)*(TEMP-2000))/8;
				if((TEMP/100)<-15){    //Very low temp
					OFFi = OFFi+7*(TEMP+1500l)*(TEMP+1500l);
					SENSi = SENSi+4*(TEMP+1500l)*(TEMP+1500l);
				}
			}
			else if((TEMP/100)>=20){    //High temp
				Ti = 2*(dT*dT)/(137438953472LL);
				OFFi = (1*(TEMP-2000)*(TEMP-2000))/16;
				SENSi = 0;
			}
		}

		OFF2 = OFF-OFFi;           //Calculate pressure and temp second order
		SENS2 = SENS-SENSi;

		TEMP = (TEMP-Ti);

		if ( _model == MS5837_30BA ) {
			P = (((D1_pres*SENS2)/2097152l-OFF2)/32768l);
		} else {
			P = (((D1_pres*SENS2)/2097152l-OFF2)/8192l);
		}
	}

	float MS5837::pressure(float conversion) {
		if ( _model == MS5837_30BA ) {
			return P*conversion/100.0f;
		}
		else {
			return P*conversion/10.0f;
		}
	}

	float MS5837::temperature() {
		return TEMP/100.0f;
	}

	// The pressure sensor measures absolute pressure, so it will measure the atmospheric pressure + water pressure
	// We subtract the atmospheric pressure to calculate the depth with only the water pressure
	// The average atmospheric pressure of 101300 pascal is used for the calcuation, but atmospheric pressure varies
	// If the atmospheric pressure is not 101300 at the time of reading, the depth reported will be offset
	// In order to calculate the correct depth, the actual atmospheric pressure should be measured once in air, and
	// that value should subtracted for subsequent depth calculations.
	float MS5837::depth() {
		return (pressure(MS5837::Pa)-101300)/(_fluidDensity*9.80665);
	}

	float MS5837::altitude() {
		return (1-pow((pressure()/1013.25),.190284))*145366.45*.3048;
	}


	uint8_t MS5837::crc4(uint16_t n_prom[]) {
		uint16_t n_rem = 0;

		n_prom[0] = ((n_prom[0]) & 0x0FFF);
		n_prom[7] = 0;

		for ( uint8_t i = 0 ; i < 16; i++ ) {
			if ( i%2 == 1 ) {
				n_rem ^= (uint16_t)((n_prom[i>>1]) & 0x00FF);
			} else {
				n_rem ^= (uint16_t)(n_prom[i>>1] >> 8);
			}
			for ( uint8_t n_bit = 8 ; n_bit > 0 ; n_bit-- ) {
				if ( n_rem & 0x8000 ) {
					n_rem = (n_rem << 1) ^ 0x3000;
				} else {
					n_rem = (n_rem << 1);
				}
			}
		}

		n_rem = ((n_rem >> 12) & 0x000F);

		return n_rem ^ 0x00;
	}
}
