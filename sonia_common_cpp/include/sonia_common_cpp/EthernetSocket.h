#pragma once   

#include <string>
#include <unistd.h>
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

            void Connect(std::string address, int port);
            void Recieve();
            uint8_t GetRawData();
            
        private:

            int _socket;
            std::vector<uint8_t> _data;

    };//End classe

}//End namespace