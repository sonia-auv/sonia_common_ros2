// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sonia_common_ros2:msg/SerialMessage.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__BUILDER_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sonia_common_ros2/msg/detail/serial_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sonia_common_ros2
{

namespace msg
{

namespace builder
{

class Init_SerialMessage_msg
{
public:
  explicit Init_SerialMessage_msg(::sonia_common_ros2::msg::SerialMessage & msg)
  : msg_(msg)
  {}
  ::sonia_common_ros2::msg::SerialMessage msg(::sonia_common_ros2::msg::SerialMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::msg::SerialMessage msg_;
};

class Init_SerialMessage_size
{
public:
  explicit Init_SerialMessage_size(::sonia_common_ros2::msg::SerialMessage & msg)
  : msg_(msg)
  {}
  Init_SerialMessage_msg size(::sonia_common_ros2::msg::SerialMessage::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_SerialMessage_msg(msg_);
  }

private:
  ::sonia_common_ros2::msg::SerialMessage msg_;
};

class Init_SerialMessage_id
{
public:
  Init_SerialMessage_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerialMessage_size id(::sonia_common_ros2::msg::SerialMessage::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SerialMessage_size(msg_);
  }

private:
  ::sonia_common_ros2::msg::SerialMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::msg::SerialMessage>()
{
  return sonia_common_ros2::msg::builder::Init_SerialMessage_id();
}

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__BUILDER_HPP_
