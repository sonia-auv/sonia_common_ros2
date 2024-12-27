#include "SerialConn.hpp"

#include <fcntl.h>
#include <unistd.h>

namespace sonia_common_cpp
{
    SerialConn::SerialConn(std::string port, speed_t baud) : _port(port), _baud(baud), _isBlocking(true) {}

    SerialConn::SerialConn(std::string port, speed_t baud, bool isBlocking)
        : _port(port), _baud(baud), _isBlocking(isBlocking)
    {}

    SerialConn::~SerialConn()
    {
        // Close port on destruction.
        close(_fd);
    }

    ssize_t SerialConn::ReadPackets(size_t count, uint8_t *pData) const
    {
        pData[0] = 0;

        return read(_fd, pData, count);
    }

    ssize_t SerialConn::ReadOnce(uint8_t *pData, int offset) const { return read(_fd, (pData + offset), 1); }

    void SerialConn::Flush() const { tcflush(_fd, TCIOFLUSH); }

    ssize_t SerialConn::Transmit(const std::string data) const { return write(_fd, data.c_str(), data.size()); }

    ssize_t SerialConn::Transmit(const uint8_t *pData, size_t length) const { return write(_fd, pData, length); }

    bool SerialConn::OpenPort()
    {
        /*
        O_RDWR: Read and write
        O_NOCTTY: No control TTY
        O_NDELAY: Non-blocking mode.
        */
        if (_isBlocking)
        {
            _fd = open(_port.c_str(), O_RDWR | O_NOCTTY);
        }
        else
        {
            _fd = open(_port.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
        }

        if (_fd == -1)
        {
            return false;
        }

        if (!_isBlocking)
        {
            fcntl(_fd, F_SETFL, O_NDELAY);
        }

        // Get the options object from the port.
        tcgetattr(_fd, &_options);

        // Set the baud rate
        cfsetispeed(&_options, _baud);
        cfsetospeed(&_options, _baud);

        // Hardware control of the terminal
        // flags defined here: https://www.ibm.com/docs/en/aix/7.1?topic=files-termiosh-file
        _options.c_cflag |= (CLOCAL | CREAD);  // Specify local ligne (local direct connection), Enables receiver
        _options.c_cflag &= ~CSIZE;            // Remove set character size
        _options.c_cflag |= CS8;               // Set character size to 8 bits

        _options.c_cflag &= ~(PARENB | PARODD);  // Disable parity, specify even paraity
        _options.c_cflag &= ~CSTOPB;   // remove specified number stop bits. This sets the default of 1 stop bit.
        _options.c_cflag &= ~CRTSCTS;  // Disable flow control

        // Input Flags
        _options.c_iflag &= ~IGNBRK;                  // Do not ignore break conditions
        _options.c_iflag &= ~(IXON | IXOFF | IXANY);  // disable start and stop output control, Disable start-and-stop
                                                      // input control, disable any char to restart output.

        // Local Flags
        _options.c_lflag = 0;

        // Output Flags
        _options.c_oflag = 0;

        // Set the new options to the port.
        tcsetattr(_fd, TCSANOW, &_options);
        return true;
    }
}  // namespace sonia_common_cpp