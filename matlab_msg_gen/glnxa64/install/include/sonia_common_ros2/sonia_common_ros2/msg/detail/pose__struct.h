// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sonia_common_ros2:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__POSE__STRUCT_H_
#define SONIA_COMMON_ROS2__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FRAME_ABS_POS_ABS_ANG'.
enum
{
  sonia_common_ros2__msg__Pose__FRAME_ABS_POS_ABS_ANG = 0
};

/// Constant 'FRAME_REL_POS_REL_ANG'.
enum
{
  sonia_common_ros2__msg__Pose__FRAME_REL_POS_REL_ANG = 1
};

/// Constant 'FRAME_REL_POS_ABS_ANG'.
enum
{
  sonia_common_ros2__msg__Pose__FRAME_REL_POS_ABS_ANG = 2
};

/// Constant 'FRAME_ABS_POS_REL_ANG'.
enum
{
  sonia_common_ros2__msg__Pose__FRAME_ABS_POS_REL_ANG = 3
};

/// Constant 'FRAME_ABS_DEPTH_REL_OTHER'.
enum
{
  sonia_common_ros2__msg__Pose__FRAME_ABS_DEPTH_REL_OTHER = 4
};

/// Constant 'SPEED_NORMAL'.
/**
  * Options for speed
 */
enum
{
  sonia_common_ros2__msg__Pose__SPEED_NORMAL = 0
};

/// Constant 'SPEED_FAST'.
enum
{
  sonia_common_ros2__msg__Pose__SPEED_FAST = 1
};

/// Constant 'SPEED_SLOW'.
enum
{
  sonia_common_ros2__msg__Pose__SPEED_SLOW = 2
};

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Pose in the package sonia_common_ros2.
/**
  * Options for frame
 */
typedef struct sonia_common_ros2__msg__Pose
{
  uint8_t frame;
  uint8_t speed;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Vector3 orientation;
  /// Precision of movement
  double fine;
  /// Determine if the rotation is full path or short path.
  bool rotation;
} sonia_common_ros2__msg__Pose;

// Struct for a sequence of sonia_common_ros2__msg__Pose.
typedef struct sonia_common_ros2__msg__Pose__Sequence
{
  sonia_common_ros2__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__POSE__STRUCT_H_
