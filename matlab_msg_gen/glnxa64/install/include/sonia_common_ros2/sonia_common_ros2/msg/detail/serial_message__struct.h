// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sonia_common_ros2:msg/SerialMessage.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__STRUCT_H_
#define SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SerialMessage in the package sonia_common_ros2.
typedef struct sonia_common_ros2__msg__SerialMessage
{
  int8_t id;
  int32_t size;
  rosidl_runtime_c__octet__Sequence msg;
} sonia_common_ros2__msg__SerialMessage;

// Struct for a sequence of sonia_common_ros2__msg__SerialMessage.
typedef struct sonia_common_ros2__msg__SerialMessage__Sequence
{
  sonia_common_ros2__msg__SerialMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__msg__SerialMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__STRUCT_H_
