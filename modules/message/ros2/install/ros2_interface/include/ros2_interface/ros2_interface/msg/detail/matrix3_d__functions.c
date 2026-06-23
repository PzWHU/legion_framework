// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Matrix3D.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/matrix3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__Matrix3D__init(ros2_interface__msg__Matrix3D * msg)
{
  if (!msg) {
    return false;
  }
  // a00
  // a01
  // a02
  // a10
  // a11
  // a12
  // a20
  // a21
  // a22
  return true;
}

void
ros2_interface__msg__Matrix3D__fini(ros2_interface__msg__Matrix3D * msg)
{
  if (!msg) {
    return;
  }
  // a00
  // a01
  // a02
  // a10
  // a11
  // a12
  // a20
  // a21
  // a22
}

bool
ros2_interface__msg__Matrix3D__are_equal(const ros2_interface__msg__Matrix3D * lhs, const ros2_interface__msg__Matrix3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a00
  if (lhs->a00 != rhs->a00) {
    return false;
  }
  // a01
  if (lhs->a01 != rhs->a01) {
    return false;
  }
  // a02
  if (lhs->a02 != rhs->a02) {
    return false;
  }
  // a10
  if (lhs->a10 != rhs->a10) {
    return false;
  }
  // a11
  if (lhs->a11 != rhs->a11) {
    return false;
  }
  // a12
  if (lhs->a12 != rhs->a12) {
    return false;
  }
  // a20
  if (lhs->a20 != rhs->a20) {
    return false;
  }
  // a21
  if (lhs->a21 != rhs->a21) {
    return false;
  }
  // a22
  if (lhs->a22 != rhs->a22) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Matrix3D__copy(
  const ros2_interface__msg__Matrix3D * input,
  ros2_interface__msg__Matrix3D * output)
{
  if (!input || !output) {
    return false;
  }
  // a00
  output->a00 = input->a00;
  // a01
  output->a01 = input->a01;
  // a02
  output->a02 = input->a02;
  // a10
  output->a10 = input->a10;
  // a11
  output->a11 = input->a11;
  // a12
  output->a12 = input->a12;
  // a20
  output->a20 = input->a20;
  // a21
  output->a21 = input->a21;
  // a22
  output->a22 = input->a22;
  return true;
}

ros2_interface__msg__Matrix3D *
ros2_interface__msg__Matrix3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Matrix3D * msg = (ros2_interface__msg__Matrix3D *)allocator.allocate(sizeof(ros2_interface__msg__Matrix3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Matrix3D));
  bool success = ros2_interface__msg__Matrix3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Matrix3D__destroy(ros2_interface__msg__Matrix3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Matrix3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Matrix3D__Sequence__init(ros2_interface__msg__Matrix3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Matrix3D * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Matrix3D *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Matrix3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Matrix3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Matrix3D__fini(&data[i - 1]);
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
ros2_interface__msg__Matrix3D__Sequence__fini(ros2_interface__msg__Matrix3D__Sequence * array)
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
      ros2_interface__msg__Matrix3D__fini(&array->data[i]);
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

ros2_interface__msg__Matrix3D__Sequence *
ros2_interface__msg__Matrix3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Matrix3D__Sequence * array = (ros2_interface__msg__Matrix3D__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Matrix3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Matrix3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Matrix3D__Sequence__destroy(ros2_interface__msg__Matrix3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Matrix3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Matrix3D__Sequence__are_equal(const ros2_interface__msg__Matrix3D__Sequence * lhs, const ros2_interface__msg__Matrix3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Matrix3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Matrix3D__Sequence__copy(
  const ros2_interface__msg__Matrix3D__Sequence * input,
  ros2_interface__msg__Matrix3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Matrix3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Matrix3D * data =
      (ros2_interface__msg__Matrix3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Matrix3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Matrix3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Matrix3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
