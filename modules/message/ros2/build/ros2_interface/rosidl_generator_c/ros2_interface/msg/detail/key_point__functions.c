// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/KeyPoint.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/key_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_interface__msg__KeyPoint__init(ros2_interface__msg__KeyPoint * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // latitude
  // longitude
  // ele
  // heading
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros2_interface__msg__KeyPoint__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__KeyPoint__fini(ros2_interface__msg__KeyPoint * msg)
{
  if (!msg) {
    return;
  }
  // id
  // latitude
  // longitude
  // ele
  // heading
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
ros2_interface__msg__KeyPoint__are_equal(const ros2_interface__msg__KeyPoint * lhs, const ros2_interface__msg__KeyPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // ele
  if (lhs->ele != rhs->ele) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__KeyPoint__copy(
  const ros2_interface__msg__KeyPoint * input,
  ros2_interface__msg__KeyPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // ele
  output->ele = input->ele;
  // heading
  output->heading = input->heading;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__KeyPoint *
ros2_interface__msg__KeyPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__KeyPoint * msg = (ros2_interface__msg__KeyPoint *)allocator.allocate(sizeof(ros2_interface__msg__KeyPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__KeyPoint));
  bool success = ros2_interface__msg__KeyPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__KeyPoint__destroy(ros2_interface__msg__KeyPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__KeyPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__KeyPoint__Sequence__init(ros2_interface__msg__KeyPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__KeyPoint * data = NULL;

  if (size) {
    data = (ros2_interface__msg__KeyPoint *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__KeyPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__KeyPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__KeyPoint__fini(&data[i - 1]);
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
ros2_interface__msg__KeyPoint__Sequence__fini(ros2_interface__msg__KeyPoint__Sequence * array)
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
      ros2_interface__msg__KeyPoint__fini(&array->data[i]);
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

ros2_interface__msg__KeyPoint__Sequence *
ros2_interface__msg__KeyPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__KeyPoint__Sequence * array = (ros2_interface__msg__KeyPoint__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__KeyPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__KeyPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__KeyPoint__Sequence__destroy(ros2_interface__msg__KeyPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__KeyPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__KeyPoint__Sequence__are_equal(const ros2_interface__msg__KeyPoint__Sequence * lhs, const ros2_interface__msg__KeyPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__KeyPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__KeyPoint__Sequence__copy(
  const ros2_interface__msg__KeyPoint__Sequence * input,
  ros2_interface__msg__KeyPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__KeyPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__KeyPoint * data =
      (ros2_interface__msg__KeyPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__KeyPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__KeyPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__KeyPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
