// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sonia_common_ros2:msg/SerialMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sonia_common_ros2/msg/detail/serial_message__rosidl_typesupport_introspection_c.h"
#include "sonia_common_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sonia_common_ros2/msg/detail/serial_message__functions.h"
#include "sonia_common_ros2/msg/detail/serial_message__struct.h"


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sonia_common_ros2__msg__SerialMessage__init(message_memory);
}

void sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_fini_function(void * message_memory)
{
  sonia_common_ros2__msg__SerialMessage__fini(message_memory);
}

size_t sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__size_function__SerialMessage__msg(
  const void * untyped_member)
{
  const rosidl_runtime_c__octet__Sequence * member =
    (const rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return member->size;
}

const void * sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__get_const_function__SerialMessage__msg(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__octet__Sequence * member =
    (const rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__get_function__SerialMessage__msg(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__octet__Sequence * member =
    (rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return &member->data[index];
}

void sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__fetch_function__SerialMessage__msg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__get_const_function__SerialMessage__msg(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__assign_function__SerialMessage__msg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__get_function__SerialMessage__msg(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__resize_function__SerialMessage__msg(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__octet__Sequence * member =
    (rosidl_runtime_c__octet__Sequence *)(untyped_member);
  rosidl_runtime_c__octet__Sequence__fini(member);
  return rosidl_runtime_c__octet__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sonia_common_ros2__msg__SerialMessage, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sonia_common_ros2__msg__SerialMessage, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sonia_common_ros2__msg__SerialMessage, msg),  // bytes offset in struct
    NULL,  // default value
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__size_function__SerialMessage__msg,  // size() function pointer
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__get_const_function__SerialMessage__msg,  // get_const(index) function pointer
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__get_function__SerialMessage__msg,  // get(index) function pointer
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__fetch_function__SerialMessage__msg,  // fetch(index, &value) function pointer
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__assign_function__SerialMessage__msg,  // assign(index, value) function pointer
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__resize_function__SerialMessage__msg  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_message_members = {
  "sonia_common_ros2__msg",  // message namespace
  "SerialMessage",  // message name
  3,  // number of fields
  sizeof(sonia_common_ros2__msg__SerialMessage),
  sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_message_member_array,  // message members
  sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_message_type_support_handle = {
  0,
  &sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sonia_common_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, msg, SerialMessage)() {
  if (!sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_message_type_support_handle.typesupport_identifier) {
    sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sonia_common_ros2__msg__SerialMessage__rosidl_typesupport_introspection_c__SerialMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
