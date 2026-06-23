// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Grid.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/grid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sl_point`
#include "ros2_interface/msg/detail/sl_point__functions.h"

bool
ros2_interface__msg__Grid__init(ros2_interface__msg__Grid * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // sl_point
  if (!ros2_interface__msg__SLPoint__init(&msg->sl_point)) {
    ros2_interface__msg__Grid__fini(msg);
    return false;
  }
  // yaw
  // potential
  // region_id
  return true;
}

void
ros2_interface__msg__Grid__fini(ros2_interface__msg__Grid * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // sl_point
  ros2_interface__msg__SLPoint__fini(&msg->sl_point);
  // yaw
  // potential
  // region_id
}

bool
ros2_interface__msg__Grid__are_equal(const ros2_interface__msg__Grid * lhs, const ros2_interface__msg__Grid * rhs)
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
  // sl_point
  if (!ros2_interface__msg__SLPoint__are_equal(
      &(lhs->sl_point), &(rhs->sl_point)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // potential
  if (lhs->potential != rhs->potential) {
    return false;
  }
  // region_id
  if (lhs->region_id != rhs->region_id) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Grid__copy(
  const ros2_interface__msg__Grid * input,
  ros2_interface__msg__Grid * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // sl_point
  if (!ros2_interface__msg__SLPoint__copy(
      &(input->sl_point), &(output->sl_point)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // potential
  output->potential = input->potential;
  // region_id
  output->region_id = input->region_id;
  return true;
}

ros2_interface__msg__Grid *
ros2_interface__msg__Grid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Grid * msg = (ros2_interface__msg__Grid *)allocator.allocate(sizeof(ros2_interface__msg__Grid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Grid));
  bool success = ros2_interface__msg__Grid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Grid__destroy(ros2_interface__msg__Grid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Grid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Grid__Sequence__init(ros2_interface__msg__Grid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Grid * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Grid *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Grid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Grid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Grid__fini(&data[i - 1]);
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
ros2_interface__msg__Grid__Sequence__fini(ros2_interface__msg__Grid__Sequence * array)
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
      ros2_interface__msg__Grid__fini(&array->data[i]);
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

ros2_interface__msg__Grid__Sequence *
ros2_interface__msg__Grid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Grid__Sequence * array = (ros2_interface__msg__Grid__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Grid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Grid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Grid__Sequence__destroy(ros2_interface__msg__Grid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Grid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Grid__Sequence__are_equal(const ros2_interface__msg__Grid__Sequence * lhs, const ros2_interface__msg__Grid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Grid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Grid__Sequence__copy(
  const ros2_interface__msg__Grid__Sequence * input,
  ros2_interface__msg__Grid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Grid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Grid * data =
      (ros2_interface__msg__Grid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Grid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Grid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Grid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
