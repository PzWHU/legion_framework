// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/RadarObstacle.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/radar_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `relative_position`
// Member `relative_position_rms`
// Member `relative_velocity`
// Member `relative_velocity_rms`
// Member `relative_acceleration`
// Member `relative_acceleration_rms`
// Member `absolute_position`
// Member `absolute_position_rms`
// Member `absolute_velocity`
// Member `absolute_velocity_rms`
// Member `absolute_acceleration`
// Member `absolute_acceleration_rms`
#include "ros2_interface/msg/detail/point2_d__functions.h"
// Member `status`
#include "ros2_interface/msg/detail/status__functions.h"

bool
ros2_interface__msg__RadarObstacle__init(ros2_interface__msg__RadarObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // life_time
  // relative_position
  if (!ros2_interface__msg__Point2D__init(&msg->relative_position)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // relative_position_rms
  if (!ros2_interface__msg__Point2D__init(&msg->relative_position_rms)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // relative_velocity
  if (!ros2_interface__msg__Point2D__init(&msg->relative_velocity)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // relative_velocity_rms
  if (!ros2_interface__msg__Point2D__init(&msg->relative_velocity_rms)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // relative_acceleration
  if (!ros2_interface__msg__Point2D__init(&msg->relative_acceleration)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // relative_acceleration_rms
  if (!ros2_interface__msg__Point2D__init(&msg->relative_acceleration_rms)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // rcs
  // snr
  // moving_status
  // width
  // length
  // height
  // theta
  // absolute_position
  if (!ros2_interface__msg__Point2D__init(&msg->absolute_position)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // absolute_position_rms
  if (!ros2_interface__msg__Point2D__init(&msg->absolute_position_rms)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // absolute_velocity
  if (!ros2_interface__msg__Point2D__init(&msg->absolute_velocity)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // absolute_velocity_rms
  if (!ros2_interface__msg__Point2D__init(&msg->absolute_velocity_rms)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // absolute_acceleration
  if (!ros2_interface__msg__Point2D__init(&msg->absolute_acceleration)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // absolute_acceleration_rms
  if (!ros2_interface__msg__Point2D__init(&msg->absolute_acceleration_rms)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // orientation
  // orient_rms
  // yaw
  // yaw_rms
  // count
  // moving_frames_count
  // status
  if (!ros2_interface__msg__Status__init(&msg->status)) {
    ros2_interface__msg__RadarObstacle__fini(msg);
    return false;
  }
  // underpass_probability
  // overpass_probability
  // exist_probability
  // mov_property
  // track_state
  // track_type
  return true;
}

void
ros2_interface__msg__RadarObstacle__fini(ros2_interface__msg__RadarObstacle * msg)
{
  if (!msg) {
    return;
  }
  // id
  // life_time
  // relative_position
  ros2_interface__msg__Point2D__fini(&msg->relative_position);
  // relative_position_rms
  ros2_interface__msg__Point2D__fini(&msg->relative_position_rms);
  // relative_velocity
  ros2_interface__msg__Point2D__fini(&msg->relative_velocity);
  // relative_velocity_rms
  ros2_interface__msg__Point2D__fini(&msg->relative_velocity_rms);
  // relative_acceleration
  ros2_interface__msg__Point2D__fini(&msg->relative_acceleration);
  // relative_acceleration_rms
  ros2_interface__msg__Point2D__fini(&msg->relative_acceleration_rms);
  // rcs
  // snr
  // moving_status
  // width
  // length
  // height
  // theta
  // absolute_position
  ros2_interface__msg__Point2D__fini(&msg->absolute_position);
  // absolute_position_rms
  ros2_interface__msg__Point2D__fini(&msg->absolute_position_rms);
  // absolute_velocity
  ros2_interface__msg__Point2D__fini(&msg->absolute_velocity);
  // absolute_velocity_rms
  ros2_interface__msg__Point2D__fini(&msg->absolute_velocity_rms);
  // absolute_acceleration
  ros2_interface__msg__Point2D__fini(&msg->absolute_acceleration);
  // absolute_acceleration_rms
  ros2_interface__msg__Point2D__fini(&msg->absolute_acceleration_rms);
  // orientation
  // orient_rms
  // yaw
  // yaw_rms
  // count
  // moving_frames_count
  // status
  ros2_interface__msg__Status__fini(&msg->status);
  // underpass_probability
  // overpass_probability
  // exist_probability
  // mov_property
  // track_state
  // track_type
}

bool
ros2_interface__msg__RadarObstacle__are_equal(const ros2_interface__msg__RadarObstacle * lhs, const ros2_interface__msg__RadarObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // life_time
  if (lhs->life_time != rhs->life_time) {
    return false;
  }
  // relative_position
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->relative_position), &(rhs->relative_position)))
  {
    return false;
  }
  // relative_position_rms
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->relative_position_rms), &(rhs->relative_position_rms)))
  {
    return false;
  }
  // relative_velocity
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->relative_velocity), &(rhs->relative_velocity)))
  {
    return false;
  }
  // relative_velocity_rms
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->relative_velocity_rms), &(rhs->relative_velocity_rms)))
  {
    return false;
  }
  // relative_acceleration
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->relative_acceleration), &(rhs->relative_acceleration)))
  {
    return false;
  }
  // relative_acceleration_rms
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->relative_acceleration_rms), &(rhs->relative_acceleration_rms)))
  {
    return false;
  }
  // rcs
  if (lhs->rcs != rhs->rcs) {
    return false;
  }
  // snr
  if (lhs->snr != rhs->snr) {
    return false;
  }
  // moving_status
  if (lhs->moving_status != rhs->moving_status) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // absolute_position
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->absolute_position), &(rhs->absolute_position)))
  {
    return false;
  }
  // absolute_position_rms
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->absolute_position_rms), &(rhs->absolute_position_rms)))
  {
    return false;
  }
  // absolute_velocity
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->absolute_velocity), &(rhs->absolute_velocity)))
  {
    return false;
  }
  // absolute_velocity_rms
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->absolute_velocity_rms), &(rhs->absolute_velocity_rms)))
  {
    return false;
  }
  // absolute_acceleration
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->absolute_acceleration), &(rhs->absolute_acceleration)))
  {
    return false;
  }
  // absolute_acceleration_rms
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->absolute_acceleration_rms), &(rhs->absolute_acceleration_rms)))
  {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // orient_rms
  if (lhs->orient_rms != rhs->orient_rms) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // yaw_rms
  if (lhs->yaw_rms != rhs->yaw_rms) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // moving_frames_count
  if (lhs->moving_frames_count != rhs->moving_frames_count) {
    return false;
  }
  // status
  if (!ros2_interface__msg__Status__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // underpass_probability
  if (lhs->underpass_probability != rhs->underpass_probability) {
    return false;
  }
  // overpass_probability
  if (lhs->overpass_probability != rhs->overpass_probability) {
    return false;
  }
  // exist_probability
  if (lhs->exist_probability != rhs->exist_probability) {
    return false;
  }
  // mov_property
  if (lhs->mov_property != rhs->mov_property) {
    return false;
  }
  // track_state
  if (lhs->track_state != rhs->track_state) {
    return false;
  }
  // track_type
  if (lhs->track_type != rhs->track_type) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__RadarObstacle__copy(
  const ros2_interface__msg__RadarObstacle * input,
  ros2_interface__msg__RadarObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // life_time
  output->life_time = input->life_time;
  // relative_position
  if (!ros2_interface__msg__Point2D__copy(
      &(input->relative_position), &(output->relative_position)))
  {
    return false;
  }
  // relative_position_rms
  if (!ros2_interface__msg__Point2D__copy(
      &(input->relative_position_rms), &(output->relative_position_rms)))
  {
    return false;
  }
  // relative_velocity
  if (!ros2_interface__msg__Point2D__copy(
      &(input->relative_velocity), &(output->relative_velocity)))
  {
    return false;
  }
  // relative_velocity_rms
  if (!ros2_interface__msg__Point2D__copy(
      &(input->relative_velocity_rms), &(output->relative_velocity_rms)))
  {
    return false;
  }
  // relative_acceleration
  if (!ros2_interface__msg__Point2D__copy(
      &(input->relative_acceleration), &(output->relative_acceleration)))
  {
    return false;
  }
  // relative_acceleration_rms
  if (!ros2_interface__msg__Point2D__copy(
      &(input->relative_acceleration_rms), &(output->relative_acceleration_rms)))
  {
    return false;
  }
  // rcs
  output->rcs = input->rcs;
  // snr
  output->snr = input->snr;
  // moving_status
  output->moving_status = input->moving_status;
  // width
  output->width = input->width;
  // length
  output->length = input->length;
  // height
  output->height = input->height;
  // theta
  output->theta = input->theta;
  // absolute_position
  if (!ros2_interface__msg__Point2D__copy(
      &(input->absolute_position), &(output->absolute_position)))
  {
    return false;
  }
  // absolute_position_rms
  if (!ros2_interface__msg__Point2D__copy(
      &(input->absolute_position_rms), &(output->absolute_position_rms)))
  {
    return false;
  }
  // absolute_velocity
  if (!ros2_interface__msg__Point2D__copy(
      &(input->absolute_velocity), &(output->absolute_velocity)))
  {
    return false;
  }
  // absolute_velocity_rms
  if (!ros2_interface__msg__Point2D__copy(
      &(input->absolute_velocity_rms), &(output->absolute_velocity_rms)))
  {
    return false;
  }
  // absolute_acceleration
  if (!ros2_interface__msg__Point2D__copy(
      &(input->absolute_acceleration), &(output->absolute_acceleration)))
  {
    return false;
  }
  // absolute_acceleration_rms
  if (!ros2_interface__msg__Point2D__copy(
      &(input->absolute_acceleration_rms), &(output->absolute_acceleration_rms)))
  {
    return false;
  }
  // orientation
  output->orientation = input->orientation;
  // orient_rms
  output->orient_rms = input->orient_rms;
  // yaw
  output->yaw = input->yaw;
  // yaw_rms
  output->yaw_rms = input->yaw_rms;
  // count
  output->count = input->count;
  // moving_frames_count
  output->moving_frames_count = input->moving_frames_count;
  // status
  if (!ros2_interface__msg__Status__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // underpass_probability
  output->underpass_probability = input->underpass_probability;
  // overpass_probability
  output->overpass_probability = input->overpass_probability;
  // exist_probability
  output->exist_probability = input->exist_probability;
  // mov_property
  output->mov_property = input->mov_property;
  // track_state
  output->track_state = input->track_state;
  // track_type
  output->track_type = input->track_type;
  return true;
}

ros2_interface__msg__RadarObstacle *
ros2_interface__msg__RadarObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarObstacle * msg = (ros2_interface__msg__RadarObstacle *)allocator.allocate(sizeof(ros2_interface__msg__RadarObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__RadarObstacle));
  bool success = ros2_interface__msg__RadarObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__RadarObstacle__destroy(ros2_interface__msg__RadarObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__RadarObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__RadarObstacle__Sequence__init(ros2_interface__msg__RadarObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarObstacle * data = NULL;

  if (size) {
    data = (ros2_interface__msg__RadarObstacle *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__RadarObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__RadarObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__RadarObstacle__fini(&data[i - 1]);
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
ros2_interface__msg__RadarObstacle__Sequence__fini(ros2_interface__msg__RadarObstacle__Sequence * array)
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
      ros2_interface__msg__RadarObstacle__fini(&array->data[i]);
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

ros2_interface__msg__RadarObstacle__Sequence *
ros2_interface__msg__RadarObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarObstacle__Sequence * array = (ros2_interface__msg__RadarObstacle__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__RadarObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__RadarObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__RadarObstacle__Sequence__destroy(ros2_interface__msg__RadarObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__RadarObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__RadarObstacle__Sequence__are_equal(const ros2_interface__msg__RadarObstacle__Sequence * lhs, const ros2_interface__msg__RadarObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__RadarObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__RadarObstacle__Sequence__copy(
  const ros2_interface__msg__RadarObstacle__Sequence * input,
  ros2_interface__msg__RadarObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__RadarObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__RadarObstacle * data =
      (ros2_interface__msg__RadarObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__RadarObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__RadarObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__RadarObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
