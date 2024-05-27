// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sonia_common_ros2:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sonia_common_ros2/msg/detail/obstacle_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace sonia_common_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sonia_common_ros2

namespace rosidl_generator_traits
{

[[deprecated("use sonia_common_ros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sonia_common_ros2::msg::ObstacleInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::msg::ObstacleInfo & msg)
{
  return sonia_common_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::msg::ObstacleInfo>()
{
  return "sonia_common_ros2::msg::ObstacleInfo";
}

template<>
inline const char * name<sonia_common_ros2::msg::ObstacleInfo>()
{
  return "sonia_common_ros2/msg/ObstacleInfo";
}

template<>
struct has_fixed_size<sonia_common_ros2::msg::ObstacleInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sonia_common_ros2::msg::ObstacleInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sonia_common_ros2::msg::ObstacleInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_
