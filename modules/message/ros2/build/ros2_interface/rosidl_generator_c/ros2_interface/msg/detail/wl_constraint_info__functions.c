// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/WLConstraintInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/wl_constraint_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vehicle_point1`
// Member `vehicle_point2`
// Member `abs_point1`
// Member `abs_point2`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__WLConstraintInfo__init(ros2_interface__msg__WLConstraintInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__WLConstraintInfo__fini(msg);
    return false;
  }
  // id
  // vehicle_point1
  if (!ros2_interface__msg__Point3D__init(&msg->vehicle_point1)) {
    ros2_interface__msg__WLConstraintInfo__fini(msg);
    return false;
  }
  // vehicle_point2
  if (!ros2_interface__msg__Point3D__init(&msg->vehicle_point2)) {
    ros2_interface__msg__WLConstraintInfo__fini(msg);
    return false;
  }
  // abs_point1
  if (!ros2_interface__msg__Point3D__init(&msg->abs_point1)) {
    ros2_interface__msg__WLConstraintInfo__fini(msg);
    return false;
  }
  // abs_point2
  if (!ros2_interface__msg__Point3D__init(&msg->abs_point2)) {
    ros2_interface__msg__WLConstraintInfo__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__WLConstraintInfo__fini(ros2_interface__msg__WLConstraintInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // vehicle_point1
  ros2_interface__msg__Point3D__fini(&msg->vehicle_point1);
  // vehicle_point2
  ros2_interface__msg__Point3D__fini(&msg->vehicle_point2);
  // abs_point1
  ros2_interface__msg__Point3D__fini(&msg->abs_point1);
  // abs_point2
  ros2_interface__msg__Point3D__fini(&msg->abs_point2);
}

bool
ros2_interface__msg__WLConstraintInfo__are_equal(const ros2_interface__msg__WLConstraintInfo * lhs, const ros2_interface__msg__WLConstraintInfo * rhs)
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
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // vehicle_point1
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->vehicle_point1), &(rhs->vehicle_point1)))
  {
    return false;
  }
  // vehicle_point2
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->vehicle_point2), &(rhs->vehicle_point2)))
  {
    return false;
  }
  // abs_point1
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->abs_point1), &(rhs->abs_point1)))
  {
    return false;
  }
  // abs_point2
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->abs_point2), &(rhs->abs_point2)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__WLConstraintInfo__copy(
  const ros2_interface__msg__WLConstraintInfo * input,
  ros2_interface__msg__WLConstraintInfo * output)
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
  // id
  output->id = input->id;
  // vehicle_point1
  if (!ros2_interface__msg__Point3D__copy(
      &(input->vehicle_point1), &(output->vehicle_point1)))
  {
    return false;
  }
  // vehicle_point2
  if (!ros2_interface__msg__Point3D__copy(
      &(input->vehicle_point2), &(output->vehicle_point2)))
  {
    return false;
  }
  // abs_point1
  if (!ros2_interface__msg__Point3D__copy(
      &(input->abs_point1), &(output->abs_point1)))
  {
    return false;
  }
  // abs_point2
  if (!ros2_interface__msg__Point3D__copy(
      &(input->abs_point2), &(output->abs_point2)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__WLConstraintInfo *
ros2_interface__msg__WLConstraintInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__WLConstraintInfo * msg = (ros2_interface__msg__WLConstraintInfo *)allocator.allocate(sizeof(ros2_interface__msg__WLConstraintInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__WLConstraintInfo));
  bool success = ros2_interface__msg__WLConstraintInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__WLConstraintInfo__destroy(ros2_interface__msg__WLConstraintInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__WLConstraintInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__WLConstraintInfo__Sequence__init(ros2_interface__msg__WLConstraintInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__WLConstraintInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__WLConstraintInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__WLConstraintInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__WLConstraintInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__WLConstraintInfo__fini(&data[i - 1]);
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
ros2_interface__msg__WLConstraintInfo__Sequence__fini(ros2_interface__msg__WLConstraintInfo__Sequence * array)
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
      ros2_interface__msg__WLConstraintInfo__fini(&array->data[i]);
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

ros2_interface__msg__WLConstraintInfo__Sequence *
ros2_interface__msg__WLConstraintInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__WLConstraintInfo__Sequence * array = (ros2_interface__msg__WLConstraintInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__WLConstraintInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__WLConstraintInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__WLConstraintInfo__Sequence__destroy(ros2_interface__msg__WLConstraintInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__WLConstraintInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__WLConstraintInfo__Sequence__are_equal(const ros2_interface__msg__WLConstraintInfo__Sequence * lhs, const ros2_interface__msg__WLConstraintInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__WLConstraintInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__WLConstraintInfo__Sequence__copy(
  const ros2_interface__msg__WLConstraintInfo__Sequence * input,
  ros2_interface__msg__WLConstraintInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__WLConstraintInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__WLConstraintInfo * data =
      (ros2_interface__msg__WLConstraintInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__WLConstraintInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__WLConstraintInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__WLConstraintInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
