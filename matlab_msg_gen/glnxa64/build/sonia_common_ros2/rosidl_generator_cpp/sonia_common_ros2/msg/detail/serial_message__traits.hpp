// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sonia_common_ros2:msg/SerialMessage.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__TRAITS_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sonia_common_ros2/msg/detail/serial_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sonia_common_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SerialMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: msg
  {
    if (msg.msg.size() == 0) {
      out << "msg: []";
    } else {
      out << "msg: [";
      size_t pending_items = msg.msg.size();
      for (auto item : msg.msg) {
        rosidl_generator_traits::character_value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SerialMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.msg.size() == 0) {
      out << "msg: []\n";
    } else {
      out << "msg:\n";
      for (auto item : msg.msg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SerialMessage & msg, bool use_flow_style = false)
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
  const sonia_common_ros2::msg::SerialMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::msg::SerialMessage & msg)
{
  return sonia_common_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::msg::SerialMessage>()
{
  return "sonia_common_ros2::msg::SerialMessage";
}

template<>
inline const char * name<sonia_common_ros2::msg::SerialMessage>()
{
  return "sonia_common_ros2/msg/SerialMessage";
}

template<>
struct has_fixed_size<sonia_common_ros2::msg::SerialMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sonia_common_ros2::msg::SerialMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sonia_common_ros2::msg::SerialMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__TRAITS_HPP_
