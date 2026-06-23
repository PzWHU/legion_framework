// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ImageRect.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/image_rect__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__ImageRect__init(ros2_interface__msg__ImageRect * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // width
  // height
  return true;
}

void
ros2_interface__msg__ImageRect__fini(ros2_interface__msg__ImageRect * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // width
  // height
}

bool
ros2_interface__msg__ImageRect__are_equal(const ros2_interface__msg__ImageRect * lhs, const ros2_interface__msg__ImageRect * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ImageRect__copy(
  const ros2_interface__msg__ImageRect * input,
  ros2_interface__msg__ImageRect * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  return true;
}

ros2_interface__msg__ImageRect *
ros2_interface__msg__ImageRect__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ImageRect * msg = (ros2_interface__msg__ImageRect *)allocator.allocate(sizeof(ros2_interface__msg__ImageRect), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ImageRect));
  bool success = ros2_interface__msg__ImageRect__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ImageRect__destroy(ros2_interface__msg__ImageRect * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ImageRect__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ImageRect__Sequence__init(ros2_interface__msg__ImageRect__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ImageRect * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ImageRect *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ImageRect), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ImageRect__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ImageRect__fini(&data[i - 1]);
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
ros2_interface__msg__ImageRect__Sequence__fini(ros2_interface__msg__ImageRect__Sequence * array)
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
      ros2_interface__msg__ImageRect__fini(&array->data[i]);
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

ros2_interface__msg__ImageRect__Sequence *
ros2_interface__msg__ImageRect__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ImageRect__Sequence * array = (ros2_interface__msg__ImageRect__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ImageRect__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ImageRect__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ImageRect__Sequence__destroy(ros2_interface__msg__ImageRect__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ImageRect__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ImageRect__Sequence__are_equal(const ros2_interface__msg__ImageRect__Sequence * lhs, const ros2_interface__msg__ImageRect__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ImageRect__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ImageRect__Sequence__copy(
  const ros2_interface__msg__ImageRect__Sequence * input,
  ros2_interface__msg__ImageRect__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ImageRect);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ImageRect * data =
      (ros2_interface__msg__ImageRect *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ImageRect__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ImageRect__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ImageRect__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
