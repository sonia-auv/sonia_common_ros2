// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sonia_common_ros2:srv/DropperService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__BUILDER_HPP_
#define SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sonia_common_ros2/srv/detail/dropper_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sonia_common_ros2
{

namespace srv
{

namespace builder
{

class Init_DropperService_Request_side
{
public:
  Init_DropperService_Request_side()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sonia_common_ros2::srv::DropperService_Request side(::sonia_common_ros2::srv::DropperService_Request::_side_type arg)
  {
    msg_.side = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::srv::DropperService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::srv::DropperService_Request>()
{
  return sonia_common_ros2::srv::builder::Init_DropperService_Request_side();
}

}  // namespace sonia_common_ros2


namespace sonia_common_ros2
{

namespace srv
{

namespace builder
{

class Init_DropperService_Response_result
{
public:
  Init_DropperService_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sonia_common_ros2::srv::DropperService_Response result(::sonia_common_ros2::srv::DropperService_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::srv::DropperService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::srv::DropperService_Response>()
{
  return sonia_common_ros2::srv::builder::Init_DropperService_Response_result();
}

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__BUILDER_HPP_
