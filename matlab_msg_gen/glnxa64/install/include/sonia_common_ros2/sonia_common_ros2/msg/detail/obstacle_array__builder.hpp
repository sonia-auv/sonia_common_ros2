// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sonia_common_ros2:msg/ObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sonia_common_ros2/msg/detail/obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sonia_common_ros2
{

namespace msg
{

namespace builder
{

class Init_ObstacleArray_obstacles
{
public:
  explicit Init_ObstacleArray_obstacles(::sonia_common_ros2::msg::ObstacleArray & msg)
  : msg_(msg)
  {}
  ::sonia_common_ros2::msg::ObstacleArray obstacles(::sonia_common_ros2::msg::ObstacleArray::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::msg::ObstacleArray msg_;
};

class Init_ObstacleArray_header
{
public:
  Init_ObstacleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleArray_obstacles header(::sonia_common_ros2::msg::ObstacleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleArray_obstacles(msg_);
  }

private:
  ::sonia_common_ros2::msg::ObstacleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::msg::ObstacleArray>()
{
  return sonia_common_ros2::msg::builder::Init_ObstacleArray_header();
}

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_
