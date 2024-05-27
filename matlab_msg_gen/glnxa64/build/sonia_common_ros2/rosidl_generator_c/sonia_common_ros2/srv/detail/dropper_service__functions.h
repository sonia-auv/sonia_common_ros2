// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sonia_common_ros2:srv/DropperService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__FUNCTIONS_H_
#define SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sonia_common_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "sonia_common_ros2/srv/detail/dropper_service__struct.h"

/// Initialize srv/DropperService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sonia_common_ros2__srv__DropperService_Request
 * )) before or use
 * sonia_common_ros2__srv__DropperService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Request__init(sonia_common_ros2__srv__DropperService_Request * msg);

/// Finalize srv/DropperService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
void
sonia_common_ros2__srv__DropperService_Request__fini(sonia_common_ros2__srv__DropperService_Request * msg);

/// Create srv/DropperService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sonia_common_ros2__srv__DropperService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
sonia_common_ros2__srv__DropperService_Request *
sonia_common_ros2__srv__DropperService_Request__create();

/// Destroy srv/DropperService message.
/**
 * It calls
 * sonia_common_ros2__srv__DropperService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
void
sonia_common_ros2__srv__DropperService_Request__destroy(sonia_common_ros2__srv__DropperService_Request * msg);

/// Check for srv/DropperService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Request__are_equal(const sonia_common_ros2__srv__DropperService_Request * lhs, const sonia_common_ros2__srv__DropperService_Request * rhs);

/// Copy a srv/DropperService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Request__copy(
  const sonia_common_ros2__srv__DropperService_Request * input,
  sonia_common_ros2__srv__DropperService_Request * output);

/// Initialize array of srv/DropperService messages.
/**
 * It allocates the memory for the number of elements and calls
 * sonia_common_ros2__srv__DropperService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Request__Sequence__init(sonia_common_ros2__srv__DropperService_Request__Sequence * array, size_t size);

/// Finalize array of srv/DropperService messages.
/**
 * It calls
 * sonia_common_ros2__srv__DropperService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
void
sonia_common_ros2__srv__DropperService_Request__Sequence__fini(sonia_common_ros2__srv__DropperService_Request__Sequence * array);

/// Create array of srv/DropperService messages.
/**
 * It allocates the memory for the array and calls
 * sonia_common_ros2__srv__DropperService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
sonia_common_ros2__srv__DropperService_Request__Sequence *
sonia_common_ros2__srv__DropperService_Request__Sequence__create(size_t size);

/// Destroy array of srv/DropperService messages.
/**
 * It calls
 * sonia_common_ros2__srv__DropperService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
void
sonia_common_ros2__srv__DropperService_Request__Sequence__destroy(sonia_common_ros2__srv__DropperService_Request__Sequence * array);

/// Check for srv/DropperService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Request__Sequence__are_equal(const sonia_common_ros2__srv__DropperService_Request__Sequence * lhs, const sonia_common_ros2__srv__DropperService_Request__Sequence * rhs);

/// Copy an array of srv/DropperService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Request__Sequence__copy(
  const sonia_common_ros2__srv__DropperService_Request__Sequence * input,
  sonia_common_ros2__srv__DropperService_Request__Sequence * output);

/// Initialize srv/DropperService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sonia_common_ros2__srv__DropperService_Response
 * )) before or use
 * sonia_common_ros2__srv__DropperService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Response__init(sonia_common_ros2__srv__DropperService_Response * msg);

/// Finalize srv/DropperService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
void
sonia_common_ros2__srv__DropperService_Response__fini(sonia_common_ros2__srv__DropperService_Response * msg);

/// Create srv/DropperService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sonia_common_ros2__srv__DropperService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
sonia_common_ros2__srv__DropperService_Response *
sonia_common_ros2__srv__DropperService_Response__create();

/// Destroy srv/DropperService message.
/**
 * It calls
 * sonia_common_ros2__srv__DropperService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
void
sonia_common_ros2__srv__DropperService_Response__destroy(sonia_common_ros2__srv__DropperService_Response * msg);

/// Check for srv/DropperService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Response__are_equal(const sonia_common_ros2__srv__DropperService_Response * lhs, const sonia_common_ros2__srv__DropperService_Response * rhs);

/// Copy a srv/DropperService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Response__copy(
  const sonia_common_ros2__srv__DropperService_Response * input,
  sonia_common_ros2__srv__DropperService_Response * output);

/// Initialize array of srv/DropperService messages.
/**
 * It allocates the memory for the number of elements and calls
 * sonia_common_ros2__srv__DropperService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Response__Sequence__init(sonia_common_ros2__srv__DropperService_Response__Sequence * array, size_t size);

/// Finalize array of srv/DropperService messages.
/**
 * It calls
 * sonia_common_ros2__srv__DropperService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
void
sonia_common_ros2__srv__DropperService_Response__Sequence__fini(sonia_common_ros2__srv__DropperService_Response__Sequence * array);

/// Create array of srv/DropperService messages.
/**
 * It allocates the memory for the array and calls
 * sonia_common_ros2__srv__DropperService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
sonia_common_ros2__srv__DropperService_Response__Sequence *
sonia_common_ros2__srv__DropperService_Response__Sequence__create(size_t size);

/// Destroy array of srv/DropperService messages.
/**
 * It calls
 * sonia_common_ros2__srv__DropperService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
void
sonia_common_ros2__srv__DropperService_Response__Sequence__destroy(sonia_common_ros2__srv__DropperService_Response__Sequence * array);

/// Check for srv/DropperService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Response__Sequence__are_equal(const sonia_common_ros2__srv__DropperService_Response__Sequence * lhs, const sonia_common_ros2__srv__DropperService_Response__Sequence * rhs);

/// Copy an array of srv/DropperService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sonia_common_ros2
bool
sonia_common_ros2__srv__DropperService_Response__Sequence__copy(
  const sonia_common_ros2__srv__DropperService_Response__Sequence * input,
  sonia_common_ros2__srv__DropperService_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__FUNCTIONS_H_
