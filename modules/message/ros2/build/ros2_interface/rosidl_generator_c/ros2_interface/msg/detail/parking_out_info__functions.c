// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ParkingOutInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/parking_out_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `parking_out_point`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__ParkingOutInfo__init(ros2_interface__msg__ParkingOutInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__ParkingOutInfo__fini(msg);
    return false;
  }
  // parking_out_id
  // parking_direction_type
  // is_parking_out_enable
  // parking_out_point
  if (!ros2_interface__msg__Point3D__init(&msg->parking_out_point)) {
    ros2_interface__msg__ParkingOutInfo__fini(msg);
    return false;
  }
  // theta
  return true;
}

void
ros2_interface__msg__ParkingOutInfo__fini(ros2_interface__msg__ParkingOutInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // parking_out_id
  // parking_direction_type
  // is_parking_out_enable
  // parking_out_point
  ros2_interface__msg__Point3D__fini(&msg->parking_out_point);
  // theta
}

bool
ros2_interface__msg__ParkingOutInfo__are_equal(const ros2_interface__msg__ParkingOutInfo * lhs, const ros2_interface__msg__ParkingOutInfo * rhs)
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
  // parking_out_id
  if (lhs->parking_out_id != rhs->parking_out_id) {
    return false;
  }
  // parking_direction_type
  if (lhs->parking_direction_type != rhs->parking_direction_type) {
    return false;
  }
  // is_parking_out_enable
  if (lhs->is_parking_out_enable != rhs->is_parking_out_enable) {
    return false;
  }
  // parking_out_point
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->parking_out_point), &(rhs->parking_out_point)))
  {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ParkingOutInfo__copy(
  const ros2_interface__msg__ParkingOutInfo * input,
  ros2_interface__msg__ParkingOutInfo * output)
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
  // parking_out_id
  output->parking_out_id = input->parking_out_id;
  // parking_direction_type
  output->parking_direction_type = input->parking_direction_type;
  // is_parking_out_enable
  output->is_parking_out_enable = input->is_parking_out_enable;
  // parking_out_point
  if (!ros2_interface__msg__Point3D__copy(
      &(input->parking_out_point), &(output->parking_out_point)))
  {
    return false;
  }
  // theta
  output->theta = input->theta;
  return true;
}

ros2_interface__msg__ParkingOutInfo *
ros2_interface__msg__ParkingOutInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingOutInfo * msg = (ros2_interface__msg__ParkingOutInfo *)allocator.allocate(sizeof(ros2_interface__msg__ParkingOutInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ParkingOutInfo));
  bool success = ros2_interface__msg__ParkingOutInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ParkingOutInfo__destroy(ros2_interface__msg__ParkingOutInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ParkingOutInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ParkingOutInfo__Sequence__init(ros2_interface__msg__ParkingOutInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingOutInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ParkingOutInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ParkingOutInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ParkingOutInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ParkingOutInfo__fini(&data[i - 1]);
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
ros2_interface__msg__ParkingOutInfo__Sequence__fini(ros2_interface__msg__ParkingOutInfo__Sequence * array)
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
      ros2_interface__msg__ParkingOutInfo__fini(&array->data[i]);
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

ros2_interface__msg__ParkingOutInfo__Sequence *
ros2_interface__msg__ParkingOutInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingOutInfo__Sequence * array = (ros2_interface__msg__ParkingOutInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ParkingOutInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ParkingOutInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ParkingOutInfo__Sequence__destroy(ros2_interface__msg__ParkingOutInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ParkingOutInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ParkingOutInfo__Sequence__are_equal(const ros2_interface__msg__ParkingOutInfo__Sequence * lhs, const ros2_interface__msg__ParkingOutInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ParkingOutInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ParkingOutInfo__Sequence__copy(
  const ros2_interface__msg__ParkingOutInfo__Sequence * input,
  ros2_interface__msg__ParkingOutInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ParkingOutInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ParkingOutInfo * data =
      (ros2_interface__msg__ParkingOutInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ParkingOutInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ParkingOutInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ParkingOutInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
