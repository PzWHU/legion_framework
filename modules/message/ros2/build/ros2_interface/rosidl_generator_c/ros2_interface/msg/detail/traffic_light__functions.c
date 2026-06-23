// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/TrafficLight.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/traffic_light__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `light_rect`
#include "ros2_interface/msg/detail/image_rect__functions.h"
// Member `position`
#include "ros2_interface/msg/detail/point3_d__functions.h"
// Member `light_lanes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `create_time`
#include "ros2_interface/msg/detail/time__functions.h"

bool
ros2_interface__msg__TrafficLight__init(ros2_interface__msg__TrafficLight * msg)
{
  if (!msg) {
    return false;
  }
  // color
  // id
  // type
  // confidence
  // light_rect
  if (!ros2_interface__msg__ImageRect__init(&msg->light_rect)) {
    ros2_interface__msg__TrafficLight__fini(msg);
    return false;
  }
  // position
  if (!ros2_interface__msg__Point3D__init(&msg->position)) {
    ros2_interface__msg__TrafficLight__fini(msg);
    return false;
  }
  // distance
  // light_lanes
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->light_lanes, 0)) {
    ros2_interface__msg__TrafficLight__fini(msg);
    return false;
  }
  // tracking_time
  // blink
  // blinking_time
  // remaining_time
  // create_time
  if (!ros2_interface__msg__Time__init(&msg->create_time)) {
    ros2_interface__msg__TrafficLight__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__TrafficLight__fini(ros2_interface__msg__TrafficLight * msg)
{
  if (!msg) {
    return;
  }
  // color
  // id
  // type
  // confidence
  // light_rect
  ros2_interface__msg__ImageRect__fini(&msg->light_rect);
  // position
  ros2_interface__msg__Point3D__fini(&msg->position);
  // distance
  // light_lanes
  rosidl_runtime_c__int32__Sequence__fini(&msg->light_lanes);
  // tracking_time
  // blink
  // blinking_time
  // remaining_time
  // create_time
  ros2_interface__msg__Time__fini(&msg->create_time);
}

bool
ros2_interface__msg__TrafficLight__are_equal(const ros2_interface__msg__TrafficLight * lhs, const ros2_interface__msg__TrafficLight * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // light_rect
  if (!ros2_interface__msg__ImageRect__are_equal(
      &(lhs->light_rect), &(rhs->light_rect)))
  {
    return false;
  }
  // position
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // light_lanes
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->light_lanes), &(rhs->light_lanes)))
  {
    return false;
  }
  // tracking_time
  if (lhs->tracking_time != rhs->tracking_time) {
    return false;
  }
  // blink
  if (lhs->blink != rhs->blink) {
    return false;
  }
  // blinking_time
  if (lhs->blinking_time != rhs->blinking_time) {
    return false;
  }
  // remaining_time
  if (lhs->remaining_time != rhs->remaining_time) {
    return false;
  }
  // create_time
  if (!ros2_interface__msg__Time__are_equal(
      &(lhs->create_time), &(rhs->create_time)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__TrafficLight__copy(
  const ros2_interface__msg__TrafficLight * input,
  ros2_interface__msg__TrafficLight * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // id
  output->id = input->id;
  // type
  output->type = input->type;
  // confidence
  output->confidence = input->confidence;
  // light_rect
  if (!ros2_interface__msg__ImageRect__copy(
      &(input->light_rect), &(output->light_rect)))
  {
    return false;
  }
  // position
  if (!ros2_interface__msg__Point3D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // light_lanes
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->light_lanes), &(output->light_lanes)))
  {
    return false;
  }
  // tracking_time
  output->tracking_time = input->tracking_time;
  // blink
  output->blink = input->blink;
  // blinking_time
  output->blinking_time = input->blinking_time;
  // remaining_time
  output->remaining_time = input->remaining_time;
  // create_time
  if (!ros2_interface__msg__Time__copy(
      &(input->create_time), &(output->create_time)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__TrafficLight *
ros2_interface__msg__TrafficLight__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLight * msg = (ros2_interface__msg__TrafficLight *)allocator.allocate(sizeof(ros2_interface__msg__TrafficLight), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__TrafficLight));
  bool success = ros2_interface__msg__TrafficLight__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__TrafficLight__destroy(ros2_interface__msg__TrafficLight * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__TrafficLight__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__TrafficLight__Sequence__init(ros2_interface__msg__TrafficLight__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLight * data = NULL;

  if (size) {
    data = (ros2_interface__msg__TrafficLight *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__TrafficLight), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__TrafficLight__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__TrafficLight__fini(&data[i - 1]);
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
ros2_interface__msg__TrafficLight__Sequence__fini(ros2_interface__msg__TrafficLight__Sequence * array)
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
      ros2_interface__msg__TrafficLight__fini(&array->data[i]);
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

ros2_interface__msg__TrafficLight__Sequence *
ros2_interface__msg__TrafficLight__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLight__Sequence * array = (ros2_interface__msg__TrafficLight__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__TrafficLight__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__TrafficLight__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__TrafficLight__Sequence__destroy(ros2_interface__msg__TrafficLight__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__TrafficLight__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__TrafficLight__Sequence__are_equal(const ros2_interface__msg__TrafficLight__Sequence * lhs, const ros2_interface__msg__TrafficLight__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__TrafficLight__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__TrafficLight__Sequence__copy(
  const ros2_interface__msg__TrafficLight__Sequence * input,
  ros2_interface__msg__TrafficLight__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__TrafficLight);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__TrafficLight * data =
      (ros2_interface__msg__TrafficLight *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__TrafficLight__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__TrafficLight__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__TrafficLight__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
