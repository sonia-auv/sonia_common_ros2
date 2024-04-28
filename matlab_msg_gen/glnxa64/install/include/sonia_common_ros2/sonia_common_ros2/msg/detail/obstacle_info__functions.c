// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sonia_common_ros2:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice
#include "sonia_common_ros2/msg/detail/obstacle_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
sonia_common_ros2__msg__ObstacleInfo__init(sonia_common_ros2__msg__ObstacleInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    sonia_common_ros2__msg__ObstacleInfo__fini(msg);
    return false;
  }
  // is_valid
  // confidence
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    sonia_common_ros2__msg__ObstacleInfo__fini(msg);
    return false;
  }
  return true;
}

void
sonia_common_ros2__msg__ObstacleInfo__fini(sonia_common_ros2__msg__ObstacleInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // is_valid
  // confidence
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
sonia_common_ros2__msg__ObstacleInfo__are_equal(const sonia_common_ros2__msg__ObstacleInfo * lhs, const sonia_common_ros2__msg__ObstacleInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
sonia_common_ros2__msg__ObstacleInfo__copy(
  const sonia_common_ros2__msg__ObstacleInfo * input,
  sonia_common_ros2__msg__ObstacleInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // is_valid
  output->is_valid = input->is_valid;
  // confidence
  output->confidence = input->confidence;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

sonia_common_ros2__msg__ObstacleInfo *
sonia_common_ros2__msg__ObstacleInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__ObstacleInfo * msg = (sonia_common_ros2__msg__ObstacleInfo *)allocator.allocate(sizeof(sonia_common_ros2__msg__ObstacleInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sonia_common_ros2__msg__ObstacleInfo));
  bool success = sonia_common_ros2__msg__ObstacleInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sonia_common_ros2__msg__ObstacleInfo__destroy(sonia_common_ros2__msg__ObstacleInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sonia_common_ros2__msg__ObstacleInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sonia_common_ros2__msg__ObstacleInfo__Sequence__init(sonia_common_ros2__msg__ObstacleInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__ObstacleInfo * data = NULL;

  if (size) {
    data = (sonia_common_ros2__msg__ObstacleInfo *)allocator.zero_allocate(size, sizeof(sonia_common_ros2__msg__ObstacleInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sonia_common_ros2__msg__ObstacleInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sonia_common_ros2__msg__ObstacleInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sonia_common_ros2__msg__ObstacleInfo__Sequence__fini(sonia_common_ros2__msg__ObstacleInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sonia_common_ros2__msg__ObstacleInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sonia_common_ros2__msg__ObstacleInfo__Sequence *
sonia_common_ros2__msg__ObstacleInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__ObstacleInfo__Sequence * array = (sonia_common_ros2__msg__ObstacleInfo__Sequence *)allocator.allocate(sizeof(sonia_common_ros2__msg__ObstacleInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sonia_common_ros2__msg__ObstacleInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sonia_common_ros2__msg__ObstacleInfo__Sequence__destroy(sonia_common_ros2__msg__ObstacleInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sonia_common_ros2__msg__ObstacleInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sonia_common_ros2__msg__ObstacleInfo__Sequence__are_equal(const sonia_common_ros2__msg__ObstacleInfo__Sequence * lhs, const sonia_common_ros2__msg__ObstacleInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sonia_common_ros2__msg__ObstacleInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sonia_common_ros2__msg__ObstacleInfo__Sequence__copy(
  const sonia_common_ros2__msg__ObstacleInfo__Sequence * input,
  sonia_common_ros2__msg__ObstacleInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sonia_common_ros2__msg__ObstacleInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sonia_common_ros2__msg__ObstacleInfo * data =
      (sonia_common_ros2__msg__ObstacleInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sonia_common_ros2__msg__ObstacleInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sonia_common_ros2__msg__ObstacleInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sonia_common_ros2__msg__ObstacleInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
