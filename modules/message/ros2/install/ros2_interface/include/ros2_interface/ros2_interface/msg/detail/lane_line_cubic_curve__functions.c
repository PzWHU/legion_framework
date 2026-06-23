// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/LaneLineCubicCurve.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/lane_line_cubic_curve__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__LaneLineCubicCurve__init(ros2_interface__msg__LaneLineCubicCurve * msg)
{
  if (!msg) {
    return false;
  }
  // start_x
  // end_x
  // a
  // b
  // c
  // d
  return true;
}

void
ros2_interface__msg__LaneLineCubicCurve__fini(ros2_interface__msg__LaneLineCubicCurve * msg)
{
  if (!msg) {
    return;
  }
  // start_x
  // end_x
  // a
  // b
  // c
  // d
}

bool
ros2_interface__msg__LaneLineCubicCurve__are_equal(const ros2_interface__msg__LaneLineCubicCurve * lhs, const ros2_interface__msg__LaneLineCubicCurve * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_x
  if (lhs->start_x != rhs->start_x) {
    return false;
  }
  // end_x
  if (lhs->end_x != rhs->end_x) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__LaneLineCubicCurve__copy(
  const ros2_interface__msg__LaneLineCubicCurve * input,
  ros2_interface__msg__LaneLineCubicCurve * output)
{
  if (!input || !output) {
    return false;
  }
  // start_x
  output->start_x = input->start_x;
  // end_x
  output->end_x = input->end_x;
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  // d
  output->d = input->d;
  return true;
}

ros2_interface__msg__LaneLineCubicCurve *
ros2_interface__msg__LaneLineCubicCurve__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneLineCubicCurve * msg = (ros2_interface__msg__LaneLineCubicCurve *)allocator.allocate(sizeof(ros2_interface__msg__LaneLineCubicCurve), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__LaneLineCubicCurve));
  bool success = ros2_interface__msg__LaneLineCubicCurve__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__LaneLineCubicCurve__destroy(ros2_interface__msg__LaneLineCubicCurve * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__LaneLineCubicCurve__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__LaneLineCubicCurve__Sequence__init(ros2_interface__msg__LaneLineCubicCurve__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneLineCubicCurve * data = NULL;

  if (size) {
    data = (ros2_interface__msg__LaneLineCubicCurve *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__LaneLineCubicCurve), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__LaneLineCubicCurve__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__LaneLineCubicCurve__fini(&data[i - 1]);
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
ros2_interface__msg__LaneLineCubicCurve__Sequence__fini(ros2_interface__msg__LaneLineCubicCurve__Sequence * array)
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
      ros2_interface__msg__LaneLineCubicCurve__fini(&array->data[i]);
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

ros2_interface__msg__LaneLineCubicCurve__Sequence *
ros2_interface__msg__LaneLineCubicCurve__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneLineCubicCurve__Sequence * array = (ros2_interface__msg__LaneLineCubicCurve__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__LaneLineCubicCurve__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__LaneLineCubicCurve__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__LaneLineCubicCurve__Sequence__destroy(ros2_interface__msg__LaneLineCubicCurve__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__LaneLineCubicCurve__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__LaneLineCubicCurve__Sequence__are_equal(const ros2_interface__msg__LaneLineCubicCurve__Sequence * lhs, const ros2_interface__msg__LaneLineCubicCurve__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__LaneLineCubicCurve__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__LaneLineCubicCurve__Sequence__copy(
  const ros2_interface__msg__LaneLineCubicCurve__Sequence * input,
  ros2_interface__msg__LaneLineCubicCurve__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__LaneLineCubicCurve);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__LaneLineCubicCurve * data =
      (ros2_interface__msg__LaneLineCubicCurve *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__LaneLineCubicCurve__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__LaneLineCubicCurve__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__LaneLineCubicCurve__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
