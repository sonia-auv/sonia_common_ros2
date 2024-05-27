// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sonia_common_ros2:srv/SerialService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__STRUCT_H_
#define SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "sonia_common_ros2/msg/detail/serial_message__struct.h"

/// Struct defined in srv/SerialService in the package sonia_common_ros2.
typedef struct sonia_common_ros2__srv__SerialService_Request
{
  sonia_common_ros2__msg__SerialMessage data;
} sonia_common_ros2__srv__SerialService_Request;

// Struct for a sequence of sonia_common_ros2__srv__SerialService_Request.
typedef struct sonia_common_ros2__srv__SerialService_Request__Sequence
{
  sonia_common_ros2__srv__SerialService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__srv__SerialService_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  sonia_common_ros2__srv__SerialService_Response__SUCCESS = 0
};

/// Constant 'FAILED'.
enum
{
  sonia_common_ros2__srv__SerialService_Response__FAILED = 1
};

/// Constant 'NO_RESPONSE'.
enum
{
  sonia_common_ros2__srv__SerialService_Response__NO_RESPONSE = 2
};

/// Constant 'CONNECTION_FAILED'.
enum
{
  sonia_common_ros2__srv__SerialService_Response__CONNECTION_FAILED = 3
};

// Include directives for member types
// Member 'data'
// already included above
// #include "sonia_common_ros2/msg/detail/serial_message__struct.h"

/// Struct defined in srv/SerialService in the package sonia_common_ros2.
typedef struct sonia_common_ros2__srv__SerialService_Response
{
  uint8_t status;
  sonia_common_ros2__msg__SerialMessage data;
} sonia_common_ros2__srv__SerialService_Response;

// Struct for a sequence of sonia_common_ros2__srv__SerialService_Response.
typedef struct sonia_common_ros2__srv__SerialService_Response__Sequence
{
  sonia_common_ros2__srv__SerialService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sonia_common_ros2__srv__SerialService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__STRUCT_H_
