// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/FreeSpace.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/free_space__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `freespace_region`
#include "ros2_interface/msg/detail/polygon2_d__functions.h"

bool
ros2_interface__msg__FreeSpace__init(ros2_interface__msg__FreeSpace * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__FreeSpace__fini(msg);
    return false;
  }
  // sensor_id
  // freespace_region
  if (!ros2_interface__msg__Polygon2D__Sequence__init(&msg->freespace_region, 0)) {
    ros2_interface__msg__FreeSpace__fini(msg);
    return false;
  }
  // error_code
  // is_valid
  return true;
}

void
ros2_interface__msg__FreeSpace__fini(ros2_interface__msg__FreeSpace * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_id
  // freespace_region
  ros2_interface__msg__Polygon2D__Sequence__fini(&msg->freespace_region);
  // error_code
  // is_valid
}

bool
ros2_interface__msg__FreeSpace__are_equal(const ros2_interface__msg__FreeSpace * lhs, const ros2_interface__msg__FreeSpace * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // freespace_region
  if (!ros2_interface__msg__Polygon2D__Sequence__are_equal(
      &(lhs->freespace_region), &(rhs->freespace_region)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__FreeSpace__copy(
  const ros2_interface__msg__FreeSpace * input,
  ros2_interface__msg__FreeSpace * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // sensor_id
  output->sensor_id = input->sensor_id;
  // freespace_region
  if (!ros2_interface__msg__Polygon2D__Sequence__copy(
      &(input->freespace_region), &(output->freespace_region)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // is_valid
  output->is_valid = input->is_valid;
  return true;
}

ros2_interface__msg__FreeSpace *
ros2_interface__msg__FreeSpace__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__FreeSpace * msg = (ros2_interface__msg__FreeSpace *)allocator.allocate(sizeof(ros2_interface__msg__FreeSpace), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__FreeSpace));
  bool success = ros2_interface__msg__FreeSpace__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__FreeSpace__destroy(ros2_interface__msg__FreeSpace * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__FreeSpace__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__FreeSpace__Sequence__init(ros2_interface__msg__FreeSpace__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__FreeSpace * data = NULL;

  if (size) {
    data = (ros2_interface__msg__FreeSpace *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__FreeSpace), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__FreeSpace__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__FreeSpace__fini(&data[i - 1]);
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
ros2_interface__msg__FreeSpace__Sequence__fini(ros2_interface__msg__FreeSpace__Sequence * array)
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
      ros2_interface__msg__FreeSpace__fini(&array->data[i]);
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

ros2_interface__msg__FreeSpace__Sequence *
ros2_interface__msg__FreeSpace__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__FreeSpace__Sequence * array = (ros2_interface__msg__FreeSpace__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__FreeSpace__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__FreeSpace__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__FreeSpace__Sequence__destroy(ros2_interface__msg__FreeSpace__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__FreeSpace__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__FreeSpace__Sequence__are_equal(const ros2_interface__msg__FreeSpace__Sequence * lhs, const ros2_interface__msg__FreeSpace__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__FreeSpace__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__FreeSpace__Sequence__copy(
  const ros2_interface__msg__FreeSpace__Sequence * input,
  ros2_interface__msg__FreeSpace__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__FreeSpace);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__FreeSpace * data =
      (ros2_interface__msg__FreeSpace *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__FreeSpace__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__FreeSpace__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__FreeSpace__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
