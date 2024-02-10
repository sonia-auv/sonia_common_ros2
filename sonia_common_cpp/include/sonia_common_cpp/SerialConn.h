/**
 * \file	SerialConnection.h
 * \author	Nimai Jariwala
 * \date	21/01/2023
 *
 * \copyright Copyright (c) 2021 S.O.N.I.A. All rights reserved.
 *
 * \section LICENSE
 *
 * This file is part of S.O.N.I.A. software.
 *
 * S.O.N.I.A. software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * S.O.N.I.A. software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with S.O.N.I.A. software. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <string>

#include <termios.h>
#include <unistd.h>

namespace sonia_cpp
{

    class SerialConn
    {
    public:
        /// @brief Packet Buffer size.
        const int BUFFER_SIZE = 1024;

        /// @brief Constructor for serial connection to a port.
        /// @param port Port number.
        SerialConn(std::string port, speed_t baud);
        SerialConn(std::string port, speed_t baud, bool isBlocking);

        /// @brief Destructor.
        ~SerialConn();

        /// @brief Receive data from the connected serial port.
        /// @param count The number of packets to read.
        /// @param pData Char array that will store the received data.
        /// @return Status of the received packaet as a byte code.
        ssize_t ReadPackets(size_t count, char *pData);

        /// @brief Read one packet from the serial stream.
        /// @param pData Char array to store the data.
        /// @param offset Stream offset.
        ssize_t ReadOnce(char *pData, int offset);

        /// @brief Flush the stream.
        void Flush();

        /// @brief Transmit data to the stream using a string.
        /// @param data The data to send as a string.
        /// @return Byte Status code.
        ssize_t Transmit(const std::string data);

        /// @brief Transmit data to the stream using a char array
        /// @param pData Char data array to send.
        /// @param length Length of the data array.
        /// @return Byte Status Code.
        ssize_t Transmit(const char *pData, size_t length);

        bool OpenPort();

    private:
        /// @brief Configurations for the device
        struct termios m_options;

        /// @brief The Serial port.
        int m_fd;

        std::string m_port;

        speed_t m_baud;

        bool m_is_blocking;
    };

} // namespace sonia_cpp