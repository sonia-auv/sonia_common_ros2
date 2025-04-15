#pragma once

#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable>

namespace sonia_common_cpp
{
    template <typename T>
    class SharedQueue
    {
        public:
            SharedQueue();
            ~SharedQueue();

            T& front();
            void pop_front();
            T get_n_pop_front();

            void push_back(const T& item);
            void push_back(T&& item);

            unsigned long size();
            bool empty();

        private:
            std::deque<T> queue_;
            std::mutex mutex_;
            std::condition_variable cond_;
    };
}