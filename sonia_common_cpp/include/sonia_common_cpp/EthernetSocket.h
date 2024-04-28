#pragma once   

#include <string>
#include <cstring>
#include <vector>
#include <sys/socket.h>
#include <arpa/inet.h>


namespace sonia_common_cpp
{
    class EthernetSocket
    {
        public:
            EthernetSocket();
            ~EthernetSocket();

            bool ConnectTCP(std::string address, int port);
            bool ConnectUDP(int port);
            bool Receive();
            bool Send(std::vector<uint8_t> data);

            std::vector<uint8_t> GetRawData();
            
        private:

            int _socketUDP;
            int _socketTCP;
            sockaddr_in _server, _dvl;
            std::vector<uint8_t> _data;

    };//End classe

}//End namespace