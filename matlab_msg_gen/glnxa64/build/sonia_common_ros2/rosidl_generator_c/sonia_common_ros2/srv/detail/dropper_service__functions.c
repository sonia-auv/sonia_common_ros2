// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sonia_common_ros2:srv/DropperService.idl
// generated code does not contain a copyright notice
#include "sonia_common_ros2/srv/detail/dropper_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
sonia_common_ros2__srv__DropperService_Request__init(sonia_common_ros2__srv__DropperService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // side
  return true;
}

void
sonia_common_ros2__srv__DropperService_Request__fini(sonia_common_ros2__srv__DropperService_Request * msg)
{
  if (!msg) {
    return;
  }
  // side
}

bool
sonia_common_ros2__srv__DropperService_Request__are_equal(const sonia_common_ros2__srv__DropperService_Request * lhs, const sonia_common_ros2__srv__DropperService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // side
  if (lhs->side != rhs->side) {
    return false;
  }
  return true;
}

bool
sonia_common_ros2__srv__DropperService_Request__copy(
  const sonia_common_ros2__srv__DropperService_Request * input,
  sonia_common_ros2__srv__DropperService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // side
  output->side = input->side;
  return true;
}

sonia_common_ros2__srv__DropperService_Request *
sonia_common_ros2__srv__DropperService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__srv__DropperService_Request * msg = (sonia_common_ros2__srv__DropperService_Request *)allocator.allocate(sizeof(sonia_common_ros2__srv__DropperService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sonia_common_ros2__srv__DropperService_Request));
  bool success = sonia_common_ros2__srv__DropperService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sonia_common_ros2__srv__DropperService_Request__destroy(sonia_common_ros2__srv__DropperService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sonia_common_ros2__srv__DropperService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sonia_common_ros2__srv__DropperService_Request__Sequence__init(sonia_common_ros2__srv__DropperService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__srv__DropperService_Request * data = NULL;

  if (size) {
    data = (sonia_common_ros2__srv__DropperService_Request *)allocator.zero_allocate(size, sizeof(sonia_common_ros2__srv__DropperService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sonia_common_ros2__srv__DropperService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sonia_common_ros2__srv__DropperService_Request__fini(&data[i - 1]);
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
sonia_common_ros2__srv__DropperService_Request__Sequence__fini(sonia_common_ros2__srv__DropperService_Request__Sequence * array)
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
      sonia_common_ros2__srv__DropperService_Request__fini(&array->data[i]);
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

sonia_common_ros2__srv__DropperService_Request__Sequence *
sonia_common_ros2__srv__DropperService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__srv__DropperService_Request__Sequence * array = (sonia_common_ros2__srv__DropperService_Request__Sequence *)allocator.allocate(sizeof(sonia_common_ros2__srv__DropperService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sonia_common_ros2__srv__DropperService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sonia_common_ros2__srv__DropperService_Request__Sequence__destroy(sonia_common_ros2__srv__DropperService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sonia_common_ros2__srv__DropperService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sonia_common_ros2__srv__DropperService_Request__Sequence__are_equal(const sonia_common_ros2__srv__DropperService_Request__Sequence * lhs, const sonia_common_ros2__srv__DropperService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sonia_common_ros2__srv__DropperService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sonia_common_ros2__srv__DropperService_Request__Sequence__copy(
  const sonia_common_ros2__srv__DropperService_Request__Sequence * input,
  sonia_common_ros2__srv__DropperService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sonia_common_ros2__srv__DropperService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sonia_common_ros2__srv__DropperService_Request * data =
      (sonia_common_ros2__srv__DropperService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sonia_common_ros2__srv__DropperService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sonia_common_ros2__srv__DropperService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sonia_common_ros2__srv__DropperService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
sonia_common_ros2__srv__DropperService_Response__init(sonia_common_ros2__srv__DropperService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
sonia_common_ros2__srv__DropperService_Response__fini(sonia_common_ros2__srv__DropperService_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
sonia_common_ros2__srv__DropperService_Response__are_equal(const sonia_common_ros2__srv__DropperService_Response * lhs, const sonia_common_ros2__srv__DropperService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
sonia_common_ros2__srv__DropperService_Response__copy(
  const sonia_common_ros2__srv__DropperService_Response * input,
  sonia_common_ros2__srv__DropperService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

sonia_common_ros2__srv__DropperService_Response *
sonia_common_ros2__srv__DropperService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__srv__DropperService_Response * msg = (sonia_common_ros2__srv__DropperService_Response *)allocator.allocate(sizeof(sonia_common_ros2__srv__DropperService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sonia_common_ros2__srv__DropperService_Response));
  bool success = sonia_common_ros2__srv__DropperService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sonia_common_ros2__srv__DropperService_Response__destroy(sonia_common_ros2__srv__DropperService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sonia_common_ros2__srv__DropperService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sonia_common_ros2__srv__DropperService_Response__Sequence__init(sonia_common_ros2__srv__DropperService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__srv__DropperService_Response * data = NULL;

  if (size) {
    data = (sonia_common_ros2__srv__DropperService_Response *)allocator.zero_allocate(size, sizeof(sonia_common_ros2__srv__DropperService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sonia_common_ros2__srv__DropperService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sonia_common_ros2__srv__DropperService_Response__fini(&data[i - 1]);
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
sonia_common_ros2__srv__DropperService_Response__Sequence__fini(sonia_common_ros2__srv__DropperService_Response__Sequence * array)
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
      sonia_common_ros2__srv__DropperService_Response__fini(&array->data[i]);
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

sonia_common_ros2__srv__DropperService_Response__Sequence *
sonia_common_ros2__srv__DropperService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sonia_common_ros2__srv__DropperService_Response__Sequence * array = (sonia_common_ros2__srv__DropperService_Response__Sequence *)allocator.allocate(sizeof(sonia_common_ros2__srv__DropperService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sonia_common_ros2__srv__DropperService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sonia_common_ros2__srv__DropperService_Response__Sequence__destroy(sonia_common_ros2__srv__DropperService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sonia_common_ros2__srv__DropperService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sonia_common_ros2__srv__DropperService_Response__Sequence__are_equal(const sonia_common_ros2__srv__DropperService_Response__Sequence * lhs, const sonia_common_ros2__srv__DropperService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sonia_common_ros2__srv__DropperService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sonia_common_ros2__srv__DropperService_Response__Sequence__copy(
  const sonia_common_ros2__srv__DropperService_Response__Sequence * input,
  sonia_common_ros2__srv__DropperService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sonia_common_ros2__srv__DropperService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sonia_common_ros2__srv__DropperService_Response * data =
      (sonia_common_ros2__srv__DropperService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sonia_common_ros2__srv__DropperService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sonia_common_ros2__srv__DropperService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sonia_common_ros2__srv__DropperService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
