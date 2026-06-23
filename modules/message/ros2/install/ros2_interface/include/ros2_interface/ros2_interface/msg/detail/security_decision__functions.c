// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/SecurityDecision.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/security_decision__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `warning_command`
#include "ros2_interface/msg/detail/warning_command__functions.h"
// Member `trajectory_limit_command`
#include "ros2_interface/msg/detail/trajectory_limit_command__functions.h"

bool
ros2_interface__msg__SecurityDecision__init(ros2_interface__msg__SecurityDecision * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__SecurityDecision__fini(msg);
    return false;
  }
  // warning_command
  if (!ros2_interface__msg__WarningCommand__init(&msg->warning_command)) {
    ros2_interface__msg__SecurityDecision__fini(msg);
    return false;
  }
  // brake_report
  // change_lane_command
  // trajectory_limit_command
  if (!ros2_interface__msg__TrajectoryLimitCommand__init(&msg->trajectory_limit_command)) {
    ros2_interface__msg__SecurityDecision__fini(msg);
    return false;
  }
  // park_command
  // drivingmode_report
  return true;
}

void
ros2_interface__msg__SecurityDecision__fini(ros2_interface__msg__SecurityDecision * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // warning_command
  ros2_interface__msg__WarningCommand__fini(&msg->warning_command);
  // brake_report
  // change_lane_command
  // trajectory_limit_command
  ros2_interface__msg__TrajectoryLimitCommand__fini(&msg->trajectory_limit_command);
  // park_command
  // drivingmode_report
}

bool
ros2_interface__msg__SecurityDecision__are_equal(const ros2_interface__msg__SecurityDecision * lhs, const ros2_interface__msg__SecurityDecision * rhs)
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
  // warning_command
  if (!ros2_interface__msg__WarningCommand__are_equal(
      &(lhs->warning_command), &(rhs->warning_command)))
  {
    return false;
  }
  // brake_report
  if (lhs->brake_report != rhs->brake_report) {
    return false;
  }
  // change_lane_command
  if (lhs->change_lane_command != rhs->change_lane_command) {
    return false;
  }
  // trajectory_limit_command
  if (!ros2_interface__msg__TrajectoryLimitCommand__are_equal(
      &(lhs->trajectory_limit_command), &(rhs->trajectory_limit_command)))
  {
    return false;
  }
  // park_command
  if (lhs->park_command != rhs->park_command) {
    return false;
  }
  // drivingmode_report
  if (lhs->drivingmode_report != rhs->drivingmode_report) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__SecurityDecision__copy(
  const ros2_interface__msg__SecurityDecision * input,
  ros2_interface__msg__SecurityDecision * output)
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
  // warning_command
  if (!ros2_interface__msg__WarningCommand__copy(
      &(input->warning_command), &(output->warning_command)))
  {
    return false;
  }
  // brake_report
  output->brake_report = input->brake_report;
  // change_lane_command
  output->change_lane_command = input->change_lane_command;
  // trajectory_limit_command
  if (!ros2_interface__msg__TrajectoryLimitCommand__copy(
      &(input->trajectory_limit_command), &(output->trajectory_limit_command)))
  {
    return false;
  }
  // park_command
  output->park_command = input->park_command;
  // drivingmode_report
  output->drivingmode_report = input->drivingmode_report;
  return true;
}

ros2_interface__msg__SecurityDecision *
ros2_interface__msg__SecurityDecision__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SecurityDecision * msg = (ros2_interface__msg__SecurityDecision *)allocator.allocate(sizeof(ros2_interface__msg__SecurityDecision), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__SecurityDecision));
  bool success = ros2_interface__msg__SecurityDecision__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__SecurityDecision__destroy(ros2_interface__msg__SecurityDecision * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__SecurityDecision__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__SecurityDecision__Sequence__init(ros2_interface__msg__SecurityDecision__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SecurityDecision * data = NULL;

  if (size) {
    data = (ros2_interface__msg__SecurityDecision *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__SecurityDecision), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__SecurityDecision__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__SecurityDecision__fini(&data[i - 1]);
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
ros2_interface__msg__SecurityDecision__Sequence__fini(ros2_interface__msg__SecurityDecision__Sequence * array)
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
      ros2_interface__msg__SecurityDecision__fini(&array->data[i]);
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

ros2_interface__msg__SecurityDecision__Sequence *
ros2_interface__msg__SecurityDecision__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__SecurityDecision__Sequence * array = (ros2_interface__msg__SecurityDecision__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__SecurityDecision__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__SecurityDecision__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__SecurityDecision__Sequence__destroy(ros2_interface__msg__SecurityDecision__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__SecurityDecision__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__SecurityDecision__Sequence__are_equal(const ros2_interface__msg__SecurityDecision__Sequence * lhs, const ros2_interface__msg__SecurityDecision__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__SecurityDecision__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__SecurityDecision__Sequence__copy(
  const ros2_interface__msg__SecurityDecision__Sequence * input,
  ros2_interface__msg__SecurityDecision__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__SecurityDecision);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__SecurityDecision * data =
      (ros2_interface__msg__SecurityDecision *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__SecurityDecision__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__SecurityDecision__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__SecurityDecision__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
