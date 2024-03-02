#include "SerialConn.h"
#include <fcntl.h>
#include <unistd.h>
namespace sonia_cpp
{
    SerialConn::SerialConn(std::string port, speed_t baud) : m_port(port), m_baud(baud), m_is_blocking(true)
    {
    }

    SerialConn::SerialConn(std::string port, speed_t baud, bool isBlocking) : m_port(port), m_baud(baud), m_is_blocking(isBlocking)
    {
    }

    SerialConn::~SerialConn()
    {
        // Close port on destruction.
        close(m_fd);
    }

    ssize_t SerialConn::ReadPackets(size_t count, uint8_t *pData)
    {
        pData[0] = 0;

        return read(m_fd, pData, count);
    }

    ssize_t SerialConn::ReadOnce(uint8_t *pData, int offset)
    {
        return read(m_fd, (pData + offset), 1);
    }

    void SerialConn::Flush()
    {
        tcflush(m_fd, TCIOFLUSH);
    }

    ssize_t SerialConn::Transmit(const std::string data)
    {
        return write(m_fd, data.c_str(), data.size());
    }

    ssize_t SerialConn::Transmit(const uint8_t *pData, size_t length)
    {
        return write(m_fd, pData, length);
    }

    bool SerialConn::OpenPort()
    {
        /*
        O_RDWR: Read and write
        O_NOCTTY: No control TTY
        O_NDELAY: Non-blocking mode.
        */
        if (m_is_blocking)
        {
            m_fd = open(m_port.c_str(), O_RDWR | O_NOCTTY);
        }
        else
        {
            m_fd = open(m_port.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
        }

        if (m_fd == -1)
        {
            return false;
        }

        if (!m_is_blocking)
        {
            fcntl(m_fd, F_SETFL, O_NDELAY);
        }

        // Get the options object from the port.
        tcgetattr(m_fd, &m_options);

        // Set the baud rate
        cfsetispeed(&m_options, m_baud);
        cfsetospeed(&m_options, m_baud);

        // Hardware control of the terminal
        // flags defined here: https://www.ibm.com/docs/en/aix/7.1?topic=files-termiosh-file
        m_options.c_cflag |= (CLOCAL | CREAD); // Specify local ligne (local direct connection), Enables receiver
        m_options.c_cflag &= ~CSIZE;           // Remove set character size
        m_options.c_cflag |= CS8;              // Set character size to 8 bits

        m_options.c_cflag &= ~(PARENB | PARODD); // Disable parity, specify even paraity
        m_options.c_cflag &= ~CSTOPB;            // remove specified number stop bits. This sets the default of 1 stop bit.
        m_options.c_cflag &= ~CRTSCTS;           // Disable flow control

        // Input Flags
        m_options.c_iflag &= ~IGNBRK;                 // Do not ignore break conditions
        m_options.c_iflag &= ~(IXON | IXOFF | IXANY); // disable start and stop output control, Disable start-and-stop input control, disable any char to restart output.

        // Local Flags
        m_options.c_lflag = 0;

        // Output Flags
        m_options.c_oflag = 0;

        // Set the new options to the port.
        tcsetattr(m_fd, TCSANOW, &m_options);
        return true;
    }
}