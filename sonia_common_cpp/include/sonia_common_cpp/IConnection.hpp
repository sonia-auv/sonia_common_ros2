#pragma once
#include <unistd.h>

#include <cstdint>

namespace sonia_common_cpp
{

    struct ITramData
    {
        virtual ~ITramData()=default;
    };

    class IConnection
    {
        public:
        virtual bool OpenPort() = 0;
        virtual ssize_t Read(ITramData &tram) = 0;
        virtual ssize_t Transmit(const ITramData &tram) = 0;
    };
}  // namespace sonia_common_cpp
