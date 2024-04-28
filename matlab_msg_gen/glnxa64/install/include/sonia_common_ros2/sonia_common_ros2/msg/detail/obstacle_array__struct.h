// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sonia_common_ros2:msg/ObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_
#define SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'obstacles'
#include "sonia_common_ros2/msg/detail/obstacle_info__struct.h"

/// Struct defined in msg/ObstacleArray in the package sonia_common_ros2.
typedef struct sonia_common_ros2__msg__ObstacleArray
{
  std_msgs__msg__Header header;
  sonia_common_ros2__msg__ObstacleInfo__Sequence obstacles;
} sonia_common_ros2__msg__ObstacleArray;

// Struct for a sequence of sonia_common_ros2__msg__ObstacleArray.
typedef struct sonia_common_ros2__msg__ObstacleArray__Sequence
{
  sonia_common_ros2__msg__ObstacleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__msg__ObstacleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_
