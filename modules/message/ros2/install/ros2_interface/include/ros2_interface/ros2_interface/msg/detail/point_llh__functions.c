// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PointLLH.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/point_llh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__PointLLH__init(ros2_interface__msg__PointLLH * msg)
{
  if (!msg) {
    return false;
  }
  // lon
  // lat
  // height
  return true;
}

void
ros2_interface__msg__PointLLH__fini(ros2_interface__msg__PointLLH * msg)
{
  if (!msg) {
    return;
  }
  // lon
  // lat
  // height
}

bool
ros2_interface__msg__PointLLH__are_equal(const ros2_interface__msg__PointLLH * lhs, const ros2_interface__msg__PointLLH * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__PointLLH__copy(
  const ros2_interface__msg__PointLLH * input,
  ros2_interface__msg__PointLLH * output)
{
  if (!input || !output) {
    return false;
  }
  // lon
  output->lon = input->lon;
  // lat
  output->lat = input->lat;
  // height
  output->height = input->height;
  return true;
}

ros2_interface__msg__PointLLH *
ros2_interface__msg__PointLLH__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointLLH * msg = (ros2_interface__msg__PointLLH *)allocator.allocate(sizeof(ros2_interface__msg__PointLLH), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PointLLH));
  bool success = ros2_interface__msg__PointLLH__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PointLLH__destroy(ros2_interface__msg__PointLLH * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PointLLH__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PointLLH__Sequence__init(ros2_interface__msg__PointLLH__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointLLH * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PointLLH *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PointLLH), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PointLLH__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PointLLH__fini(&data[i - 1]);
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
ros2_interface__msg__PointLLH__Sequence__fini(ros2_interface__msg__PointLLH__Sequence * array)
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
      ros2_interface__msg__PointLLH__fini(&array->data[i]);
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

ros2_interface__msg__PointLLH__Sequence *
ros2_interface__msg__PointLLH__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointLLH__Sequence * array = (ros2_interface__msg__PointLLH__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PointLLH__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PointLLH__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PointLLH__Sequence__destroy(ros2_interface__msg__PointLLH__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PointLLH__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PointLLH__Sequence__are_equal(const ros2_interface__msg__PointLLH__Sequence * lhs, const ros2_interface__msg__PointLLH__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PointLLH__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PointLLH__Sequence__copy(
  const ros2_interface__msg__PointLLH__Sequence * input,
  ros2_interface__msg__PointLLH__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PointLLH);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PointLLH * data =
      (ros2_interface__msg__PointLLH *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PointLLH__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PointLLH__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PointLLH__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
