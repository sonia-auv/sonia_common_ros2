#include "EthernetSocket.h"

namespace sonia_common_cpp
{
    EthernetSocket::EthernetSocket()
    {

    }
    EthernetSocket::~EthernetSocket()
    {

    }

    EthernetSocket::bool Connect(std::string address, int port)
    {
        struct sockaddr_in server;

        _socket = socket(AF_INET, SOCK_STREAM, 0);
        
        server.sin_addr.s_addr= inet_addr(address.c_str());
        server.sin_family = AF_INET;
        server.sin_port = htons(port);

        if(connect(_socket, (Struct sockaddr*) &server, sizeof(server))<0)
        {
            return false;
        }
        return true;
    }

    EthernetSocket::bool Recieve()
    {
        if(recv(_socket, _data, _data.length(), 0)<0)
        {
            return false;
        }
        return true;
    }

    EthernetSocket::uint8_t GetRawData()
    {
        return 0;
    }

}

