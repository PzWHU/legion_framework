// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Odometry.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/odometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "ros2_interface/msg/detail/point_enu__functions.h"
// Member `orientation`
#include "ros2_interface/msg/detail/quaternion__functions.h"
// Member `covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros2_interface__msg__Odometry__init(ros2_interface__msg__Odometry * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__Odometry__fini(msg);
    return false;
  }
  // position
  if (!ros2_interface__msg__PointENU__init(&msg->position)) {
    ros2_interface__msg__Odometry__fini(msg);
    return false;
  }
  // orientation
  if (!ros2_interface__msg__Quaternion__init(&msg->orientation)) {
    ros2_interface__msg__Odometry__fini(msg);
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->covariance, 0)) {
    ros2_interface__msg__Odometry__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__Odometry__fini(ros2_interface__msg__Odometry * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  ros2_interface__msg__PointENU__fini(&msg->position);
  // orientation
  ros2_interface__msg__Quaternion__fini(&msg->orientation);
  // covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->covariance);
}

bool
ros2_interface__msg__Odometry__are_equal(const ros2_interface__msg__Odometry * lhs, const ros2_interface__msg__Odometry * rhs)
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
  // position
  if (!ros2_interface__msg__PointENU__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!ros2_interface__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->covariance), &(rhs->covariance)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Odometry__copy(
  const ros2_interface__msg__Odometry * input,
  ros2_interface__msg__Odometry * output)
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
  // position
  if (!ros2_interface__msg__PointENU__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!ros2_interface__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->covariance), &(output->covariance)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__Odometry *
ros2_interface__msg__Odometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Odometry * msg = (ros2_interface__msg__Odometry *)allocator.allocate(sizeof(ros2_interface__msg__Odometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Odometry));
  bool success = ros2_interface__msg__Odometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Odometry__destroy(ros2_interface__msg__Odometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Odometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Odometry__Sequence__init(ros2_interface__msg__Odometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Odometry * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Odometry *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Odometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Odometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Odometry__fini(&data[i - 1]);
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
ros2_interface__msg__Odometry__Sequence__fini(ros2_interface__msg__Odometry__Sequence * array)
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
      ros2_interface__msg__Odometry__fini(&array->data[i]);
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

ros2_interface__msg__Odometry__Sequence *
ros2_interface__msg__Odometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Odometry__Sequence * array = (ros2_interface__msg__Odometry__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Odometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Odometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Odometry__Sequence__destroy(ros2_interface__msg__Odometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Odometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Odometry__Sequence__are_equal(const ros2_interface__msg__Odometry__Sequence * lhs, const ros2_interface__msg__Odometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Odometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Odometry__Sequence__copy(
  const ros2_interface__msg__Odometry__Sequence * input,
  ros2_interface__msg__Odometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Odometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Odometry * data =
      (ros2_interface__msg__Odometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Odometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Odometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Odometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
