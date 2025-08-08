#pragma once
#include <unistd.h>
#include <string>

extern "C"
{
#include <i2c/smbus.h>
#include <linux/i2c-dev.h>
#include <linux/i2c.h>
#include <sys/ioctl.h>
}

namespace sonia_common_cpp
{
    class I2CConn
    {
        public:
        I2CConn(std::string port, int slave);
        ~I2CConn() = default;

        bool OpenPort();

        ssize_t Read(uint8_t cmd, uint8_t* data);

        ssize_t Transmit(uint8_t cmd, uint8_t size, uint8_t* data);

        private:
        std::string _addr;
        int _port;
        int _slave;
    };
}  // namespace sonia_common_cpp
