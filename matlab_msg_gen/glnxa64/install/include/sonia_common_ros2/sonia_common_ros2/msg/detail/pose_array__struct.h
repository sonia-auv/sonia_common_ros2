// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sonia_common_ros2:msg/PoseArray.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__STRUCT_H_
#define SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTERPOLATION_HERMITE'.
enum
{
  sonia_common_ros2__msg__PoseArray__INTERPOLATION_HERMITE = 0
};

/// Constant 'INTERPOLATION_V5CUBIC'.
enum
{
  sonia_common_ros2__msg__PoseArray__INTERPOLATION_V5CUBIC = 1
};

/// Constant 'INTERPOLATION_SPLINE'.
enum
{
  sonia_common_ros2__msg__PoseArray__INTERPOLATION_SPLINE = 2
};

// Include directives for member types
// Member 'poses'
#include "sonia_common_ros2/msg/detail/pose__struct.h"
// Member 'time_sent'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/PoseArray in the package sonia_common_ros2.
/**
  * Options for Interpolation method
 */
typedef struct sonia_common_ros2__msg__PoseArray
{
  uint8_t interpolation_method;
  sonia_common_ros2__msg__Pose__Sequence poses;
  builtin_interfaces__msg__Duration time_sent;
} sonia_common_ros2__msg__PoseArray;

// Struct for a sequence of sonia_common_ros2__msg__PoseArray.
typedef struct sonia_common_ros2__msg__PoseArray__Sequence
{
  sonia_common_ros2__msg__PoseArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__msg__PoseArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__STRUCT_H_
