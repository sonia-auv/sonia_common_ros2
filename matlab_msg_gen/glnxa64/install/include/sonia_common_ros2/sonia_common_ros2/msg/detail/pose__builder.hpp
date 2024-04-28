// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sonia_common_ros2:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__POSE__BUILDER_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sonia_common_ros2/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sonia_common_ros2
{

namespace msg
{

namespace builder
{

class Init_Pose_rotation
{
public:
  explicit Init_Pose_rotation(::sonia_common_ros2::msg::Pose & msg)
  : msg_(msg)
  {}
  ::sonia_common_ros2::msg::Pose rotation(::sonia_common_ros2::msg::Pose::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::msg::Pose msg_;
};

class Init_Pose_fine
{
public:
  explicit Init_Pose_fine(::sonia_common_ros2::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_rotation fine(::sonia_common_ros2::msg::Pose::_fine_type arg)
  {
    msg_.fine = std::move(arg);
    return Init_Pose_rotation(msg_);
  }

private:
  ::sonia_common_ros2::msg::Pose msg_;
};

class Init_Pose_orientation
{
public:
  explicit Init_Pose_orientation(::sonia_common_ros2::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_fine orientation(::sonia_common_ros2::msg::Pose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Pose_fine(msg_);
  }

private:
  ::sonia_common_ros2::msg::Pose msg_;
};

class Init_Pose_position
{
public:
  explicit Init_Pose_position(::sonia_common_ros2::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_orientation position(::sonia_common_ros2::msg::Pose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Pose_orientation(msg_);
  }

private:
  ::sonia_common_ros2::msg::Pose msg_;
};

class Init_Pose_speed
{
public:
  explicit Init_Pose_speed(::sonia_common_ros2::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_position speed(::sonia_common_ros2::msg::Pose::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Pose_position(msg_);
  }

private:
  ::sonia_common_ros2::msg::Pose msg_;
};

class Init_Pose_frame
{
public:
  Init_Pose_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_speed frame(::sonia_common_ros2::msg::Pose::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_Pose_speed(msg_);
  }

private:
  ::sonia_common_ros2::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::msg::Pose>()
{
  return sonia_common_ros2::msg::builder::Init_Pose_frame();
}

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__POSE__BUILDER_HPP_
