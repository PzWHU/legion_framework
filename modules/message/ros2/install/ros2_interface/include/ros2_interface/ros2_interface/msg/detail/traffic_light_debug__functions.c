// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/TrafficLightDebug.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/traffic_light_debug__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cropbox`
// Member `box`
// Member `crop_roi`
// Member `projected_roi`
// Member `rectified_roi`
// Member `debug_roi`
#include "ros2_interface/msg/detail/traffic_light_box__functions.h"

bool
ros2_interface__msg__TrafficLightDebug__init(ros2_interface__msg__TrafficLightDebug * msg)
{
  if (!msg) {
    return false;
  }
  // cropbox
  if (!ros2_interface__msg__TrafficLightBox__init(&msg->cropbox)) {
    ros2_interface__msg__TrafficLightDebug__fini(msg);
    return false;
  }
  // box
  if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&msg->box, 0)) {
    ros2_interface__msg__TrafficLightDebug__fini(msg);
    return false;
  }
  // signal_num
  // valid_pos
  // ts_diff_pos
  // ts_diff_sys
  // project_error
  // distance_to_stop_line
  // camera_id
  // crop_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&msg->crop_roi, 0)) {
    ros2_interface__msg__TrafficLightDebug__fini(msg);
    return false;
  }
  // projected_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&msg->projected_roi, 0)) {
    ros2_interface__msg__TrafficLightDebug__fini(msg);
    return false;
  }
  // rectified_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&msg->rectified_roi, 0)) {
    ros2_interface__msg__TrafficLightDebug__fini(msg);
    return false;
  }
  // debug_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&msg->debug_roi, 0)) {
    ros2_interface__msg__TrafficLightDebug__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__TrafficLightDebug__fini(ros2_interface__msg__TrafficLightDebug * msg)
{
  if (!msg) {
    return;
  }
  // cropbox
  ros2_interface__msg__TrafficLightBox__fini(&msg->cropbox);
  // box
  ros2_interface__msg__TrafficLightBox__Sequence__fini(&msg->box);
  // signal_num
  // valid_pos
  // ts_diff_pos
  // ts_diff_sys
  // project_error
  // distance_to_stop_line
  // camera_id
  // crop_roi
  ros2_interface__msg__TrafficLightBox__Sequence__fini(&msg->crop_roi);
  // projected_roi
  ros2_interface__msg__TrafficLightBox__Sequence__fini(&msg->projected_roi);
  // rectified_roi
  ros2_interface__msg__TrafficLightBox__Sequence__fini(&msg->rectified_roi);
  // debug_roi
  ros2_interface__msg__TrafficLightBox__Sequence__fini(&msg->debug_roi);
}

