#include "SerialConn.hpp"

#include <fcntl.h>
#include <unistd.h>

namespace sonia_common_cpp
{
    SerialConn::SerialConn(std::string port, speed_t baud, uint8_t timeout = 5) : _port(port), _baud(baud), _isBlocking(true), _timeout(timeout) {}

    SerialConn::SerialConn(std::string port, speed_t baud, bool isBlocking, uint8_t timeout = 5)
        : _port(port), _baud(baud), _isBlocking(isBlocking), _timeout(timeout)
    {}

    SerialConn::~SerialConn()
    {
        // Close port on destruction.
        close(_fd);
    }

    ssize_t SerialConn::ReadPackets(size_t count, uint8_t *pData)
    {
        pData[0] = 0;
        fd_set set;
        struct timeval timeout;

        FD_ZERO(&set);
        FD_SET(_fd, &set);

        timeout.tv_sec = _timeout;
        timeout.tv_usec = 0;
        
        int rv;
        _lock.lock();
        rv = select(_fd + 1, &set, NULL, NULL, &timeout);
        if (rv == -1) {
            _lock.unlock();
            return -1; // Error
        } else if (rv == 0) {
            _lock.unlock();
            return 0; // Timeout, no data
        }
        ssize_t ret = read(_fd, pData, count);
        _lock.unlock();
        return ret;
    }

    ssize_t SerialConn::ReadOnce(uint8_t *pData, int offset)
    {
        _lock.lock();
        ssize_t ret = read(_fd, (pData + offset), 1);
        _lock.unlock();
        return ret;
    }

    void SerialConn::Flush() const { tcflush(_fd, TCIOFLUSH); }

    ssize_t SerialConn::Transmit(const std::string data)
    {
        _lock.lock();
        ssize_t ret = write(_fd, data.c_str(), data.size());
        _lock.unlock();
        return ret;
    }

    ssize_t SerialConn::Transmit(const uint8_t *pData, size_t length)
    {
        _lock.lock();
        ssize_t ret = write(_fd, pData, length);
        _lock.unlock();
        return ret;
    }

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
