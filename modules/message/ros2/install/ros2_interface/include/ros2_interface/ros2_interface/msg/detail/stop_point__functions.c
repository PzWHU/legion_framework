// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/StopPoint.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/stop_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__StopPoint__init(ros2_interface__msg__StopPoint * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!ros2_interface__msg__Point3D__init(&msg->point)) {
    ros2_interface__msg__StopPoint__fini(msg);
    return false;
  }
  // theta
  // type
  // stop_distance
  return true;
}

void
ros2_interface__msg__StopPoint__fini(ros2_interface__msg__StopPoint * msg)
{
  if (!msg) {
    return;
  }
  // point
  ros2_interface__msg__Point3D__fini(&msg->point);
  // theta
  // type
  // stop_distance
}

bool
ros2_interface__msg__StopPoint__are_equal(const ros2_interface__msg__StopPoint * lhs, const ros2_interface__msg__StopPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // stop_distance
  if (lhs->stop_distance != rhs->stop_distance) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__StopPoint__copy(
  const ros2_interface__msg__StopPoint * input,
  ros2_interface__msg__StopPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!ros2_interface__msg__Point3D__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // theta
  output->theta = input->theta;
  // type
  output->type = input->type;
  // stop_distance
  output->stop_distance = input->stop_distance;
  return true;
}

ros2_interface__msg__StopPoint *
ros2_interface__msg__StopPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__StopPoint * msg = (ros2_interface__msg__StopPoint *)allocator.allocate(sizeof(ros2_interface__msg__StopPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__StopPoint));
  bool success = ros2_interface__msg__StopPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__StopPoint__destroy(ros2_interface__msg__StopPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__StopPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__StopPoint__Sequence__init(ros2_interface__msg__StopPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__StopPoint * data = NULL;

  if (size) {
    data = (ros2_interface__msg__StopPoint *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__StopPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__StopPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__StopPoint__fini(&data[i - 1]);
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
ros2_interface__msg__StopPoint__Sequence__fini(ros2_interface__msg__StopPoint__Sequence * array)
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
      ros2_interface__msg__StopPoint__fini(&array->data[i]);
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

ros2_interface__msg__StopPoint__Sequence *
ros2_interface__msg__StopPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__StopPoint__Sequence * array = (ros2_interface__msg__StopPoint__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__StopPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__StopPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__StopPoint__Sequence__destroy(ros2_interface__msg__StopPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__StopPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__StopPoint__Sequence__are_equal(const ros2_interface__msg__StopPoint__Sequence * lhs, const ros2_interface__msg__StopPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__StopPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__StopPoint__Sequence__copy(
  const ros2_interface__msg__StopPoint__Sequence * input,
  ros2_interface__msg__StopPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__StopPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__StopPoint * data =
      (ros2_interface__msg__StopPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__StopPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__StopPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__StopPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