bool
ros2_interface__msg__TrafficLightDebug__are_equal(const ros2_interface__msg__TrafficLightDebug * lhs, const ros2_interface__msg__TrafficLightDebug * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cropbox
  if (!ros2_interface__msg__TrafficLightBox__are_equal(
      &(lhs->cropbox), &(rhs->cropbox)))
  {
    return false;
  }
  // box
  if (!ros2_interface__msg__TrafficLightBox__Sequence__are_equal(
      &(lhs->box), &(rhs->box)))
  {
    return false;
  }
  // signal_num
  if (lhs->signal_num != rhs->signal_num) {
    return false;
  }
  // valid_pos
  if (lhs->valid_pos != rhs->valid_pos) {
    return false;
  }
  // ts_diff_pos
  if (lhs->ts_diff_pos != rhs->ts_diff_pos) {
    return false;
  }
  // ts_diff_sys
  if (lhs->ts_diff_sys != rhs->ts_diff_sys) {
    return false;
  }
  // project_error
  if (lhs->project_error != rhs->project_error) {
    return false;
  }
  // distance_to_stop_line
  if (lhs->distance_to_stop_line != rhs->distance_to_stop_line) {
    return false;
  }
  // camera_id
  if (lhs->camera_id != rhs->camera_id) {
    return false;
  }
  // crop_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__are_equal(
      &(lhs->crop_roi), &(rhs->crop_roi)))
  {
    return false;
  }
  // projected_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__are_equal(
      &(lhs->projected_roi), &(rhs->projected_roi)))
  {
    return false;
  }
  // rectified_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__are_equal(
      &(lhs->rectified_roi), &(rhs->rectified_roi)))
  {
    return false;
  }
  // debug_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__are_equal(
      &(lhs->debug_roi), &(rhs->debug_roi)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__TrafficLightDebug__copy(
  const ros2_interface__msg__TrafficLightDebug * input,
  ros2_interface__msg__TrafficLightDebug * output)
{
  if (!input || !output) {
    return false;
  }
  // cropbox
  if (!ros2_interface__msg__TrafficLightBox__copy(
      &(input->cropbox), &(output->cropbox)))
  {
    return false;
  }
  // box
  if (!ros2_interface__msg__TrafficLightBox__Sequence__copy(
      &(input->box), &(output->box)))
  {
    return false;
  }
  // signal_num
  output->signal_num = input->signal_num;
  // valid_pos
  output->valid_pos = input->valid_pos;
  // ts_diff_pos
  output->ts_diff_pos = input->ts_diff_pos;
  // ts_diff_sys
  output->ts_diff_sys = input->ts_diff_sys;
  // project_error
  output->project_error = input->project_error;
  // distance_to_stop_line
  output->distance_to_stop_line = input->distance_to_stop_line;
  // camera_id
  output->camera_id = input->camera_id;
  // crop_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__copy(
      &(input->crop_roi), &(output->crop_roi)))
  {
    return false;
  }
  // projected_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__copy(
      &(input->projected_roi), &(output->projected_roi)))
  {
    return false;
  }
  // rectified_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__copy(
      &(input->rectified_roi), &(output->rectified_roi)))
  {
    return false;
  }
  // debug_roi
  if (!ros2_interface__msg__TrafficLightBox__Sequence__copy(
      &(input->debug_roi), &(output->debug_roi)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__TrafficLightDebug *
ros2_interface__msg__TrafficLightDebug__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLightDebug * msg = (ros2_interface__msg__TrafficLightDebug *)allocator.allocate(sizeof(ros2_interface__msg__TrafficLightDebug), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__TrafficLightDebug));
  bool success = ros2_interface__msg__TrafficLightDebug__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__TrafficLightDebug__destroy(ros2_interface__msg__TrafficLightDebug * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__TrafficLightDebug__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__TrafficLightDebug__Sequence__init(ros2_interface__msg__TrafficLightDebug__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLightDebug * data = NULL;

  if (size) {
    data = (ros2_interface__msg__TrafficLightDebug *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__TrafficLightDebug), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__TrafficLightDebug__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__TrafficLightDebug__fini(&data[i - 1]);
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
ros2_interface__msg__TrafficLightDebug__Sequence__fini(ros2_interface__msg__TrafficLightDebug__Sequence * array)
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
      ros2_interface__msg__TrafficLightDebug__fini(&array->data[i]);
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

ros2_interface__msg__TrafficLightDebug__Sequence *
ros2_interface__msg__TrafficLightDebug__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrafficLightDebug__Sequence * array = (ros2_interface__msg__TrafficLightDebug__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__TrafficLightDebug__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__TrafficLightDebug__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__TrafficLightDebug__Sequence__destroy(ros2_interface__msg__TrafficLightDebug__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__TrafficLightDebug__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__TrafficLightDebug__Sequence__are_equal(const ros2_interface__msg__TrafficLightDebug__Sequence * lhs, const ros2_interface__msg__TrafficLightDebug__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__TrafficLightDebug__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__TrafficLightDebug__Sequence__copy(
  const ros2_interface__msg__TrafficLightDebug__Sequence * input,
  ros2_interface__msg__TrafficLightDebug__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__TrafficLightDebug);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__TrafficLightDebug * data =
      (ros2_interface__msg__TrafficLightDebug *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__TrafficLightDebug__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__TrafficLightDebug__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__TrafficLightDebug__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
