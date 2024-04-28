// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sonia_common_ros2:srv/SerialService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__BUILDER_HPP_
#define SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sonia_common_ros2/srv/detail/serial_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sonia_common_ros2
{

namespace srv
{

namespace builder
{

class Init_SerialService_Request_data
{
public:
  Init_SerialService_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sonia_common_ros2::srv::SerialService_Request data(::sonia_common_ros2::srv::SerialService_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::srv::SerialService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::srv::SerialService_Request>()
{
  return sonia_common_ros2::srv::builder::Init_SerialService_Request_data();
}

}  // namespace sonia_common_ros2


namespace sonia_common_ros2
{

namespace srv
{

namespace builder
{

class Init_SerialService_Response_data
{
public:
  explicit Init_SerialService_Response_data(::sonia_common_ros2::srv::SerialService_Response & msg)
  : msg_(msg)
  {}
  ::sonia_common_ros2::srv::SerialService_Response data(::sonia_common_ros2::srv::SerialService_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::srv::SerialService_Response msg_;
};

class Init_SerialService_Response_status
{
public:
  Init_SerialService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerialService_Response_data status(::sonia_common_ros2::srv::SerialService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SerialService_Response_data(msg_);
  }

private:
  ::sonia_common_ros2::srv::SerialService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::srv::SerialService_Response>()
{
  return sonia_common_ros2::srv::builder::Init_SerialService_Response_status();
}

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__BUILDER_HPP_
