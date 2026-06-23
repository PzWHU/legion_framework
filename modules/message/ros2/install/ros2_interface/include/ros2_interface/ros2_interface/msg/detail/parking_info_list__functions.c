// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ParkingInfoList.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/parking_info_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `parking_info`
#include "ros2_interface/msg/detail/parking_info__functions.h"

bool
ros2_interface__msg__ParkingInfoList__init(ros2_interface__msg__ParkingInfoList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__ParkingInfoList__fini(msg);
    return false;
  }
  // parking_info
  if (!ros2_interface__msg__ParkingInfo__Sequence__init(&msg->parking_info, 0)) {
    ros2_interface__msg__ParkingInfoList__fini(msg);
    return false;
  }
  // error_code
  // is_valid
  // parking_out_enable
  // parking_out_direction
  // parking_out_id
  return true;
}

void
ros2_interface__msg__ParkingInfoList__fini(ros2_interface__msg__ParkingInfoList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // parking_info
  ros2_interface__msg__ParkingInfo__Sequence__fini(&msg->parking_info);
  // error_code
  // is_valid
  // parking_out_enable
  // parking_out_direction
  // parking_out_id
}

bool
ros2_interface__msg__ParkingInfoList__are_equal(const ros2_interface__msg__ParkingInfoList * lhs, const ros2_interface__msg__ParkingInfoList * rhs)
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
  // parking_info
  if (!ros2_interface__msg__ParkingInfo__Sequence__are_equal(
      &(lhs->parking_info), &(rhs->parking_info)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // parking_out_enable
  if (lhs->parking_out_enable != rhs->parking_out_enable) {
    return false;
  }
  // parking_out_direction
  if (lhs->parking_out_direction != rhs->parking_out_direction) {
    return false;
  }
  // parking_out_id
  if (lhs->parking_out_id != rhs->parking_out_id) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ParkingInfoList__copy(
  const ros2_interface__msg__ParkingInfoList * input,
  ros2_interface__msg__ParkingInfoList * output)
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
  // parking_info
  if (!ros2_interface__msg__ParkingInfo__Sequence__copy(
      &(input->parking_info), &(output->parking_info)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // is_valid
  output->is_valid = input->is_valid;
  // parking_out_enable
  output->parking_out_enable = input->parking_out_enable;
  // parking_out_direction
  output->parking_out_direction = input->parking_out_direction;
  // parking_out_id
  output->parking_out_id = input->parking_out_id;
  return true;
}

ros2_interface__msg__ParkingInfoList *
ros2_interface__msg__ParkingInfoList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingInfoList * msg = (ros2_interface__msg__ParkingInfoList *)allocator.allocate(sizeof(ros2_interface__msg__ParkingInfoList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ParkingInfoList));
  bool success = ros2_interface__msg__ParkingInfoList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ParkingInfoList__destroy(ros2_interface__msg__ParkingInfoList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ParkingInfoList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ParkingInfoList__Sequence__init(ros2_interface__msg__ParkingInfoList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingInfoList * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ParkingInfoList *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ParkingInfoList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ParkingInfoList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ParkingInfoList__fini(&data[i - 1]);
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
ros2_interface__msg__ParkingInfoList__Sequence__fini(ros2_interface__msg__ParkingInfoList__Sequence * array)
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
      ros2_interface__msg__ParkingInfoList__fini(&array->data[i]);
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

ros2_interface__msg__ParkingInfoList__Sequence *
ros2_interface__msg__ParkingInfoList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingInfoList__Sequence * array = (ros2_interface__msg__ParkingInfoList__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ParkingInfoList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ParkingInfoList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ParkingInfoList__Sequence__destroy(ros2_interface__msg__ParkingInfoList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ParkingInfoList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ParkingInfoList__Sequence__are_equal(const ros2_interface__msg__ParkingInfoList__Sequence * lhs, const ros2_interface__msg__ParkingInfoList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ParkingInfoList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ParkingInfoList__Sequence__copy(
  const ros2_interface__msg__ParkingInfoList__Sequence * input,
  ros2_interface__msg__ParkingInfoList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ParkingInfoList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ParkingInfoList * data =
      (ros2_interface__msg__ParkingInfoList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ParkingInfoList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ParkingInfoList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ParkingInfoList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
