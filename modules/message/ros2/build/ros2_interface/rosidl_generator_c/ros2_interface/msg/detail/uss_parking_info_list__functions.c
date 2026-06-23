// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/UssParkingInfoList.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/uss_parking_info_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `uss_parking_info`
#include "ros2_interface/msg/detail/uss_parking_info__functions.h"

bool
ros2_interface__msg__UssParkingInfoList__init(ros2_interface__msg__UssParkingInfoList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__UssParkingInfoList__fini(msg);
    return false;
  }
  // uss_parking_info
  if (!ros2_interface__msg__UssParkingInfo__Sequence__init(&msg->uss_parking_info, 0)) {
    ros2_interface__msg__UssParkingInfoList__fini(msg);
    return false;
  }
  // error_code
  // is_valid
  return true;
}

void
ros2_interface__msg__UssParkingInfoList__fini(ros2_interface__msg__UssParkingInfoList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // uss_parking_info
  ros2_interface__msg__UssParkingInfo__Sequence__fini(&msg->uss_parking_info);
  // error_code
  // is_valid
}

bool
ros2_interface__msg__UssParkingInfoList__are_equal(const ros2_interface__msg__UssParkingInfoList * lhs, const ros2_interface__msg__UssParkingInfoList * rhs)
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
  // uss_parking_info
  if (!ros2_interface__msg__UssParkingInfo__Sequence__are_equal(
      &(lhs->uss_parking_info), &(rhs->uss_parking_info)))
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
  return true;
}

bool
ros2_interface__msg__UssParkingInfoList__copy(
  const ros2_interface__msg__UssParkingInfoList * input,
  ros2_interface__msg__UssParkingInfoList * output)
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
  // uss_parking_info
  if (!ros2_interface__msg__UssParkingInfo__Sequence__copy(
      &(input->uss_parking_info), &(output->uss_parking_info)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // is_valid
  output->is_valid = input->is_valid;
  return true;
}

ros2_interface__msg__UssParkingInfoList *
ros2_interface__msg__UssParkingInfoList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__UssParkingInfoList * msg = (ros2_interface__msg__UssParkingInfoList *)allocator.allocate(sizeof(ros2_interface__msg__UssParkingInfoList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__UssParkingInfoList));
  bool success = ros2_interface__msg__UssParkingInfoList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__UssParkingInfoList__destroy(ros2_interface__msg__UssParkingInfoList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__UssParkingInfoList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__UssParkingInfoList__Sequence__init(ros2_interface__msg__UssParkingInfoList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__UssParkingInfoList * data = NULL;

  if (size) {
    data = (ros2_interface__msg__UssParkingInfoList *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__UssParkingInfoList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__UssParkingInfoList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__UssParkingInfoList__fini(&data[i - 1]);
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
ros2_interface__msg__UssParkingInfoList__Sequence__fini(ros2_interface__msg__UssParkingInfoList__Sequence * array)
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
      ros2_interface__msg__UssParkingInfoList__fini(&array->data[i]);
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

ros2_interface__msg__UssParkingInfoList__Sequence *
ros2_interface__msg__UssParkingInfoList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__UssParkingInfoList__Sequence * array = (ros2_interface__msg__UssParkingInfoList__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__UssParkingInfoList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__UssParkingInfoList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__UssParkingInfoList__Sequence__destroy(ros2_interface__msg__UssParkingInfoList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__UssParkingInfoList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__UssParkingInfoList__Sequence__are_equal(const ros2_interface__msg__UssParkingInfoList__Sequence * lhs, const ros2_interface__msg__UssParkingInfoList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__UssParkingInfoList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__UssParkingInfoList__Sequence__copy(
  const ros2_interface__msg__UssParkingInfoList__Sequence * input,
  ros2_interface__msg__UssParkingInfoList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__UssParkingInfoList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__UssParkingInfoList * data =
      (ros2_interface__msg__UssParkingInfoList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__UssParkingInfoList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__UssParkingInfoList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__UssParkingInfoList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
