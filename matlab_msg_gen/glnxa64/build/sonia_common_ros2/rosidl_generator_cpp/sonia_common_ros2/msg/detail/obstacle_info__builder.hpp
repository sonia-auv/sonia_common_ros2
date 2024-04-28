// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sonia_common_ros2:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sonia_common_ros2/msg/detail/obstacle_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sonia_common_ros2
{

namespace msg
{

namespace builder
{

class Init_ObstacleInfo_pose
{
public:
  explicit Init_ObstacleInfo_pose(::sonia_common_ros2::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  ::sonia_common_ros2::msg::ObstacleInfo pose(::sonia_common_ros2::msg::ObstacleInfo::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sonia_common_ros2::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_confidence
{
public:
  explicit Init_ObstacleInfo_confidence(::sonia_common_ros2::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  Init_ObstacleInfo_pose confidence(::sonia_common_ros2::msg::ObstacleInfo::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_ObstacleInfo_pose(msg_);
  }

private:
  ::sonia_common_ros2::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_is_valid
{
public:
  explicit Init_ObstacleInfo_is_valid(::sonia_common_ros2::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  Init_ObstacleInfo_confidence is_valid(::sonia_common_ros2::msg::ObstacleInfo::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_ObstacleInfo_confidence(msg_);
  }

private:
  ::sonia_common_ros2::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_name
{
public:
  Init_ObstacleInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleInfo_is_valid name(::sonia_common_ros2::msg::ObstacleInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ObstacleInfo_is_valid(msg_);
  }

private:
  ::sonia_common_ros2::msg::ObstacleInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sonia_common_ros2::msg::ObstacleInfo>()
{
  return sonia_common_ros2::msg::builder::Init_ObstacleInfo_name();
}

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_
