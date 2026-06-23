// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/NaviInfoMsg.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/navi_info_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros2_interface__msg__NaviInfoMsg__init(ros2_interface__msg__NaviInfoMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__NaviInfoMsg__fini(msg);
    return false;
  }
  // lane_type
  // lane_count
  // lane_index
  // lane_target
  // road_speed
  // turning_speed
  // turning_deriction
  // distance_to_cross
  // traffic_light_stop
  // crossing_behavior
  // distance_to_stop
  return true;
}

void
ros2_interface__msg__NaviInfoMsg__fini(ros2_interface__msg__NaviInfoMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lane_type
  // lane_count
  // lane_index
  // lane_target
  // road_speed
  // turning_speed
  // turning_deriction
  // distance_to_cross
  // traffic_light_stop
  // crossing_behavior
  // distance_to_stop
}

bool
ros2_interface__msg__NaviInfoMsg__are_equal(const ros2_interface__msg__NaviInfoMsg * lhs, const ros2_interface__msg__NaviInfoMsg * rhs)
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
  // lane_type
  if (lhs->lane_type != rhs->lane_type) {
    return false;
  }
  // lane_count
  if (lhs->lane_count != rhs->lane_count) {
    return false;
  }
  // lane_index
  if (lhs->lane_index != rhs->lane_index) {
    return false;
  }
  // lane_target
  if (lhs->lane_target != rhs->lane_target) {
    return false;
  }
  // road_speed
  if (lhs->road_speed != rhs->road_speed) {
    return false;
  }
  // turning_speed
  if (lhs->turning_speed != rhs->turning_speed) {
    return false;
  }
  // turning_deriction
  if (lhs->turning_deriction != rhs->turning_deriction) {
    return false;
  }
  // distance_to_cross
  if (lhs->distance_to_cross != rhs->distance_to_cross) {
    return false;
  }
  // traffic_light_stop
  if (lhs->traffic_light_stop != rhs->traffic_light_stop) {
    return false;
  }
  // crossing_behavior
  if (lhs->crossing_behavior != rhs->crossing_behavior) {
    return false;
  }
  // distance_to_stop
  if (lhs->distance_to_stop != rhs->distance_to_stop) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__NaviInfoMsg__copy(
  const ros2_interface__msg__NaviInfoMsg * input,
  ros2_interface__msg__NaviInfoMsg * output)
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
  // lane_type
  output->lane_type = input->lane_type;
  // lane_count
  output->lane_count = input->lane_count;
  // lane_index
  output->lane_index = input->lane_index;
  // lane_target
  output->lane_target = input->lane_target;
  // road_speed
  output->road_speed = input->road_speed;
  // turning_speed
  output->turning_speed = input->turning_speed;
  // turning_deriction
  output->turning_deriction = input->turning_deriction;
  // distance_to_cross
  output->distance_to_cross = input->distance_to_cross;
  // traffic_light_stop
  output->traffic_light_stop = input->traffic_light_stop;
  // crossing_behavior
  output->crossing_behavior = input->crossing_behavior;
  // distance_to_stop
  output->distance_to_stop = input->distance_to_stop;
  return true;
}

ros2_interface__msg__NaviInfoMsg *
ros2_interface__msg__NaviInfoMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__NaviInfoMsg * msg = (ros2_interface__msg__NaviInfoMsg *)allocator.allocate(sizeof(ros2_interface__msg__NaviInfoMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__NaviInfoMsg));
  bool success = ros2_interface__msg__NaviInfoMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__NaviInfoMsg__destroy(ros2_interface__msg__NaviInfoMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__NaviInfoMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__NaviInfoMsg__Sequence__init(ros2_interface__msg__NaviInfoMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__NaviInfoMsg * data = NULL;

  if (size) {
    data = (ros2_interface__msg__NaviInfoMsg *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__NaviInfoMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__NaviInfoMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__NaviInfoMsg__fini(&data[i - 1]);
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
ros2_interface__msg__NaviInfoMsg__Sequence__fini(ros2_interface__msg__NaviInfoMsg__Sequence * array)
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
      ros2_interface__msg__NaviInfoMsg__fini(&array->data[i]);
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

ros2_interface__msg__NaviInfoMsg__Sequence *
ros2_interface__msg__NaviInfoMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__NaviInfoMsg__Sequence * array = (ros2_interface__msg__NaviInfoMsg__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__NaviInfoMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__NaviInfoMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__NaviInfoMsg__Sequence__destroy(ros2_interface__msg__NaviInfoMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__NaviInfoMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__NaviInfoMsg__Sequence__are_equal(const ros2_interface__msg__NaviInfoMsg__Sequence * lhs, const ros2_interface__msg__NaviInfoMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__NaviInfoMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__NaviInfoMsg__Sequence__copy(
  const ros2_interface__msg__NaviInfoMsg__Sequence * input,
  ros2_interface__msg__NaviInfoMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__NaviInfoMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__NaviInfoMsg * data =
      (ros2_interface__msg__NaviInfoMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__NaviInfoMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__NaviInfoMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__NaviInfoMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
