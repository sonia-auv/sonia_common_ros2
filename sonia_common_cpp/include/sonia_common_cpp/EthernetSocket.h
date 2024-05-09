#pragma once

#include <string>
#include <cstring>
#include <vector>
#include <arpa/inet.h>

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
        EthernetSocket(size_t dataSize);
        ~EthernetSocket();

        /**
         * @brief Connect to a UDP Port.
         *
         * @param port Port to connect to.
         * @return true If successful.
         * @return false If failed to connect.
         */
        bool ConnectUDP(int const port);

        /**
         * @brief Connect to a TCP Port.
         *
         * @param addr IP address to connect to.
         * @param port Port to connect to.
         * @return true if successful.
         * @return false if failed to connect.
         */
        bool ConnectTCP(std::string const addr, int const port);

        /**
         * @brief Send Data.
         *
         * @param data Data to send.
         * @return true if successful.
         * @return false if failed to send.
         */
        bool Send(const char *data);

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
} // End namespace