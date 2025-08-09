#include "I2CConn.hpp"

#include <fcntl.h>

namespace sonia_common_cpp
{
    I2CConn::I2CConn(std::string port, int slave) : _addr(port), _slave(slave) {}

    bool I2CConn::OpenPort()
    {
        _port = open(_addr.c_str(), O_RDWR);

        if (_port < 0) {
			perror("Failed to open the i2c bus");
			return false;
		}

        if (ioctl(_port, I2C_SLAVE, _slave) < 0) {
			perror("Failed to open the ioctl");
			close(_port);
			return false;
		}
        return true;
    }

    ssize_t I2CConn::Read(ITramData &tram) {
        I2CTram& i2c_tram = dynamic_cast<I2CTram&>(tram);
        i2c_tram.data.resize(i2c_tram.size);
        return i2c_smbus_read_block_data(_port, i2c_tram.cmd, i2c_tram.data.data());
    }

    ssize_t I2CConn::Transmit(const ITramData &tram) {
        const I2CTram& i2c_tram = dynamic_cast<const I2CTram&>(tram);
        return i2c_smbus_write_block_data(_port, i2c_tram.cmd, i2c_tram.size, i2c_tram.data.data());
    }
}  // namespace sonia_common_cpp
