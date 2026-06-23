// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/HMIParkingInfoList.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/hmi_parking_info_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `parking_info`
#include "ros2_interface/msg/detail/hmi_parking_info__functions.h"

bool
ros2_interface__msg__HMIParkingInfoList__init(ros2_interface__msg__HMIParkingInfoList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__HMIParkingInfoList__fini(msg);
    return false;
  }
  // parking_info
  if (!ros2_interface__msg__HMIParkingInfo__Sequence__init(&msg->parking_info, 0)) {
    ros2_interface__msg__HMIParkingInfoList__fini(msg);
    return false;
  }
  // parking_out_enable
  // parking_out_direction
  // parking_out_id
  return true;
}

void
ros2_interface__msg__HMIParkingInfoList__fini(ros2_interface__msg__HMIParkingInfoList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // parking_info
  ros2_interface__msg__HMIParkingInfo__Sequence__fini(&msg->parking_info);
  // parking_out_enable
  // parking_out_direction
  // parking_out_id
}

bool
ros2_interface__msg__HMIParkingInfoList__are_equal(const ros2_interface__msg__HMIParkingInfoList * lhs, const ros2_interface__msg__HMIParkingInfoList * rhs)
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
  if (!ros2_interface__msg__HMIParkingInfo__Sequence__are_equal(
      &(lhs->parking_info), &(rhs->parking_info)))
  {
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
ros2_interface__msg__HMIParkingInfoList__copy(
  const ros2_interface__msg__HMIParkingInfoList * input,
  ros2_interface__msg__HMIParkingInfoList * output)
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
  if (!ros2_interface__msg__HMIParkingInfo__Sequence__copy(
      &(input->parking_info), &(output->parking_info)))
  {
    return false;
  }
  // parking_out_enable
  output->parking_out_enable = input->parking_out_enable;
  // parking_out_direction
  output->parking_out_direction = input->parking_out_direction;
  // parking_out_id
  output->parking_out_id = input->parking_out_id;
  return true;
}

ros2_interface__msg__HMIParkingInfoList *
ros2_interface__msg__HMIParkingInfoList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIParkingInfoList * msg = (ros2_interface__msg__HMIParkingInfoList *)allocator.allocate(sizeof(ros2_interface__msg__HMIParkingInfoList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__HMIParkingInfoList));
  bool success = ros2_interface__msg__HMIParkingInfoList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__HMIParkingInfoList__destroy(ros2_interface__msg__HMIParkingInfoList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__HMIParkingInfoList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__HMIParkingInfoList__Sequence__init(ros2_interface__msg__HMIParkingInfoList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIParkingInfoList * data = NULL;

  if (size) {
    data = (ros2_interface__msg__HMIParkingInfoList *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__HMIParkingInfoList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__HMIParkingInfoList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__HMIParkingInfoList__fini(&data[i - 1]);
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
ros2_interface__msg__HMIParkingInfoList__Sequence__fini(ros2_interface__msg__HMIParkingInfoList__Sequence * array)
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
      ros2_interface__msg__HMIParkingInfoList__fini(&array->data[i]);
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

ros2_interface__msg__HMIParkingInfoList__Sequence *
ros2_interface__msg__HMIParkingInfoList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIParkingInfoList__Sequence * array = (ros2_interface__msg__HMIParkingInfoList__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__HMIParkingInfoList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__HMIParkingInfoList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__HMIParkingInfoList__Sequence__destroy(ros2_interface__msg__HMIParkingInfoList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__HMIParkingInfoList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__HMIParkingInfoList__Sequence__are_equal(const ros2_interface__msg__HMIParkingInfoList__Sequence * lhs, const ros2_interface__msg__HMIParkingInfoList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__HMIParkingInfoList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__HMIParkingInfoList__Sequence__copy(
  const ros2_interface__msg__HMIParkingInfoList__Sequence * input,
  ros2_interface__msg__HMIParkingInfoList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__HMIParkingInfoList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__HMIParkingInfoList * data =
      (ros2_interface__msg__HMIParkingInfoList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__HMIParkingInfoList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__HMIParkingInfoList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__HMIParkingInfoList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
