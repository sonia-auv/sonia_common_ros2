
#include <linux/i2c.h>
#include <i2c/smbus.h>
#include <stdint.h>


namespace sonia_common_cpp
{
    class MS5837 {
        public:

            MS5837();

            bool init(char *filename, int slave);

            /** Set model of MS5837 sensor. Valid options are MS5837::MS5837_30BA (default)
             * and MS5837::MS5837_02BA.
             */
            void setModel(uint8_t model);
            uint8_t getModel();

            /** Provide the density of the working fluid in kg/m^3. Default is for
             * seawater. Should be 997 for freshwater.
             */
            void setFluidDensity(float density);

            /** The read from I2C takes up to 40 ms, so use sparingly is possible.
             */
            void read();

            /** Pressure returned in mbar or mbar*conversion rate.
             */
            float pressure(float conversion = 1.0f);

            /** Temperature returned in deg C.
             */
            float temperature();

            /** Depth returned in meters (valid for operation in incompressible
             *  liquids only. Uses density that is set for fresh or seawater.
             */
            float depth();

            /** Altitude returned in meters (valid for operation in air only).
             */
            float altitude();

        private:
            uint8_t MS5837_ADDR ;
            const uint8_t MS5837_RESET = 0x1E;
            const uint8_t MS5837_ADC_READ = 0x00;
            const uint8_t MS5837_PROM_READ = 0xA0;
            const uint8_t MS5837_CONVERT_D1_8192 = 0x4A;
            const uint8_t MS5837_CONVERT_D2_8192 = 0x5A;

            const float Pa = 100.0f;
            const float bar = 0.001f;
            const float mbar = 1.0f;

            const uint8_t MS5837_30BA = 0;
            const uint8_t MS5837_02BA = 1;
            const uint8_t MS5837_UNRECOGNISED = 255;

            const uint16_t MS5837_02BA_MAX_SENSITIVITY = 49000;
            const uint16_t MS5837_02BA_30BA_SEPARATION = 37000;
            const uint16_t MS5837_30BA_MIN_SENSITIVITY = 26000;

            unsigned char buffer[10];
            int file;

            uint16_t C[8];
            uint32_t D1_pres, D2_temp;
            int32_t TEMP;
            int32_t P;
            uint8_t _model;

            float fluidDensity;

            /** Performs calculations per the sensor data sheet for conversion and
             *  second order compensation.
             */
            void calculate();

            uint8_t crc4(uint16_t n_prom[]);
    };
}