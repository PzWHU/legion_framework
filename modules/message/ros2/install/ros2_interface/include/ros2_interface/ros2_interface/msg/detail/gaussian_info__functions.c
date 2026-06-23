// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/GaussianInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/gaussian_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__GaussianInfo__init(ros2_interface__msg__GaussianInfo * msg)
{
  if (!msg) {
    return false;
  }
  // sigma_x
  // sigma_y
  // correlation
  // area_probability
  // ellipse_a
  // ellipse_b
  // theta_a
  return true;
}

void
ros2_interface__msg__GaussianInfo__fini(ros2_interface__msg__GaussianInfo * msg)
{
  if (!msg) {
    return;
  }
  // sigma_x
  // sigma_y
  // correlation
  // area_probability
  // ellipse_a
  // ellipse_b
  // theta_a
}

bool
ros2_interface__msg__GaussianInfo__are_equal(const ros2_interface__msg__GaussianInfo * lhs, const ros2_interface__msg__GaussianInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sigma_x
  if (lhs->sigma_x != rhs->sigma_x) {
    return false;
  }
  // sigma_y
  if (lhs->sigma_y != rhs->sigma_y) {
    return false;
  }
  // correlation
  if (lhs->correlation != rhs->correlation) {
    return false;
  }
  // area_probability
  if (lhs->area_probability != rhs->area_probability) {
    return false;
  }
  // ellipse_a
  if (lhs->ellipse_a != rhs->ellipse_a) {
    return false;
  }
  // ellipse_b
  if (lhs->ellipse_b != rhs->ellipse_b) {
    return false;
  }
  // theta_a
  if (lhs->theta_a != rhs->theta_a) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__GaussianInfo__copy(
  const ros2_interface__msg__GaussianInfo * input,
  ros2_interface__msg__GaussianInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // sigma_x
  output->sigma_x = input->sigma_x;
  // sigma_y
  output->sigma_y = input->sigma_y;
  // correlation
  output->correlation = input->correlation;
  // area_probability
  output->area_probability = input->area_probability;
  // ellipse_a
  output->ellipse_a = input->ellipse_a;
  // ellipse_b
  output->ellipse_b = input->ellipse_b;
  // theta_a
  output->theta_a = input->theta_a;
  return true;
}

ros2_interface__msg__GaussianInfo *
ros2_interface__msg__GaussianInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GaussianInfo * msg = (ros2_interface__msg__GaussianInfo *)allocator.allocate(sizeof(ros2_interface__msg__GaussianInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__GaussianInfo));
  bool success = ros2_interface__msg__GaussianInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__GaussianInfo__destroy(ros2_interface__msg__GaussianInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__GaussianInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__GaussianInfo__Sequence__init(ros2_interface__msg__GaussianInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GaussianInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__GaussianInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__GaussianInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__GaussianInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__GaussianInfo__fini(&data[i - 1]);
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
ros2_interface__msg__GaussianInfo__Sequence__fini(ros2_interface__msg__GaussianInfo__Sequence * array)
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
      ros2_interface__msg__GaussianInfo__fini(&array->data[i]);
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

ros2_interface__msg__GaussianInfo__Sequence *
ros2_interface__msg__GaussianInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GaussianInfo__Sequence * array = (ros2_interface__msg__GaussianInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__GaussianInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__GaussianInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__GaussianInfo__Sequence__destroy(ros2_interface__msg__GaussianInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__GaussianInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__GaussianInfo__Sequence__are_equal(const ros2_interface__msg__GaussianInfo__Sequence * lhs, const ros2_interface__msg__GaussianInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__GaussianInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__GaussianInfo__Sequence__copy(
  const ros2_interface__msg__GaussianInfo__Sequence * input,
  ros2_interface__msg__GaussianInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__GaussianInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__GaussianInfo * data =
      (ros2_interface__msg__GaussianInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__GaussianInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__GaussianInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__GaussianInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
