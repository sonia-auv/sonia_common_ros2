#pragma once
#include "IConnection.hpp"
#include <unistd.h>
#include <string>
#include <vector>

extern "C"
{
#include <i2c/smbus.h>
#include <linux/i2c-dev.h>
#include <linux/i2c.h>
#include <sys/ioctl.h>
}

namespace sonia_common_cpp
{
    struct I2CTram : ITramData
    {
        uint8_t cmd;
        ssize_t size;
        std::vector<u_int8_t> data;
    };

    class I2CConn : public IConnection
    {
        public:
        I2CConn(std::string port, int slave);
        ~I2CConn() = default;

        bool OpenPort();

        ssize_t Read(I2CTram &tram);

        ssize_t Transmit(const I2CTram &tram);

        private:
        std::string _addr;
        int _port;
        int _slave;
    };
}  // namespace sonia_common_cpp
