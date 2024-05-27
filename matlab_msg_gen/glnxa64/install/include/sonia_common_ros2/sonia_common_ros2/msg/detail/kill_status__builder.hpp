// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sonia_common_ros2:msg/KillStatus.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__BUILDER_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sonia_common_ros2/msg/detail/kill_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sonia_common_ros2
{

namespace msg
{

namespace builder
{

class Init_KillStatus_status
{
public:
  Init_KillStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sonia_common_ros2::msg::KillStatus status(::sonia_common_ros2::msg::KillStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::msg::KillStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::msg::KillStatus>()
{
  return sonia_common_ros2::msg::builder::Init_KillStatus_status();
}

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__BUILDER_HPP_
