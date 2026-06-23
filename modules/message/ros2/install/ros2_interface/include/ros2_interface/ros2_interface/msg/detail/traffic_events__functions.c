// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/TrafficEvents.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/traffic_events__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `route_fusion_info`
#include "ros2_interface/msg/detail/route_fusion_info__functions.h"
// Member `junction_info`
#include "ros2_interface/msg/detail/junction_info__functions.h"
// Member `limit_speed_info`
#include "ros2_interface/msg/detail/limit_speed_info__functions.h"

bool
ros2_interface__msg__TrafficEvents__init(ros2_interface__msg__TrafficEvents * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__TrafficEvents__fini(msg);
    return false;
  }
  // route_fusion_info
  if (!ros2_interface__msg__RouteFusionInfo__init(&msg->route_fusion_info)) {
    ros2_interface__msg__TrafficEvents__fini(msg);
    return false;
  }
  // junction_info
  if (!ros2_interface__msg__JunctionInfo__init(&msg->junction_info)) {
    ros2_interface__msg__TrafficEvents__fini(msg);
    return false;
  }
  // limit_speed_info
  if (!ros2_interface__msg__LimitSpeedInfo__init(&msg->limit_speed_info)) {
    ros2_interface__msg__TrafficEvents__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__TrafficEvents__fini(ros2_interface__msg__TrafficEvents * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // route_fusion_info
  ros2_interface__msg__RouteFusionInfo__fini(&msg->route_fusion_info);
  // junction_info
  ros2_interface__msg__JunctionInfo__fini(&msg->junction_info);
  // limit_speed_info
  ros2_interface__msg__LimitSpeedInfo__fini(&msg->limit_speed_info);
}

bool
ros2_interface__msg__TrafficEvents__are_equal(const ros2_interface__msg__TrafficEvents * lhs, const ros2_interface__msg__TrafficEvents * rhs)
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
  // route_fusion_info
  if (!ros2_interface__msg__RouteFusionInfo__are_equal(
      &(lhs->route_fusion_info), &(rhs->route_fusion_info)))
  {
    return false;
  }
  // junction_info
  if (!ros2_interface__msg__JunctionInfo__are_equal(
      &(lhs->junction_info), &(rhs->junction_info)))
  {
    return false;
  }
  // limit_speed_info
  if (!ros2_interface__msg__LimitSpeedInfo__are_equal(
      &(lhs->limit_speed_info), &(rhs->limit_speed_info)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__TrafficEvents__copy(
  const ros2_interface__msg__TrafficEvents * input,
  ros2_interface__msg__TrafficEvents * output)
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
  // route_fusion_info
  if (!ros2_interface__msg__RouteFusionInfo__copy(
      &(input->route_fusion_info), &(output->route_fusion_info)))
  {
    return false;
  }
  // junction_info
  if (!ros2_interface__msg__JunctionInfo__copy(
      &(input->junction_info), &(output->junction_info)))
  {
    return false;
  }
  // limit_speed_info
  if (!ros2_interface__msg__LimitSpeedInfo__copy(
      &(input->limit_speed_info), &(output->limit_speed_info)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__TrafficEvents *
ros2_interface__msg__TrafficEvents__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficEvents * msg = (ros2_interface__msg__TrafficEvents *)allocator.allocate(sizeof(ros2_interface__msg__TrafficEvents), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__TrafficEvents));
  bool success = ros2_interface__msg__TrafficEvents__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__TrafficEvents__destroy(ros2_interface__msg__TrafficEvents * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__TrafficEvents__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__TrafficEvents__Sequence__init(ros2_interface__msg__TrafficEvents__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficEvents * data = NULL;

  if (size) {
    data = (ros2_interface__msg__TrafficEvents *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__TrafficEvents), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__TrafficEvents__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__TrafficEvents__fini(&data[i - 1]);
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
ros2_interface__msg__TrafficEvents__Sequence__fini(ros2_interface__msg__TrafficEvents__Sequence * array)
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
      ros2_interface__msg__TrafficEvents__fini(&array->data[i]);
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

ros2_interface__msg__TrafficEvents__Sequence *
ros2_interface__msg__TrafficEvents__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficEvents__Sequence * array = (ros2_interface__msg__TrafficEvents__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__TrafficEvents__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__TrafficEvents__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__TrafficEvents__Sequence__destroy(ros2_interface__msg__TrafficEvents__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__TrafficEvents__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__TrafficEvents__Sequence__are_equal(const ros2_interface__msg__TrafficEvents__Sequence * lhs, const ros2_interface__msg__TrafficEvents__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__TrafficEvents__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__TrafficEvents__Sequence__copy(
  const ros2_interface__msg__TrafficEvents__Sequence * input,
  ros2_interface__msg__TrafficEvents__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__TrafficEvents);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__TrafficEvents * data =
      (ros2_interface__msg__TrafficEvents *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__TrafficEvents__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__TrafficEvents__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__TrafficEvents__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
