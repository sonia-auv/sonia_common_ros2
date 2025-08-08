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

    ssize_t I2CConn::Read(uint8_t cmd, uint8_t* data) {
        return i2c_smbus_read_block_data(_port, cmd, data);
    }

    ssize_t I2CConn::Transmit(uint8_t cmd, uint8_t size, uint8_t* data) {
        return i2c_smbus_write_block_data(_port, cmd, size, data);
    }
}  // namespace sonia_common_cpp
