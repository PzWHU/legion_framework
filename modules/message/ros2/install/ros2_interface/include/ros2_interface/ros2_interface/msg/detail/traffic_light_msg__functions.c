// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/traffic_light_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `traffic_light`
#include "ros2_interface/msg/detail/traffic_light__functions.h"
// Member `traffic_light_debug`
#include "ros2_interface/msg/detail/traffic_light_debug__functions.h"

bool
ros2_interface__msg__TrafficLightMsg__init(ros2_interface__msg__TrafficLightMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // traffic_light
  if (!ros2_interface__msg__TrafficLight__Sequence__init(&msg->traffic_light, 0)) {
    ros2_interface__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // traffic_light_debug
  if (!ros2_interface__msg__TrafficLightDebug__init(&msg->traffic_light_debug)) {
    ros2_interface__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // contain_lights
  // camera_id
  // is_valid
  return true;
}

void
ros2_interface__msg__TrafficLightMsg__fini(ros2_interface__msg__TrafficLightMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // traffic_light
  ros2_interface__msg__TrafficLight__Sequence__fini(&msg->traffic_light);
  // traffic_light_debug
  ros2_interface__msg__TrafficLightDebug__fini(&msg->traffic_light_debug);
  // contain_lights
  // camera_id
  // is_valid
}

bool
ros2_interface__msg__TrafficLightMsg__are_equal(const ros2_interface__msg__TrafficLightMsg * lhs, const ros2_interface__msg__TrafficLightMsg * rhs)
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
  // traffic_light
  if (!ros2_interface__msg__TrafficLight__Sequence__are_equal(
      &(lhs->traffic_light), &(rhs->traffic_light)))
  {
    return false;
  }
  // traffic_light_debug
  if (!ros2_interface__msg__TrafficLightDebug__are_equal(
      &(lhs->traffic_light_debug), &(rhs->traffic_light_debug)))
  {
    return false;
  }
  // contain_lights
  if (lhs->contain_lights != rhs->contain_lights) {
    return false;
  }
  // camera_id
  if (lhs->camera_id != rhs->camera_id) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__TrafficLightMsg__copy(
  const ros2_interface__msg__TrafficLightMsg * input,
  ros2_interface__msg__TrafficLightMsg * output)
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
  // traffic_light
  if (!ros2_interface__msg__TrafficLight__Sequence__copy(
      &(input->traffic_light), &(output->traffic_light)))
  {
    return false;
  }
  // traffic_light_debug
  if (!ros2_interface__msg__TrafficLightDebug__copy(
      &(input->traffic_light_debug), &(output->traffic_light_debug)))
  {
    return false;
  }
  // contain_lights
  output->contain_lights = input->contain_lights;
  // camera_id
  output->camera_id = input->camera_id;
  // is_valid
  output->is_valid = input->is_valid;
  return true;
}

ros2_interface__msg__TrafficLightMsg *
ros2_interface__msg__TrafficLightMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLightMsg * msg = (ros2_interface__msg__TrafficLightMsg *)allocator.allocate(sizeof(ros2_interface__msg__TrafficLightMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__TrafficLightMsg));
  bool success = ros2_interface__msg__TrafficLightMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__TrafficLightMsg__destroy(ros2_interface__msg__TrafficLightMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__TrafficLightMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__TrafficLightMsg__Sequence__init(ros2_interface__msg__TrafficLightMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLightMsg * data = NULL;

  if (size) {
    data = (ros2_interface__msg__TrafficLightMsg *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__TrafficLightMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__TrafficLightMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__TrafficLightMsg__fini(&data[i - 1]);
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
ros2_interface__msg__TrafficLightMsg__Sequence__fini(ros2_interface__msg__TrafficLightMsg__Sequence * array)
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
      ros2_interface__msg__TrafficLightMsg__fini(&array->data[i]);
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

ros2_interface__msg__TrafficLightMsg__Sequence *
ros2_interface__msg__TrafficLightMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLightMsg__Sequence * array = (ros2_interface__msg__TrafficLightMsg__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__TrafficLightMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__TrafficLightMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__TrafficLightMsg__Sequence__destroy(ros2_interface__msg__TrafficLightMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__TrafficLightMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__TrafficLightMsg__Sequence__are_equal(const ros2_interface__msg__TrafficLightMsg__Sequence * lhs, const ros2_interface__msg__TrafficLightMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__TrafficLightMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__TrafficLightMsg__Sequence__copy(
  const ros2_interface__msg__TrafficLightMsg__Sequence * input,
  ros2_interface__msg__TrafficLightMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__TrafficLightMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__TrafficLightMsg * data =
      (ros2_interface__msg__TrafficLightMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__TrafficLightMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__TrafficLightMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__TrafficLightMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
