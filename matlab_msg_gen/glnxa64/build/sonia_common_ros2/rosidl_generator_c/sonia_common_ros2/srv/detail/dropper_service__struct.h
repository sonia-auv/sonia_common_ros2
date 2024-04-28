// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sonia_common_ros2:srv/DropperService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__STRUCT_H_
#define SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PORT_SIDE'.
enum
{
  sonia_common_ros2__srv__DropperService_Request__PORT_SIDE = 0
};

/// Constant 'STARBOARD'.
enum
{
  sonia_common_ros2__srv__DropperService_Request__STARBOARD = 1
};

/// Struct defined in srv/DropperService in the package sonia_common_ros2.
typedef struct sonia_common_ros2__srv__DropperService_Request
{
  uint8_t side;
} sonia_common_ros2__srv__DropperService_Request;

// Struct for a sequence of sonia_common_ros2__srv__DropperService_Request.
typedef struct sonia_common_ros2__srv__DropperService_Request__Sequence
{
  sonia_common_ros2__srv__DropperService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__srv__DropperService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/DropperService in the package sonia_common_ros2.
typedef struct sonia_common_ros2__srv__DropperService_Response
{
  uint8_t result;
} sonia_common_ros2__srv__DropperService_Response;

// Struct for a sequence of sonia_common_ros2__srv__DropperService_Response.
typedef struct sonia_common_ros2__srv__DropperService_Response__Sequence
{
  sonia_common_ros2__srv__DropperService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__srv__DropperService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__STRUCT_H_
