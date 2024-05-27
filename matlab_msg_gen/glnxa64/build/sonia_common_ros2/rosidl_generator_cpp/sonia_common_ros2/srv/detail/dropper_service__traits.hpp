// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sonia_common_ros2:srv/DropperService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__TRAITS_HPP_
#define SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sonia_common_ros2/srv/detail/dropper_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sonia_common_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const DropperService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: side
  {
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DropperService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DropperService_Request & msg, bool use_flow_style = false)
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
  const sonia_common_ros2::srv::DropperService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::srv::DropperService_Request & msg)
{
  return sonia_common_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::srv::DropperService_Request>()
{
  return "sonia_common_ros2::srv::DropperService_Request";
}

template<>
inline const char * name<sonia_common_ros2::srv::DropperService_Request>()
{
  return "sonia_common_ros2/srv/DropperService_Request";
}

template<>
struct has_fixed_size<sonia_common_ros2::srv::DropperService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sonia_common_ros2::srv::DropperService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sonia_common_ros2::srv::DropperService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sonia_common_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const DropperService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DropperService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DropperService_Response & msg, bool use_flow_style = false)
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
  const sonia_common_ros2::srv::DropperService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sonia_common_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sonia_common_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const sonia_common_ros2::srv::DropperService_Response & msg)
{
  return sonia_common_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sonia_common_ros2::srv::DropperService_Response>()
{
  return "sonia_common_ros2::srv::DropperService_Response";
}

template<>
inline const char * name<sonia_common_ros2::srv::DropperService_Response>()
{
  return "sonia_common_ros2/srv/DropperService_Response";
}

template<>
struct has_fixed_size<sonia_common_ros2::srv::DropperService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sonia_common_ros2::srv::DropperService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sonia_common_ros2::srv::DropperService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sonia_common_ros2::srv::DropperService>()
{
  return "sonia_common_ros2::srv::DropperService";
}

template<>
inline const char * name<sonia_common_ros2::srv::DropperService>()
{
  return "sonia_common_ros2/srv/DropperService";
}

template<>
struct has_fixed_size<sonia_common_ros2::srv::DropperService>
  : std::integral_constant<
    bool,
    has_fixed_size<sonia_common_ros2::srv::DropperService_Request>::value &&
    has_fixed_size<sonia_common_ros2::srv::DropperService_Response>::value
  >
{
};

template<>
struct has_bounded_size<sonia_common_ros2::srv::DropperService>
  : std::integral_constant<
    bool,
    has_bounded_size<sonia_common_ros2::srv::DropperService_Request>::value &&
    has_bounded_size<sonia_common_ros2::srv::DropperService_Response>::value
  >
{
};

template<>
struct is_service<sonia_common_ros2::srv::DropperService>
  : std::true_type
{
};

template<>
struct is_service_request<sonia_common_ros2::srv::DropperService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sonia_common_ros2::srv::DropperService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__TRAITS_HPP_
