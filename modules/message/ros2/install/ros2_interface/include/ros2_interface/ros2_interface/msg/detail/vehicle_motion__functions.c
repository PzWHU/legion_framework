// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/VehicleMotion.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `vehicle_motion_point`
#include "ros2_interface/msg/detail/vehicle_motion_point__functions.h"

bool
ros2_interface__msg__VehicleMotion__init(ros2_interface__msg__VehicleMotion * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros2_interface__msg__VehicleMotion__fini(msg);
    return false;
  }
  // vehicle_motion_point
  if (!ros2_interface__msg__VehicleMotionPoint__Sequence__init(&msg->vehicle_motion_point, 0)) {
    ros2_interface__msg__VehicleMotion__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__VehicleMotion__fini(ros2_interface__msg__VehicleMotion * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // vehicle_motion_point
  ros2_interface__msg__VehicleMotionPoint__Sequence__fini(&msg->vehicle_motion_point);
}

bool
ros2_interface__msg__VehicleMotion__are_equal(const ros2_interface__msg__VehicleMotion * lhs, const ros2_interface__msg__VehicleMotion * rhs)
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
  // vehicle_motion_point
  if (!ros2_interface__msg__VehicleMotionPoint__Sequence__are_equal(
      &(lhs->vehicle_motion_point), &(rhs->vehicle_motion_point)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__VehicleMotion__copy(
  const ros2_interface__msg__VehicleMotion * input,
  ros2_interface__msg__VehicleMotion * output)
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
  // vehicle_motion_point
  if (!ros2_interface__msg__VehicleMotionPoint__Sequence__copy(
      &(input->vehicle_motion_point), &(output->vehicle_motion_point)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__VehicleMotion *
ros2_interface__msg__VehicleMotion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleMotion * msg = (ros2_interface__msg__VehicleMotion *)allocator.allocate(sizeof(ros2_interface__msg__VehicleMotion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__VehicleMotion));
  bool success = ros2_interface__msg__VehicleMotion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__VehicleMotion__destroy(ros2_interface__msg__VehicleMotion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__VehicleMotion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__VehicleMotion__Sequence__init(ros2_interface__msg__VehicleMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleMotion * data = NULL;

  if (size) {
    data = (ros2_interface__msg__VehicleMotion *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__VehicleMotion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__VehicleMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__VehicleMotion__fini(&data[i - 1]);
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
ros2_interface__msg__VehicleMotion__Sequence__fini(ros2_interface__msg__VehicleMotion__Sequence * array)
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
      ros2_interface__msg__VehicleMotion__fini(&array->data[i]);
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

ros2_interface__msg__VehicleMotion__Sequence *
ros2_interface__msg__VehicleMotion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleMotion__Sequence * array = (ros2_interface__msg__VehicleMotion__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__VehicleMotion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__VehicleMotion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__VehicleMotion__Sequence__destroy(ros2_interface__msg__VehicleMotion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__VehicleMotion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__VehicleMotion__Sequence__are_equal(const ros2_interface__msg__VehicleMotion__Sequence * lhs, const ros2_interface__msg__VehicleMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__VehicleMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__VehicleMotion__Sequence__copy(
  const ros2_interface__msg__VehicleMotion__Sequence * input,
  ros2_interface__msg__VehicleMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__VehicleMotion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__VehicleMotion * data =
      (ros2_interface__msg__VehicleMotion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__VehicleMotion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__VehicleMotion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__VehicleMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
