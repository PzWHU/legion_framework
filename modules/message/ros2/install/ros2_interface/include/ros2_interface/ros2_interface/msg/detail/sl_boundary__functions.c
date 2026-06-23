// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/SLBoundary.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/sl_boundary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `boundary_point`
#include "ros2_interface/msg/detail/sl_point__functions.h"

bool
ros2_interface__msg__SLBoundary__init(ros2_interface__msg__SLBoundary * msg)
{
  if (!msg) {
    return false;
  }
  // start_s
  // end_s
  // start_l
  // end_l
  // boundary_point
  if (!ros2_interface__msg__SLPoint__Sequence__init(&msg->boundary_point, 0)) {
    ros2_interface__msg__SLBoundary__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__SLBoundary__fini(ros2_interface__msg__SLBoundary * msg)
{
  if (!msg) {
    return;
  }
  // start_s
  // end_s
  // start_l
  // end_l
  // boundary_point
  ros2_interface__msg__SLPoint__Sequence__fini(&msg->boundary_point);
}

bool
ros2_interface__msg__SLBoundary__are_equal(const ros2_interface__msg__SLBoundary * lhs, const ros2_interface__msg__SLBoundary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_s
  if (lhs->start_s != rhs->start_s) {
    return false;
  }
  // end_s
  if (lhs->end_s != rhs->end_s) {
    return false;
  }
  // start_l
  if (lhs->start_l != rhs->start_l) {
    return false;
  }
  // end_l
  if (lhs->end_l != rhs->end_l) {
    return false;
  }
  // boundary_point
  if (!ros2_interface__msg__SLPoint__Sequence__are_equal(
      &(lhs->boundary_point), &(rhs->boundary_point)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__SLBoundary__copy(
  const ros2_interface__msg__SLBoundary * input,
  ros2_interface__msg__SLBoundary * output)
{
  if (!input || !output) {
    return false;
  }
  // start_s
  output->start_s = input->start_s;
  // end_s
  output->end_s = input->end_s;
  // start_l
  output->start_l = input->start_l;
  // end_l
  output->end_l = input->end_l;
  // boundary_point
  if (!ros2_interface__msg__SLPoint__Sequence__copy(
      &(input->boundary_point), &(output->boundary_point)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__SLBoundary *
ros2_interface__msg__SLBoundary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SLBoundary * msg = (ros2_interface__msg__SLBoundary *)allocator.allocate(sizeof(ros2_interface__msg__SLBoundary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__SLBoundary));
  bool success = ros2_interface__msg__SLBoundary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__SLBoundary__destroy(ros2_interface__msg__SLBoundary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__SLBoundary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__SLBoundary__Sequence__init(ros2_interface__msg__SLBoundary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SLBoundary * data = NULL;

  if (size) {
    data = (ros2_interface__msg__SLBoundary *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__SLBoundary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__SLBoundary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__SLBoundary__fini(&data[i - 1]);
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
ros2_interface__msg__SLBoundary__Sequence__fini(ros2_interface__msg__SLBoundary__Sequence * array)
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
      ros2_interface__msg__SLBoundary__fini(&array->data[i]);
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

ros2_interface__msg__SLBoundary__Sequence *
ros2_interface__msg__SLBoundary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SLBoundary__Sequence * array = (ros2_interface__msg__SLBoundary__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__SLBoundary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__SLBoundary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__SLBoundary__Sequence__destroy(ros2_interface__msg__SLBoundary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__SLBoundary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__SLBoundary__Sequence__are_equal(const ros2_interface__msg__SLBoundary__Sequence * lhs, const ros2_interface__msg__SLBoundary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__SLBoundary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__SLBoundary__Sequence__copy(
  const ros2_interface__msg__SLBoundary__Sequence * input,
  ros2_interface__msg__SLBoundary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__SLBoundary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__SLBoundary * data =
      (ros2_interface__msg__SLBoundary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__SLBoundary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__SLBoundary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__SLBoundary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
