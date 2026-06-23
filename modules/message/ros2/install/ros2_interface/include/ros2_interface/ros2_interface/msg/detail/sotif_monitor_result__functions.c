// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/SotifMonitorResult.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/sotif_monitor_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `region_value`
#include "ros2_interface/msg/detail/region__functions.h"
// Member `grid_map`
#include "ros2_interface/msg/detail/grid__functions.h"

bool
ros2_interface__msg__SotifMonitorResult__init(ros2_interface__msg__SotifMonitorResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__SotifMonitorResult__fini(msg);
    return false;
  }
  // region_value
  if (!ros2_interface__msg__Region__Sequence__init(&msg->region_value, 0)) {
    ros2_interface__msg__SotifMonitorResult__fini(msg);
    return false;
  }
  // grid_map
  if (!ros2_interface__msg__Grid__Sequence__init(&msg->grid_map, 0)) {
    ros2_interface__msg__SotifMonitorResult__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__SotifMonitorResult__fini(ros2_interface__msg__SotifMonitorResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // region_value
  ros2_interface__msg__Region__Sequence__fini(&msg->region_value);
  // grid_map
  ros2_interface__msg__Grid__Sequence__fini(&msg->grid_map);
}

bool
ros2_interface__msg__SotifMonitorResult__are_equal(const ros2_interface__msg__SotifMonitorResult * lhs, const ros2_interface__msg__SotifMonitorResult * rhs)
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
  // region_value
  if (!ros2_interface__msg__Region__Sequence__are_equal(
      &(lhs->region_value), &(rhs->region_value)))
  {
    return false;
  }
  // grid_map
  if (!ros2_interface__msg__Grid__Sequence__are_equal(
      &(lhs->grid_map), &(rhs->grid_map)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__SotifMonitorResult__copy(
  const ros2_interface__msg__SotifMonitorResult * input,
  ros2_interface__msg__SotifMonitorResult * output)
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
  // region_value
  if (!ros2_interface__msg__Region__Sequence__copy(
      &(input->region_value), &(output->region_value)))
  {
    return false;
  }
  // grid_map
  if (!ros2_interface__msg__Grid__Sequence__copy(
      &(input->grid_map), &(output->grid_map)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__SotifMonitorResult *
ros2_interface__msg__SotifMonitorResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SotifMonitorResult * msg = (ros2_interface__msg__SotifMonitorResult *)allocator.allocate(sizeof(ros2_interface__msg__SotifMonitorResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__SotifMonitorResult));
  bool success = ros2_interface__msg__SotifMonitorResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__SotifMonitorResult__destroy(ros2_interface__msg__SotifMonitorResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__SotifMonitorResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__SotifMonitorResult__Sequence__init(ros2_interface__msg__SotifMonitorResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SotifMonitorResult * data = NULL;

  if (size) {
    data = (ros2_interface__msg__SotifMonitorResult *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__SotifMonitorResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__SotifMonitorResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__SotifMonitorResult__fini(&data[i - 1]);
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
ros2_interface__msg__SotifMonitorResult__Sequence__fini(ros2_interface__msg__SotifMonitorResult__Sequence * array)
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
      ros2_interface__msg__SotifMonitorResult__fini(&array->data[i]);
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

ros2_interface__msg__SotifMonitorResult__Sequence *
ros2_interface__msg__SotifMonitorResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SotifMonitorResult__Sequence * array = (ros2_interface__msg__SotifMonitorResult__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__SotifMonitorResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__SotifMonitorResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__SotifMonitorResult__Sequence__destroy(ros2_interface__msg__SotifMonitorResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__SotifMonitorResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__SotifMonitorResult__Sequence__are_equal(const ros2_interface__msg__SotifMonitorResult__Sequence * lhs, const ros2_interface__msg__SotifMonitorResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__SotifMonitorResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__SotifMonitorResult__Sequence__copy(
  const ros2_interface__msg__SotifMonitorResult__Sequence * input,
  ros2_interface__msg__SotifMonitorResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__SotifMonitorResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__SotifMonitorResult * data =
      (ros2_interface__msg__SotifMonitorResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__SotifMonitorResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__SotifMonitorResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__SotifMonitorResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
