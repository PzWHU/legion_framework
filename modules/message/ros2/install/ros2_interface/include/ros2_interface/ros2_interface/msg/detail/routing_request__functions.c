// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/RoutingRequest.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/routing_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `request_source`
#include "rosidl_runtime_c/string_functions.h"
// Member `key_point_list`
#include "ros2_interface/msg/detail/key_point__functions.h"

bool
ros2_interface__msg__RoutingRequest__init(ros2_interface__msg__RoutingRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__RoutingRequest__fini(msg);
    return false;
  }
  // request_source
  if (!rosidl_runtime_c__String__init(&msg->request_source)) {
    ros2_interface__msg__RoutingRequest__fini(msg);
    return false;
  }
  // request_type
  // num_of_kp
  // key_point_list
  if (!ros2_interface__msg__KeyPoint__Sequence__init(&msg->key_point_list, 0)) {
    ros2_interface__msg__RoutingRequest__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__RoutingRequest__fini(ros2_interface__msg__RoutingRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // request_source
  rosidl_runtime_c__String__fini(&msg->request_source);
  // request_type
  // num_of_kp
  // key_point_list
  ros2_interface__msg__KeyPoint__Sequence__fini(&msg->key_point_list);
}

bool
ros2_interface__msg__RoutingRequest__are_equal(const ros2_interface__msg__RoutingRequest * lhs, const ros2_interface__msg__RoutingRequest * rhs)
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
  // request_source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_source), &(rhs->request_source)))
  {
    return false;
  }
  // request_type
  if (lhs->request_type != rhs->request_type) {
    return false;
  }
  // num_of_kp
  if (lhs->num_of_kp != rhs->num_of_kp) {
    return false;
  }
  // key_point_list
  if (!ros2_interface__msg__KeyPoint__Sequence__are_equal(
      &(lhs->key_point_list), &(rhs->key_point_list)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__RoutingRequest__copy(
  const ros2_interface__msg__RoutingRequest * input,
  ros2_interface__msg__RoutingRequest * output)
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
  // request_source
  if (!rosidl_runtime_c__String__copy(
      &(input->request_source), &(output->request_source)))
  {
    return false;
  }
  // request_type
  output->request_type = input->request_type;
  // num_of_kp
  output->num_of_kp = input->num_of_kp;
  // key_point_list
  if (!ros2_interface__msg__KeyPoint__Sequence__copy(
      &(input->key_point_list), &(output->key_point_list)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__RoutingRequest *
ros2_interface__msg__RoutingRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RoutingRequest * msg = (ros2_interface__msg__RoutingRequest *)allocator.allocate(sizeof(ros2_interface__msg__RoutingRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__RoutingRequest));
  bool success = ros2_interface__msg__RoutingRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__RoutingRequest__destroy(ros2_interface__msg__RoutingRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__RoutingRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__RoutingRequest__Sequence__init(ros2_interface__msg__RoutingRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RoutingRequest * data = NULL;

  if (size) {
    data = (ros2_interface__msg__RoutingRequest *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__RoutingRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__RoutingRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__RoutingRequest__fini(&data[i - 1]);
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
ros2_interface__msg__RoutingRequest__Sequence__fini(ros2_interface__msg__RoutingRequest__Sequence * array)
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
      ros2_interface__msg__RoutingRequest__fini(&array->data[i]);
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

ros2_interface__msg__RoutingRequest__Sequence *
ros2_interface__msg__RoutingRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RoutingRequest__Sequence * array = (ros2_interface__msg__RoutingRequest__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__RoutingRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__RoutingRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__RoutingRequest__Sequence__destroy(ros2_interface__msg__RoutingRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__RoutingRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__RoutingRequest__Sequence__are_equal(const ros2_interface__msg__RoutingRequest__Sequence * lhs, const ros2_interface__msg__RoutingRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__RoutingRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__RoutingRequest__Sequence__copy(
  const ros2_interface__msg__RoutingRequest__Sequence * input,
  ros2_interface__msg__RoutingRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__RoutingRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__RoutingRequest * data =
      (ros2_interface__msg__RoutingRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__RoutingRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__RoutingRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__RoutingRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
