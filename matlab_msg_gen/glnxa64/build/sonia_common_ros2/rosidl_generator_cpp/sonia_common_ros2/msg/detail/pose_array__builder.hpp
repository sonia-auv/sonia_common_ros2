// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sonia_common_ros2:msg/PoseArray.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__BUILDER_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sonia_common_ros2/msg/detail/pose_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sonia_common_ros2
{

namespace msg
{

namespace builder
{

class Init_PoseArray_time_sent
{
public:
  explicit Init_PoseArray_time_sent(::sonia_common_ros2::msg::PoseArray & msg)
  : msg_(msg)
  {}
  ::sonia_common_ros2::msg::PoseArray time_sent(::sonia_common_ros2::msg::PoseArray::_time_sent_type arg)
  {
    msg_.time_sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::msg::PoseArray msg_;
};

class Init_PoseArray_poses
{
public:
  explicit Init_PoseArray_poses(::sonia_common_ros2::msg::PoseArray & msg)
  : msg_(msg)
  {}
  Init_PoseArray_time_sent poses(::sonia_common_ros2::msg::PoseArray::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_PoseArray_time_sent(msg_);
  }

private:
  ::sonia_common_ros2::msg::PoseArray msg_;
};

class Init_PoseArray_interpolation_method
{
public:
  Init_PoseArray_interpolation_method()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseArray_poses interpolation_method(::sonia_common_ros2::msg::PoseArray::_interpolation_method_type arg)
  {
    msg_.interpolation_method = std::move(arg);
    return Init_PoseArray_poses(msg_);
  }

private:
  ::sonia_common_ros2::msg::PoseArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::msg::PoseArray>()
{
  return sonia_common_ros2::msg::builder::Init_PoseArray_interpolation_method();
}

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__BUILDER_HPP_
