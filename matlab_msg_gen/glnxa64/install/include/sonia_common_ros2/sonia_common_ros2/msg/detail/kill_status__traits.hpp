// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sonia_common_ros2:msg/KillStatus.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__TRAITS_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sonia_common_ros2/msg/detail/kill_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sonia_common_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const KillStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KillStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KillStatus & msg, bool use_flow_style = false)
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
  const sonia_common_ros2::msg::KillStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::msg::KillStatus & msg)
{
  return sonia_common_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::msg::KillStatus>()
{
  return "sonia_common_ros2::msg::KillStatus";
}

template<>
inline const char * name<sonia_common_ros2::msg::KillStatus>()
{
  return "sonia_common_ros2/msg/KillStatus";
}

template<>
struct has_fixed_size<sonia_common_ros2::msg::KillStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sonia_common_ros2::msg::KillStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sonia_common_ros2::msg::KillStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__TRAITS_HPP_
