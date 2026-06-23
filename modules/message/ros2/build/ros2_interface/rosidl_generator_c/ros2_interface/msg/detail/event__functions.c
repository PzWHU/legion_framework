// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Event.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "ros2_interface/msg/detail/time__functions.h"
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_interface__msg__Event__init(ros2_interface__msg__Event * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!ros2_interface__msg__Time__init(&msg->timestamp)) {
    ros2_interface__msg__Event__fini(msg);
    return false;
  }
  // code
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    ros2_interface__msg__Event__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__Event__fini(ros2_interface__msg__Event * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  ros2_interface__msg__Time__fini(&msg->timestamp);
  // code
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
ros2_interface__msg__Event__are_equal(const ros2_interface__msg__Event * lhs, const ros2_interface__msg__Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!ros2_interface__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Event__copy(
  const ros2_interface__msg__Event * input,
  ros2_interface__msg__Event * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!ros2_interface__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // code
  output->code = input->code;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__Event *
ros2_interface__msg__Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Event * msg = (ros2_interface__msg__Event *)allocator.allocate(sizeof(ros2_interface__msg__Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Event));
  bool success = ros2_interface__msg__Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Event__destroy(ros2_interface__msg__Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Event__Sequence__init(ros2_interface__msg__Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Event * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Event *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Event__fini(&data[i - 1]);
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
ros2_interface__msg__Event__Sequence__fini(ros2_interface__msg__Event__Sequence * array)
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
      ros2_interface__msg__Event__fini(&array->data[i]);
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

ros2_interface__msg__Event__Sequence *
ros2_interface__msg__Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Event__Sequence * array = (ros2_interface__msg__Event__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Event__Sequence__destroy(ros2_interface__msg__Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Event__Sequence__are_equal(const ros2_interface__msg__Event__Sequence * lhs, const ros2_interface__msg__Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Event__Sequence__copy(
  const ros2_interface__msg__Event__Sequence * input,
  ros2_interface__msg__Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Event * data =
      (ros2_interface__msg__Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
