// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sonia_common_ros2:msg/PoseArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sonia_common_ros2/msg/detail/pose_array__rosidl_typesupport_introspection_c.h"
#include "sonia_common_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sonia_common_ros2/msg/detail/pose_array__functions.h"
#include "sonia_common_ros2/msg/detail/pose_array__struct.h"


// Include directives for member types
// Member `poses`
#include "sonia_common_ros2/msg/pose.h"
// Member `poses`
#include "sonia_common_ros2/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `time_sent`
#include "builtin_interfaces/msg/duration.h"
// Member `time_sent`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sonia_common_ros2__msg__PoseArray__init(message_memory);
}

void sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_fini_function(void * message_memory)
{
  sonia_common_ros2__msg__PoseArray__fini(message_memory);
}

size_t sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__size_function__PoseArray__poses(
  const void * untyped_member)
{
  const sonia_common_ros2__msg__Pose__Sequence * member =
    (const sonia_common_ros2__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__get_const_function__PoseArray__poses(
  const void * untyped_member, size_t index)
{
  const sonia_common_ros2__msg__Pose__Sequence * member =
    (const sonia_common_ros2__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__get_function__PoseArray__poses(
  void * untyped_member, size_t index)
{
  sonia_common_ros2__msg__Pose__Sequence * member =
    (sonia_common_ros2__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__fetch_function__PoseArray__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sonia_common_ros2__msg__Pose * item =
    ((const sonia_common_ros2__msg__Pose *)
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__get_const_function__PoseArray__poses(untyped_member, index));
  sonia_common_ros2__msg__Pose * value =
    (sonia_common_ros2__msg__Pose *)(untyped_value);
  *value = *item;
}

void sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__assign_function__PoseArray__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sonia_common_ros2__msg__Pose * item =
    ((sonia_common_ros2__msg__Pose *)
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__get_function__PoseArray__poses(untyped_member, index));
  const sonia_common_ros2__msg__Pose * value =
    (const sonia_common_ros2__msg__Pose *)(untyped_value);
  *item = *value;
}

bool sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__resize_function__PoseArray__poses(
  void * untyped_member, size_t size)
{
  sonia_common_ros2__msg__Pose__Sequence * member =
    (sonia_common_ros2__msg__Pose__Sequence *)(untyped_member);
  sonia_common_ros2__msg__Pose__Sequence__fini(member);
  return sonia_common_ros2__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_member_array[3] = {
  {
    "interpolation_method",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sonia_common_ros2__msg__PoseArray, interpolation_method),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sonia_common_ros2__msg__PoseArray, poses),  // bytes offset in struct
    NULL,  // default value
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__size_function__PoseArray__poses,  // size() function pointer
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__get_const_function__PoseArray__poses,  // get_const(index) function pointer
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__get_function__PoseArray__poses,  // get(index) function pointer
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__fetch_function__PoseArray__poses,  // fetch(index, &value) function pointer
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__assign_function__PoseArray__poses,  // assign(index, value) function pointer
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__resize_function__PoseArray__poses  // resize(index) function pointer
  },
  {
    "time_sent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sonia_common_ros2__msg__PoseArray, time_sent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_members = {
  "sonia_common_ros2__msg",  // message namespace
  "PoseArray",  // message name
  3,  // number of fields
  sizeof(sonia_common_ros2__msg__PoseArray),
  sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_member_array,  // message members
  sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_init_function,  // function to initialize message memory (memory has to be allocated)
  sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle = {
  0,
  &sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sonia_common_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, msg, PoseArray)() {
  sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, msg, Pose)();
  sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle.typesupport_identifier) {
    sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sonia_common_ros2__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
