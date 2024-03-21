#include "EthernetSocket.h"

namespace sonia_common_cpp
{
    EthernetSocket::EthernetSocket()
    {

    }
    EthernetSocket::~EthernetSocket()
    {

    }

    bool EthernetSocket::Connect(std::string address, int port)
    {
        struct sockaddr_in server;

        _socket = socket(AF_INET, SOCK_STREAM, 0);
        
        server.sin_addr.s_addr= inet_addr(address.c_str());
        server.sin_family = AF_INET;
        server.sin_port = htons(port);

        if(connect(_socket, (struct sockaddr *) &server, sizeof(server))<0)
        {
            return false;
        }
        return true;
    }

    bool EthernetSocket::Recieve()
    {
        if(recv(_socket, &_data, _data.size(), 0)<0)
        {
            return false;
        }
        return true;
    }

    std::vector<uint8_t> EthernetSocket::GetRawData()
    {
        return _data;
    }

}

