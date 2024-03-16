#include "EthernetSocket.h"
#include <unistd.h>

namespace sonia_common_cpp
{
    EthernetSocket::EthernetSocket()
    {

    }
    EthernetSocket::~EthernetSocket()
    {

    }

    EthernetSocket::Connect(std::string address, int port)
    {
        struct sockaddr_in server;

        _socket = socket(AF_INET, SOCK_STREAM, 0);

        server.sin_addr.s_addr= inet_addr(address.c_str());
        server.sin_family = AF_INET;
        server.sin_port = htons(port);

    }

    EthernetSocket::Recieve()
    {

    }

    EthernetSocket::uint8_t GetRawData()
    {
        return _data;
    }

}

