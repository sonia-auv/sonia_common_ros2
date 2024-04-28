// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sonia_common_ros2:msg/SerialMessage.idl
// generated code does not contain a copyright notice
#include "sonia_common_ros2/msg/detail/serial_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sonia_common_ros2__msg__SerialMessage__init(sonia_common_ros2__msg__SerialMessage * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // size
  // msg
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->msg, 0)) {
    sonia_common_ros2__msg__SerialMessage__fini(msg);
    return false;
  }
  return true;
}

void
sonia_common_ros2__msg__SerialMessage__fini(sonia_common_ros2__msg__SerialMessage * msg)
{
  if (!msg) {
    return;
  }
  // id
  // size
  // msg
  rosidl_runtime_c__octet__Sequence__fini(&msg->msg);
}

bool
sonia_common_ros2__msg__SerialMessage__are_equal(const sonia_common_ros2__msg__SerialMessage * lhs, const sonia_common_ros2__msg__SerialMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__octet__Sequence__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  return true;
}

bool
sonia_common_ros2__msg__SerialMessage__copy(
  const sonia_common_ros2__msg__SerialMessage * input,
  sonia_common_ros2__msg__SerialMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // size
  output->size = input->size;
  // msg
  if (!rosidl_runtime_c__octet__Sequence__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  return true;
}

sonia_common_ros2__msg__SerialMessage *
sonia_common_ros2__msg__SerialMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__SerialMessage * msg = (sonia_common_ros2__msg__SerialMessage *)allocator.allocate(sizeof(sonia_common_ros2__msg__SerialMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sonia_common_ros2__msg__SerialMessage));
  bool success = sonia_common_ros2__msg__SerialMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sonia_common_ros2__msg__SerialMessage__destroy(sonia_common_ros2__msg__SerialMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sonia_common_ros2__msg__SerialMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sonia_common_ros2__msg__SerialMessage__Sequence__init(sonia_common_ros2__msg__SerialMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__SerialMessage * data = NULL;

  if (size) {
    data = (sonia_common_ros2__msg__SerialMessage *)allocator.zero_allocate(size, sizeof(sonia_common_ros2__msg__SerialMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sonia_common_ros2__msg__SerialMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sonia_common_ros2__msg__SerialMessage__fini(&data[i - 1]);
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
sonia_common_ros2__msg__SerialMessage__Sequence__fini(sonia_common_ros2__msg__SerialMessage__Sequence * array)
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
      sonia_common_ros2__msg__SerialMessage__fini(&array->data[i]);
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

sonia_common_ros2__msg__SerialMessage__Sequence *
sonia_common_ros2__msg__SerialMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__msg__SerialMessage__Sequence * array = (sonia_common_ros2__msg__SerialMessage__Sequence *)allocator.allocate(sizeof(sonia_common_ros2__msg__SerialMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sonia_common_ros2__msg__SerialMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sonia_common_ros2__msg__SerialMessage__Sequence__destroy(sonia_common_ros2__msg__SerialMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sonia_common_ros2__msg__SerialMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sonia_common_ros2__msg__SerialMessage__Sequence__are_equal(const sonia_common_ros2__msg__SerialMessage__Sequence * lhs, const sonia_common_ros2__msg__SerialMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sonia_common_ros2__msg__SerialMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sonia_common_ros2__msg__SerialMessage__Sequence__copy(
  const sonia_common_ros2__msg__SerialMessage__Sequence * input,
  sonia_common_ros2__msg__SerialMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sonia_common_ros2__msg__SerialMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sonia_common_ros2__msg__SerialMessage * data =
      (sonia_common_ros2__msg__SerialMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sonia_common_ros2__msg__SerialMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sonia_common_ros2__msg__SerialMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sonia_common_ros2__msg__SerialMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
