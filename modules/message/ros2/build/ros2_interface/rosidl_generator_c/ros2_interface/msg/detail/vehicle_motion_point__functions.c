// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/VehicleMotionPoint.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_motion_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory_point`
#include "ros2_interface/msg/detail/trajectory_point__functions.h"

bool
ros2_interface__msg__VehicleMotionPoint__init(ros2_interface__msg__VehicleMotionPoint * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory_point
  if (!ros2_interface__msg__TrajectoryPoint__init(&msg->trajectory_point)) {
    ros2_interface__msg__VehicleMotionPoint__fini(msg);
    return false;
  }
  // steer
  return true;
}

void
ros2_interface__msg__VehicleMotionPoint__fini(ros2_interface__msg__VehicleMotionPoint * msg)
{
  if (!msg) {
    return;
  }
  // trajectory_point
  ros2_interface__msg__TrajectoryPoint__fini(&msg->trajectory_point);
  // steer
}

bool
ros2_interface__msg__VehicleMotionPoint__are_equal(const ros2_interface__msg__VehicleMotionPoint * lhs, const ros2_interface__msg__VehicleMotionPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory_point
  if (!ros2_interface__msg__TrajectoryPoint__are_equal(
      &(lhs->trajectory_point), &(rhs->trajectory_point)))
  {
    return false;
  }
  // steer
  if (lhs->steer != rhs->steer) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__VehicleMotionPoint__copy(
  const ros2_interface__msg__VehicleMotionPoint * input,
  ros2_interface__msg__VehicleMotionPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory_point
  if (!ros2_interface__msg__TrajectoryPoint__copy(
      &(input->trajectory_point), &(output->trajectory_point)))
  {
    return false;
  }
  // steer
  output->steer = input->steer;
  return true;
}

ros2_interface__msg__VehicleMotionPoint *
ros2_interface__msg__VehicleMotionPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleMotionPoint * msg = (ros2_interface__msg__VehicleMotionPoint *)allocator.allocate(sizeof(ros2_interface__msg__VehicleMotionPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__VehicleMotionPoint));
  bool success = ros2_interface__msg__VehicleMotionPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__VehicleMotionPoint__destroy(ros2_interface__msg__VehicleMotionPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__VehicleMotionPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__VehicleMotionPoint__Sequence__init(ros2_interface__msg__VehicleMotionPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleMotionPoint * data = NULL;

  if (size) {
    data = (ros2_interface__msg__VehicleMotionPoint *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__VehicleMotionPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__VehicleMotionPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__VehicleMotionPoint__fini(&data[i - 1]);
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
ros2_interface__msg__VehicleMotionPoint__Sequence__fini(ros2_interface__msg__VehicleMotionPoint__Sequence * array)
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
      ros2_interface__msg__VehicleMotionPoint__fini(&array->data[i]);
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

ros2_interface__msg__VehicleMotionPoint__Sequence *
ros2_interface__msg__VehicleMotionPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleMotionPoint__Sequence * array = (ros2_interface__msg__VehicleMotionPoint__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__VehicleMotionPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__VehicleMotionPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__VehicleMotionPoint__Sequence__destroy(ros2_interface__msg__VehicleMotionPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__VehicleMotionPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__VehicleMotionPoint__Sequence__are_equal(const ros2_interface__msg__VehicleMotionPoint__Sequence * lhs, const ros2_interface__msg__VehicleMotionPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__VehicleMotionPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__VehicleMotionPoint__Sequence__copy(
  const ros2_interface__msg__VehicleMotionPoint__Sequence * input,
  ros2_interface__msg__VehicleMotionPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__VehicleMotionPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__VehicleMotionPoint * data =
      (ros2_interface__msg__VehicleMotionPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__VehicleMotionPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__VehicleMotionPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__VehicleMotionPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
