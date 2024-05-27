// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sonia_common_ros2:srv/DropperService.idl
// generated code does not contain a copyright notice
#include "sonia_common_ros2/srv/detail/dropper_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sonia_common_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sonia_common_ros2/srv/detail/dropper_service__struct.h"
#include "sonia_common_ros2/srv/detail/dropper_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DropperService_Request__ros_msg_type = sonia_common_ros2__srv__DropperService_Request;

static bool _DropperService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DropperService_Request__ros_msg_type * ros_message = static_cast<const _DropperService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: side
  {
    cdr << ros_message->side;
  }

  return true;
}

static bool _DropperService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DropperService_Request__ros_msg_type * ros_message = static_cast<_DropperService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: side
  {
    cdr >> ros_message->side;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sonia_common_ros2
size_t get_serialized_size_sonia_common_ros2__srv__DropperService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DropperService_Request__ros_msg_type * ros_message = static_cast<const _DropperService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name side
  {
    size_t item_size = sizeof(ros_message->side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DropperService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sonia_common_ros2__srv__DropperService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sonia_common_ros2
size_t max_serialized_size_sonia_common_ros2__srv__DropperService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DropperService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sonia_common_ros2__srv__DropperService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DropperService_Request = {
  "sonia_common_ros2::srv",
  "DropperService_Request",
  _DropperService_Request__cdr_serialize,
  _DropperService_Request__cdr_deserialize,
  _DropperService_Request__get_serialized_size,
  _DropperService_Request__max_serialized_size
};

static rosidl_message_type_support_t _DropperService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DropperService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sonia_common_ros2, srv, DropperService_Request)() {
  return &_DropperService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "sonia_common_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "sonia_common_ros2/srv/detail/dropper_service__struct.h"
// already included above
// #include "sonia_common_ros2/srv/detail/dropper_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DropperService_Response__ros_msg_type = sonia_common_ros2__srv__DropperService_Response;

static bool _DropperService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DropperService_Response__ros_msg_type * ros_message = static_cast<const _DropperService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _DropperService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DropperService_Response__ros_msg_type * ros_message = static_cast<_DropperService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sonia_common_ros2
size_t get_serialized_size_sonia_common_ros2__srv__DropperService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DropperService_Response__ros_msg_type * ros_message = static_cast<const _DropperService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DropperService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sonia_common_ros2__srv__DropperService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sonia_common_ros2
size_t max_serialized_size_sonia_common_ros2__srv__DropperService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DropperService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sonia_common_ros2__srv__DropperService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DropperService_Response = {
  "sonia_common_ros2::srv",
  "DropperService_Response",
  _DropperService_Response__cdr_serialize,
  _DropperService_Response__cdr_deserialize,
  _DropperService_Response__get_serialized_size,
  _DropperService_Response__max_serialized_size
};

static rosidl_message_type_support_t _DropperService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DropperService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sonia_common_ros2, srv, DropperService_Response)() {
  return &_DropperService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "sonia_common_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sonia_common_ros2/srv/dropper_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DropperService__callbacks = {
  "sonia_common_ros2::srv",
  "DropperService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sonia_common_ros2, srv, DropperService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sonia_common_ros2, srv, DropperService_Response)(),
};

static rosidl_service_type_support_t DropperService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DropperService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sonia_common_ros2, srv, DropperService)() {
  return &DropperService__handle;
}

#if defined(__cplusplus)
}
#endif
