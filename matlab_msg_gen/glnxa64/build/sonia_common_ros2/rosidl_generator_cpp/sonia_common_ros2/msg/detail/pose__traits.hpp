// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sonia_common_ros2:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__POSE__TRAITS_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sonia_common_ros2/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace sonia_common_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: fine
  {
    out << "fine: ";
    rosidl_generator_traits::value_to_yaml(msg.fine, out);
    out << ", ";
  }

  // member: rotation
  {
    out << "rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: fine
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fine: ";
    rosidl_generator_traits::value_to_yaml(msg.fine, out);
    out << "\n";
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose & msg, bool use_flow_style = false)
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
  const sonia_common_ros2::msg::Pose & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::msg::Pose & msg)
{
  return sonia_common_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::msg::Pose>()
{
  return "sonia_common_ros2::msg::Pose";
}

template<>
inline const char * name<sonia_common_ros2::msg::Pose>()
{
  return "sonia_common_ros2/msg/Pose";
}

template<>
struct has_fixed_size<sonia_common_ros2::msg::Pose>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<sonia_common_ros2::msg::Pose>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<sonia_common_ros2::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__POSE__TRAITS_HPP_
