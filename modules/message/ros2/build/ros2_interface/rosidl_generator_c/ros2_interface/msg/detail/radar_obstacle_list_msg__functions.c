// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/RadarObstacleListMsg.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/radar_obstacle_list_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `radar_obstacle`
#include "ros2_interface/msg/detail/radar_obstacle__functions.h"
// Member `radar_state`
#include "ros2_interface/msg/detail/radar_state__functions.h"

bool
ros2_interface__msg__RadarObstacleListMsg__init(ros2_interface__msg__RadarObstacleListMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__RadarObstacleListMsg__fini(msg);
    return false;
  }
  // radar_obstacle
  if (!ros2_interface__msg__RadarObstacle__Sequence__init(&msg->radar_obstacle, 0)) {
    ros2_interface__msg__RadarObstacleListMsg__fini(msg);
    return false;
  }
  // sensor_id
  // radar_state
  if (!ros2_interface__msg__RadarState__init(&msg->radar_state)) {
    ros2_interface__msg__RadarObstacleListMsg__fini(msg);
    return false;
  }
  // is_valid
  return true;
}

void
ros2_interface__msg__RadarObstacleListMsg__fini(ros2_interface__msg__RadarObstacleListMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // radar_obstacle
  ros2_interface__msg__RadarObstacle__Sequence__fini(&msg->radar_obstacle);
  // sensor_id
  // radar_state
  ros2_interface__msg__RadarState__fini(&msg->radar_state);
  // is_valid
}

bool
ros2_interface__msg__RadarObstacleListMsg__are_equal(const ros2_interface__msg__RadarObstacleListMsg * lhs, const ros2_interface__msg__RadarObstacleListMsg * rhs)
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
  // radar_obstacle
  if (!ros2_interface__msg__RadarObstacle__Sequence__are_equal(
      &(lhs->radar_obstacle), &(rhs->radar_obstacle)))
  {
    return false;
  }
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // radar_state
  if (!ros2_interface__msg__RadarState__are_equal(
      &(lhs->radar_state), &(rhs->radar_state)))
  {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__RadarObstacleListMsg__copy(
  const ros2_interface__msg__RadarObstacleListMsg * input,
  ros2_interface__msg__RadarObstacleListMsg * output)
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
  // radar_obstacle
  if (!ros2_interface__msg__RadarObstacle__Sequence__copy(
      &(input->radar_obstacle), &(output->radar_obstacle)))
  {
    return false;
  }
  // sensor_id
  output->sensor_id = input->sensor_id;
  // radar_state
  if (!ros2_interface__msg__RadarState__copy(
      &(input->radar_state), &(output->radar_state)))
  {
    return false;
  }
  // is_valid
  output->is_valid = input->is_valid;
  return true;
}

ros2_interface__msg__RadarObstacleListMsg *
ros2_interface__msg__RadarObstacleListMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarObstacleListMsg * msg = (ros2_interface__msg__RadarObstacleListMsg *)allocator.allocate(sizeof(ros2_interface__msg__RadarObstacleListMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__RadarObstacleListMsg));
  bool success = ros2_interface__msg__RadarObstacleListMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__RadarObstacleListMsg__destroy(ros2_interface__msg__RadarObstacleListMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__RadarObstacleListMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__RadarObstacleListMsg__Sequence__init(ros2_interface__msg__RadarObstacleListMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarObstacleListMsg * data = NULL;

  if (size) {
    data = (ros2_interface__msg__RadarObstacleListMsg *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__RadarObstacleListMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__RadarObstacleListMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__RadarObstacleListMsg__fini(&data[i - 1]);
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
ros2_interface__msg__RadarObstacleListMsg__Sequence__fini(ros2_interface__msg__RadarObstacleListMsg__Sequence * array)
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
      ros2_interface__msg__RadarObstacleListMsg__fini(&array->data[i]);
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

ros2_interface__msg__RadarObstacleListMsg__Sequence *
ros2_interface__msg__RadarObstacleListMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarObstacleListMsg__Sequence * array = (ros2_interface__msg__RadarObstacleListMsg__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__RadarObstacleListMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__RadarObstacleListMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__RadarObstacleListMsg__Sequence__destroy(ros2_interface__msg__RadarObstacleListMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__RadarObstacleListMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__RadarObstacleListMsg__Sequence__are_equal(const ros2_interface__msg__RadarObstacleListMsg__Sequence * lhs, const ros2_interface__msg__RadarObstacleListMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__RadarObstacleListMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__RadarObstacleListMsg__Sequence__copy(
  const ros2_interface__msg__RadarObstacleListMsg__Sequence * input,
  ros2_interface__msg__RadarObstacleListMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__RadarObstacleListMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__RadarObstacleListMsg * data =
      (ros2_interface__msg__RadarObstacleListMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__RadarObstacleListMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__RadarObstacleListMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__RadarObstacleListMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
