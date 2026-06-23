// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Uncertainty.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/uncertainty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position_std_dev`
// Member `orientation_std_dev`
// Member `linear_velocity_std_dev`
// Member `linear_acceleration_std_dev`
// Member `angular_velocity_std_dev`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__Uncertainty__init(ros2_interface__msg__Uncertainty * msg)
{
  if (!msg) {
    return false;
  }
  // position_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->position_std_dev)) {
    ros2_interface__msg__Uncertainty__fini(msg);
    return false;
  }
  // orientation_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->orientation_std_dev)) {
    ros2_interface__msg__Uncertainty__fini(msg);
    return false;
  }
  // linear_velocity_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->linear_velocity_std_dev)) {
    ros2_interface__msg__Uncertainty__fini(msg);
    return false;
  }
  // linear_acceleration_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->linear_acceleration_std_dev)) {
    ros2_interface__msg__Uncertainty__fini(msg);
    return false;
  }
  // angular_velocity_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->angular_velocity_std_dev)) {
    ros2_interface__msg__Uncertainty__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__Uncertainty__fini(ros2_interface__msg__Uncertainty * msg)
{
  if (!msg) {
    return;
  }
  // position_std_dev
  ros2_interface__msg__Point3D__fini(&msg->position_std_dev);
  // orientation_std_dev
  ros2_interface__msg__Point3D__fini(&msg->orientation_std_dev);
  // linear_velocity_std_dev
  ros2_interface__msg__Point3D__fini(&msg->linear_velocity_std_dev);
  // linear_acceleration_std_dev
  ros2_interface__msg__Point3D__fini(&msg->linear_acceleration_std_dev);
  // angular_velocity_std_dev
  ros2_interface__msg__Point3D__fini(&msg->angular_velocity_std_dev);
}

bool
ros2_interface__msg__Uncertainty__are_equal(const ros2_interface__msg__Uncertainty * lhs, const ros2_interface__msg__Uncertainty * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->position_std_dev), &(rhs->position_std_dev)))
  {
    return false;
  }
  // orientation_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->orientation_std_dev), &(rhs->orientation_std_dev)))
  {
    return false;
  }
  // linear_velocity_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->linear_velocity_std_dev), &(rhs->linear_velocity_std_dev)))
  {
    return false;
  }
  // linear_acceleration_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->linear_acceleration_std_dev), &(rhs->linear_acceleration_std_dev)))
  {
    return false;
  }
  // angular_velocity_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->angular_velocity_std_dev), &(rhs->angular_velocity_std_dev)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Uncertainty__copy(
  const ros2_interface__msg__Uncertainty * input,
  ros2_interface__msg__Uncertainty * output)
{
  if (!input || !output) {
    return false;
  }
  // position_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->position_std_dev), &(output->position_std_dev)))
  {
    return false;
  }
  // orientation_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->orientation_std_dev), &(output->orientation_std_dev)))
  {
    return false;
  }
  // linear_velocity_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->linear_velocity_std_dev), &(output->linear_velocity_std_dev)))
  {
    return false;
  }
  // linear_acceleration_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->linear_acceleration_std_dev), &(output->linear_acceleration_std_dev)))
  {
    return false;
  }
  // angular_velocity_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->angular_velocity_std_dev), &(output->angular_velocity_std_dev)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__Uncertainty *
ros2_interface__msg__Uncertainty__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Uncertainty * msg = (ros2_interface__msg__Uncertainty *)allocator.allocate(sizeof(ros2_interface__msg__Uncertainty), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Uncertainty));
  bool success = ros2_interface__msg__Uncertainty__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Uncertainty__destroy(ros2_interface__msg__Uncertainty * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Uncertainty__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Uncertainty__Sequence__init(ros2_interface__msg__Uncertainty__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Uncertainty * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Uncertainty *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Uncertainty), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Uncertainty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Uncertainty__fini(&data[i - 1]);
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
ros2_interface__msg__Uncertainty__Sequence__fini(ros2_interface__msg__Uncertainty__Sequence * array)
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
      ros2_interface__msg__Uncertainty__fini(&array->data[i]);
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

ros2_interface__msg__Uncertainty__Sequence *
ros2_interface__msg__Uncertainty__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Uncertainty__Sequence * array = (ros2_interface__msg__Uncertainty__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Uncertainty__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Uncertainty__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Uncertainty__Sequence__destroy(ros2_interface__msg__Uncertainty__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Uncertainty__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Uncertainty__Sequence__are_equal(const ros2_interface__msg__Uncertainty__Sequence * lhs, const ros2_interface__msg__Uncertainty__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Uncertainty__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Uncertainty__Sequence__copy(
  const ros2_interface__msg__Uncertainty__Sequence * input,
  ros2_interface__msg__Uncertainty__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Uncertainty);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Uncertainty * data =
      (ros2_interface__msg__Uncertainty *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Uncertainty__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Uncertainty__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Uncertainty__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
