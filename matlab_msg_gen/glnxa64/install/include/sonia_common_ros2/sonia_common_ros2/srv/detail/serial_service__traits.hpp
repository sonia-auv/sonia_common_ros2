// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sonia_common_ros2:srv/SerialService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__TRAITS_HPP_
#define SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sonia_common_ros2/srv/detail/serial_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "sonia_common_ros2/msg/detail/serial_message__traits.hpp"

namespace sonia_common_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SerialService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SerialService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SerialService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sonia_common_ros2

namespace rosidl_generator_traits
{

[[deprecated("use sonia_common_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sonia_common_ros2::srv::SerialService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::srv::SerialService_Request & msg)
{
  return sonia_common_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::srv::SerialService_Request>()
{
  return "sonia_common_ros2::srv::SerialService_Request";
}

template<>
inline const char * name<sonia_common_ros2::srv::SerialService_Request>()
{
  return "sonia_common_ros2/srv/SerialService_Request";
}

template<>
struct has_fixed_size<sonia_common_ros2::srv::SerialService_Request>
  : std::integral_constant<bool, has_fixed_size<sonia_common_ros2::msg::SerialMessage>::value> {};

template<>
struct has_bounded_size<sonia_common_ros2::srv::SerialService_Request>
  : std::integral_constant<bool, has_bounded_size<sonia_common_ros2::msg::SerialMessage>::value> {};

template<>
struct is_message<sonia_common_ros2::srv::SerialService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
// already included above
// #include "sonia_common_ros2/msg/detail/serial_message__traits.hpp"

namespace sonia_common_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SerialService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SerialService_Response & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SerialService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sonia_common_ros2

namespace rosidl_generator_traits
{

[[deprecated("use sonia_common_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sonia_common_ros2::srv::SerialService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::srv::SerialService_Response & msg)
{
  return sonia_common_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::srv::SerialService_Response>()
{
  return "sonia_common_ros2::srv::SerialService_Response";
}

template<>
inline const char * name<sonia_common_ros2::srv::SerialService_Response>()
{
  return "sonia_common_ros2/srv/SerialService_Response";
}

template<>
struct has_fixed_size<sonia_common_ros2::srv::SerialService_Response>
  : std::integral_constant<bool, has_fixed_size<sonia_common_ros2::msg::SerialMessage>::value> {};

template<>
struct has_bounded_size<sonia_common_ros2::srv::SerialService_Response>
  : std::integral_constant<bool, has_bounded_size<sonia_common_ros2::msg::SerialMessage>::value> {};

template<>
struct is_message<sonia_common_ros2::srv::SerialService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sonia_common_ros2::srv::SerialService>()
{
  return "sonia_common_ros2::srv::SerialService";
}

template<>
inline const char * name<sonia_common_ros2::srv::SerialService>()
{
  return "sonia_common_ros2/srv/SerialService";
}

template<>
struct has_fixed_size<sonia_common_ros2::srv::SerialService>
  : std::integral_constant<
    bool,
    has_fixed_size<sonia_common_ros2::srv::SerialService_Request>::value &&
    has_fixed_size<sonia_common_ros2::srv::SerialService_Response>::value
  >
{
};

template<>
struct has_bounded_size<sonia_common_ros2::srv::SerialService>
  : std::integral_constant<
    bool,
    has_bounded_size<sonia_common_ros2::srv::SerialService_Request>::value &&
    has_bounded_size<sonia_common_ros2::srv::SerialService_Response>::value
  >
{
};

template<>
struct is_service<sonia_common_ros2::srv::SerialService>
  : std::true_type
{
};

template<>
struct is_service_request<sonia_common_ros2::srv::SerialService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sonia_common_ros2::srv::SerialService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__TRAITS_HPP_
