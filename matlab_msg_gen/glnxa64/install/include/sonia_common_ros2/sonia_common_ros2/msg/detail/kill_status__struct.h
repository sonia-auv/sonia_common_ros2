// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sonia_common_ros2:msg/KillStatus.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__STRUCT_H_
#define SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/KillStatus in the package sonia_common_ros2.
typedef struct sonia_common_ros2__msg__KillStatus
{
  bool status;
} sonia_common_ros2__msg__KillStatus;

// Struct for a sequence of sonia_common_ros2__msg__KillStatus.
typedef struct sonia_common_ros2__msg__KillStatus__Sequence
{
  sonia_common_ros2__msg__KillStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__msg__KillStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__KILL_STATUS__STRUCT_H_
