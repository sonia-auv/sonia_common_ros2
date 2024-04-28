// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sonia_common_ros2:msg/Pose.idl
// generated code does not contain a copyright notice
#include "sonia_common_ros2/msg/detail/pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
sonia_common_ros2__msg__Pose__init(sonia_common_ros2__msg__Pose * msg)
{
  if (!msg) {
    return false;
  }
  // frame
  // speed
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    sonia_common_ros2__msg__Pose__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation)) {
    sonia_common_ros2__msg__Pose__fini(msg);
    return false;
  }
  // fine
  // rotation
  return true;
}

void
sonia_common_ros2__msg__Pose__fini(sonia_common_ros2__msg__Pose * msg)
{
  if (!msg) {
    return;
  }
  // frame
  // speed
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Vector3__fini(&msg->orientation);
  // fine
  // rotation
}

bool
sonia_common_ros2__msg__Pose__are_equal(const sonia_common_ros2__msg__Pose * lhs, const sonia_common_ros2__msg__Pose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // fine
  if (lhs->fine != rhs->fine) {
    return false;
  }
  // rotation
  if (lhs->rotation != rhs->rotation) {
    return false;
  }
  return true;
}

bool
sonia_common_ros2__msg__Pose__copy(
  const sonia_common_ros2__msg__Pose * input,
  sonia_common_ros2__msg__Pose * output)
{
  if (!input || !output) {
    return false;
  }
  // frame
  output->frame = input->frame;
  // speed
  output->speed = input->speed;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // fine
  output->fine = input->fine;
  // rotation
  output->rotation = input->rotation;
  return true;
}

sonia_common_ros2__msg__Pose *
sonia_common_ros2__msg__Pose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__Pose * msg = (sonia_common_ros2__msg__Pose *)allocator.allocate(sizeof(sonia_common_ros2__msg__Pose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sonia_common_ros2__msg__Pose));
  bool success = sonia_common_ros2__msg__Pose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sonia_common_ros2__msg__Pose__destroy(sonia_common_ros2__msg__Pose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sonia_common_ros2__msg__Pose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sonia_common_ros2__msg__Pose__Sequence__init(sonia_common_ros2__msg__Pose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__Pose * data = NULL;

  if (size) {
    data = (sonia_common_ros2__msg__Pose *)allocator.zero_allocate(size, sizeof(sonia_common_ros2__msg__Pose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sonia_common_ros2__msg__Pose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sonia_common_ros2__msg__Pose__fini(&data[i - 1]);
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
sonia_common_ros2__msg__Pose__Sequence__fini(sonia_common_ros2__msg__Pose__Sequence * array)
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
      sonia_common_ros2__msg__Pose__fini(&array->data[i]);
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

sonia_common_ros2__msg__Pose__Sequence *
sonia_common_ros2__msg__Pose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__Pose__Sequence * array = (sonia_common_ros2__msg__Pose__Sequence *)allocator.allocate(sizeof(sonia_common_ros2__msg__Pose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sonia_common_ros2__msg__Pose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sonia_common_ros2__msg__Pose__Sequence__destroy(sonia_common_ros2__msg__Pose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sonia_common_ros2__msg__Pose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sonia_common_ros2__msg__Pose__Sequence__are_equal(const sonia_common_ros2__msg__Pose__Sequence * lhs, const sonia_common_ros2__msg__Pose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sonia_common_ros2__msg__Pose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sonia_common_ros2__msg__Pose__Sequence__copy(
  const sonia_common_ros2__msg__Pose__Sequence * input,
  sonia_common_ros2__msg__Pose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sonia_common_ros2__msg__Pose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sonia_common_ros2__msg__Pose * data =
      (sonia_common_ros2__msg__Pose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sonia_common_ros2__msg__Pose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sonia_common_ros2__msg__Pose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sonia_common_ros2__msg__Pose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
