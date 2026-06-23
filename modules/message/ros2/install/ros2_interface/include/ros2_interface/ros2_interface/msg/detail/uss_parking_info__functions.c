// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/UssParkingInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/uss_parking_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `parking_point0`
// Member `parking_point1`
// Member `parking_point2`
// Member `parking_point3`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__UssParkingInfo__init(ros2_interface__msg__UssParkingInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__UssParkingInfo__fini(msg);
    return false;
  }
  // uss_parking_type
  // parking_point0
  if (!ros2_interface__msg__Point3D__init(&msg->parking_point0)) {
    ros2_interface__msg__UssParkingInfo__fini(msg);
    return false;
  }
  // parking_point1
  if (!ros2_interface__msg__Point3D__init(&msg->parking_point1)) {
    ros2_interface__msg__UssParkingInfo__fini(msg);
    return false;
  }
  // parking_point2
  if (!ros2_interface__msg__Point3D__init(&msg->parking_point2)) {
    ros2_interface__msg__UssParkingInfo__fini(msg);
    return false;
  }
  // parking_point3
  if (!ros2_interface__msg__Point3D__init(&msg->parking_point3)) {
    ros2_interface__msg__UssParkingInfo__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__UssParkingInfo__fini(ros2_interface__msg__UssParkingInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // uss_parking_type
  // parking_point0
  ros2_interface__msg__Point3D__fini(&msg->parking_point0);
  // parking_point1
  ros2_interface__msg__Point3D__fini(&msg->parking_point1);
  // parking_point2
  ros2_interface__msg__Point3D__fini(&msg->parking_point2);
  // parking_point3
  ros2_interface__msg__Point3D__fini(&msg->parking_point3);
}

bool
ros2_interface__msg__UssParkingInfo__are_equal(const ros2_interface__msg__UssParkingInfo * lhs, const ros2_interface__msg__UssParkingInfo * rhs)
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
  // uss_parking_type
  if (lhs->uss_parking_type != rhs->uss_parking_type) {
    return false;
  }
  // parking_point0
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->parking_point0), &(rhs->parking_point0)))
  {
    return false;
  }
  // parking_point1
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->parking_point1), &(rhs->parking_point1)))
  {
    return false;
  }
  // parking_point2
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->parking_point2), &(rhs->parking_point2)))
  {
    return false;
  }
  // parking_point3
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->parking_point3), &(rhs->parking_point3)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__UssParkingInfo__copy(
  const ros2_interface__msg__UssParkingInfo * input,
  ros2_interface__msg__UssParkingInfo * output)
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
  // uss_parking_type
  output->uss_parking_type = input->uss_parking_type;
  // parking_point0
  if (!ros2_interface__msg__Point3D__copy(
      &(input->parking_point0), &(output->parking_point0)))
  {
    return false;
  }
  // parking_point1
  if (!ros2_interface__msg__Point3D__copy(
      &(input->parking_point1), &(output->parking_point1)))
  {
    return false;
  }
  // parking_point2
  if (!ros2_interface__msg__Point3D__copy(
      &(input->parking_point2), &(output->parking_point2)))
  {
    return false;
  }
  // parking_point3
  if (!ros2_interface__msg__Point3D__copy(
      &(input->parking_point3), &(output->parking_point3)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__UssParkingInfo *
ros2_interface__msg__UssParkingInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__UssParkingInfo * msg = (ros2_interface__msg__UssParkingInfo *)allocator.allocate(sizeof(ros2_interface__msg__UssParkingInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__UssParkingInfo));
  bool success = ros2_interface__msg__UssParkingInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__UssParkingInfo__destroy(ros2_interface__msg__UssParkingInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__UssParkingInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__UssParkingInfo__Sequence__init(ros2_interface__msg__UssParkingInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__UssParkingInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__UssParkingInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__UssParkingInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__UssParkingInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__UssParkingInfo__fini(&data[i - 1]);
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
ros2_interface__msg__UssParkingInfo__Sequence__fini(ros2_interface__msg__UssParkingInfo__Sequence * array)
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
      ros2_interface__msg__UssParkingInfo__fini(&array->data[i]);
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

ros2_interface__msg__UssParkingInfo__Sequence *
ros2_interface__msg__UssParkingInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__UssParkingInfo__Sequence * array = (ros2_interface__msg__UssParkingInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__UssParkingInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__UssParkingInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__UssParkingInfo__Sequence__destroy(ros2_interface__msg__UssParkingInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__UssParkingInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__UssParkingInfo__Sequence__are_equal(const ros2_interface__msg__UssParkingInfo__Sequence * lhs, const ros2_interface__msg__UssParkingInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__UssParkingInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__UssParkingInfo__Sequence__copy(
  const ros2_interface__msg__UssParkingInfo__Sequence * input,
  ros2_interface__msg__UssParkingInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__UssParkingInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__UssParkingInfo * data =
      (ros2_interface__msg__UssParkingInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__UssParkingInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__UssParkingInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__UssParkingInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
