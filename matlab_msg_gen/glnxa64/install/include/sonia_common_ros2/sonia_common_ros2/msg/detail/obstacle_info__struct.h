// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sonia_common_ros2:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_
#define SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ObstacleInfo in the package sonia_common_ros2.
typedef struct sonia_common_ros2__msg__ObstacleInfo
{
  rosidl_runtime_c__String name;
  bool is_valid;
  float confidence;
  geometry_msgs__msg__Pose pose;
} sonia_common_ros2__msg__ObstacleInfo;

// Struct for a sequence of sonia_common_ros2__msg__ObstacleInfo.
typedef struct sonia_common_ros2__msg__ObstacleInfo__Sequence
{
  sonia_common_ros2__msg__ObstacleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__msg__ObstacleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_
