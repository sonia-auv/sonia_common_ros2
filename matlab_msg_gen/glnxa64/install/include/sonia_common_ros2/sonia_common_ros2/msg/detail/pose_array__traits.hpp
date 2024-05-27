// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sonia_common_ros2:msg/PoseArray.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__TRAITS_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sonia_common_ros2/msg/detail/pose_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poses'
#include "sonia_common_ros2/msg/detail/pose__traits.hpp"
// Member 'time_sent'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace sonia_common_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: interpolation_method
  {
    out << "interpolation_method: ";
    rosidl_generator_traits::value_to_yaml(msg.interpolation_method, out);
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_sent
  {
    out << "time_sent: ";
    to_flow_style_yaml(msg.time_sent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: interpolation_method
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interpolation_method: ";
    rosidl_generator_traits::value_to_yaml(msg.interpolation_method, out);
    out << "\n";
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: time_sent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_sent:\n";
    to_block_style_yaml(msg.time_sent, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseArray & msg, bool use_flow_style = false)
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
  const sonia_common_ros2::msg::PoseArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::msg::PoseArray & msg)
{
  return sonia_common_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::msg::PoseArray>()
{
  return "sonia_common_ros2::msg::PoseArray";
}

template<>
inline const char * name<sonia_common_ros2::msg::PoseArray>()
{
  return "sonia_common_ros2/msg/PoseArray";
}

template<>
struct has_fixed_size<sonia_common_ros2::msg::PoseArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sonia_common_ros2::msg::PoseArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sonia_common_ros2::msg::PoseArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__TRAITS_HPP_
