// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ObstaclePriority.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/obstacle_priority__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__ObstaclePriority__init(ros2_interface__msg__ObstaclePriority * msg)
{
  if (!msg) {
    return false;
  }
  // priority
  return true;
}

void
ros2_interface__msg__ObstaclePriority__fini(ros2_interface__msg__ObstaclePriority * msg)
{
  if (!msg) {
    return;
  }
  // priority
}

bool
ros2_interface__msg__ObstaclePriority__are_equal(const ros2_interface__msg__ObstaclePriority * lhs, const ros2_interface__msg__ObstaclePriority * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ObstaclePriority__copy(
  const ros2_interface__msg__ObstaclePriority * input,
  ros2_interface__msg__ObstaclePriority * output)
{
  if (!input || !output) {
    return false;
  }
  // priority
  output->priority = input->priority;
  return true;
}

ros2_interface__msg__ObstaclePriority *
ros2_interface__msg__ObstaclePriority__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ObstaclePriority * msg = (ros2_interface__msg__ObstaclePriority *)allocator.allocate(sizeof(ros2_interface__msg__ObstaclePriority), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ObstaclePriority));
  bool success = ros2_interface__msg__ObstaclePriority__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ObstaclePriority__destroy(ros2_interface__msg__ObstaclePriority * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ObstaclePriority__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ObstaclePriority__Sequence__init(ros2_interface__msg__ObstaclePriority__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ObstaclePriority * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ObstaclePriority *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ObstaclePriority), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ObstaclePriority__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ObstaclePriority__fini(&data[i - 1]);
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
ros2_interface__msg__ObstaclePriority__Sequence__fini(ros2_interface__msg__ObstaclePriority__Sequence * array)
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
      ros2_interface__msg__ObstaclePriority__fini(&array->data[i]);
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

ros2_interface__msg__ObstaclePriority__Sequence *
ros2_interface__msg__ObstaclePriority__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ObstaclePriority__Sequence * array = (ros2_interface__msg__ObstaclePriority__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ObstaclePriority__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ObstaclePriority__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ObstaclePriority__Sequence__destroy(ros2_interface__msg__ObstaclePriority__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ObstaclePriority__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ObstaclePriority__Sequence__are_equal(const ros2_interface__msg__ObstaclePriority__Sequence * lhs, const ros2_interface__msg__ObstaclePriority__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ObstaclePriority__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ObstaclePriority__Sequence__copy(
  const ros2_interface__msg__ObstaclePriority__Sequence * input,
  ros2_interface__msg__ObstaclePriority__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ObstaclePriority);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ObstaclePriority * data =
      (ros2_interface__msg__ObstaclePriority *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ObstaclePriority__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ObstaclePriority__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ObstaclePriority__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
