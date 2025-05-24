/**
 * \file    SerialConnection.h
 * \author  Nimai Jariwala
 * \date    21/01/2023
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

#include <arpa/inet.h>

#include <cstring>
#include <string>
#include <vector>

namespace sonia_common_cpp
{
    class EthernetSocket
    {
        public:
        /**
         * @brief Construct a new Ethernet Socket object
         *
         * @param dataSize Size of message tram.
         */
        explicit EthernetSocket(size_t dataSize);
        ~EthernetSocket();

        /**
         * @brief Connect to a UDP Port.
         *
         * @param port Port to connect to.
         * @return true If successful.
         * @return false If failed to connect.
         */
        bool ConnectUDP(int port);

        /**
         * @brief Connect to a TCP Port.
         *
         * @param addr IP address to connect to.
         * @param port Port to connect to.
         * @return true if successful.
         * @return false if failed to connect.
         */
        bool ConnectTCP(std::string addr, int port);

        /**
         * @brief Send Data.
         *
         * @param data Data to send.
         * @return true if successful.
         * @return false if failed to send.
         */
        bool Send(const char *data) const;

        /**
         * @brief Wait for data from UDP Port.
         *
         * @return true If receive successful.
         * @return false If bad receive.
         */
        bool ReceiveUDP();

        /**
         * @brief Wait for data from TCP Port.
         *
         * @return true If receive successful.
         * @return false If bad receive.
         */
        bool ReceiveTCP();

        /**
         * @brief Get the data from receive.
         *
         * @return char* parsed data.
         */
        char *GetRawData();

        private:
        bool _receive(int socket);

        int _socketUDP, _socketTCP;
        sockaddr_in _server, _dvl;
        char *_data;
        size_t _size;
    };
}  // namespace sonia_common_cpp
