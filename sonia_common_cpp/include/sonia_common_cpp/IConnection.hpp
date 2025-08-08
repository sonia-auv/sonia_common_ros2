#pragma once
#include <unistd.h>

namespace sonia_common_cpp
{
    class IConnection {
        public:
        virtual bool OpenPort()=0;
        virtual ssize_t Read()=0;
        virtual ssize_t Transmit()=0;
    };
} // namespace sonia_common_cpp

