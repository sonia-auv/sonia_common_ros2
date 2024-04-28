#include "EthernetSocket.h"

namespace sonia_common_cpp
{
    EthernetSocket::EthernetSocket()
    {

    }
    EthernetSocket::~EthernetSocket()
    {
        
    }

    bool EthernetSocket::ConnectTCP(std::string address, int port)
    {
        memset(&_server,0,sizeof(_server));
        _server.sin_addr.s_addr= inet_addr(address.c_str());
        _server.sin_family = AF_INET;
        _server.sin_port = htons(port);

        _socketTCP = socket(AF_INET, SOCK_STREAM, 0);
        if(connect(_socketTCP, (struct sockaddr *) &_server, sizeof(_server))<0)
        {
            return false;
        }
        return true;
    }
    bool EthernetSocket::ConnectUDP(int port)
    {
        memset(&_server,0,sizeof(_server));
        _server.sin_addr.s_addr= htonl(INADDR_ANY);
        _server.sin_family = AF_INET;
        _server.sin_port = htons(port);

        _socketTCP = socket(AF_INET, SOCK_DGRAM, 0);
        if(connect(_socketTCP, (struct sockaddr *) &_server, sizeof(_server))<0)
        {
            return false;
        }
        return true;

    }

    bool EthernetSocket::Receive()
    {
        socklen_t len = sizeof(_dvl);
        if(recvfrom(_socketUDP, &_data, _data.size(),0,(struct sockaddr*)&_dvl, &len)<0)
        {
            return false;
        }
        return true;
    }
    bool EthernetSocket::Send(std::vector<uint8_t> data)
    {
        if(send(_socketTCP, &data, data.size(),0)<0){
            return true;
        }
        return false;
    }

    std::vector<uint8_t> EthernetSocket::GetRawData()
    {
        return _data;
    }

}

