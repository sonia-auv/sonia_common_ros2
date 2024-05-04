#include "EthernetSocket.h"
#include <unistd.h>

namespace sonia_common_cpp
{
    EthernetSocket::EthernetSocket(size_t dataSize)
        : _data{new char[dataSize]}, _size{dataSize}
    {
        if (!_data)
        {
            this->~EthernetSocket();
        }
    }

    //------------------------------------------------------------------------------
    //
    EthernetSocket::~EthernetSocket()
    {
        close(_socketTCP);
        close(_socketUDP);
        delete (_data);
    }

    //==============================================================================
    // M E T H O D   S E C T I O N

    //------------------------------------------------------------------------------
    //
    bool EthernetSocket::ConnectUDP(int port)
    {

        bzero(&_server, sizeof(_server));
        _server.sin_addr.s_addr = htonl(INADDR_ANY);
        _server.sin_family = AF_INET;
        _server.sin_port = htons(port);

        _socketUDP = socket(AF_INET, SOCK_DGRAM, 0);
        if (_socketUDP < 0)
        {
            return false;
        }
        if (bind(_socketUDP, (struct sockaddr *)&_server, sizeof(_server)) < 0)
        {
            return false;
        }
        return true;
    }

    //------------------------------------------------------------------------------
    //
    bool EthernetSocket::ConnectTCP(std::string addr, int port)
    {

        bzero(&_server, sizeof(_server));

        _server.sin_addr.s_addr = inet_addr(addr.c_str());
        _server.sin_family = AF_INET;
        _server.sin_port = htons(port);

        _socketTCP = socket(AF_INET, SOCK_STREAM, 0);
        if (_socketTCP < 0)
        {
            return false;
        }
        if (connect(_socketTCP, (struct sockaddr *)&_server, sizeof(_server)) < 0)
        {
            return false;
        }
        return true;
    }

    //------------------------------------------------------------------------------
    //
    bool EthernetSocket::_receive(int socket)
    {
        socklen_t len = sizeof(_dvl);
        if (recvfrom(socket, _data, _size, 0, (struct sockaddr *)&_dvl, &len) < 0)
        {
            return false;
        }
        return true;
    }

    //------------------------------------------------------------------------------
    //
    bool EthernetSocket::ReceiveUDP()
    {
        return _receive(_socketUDP);
    }
    //------------------------------------------------------------------------------
    //
    bool EthernetSocket::ReceiveTCP()
    {
        return _receive(_socketTCP);
    }

    //------------------------------------------------------------------------------
    //
    bool EthernetSocket::Send(const char *data)
    {
        if (send(_socketTCP, data, strlen(data), 0) < 0)
        {
            return false;
        }
        return true;
    }

    //------------------------------------------------------------------------------
    //
    char *EthernetSocket::GetRawData()
    {
        return _data;
    }

}
