// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory_points`
#include "ros2_interface/msg/detail/trajectory_point__functions.h"

bool
ros2_interface__msg__Trajectory__init(ros2_interface__msg__Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros2_interface__msg__Trajectory__fini(msg);
    return false;
  }
  // trajectory_points
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&msg->trajectory_points, 0)) {
    ros2_interface__msg__Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__Trajectory__fini(ros2_interface__msg__Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // trajectory_points
  ros2_interface__msg__TrajectoryPoint__Sequence__fini(&msg->trajectory_points);
}

bool
ros2_interface__msg__Trajectory__are_equal(const ros2_interface__msg__Trajectory * lhs, const ros2_interface__msg__Trajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // trajectory_points
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->trajectory_points), &(rhs->trajectory_points)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Trajectory__copy(
  const ros2_interface__msg__Trajectory * input,
  ros2_interface__msg__Trajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // trajectory_points
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__copy(
      &(input->trajectory_points), &(output->trajectory_points)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__Trajectory *
ros2_interface__msg__Trajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Trajectory * msg = (ros2_interface__msg__Trajectory *)allocator.allocate(sizeof(ros2_interface__msg__Trajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Trajectory));
  bool success = ros2_interface__msg__Trajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Trajectory__destroy(ros2_interface__msg__Trajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Trajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Trajectory__Sequence__init(ros2_interface__msg__Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Trajectory * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Trajectory *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Trajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Trajectory__fini(&data[i - 1]);
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
ros2_interface__msg__Trajectory__Sequence__fini(ros2_interface__msg__Trajectory__Sequence * array)
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
      ros2_interface__msg__Trajectory__fini(&array->data[i]);
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

ros2_interface__msg__Trajectory__Sequence *
ros2_interface__msg__Trajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Trajectory__Sequence * array = (ros2_interface__msg__Trajectory__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Trajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Trajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Trajectory__Sequence__destroy(ros2_interface__msg__Trajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Trajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Trajectory__Sequence__are_equal(const ros2_interface__msg__Trajectory__Sequence * lhs, const ros2_interface__msg__Trajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Trajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Trajectory__Sequence__copy(
  const ros2_interface__msg__Trajectory__Sequence * input,
  ros2_interface__msg__Trajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Trajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Trajectory * data =
      (ros2_interface__msg__Trajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Trajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Trajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Trajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
