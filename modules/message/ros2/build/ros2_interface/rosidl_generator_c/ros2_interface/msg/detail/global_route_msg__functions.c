// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/GlobalRouteMsg.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/global_route_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `route`
// Member `current_lanelet`
// Member `cur_slice`
#include "ros2_interface/msg/detail/lanelet_info__functions.h"

bool
ros2_interface__msg__GlobalRouteMsg__init(ros2_interface__msg__GlobalRouteMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__GlobalRouteMsg__fini(msg);
    return false;
  }
  // route
  if (!ros2_interface__msg__LaneletInfo__Sequence__init(&msg->route, 0)) {
    ros2_interface__msg__GlobalRouteMsg__fini(msg);
    return false;
  }
  // current_lanelet
  if (!ros2_interface__msg__LaneletInfo__init(&msg->current_lanelet)) {
    ros2_interface__msg__GlobalRouteMsg__fini(msg);
    return false;
  }
  // total_mileage
  // cur_mileage
  // cur_slice
  if (!ros2_interface__msg__LaneletInfo__Sequence__init(&msg->cur_slice, 0)) {
    ros2_interface__msg__GlobalRouteMsg__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__GlobalRouteMsg__fini(ros2_interface__msg__GlobalRouteMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // route
  ros2_interface__msg__LaneletInfo__Sequence__fini(&msg->route);
  // current_lanelet
  ros2_interface__msg__LaneletInfo__fini(&msg->current_lanelet);
  // total_mileage
  // cur_mileage
  // cur_slice
  ros2_interface__msg__LaneletInfo__Sequence__fini(&msg->cur_slice);
}

bool
ros2_interface__msg__GlobalRouteMsg__are_equal(const ros2_interface__msg__GlobalRouteMsg * lhs, const ros2_interface__msg__GlobalRouteMsg * rhs)
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
  // route
  if (!ros2_interface__msg__LaneletInfo__Sequence__are_equal(
      &(lhs->route), &(rhs->route)))
  {
    return false;
  }
  // current_lanelet
  if (!ros2_interface__msg__LaneletInfo__are_equal(
      &(lhs->current_lanelet), &(rhs->current_lanelet)))
  {
    return false;
  }
  // total_mileage
  if (lhs->total_mileage != rhs->total_mileage) {
    return false;
  }
  // cur_mileage
  if (lhs->cur_mileage != rhs->cur_mileage) {
    return false;
  }
  // cur_slice
  if (!ros2_interface__msg__LaneletInfo__Sequence__are_equal(
      &(lhs->cur_slice), &(rhs->cur_slice)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__GlobalRouteMsg__copy(
  const ros2_interface__msg__GlobalRouteMsg * input,
  ros2_interface__msg__GlobalRouteMsg * output)
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
  // route
  if (!ros2_interface__msg__LaneletInfo__Sequence__copy(
      &(input->route), &(output->route)))
  {
    return false;
  }
  // current_lanelet
  if (!ros2_interface__msg__LaneletInfo__copy(
      &(input->current_lanelet), &(output->current_lanelet)))
  {
    return false;
  }
  // total_mileage
  output->total_mileage = input->total_mileage;
  // cur_mileage
  output->cur_mileage = input->cur_mileage;
  // cur_slice
  if (!ros2_interface__msg__LaneletInfo__Sequence__copy(
      &(input->cur_slice), &(output->cur_slice)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__GlobalRouteMsg *
ros2_interface__msg__GlobalRouteMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GlobalRouteMsg * msg = (ros2_interface__msg__GlobalRouteMsg *)allocator.allocate(sizeof(ros2_interface__msg__GlobalRouteMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__GlobalRouteMsg));
  bool success = ros2_interface__msg__GlobalRouteMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__GlobalRouteMsg__destroy(ros2_interface__msg__GlobalRouteMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__GlobalRouteMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__GlobalRouteMsg__Sequence__init(ros2_interface__msg__GlobalRouteMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GlobalRouteMsg * data = NULL;

  if (size) {
    data = (ros2_interface__msg__GlobalRouteMsg *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__GlobalRouteMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__GlobalRouteMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__GlobalRouteMsg__fini(&data[i - 1]);
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
ros2_interface__msg__GlobalRouteMsg__Sequence__fini(ros2_interface__msg__GlobalRouteMsg__Sequence * array)
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
      ros2_interface__msg__GlobalRouteMsg__fini(&array->data[i]);
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

ros2_interface__msg__GlobalRouteMsg__Sequence *
ros2_interface__msg__GlobalRouteMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GlobalRouteMsg__Sequence * array = (ros2_interface__msg__GlobalRouteMsg__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__GlobalRouteMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__GlobalRouteMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__GlobalRouteMsg__Sequence__destroy(ros2_interface__msg__GlobalRouteMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__GlobalRouteMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__GlobalRouteMsg__Sequence__are_equal(const ros2_interface__msg__GlobalRouteMsg__Sequence * lhs, const ros2_interface__msg__GlobalRouteMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__GlobalRouteMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__GlobalRouteMsg__Sequence__copy(
  const ros2_interface__msg__GlobalRouteMsg__Sequence * input,
  ros2_interface__msg__GlobalRouteMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__GlobalRouteMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__GlobalRouteMsg * data =
      (ros2_interface__msg__GlobalRouteMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__GlobalRouteMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__GlobalRouteMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__GlobalRouteMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
