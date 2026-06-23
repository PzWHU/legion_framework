// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/RadarState.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/radar_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `radar_state_error`
#include "ros2_interface/msg/detail/radar_state_error__functions.h"
// Member `radar_state_mode`
#include "ros2_interface/msg/detail/radar_state_mode__functions.h"

bool
ros2_interface__msg__RadarState__init(ros2_interface__msg__RadarState * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_id
  // nvm_read_status
  // nvm_write_status
  // radar_state_error
  if (!ros2_interface__msg__RadarStateError__init(&msg->radar_state_error)) {
    ros2_interface__msg__RadarState__fini(msg);
    return false;
  }
  // radar_state_mode
  if (!ros2_interface__msg__RadarStateMode__init(&msg->radar_state_mode)) {
    ros2_interface__msg__RadarState__fini(msg);
    return false;
  }
  // max_distance
  // sort_index
  // radar_power
  // ctl_relay
  // output_type
  // send_quality
  // send_extinfo
  // motion_rx_state
  // rcs_threshold
  // connector_direction
  // radar_position
  // hw_error
  return true;
}

void
ros2_interface__msg__RadarState__fini(ros2_interface__msg__RadarState * msg)
{
  if (!msg) {
    return;
  }
  // sensor_id
  // nvm_read_status
  // nvm_write_status
  // radar_state_error
  ros2_interface__msg__RadarStateError__fini(&msg->radar_state_error);
  // radar_state_mode
  ros2_interface__msg__RadarStateMode__fini(&msg->radar_state_mode);
  // max_distance
  // sort_index
  // radar_power
  // ctl_relay
  // output_type
  // send_quality
  // send_extinfo
  // motion_rx_state
  // rcs_threshold
  // connector_direction
  // radar_position
  // hw_error
}

bool
ros2_interface__msg__RadarState__are_equal(const ros2_interface__msg__RadarState * lhs, const ros2_interface__msg__RadarState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // nvm_read_status
  if (lhs->nvm_read_status != rhs->nvm_read_status) {
    return false;
  }
  // nvm_write_status
  if (lhs->nvm_write_status != rhs->nvm_write_status) {
    return false;
  }
  // radar_state_error
  if (!ros2_interface__msg__RadarStateError__are_equal(
      &(lhs->radar_state_error), &(rhs->radar_state_error)))
  {
    return false;
  }
  // radar_state_mode
  if (!ros2_interface__msg__RadarStateMode__are_equal(
      &(lhs->radar_state_mode), &(rhs->radar_state_mode)))
  {
    return false;
  }
  // max_distance
  if (lhs->max_distance != rhs->max_distance) {
    return false;
  }
  // sort_index
  if (lhs->sort_index != rhs->sort_index) {
    return false;
  }
  // radar_power
  if (lhs->radar_power != rhs->radar_power) {
    return false;
  }
  // ctl_relay
  if (lhs->ctl_relay != rhs->ctl_relay) {
    return false;
  }
  // output_type
  if (lhs->output_type != rhs->output_type) {
    return false;
  }
  // send_quality
  if (lhs->send_quality != rhs->send_quality) {
    return false;
  }
  // send_extinfo
  if (lhs->send_extinfo != rhs->send_extinfo) {
    return false;
  }
  // motion_rx_state
  if (lhs->motion_rx_state != rhs->motion_rx_state) {
    return false;
  }
  // rcs_threshold
  if (lhs->rcs_threshold != rhs->rcs_threshold) {
    return false;
  }
  // connector_direction
  if (lhs->connector_direction != rhs->connector_direction) {
    return false;
  }
  // radar_position
  if (lhs->radar_position != rhs->radar_position) {
    return false;
  }
  // hw_error
  if (lhs->hw_error != rhs->hw_error) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__RadarState__copy(
  const ros2_interface__msg__RadarState * input,
  ros2_interface__msg__RadarState * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_id
  output->sensor_id = input->sensor_id;
  // nvm_read_status
  output->nvm_read_status = input->nvm_read_status;
  // nvm_write_status
  output->nvm_write_status = input->nvm_write_status;
  // radar_state_error
  if (!ros2_interface__msg__RadarStateError__copy(
      &(input->radar_state_error), &(output->radar_state_error)))
  {
    return false;
  }
  // radar_state_mode
  if (!ros2_interface__msg__RadarStateMode__copy(
      &(input->radar_state_mode), &(output->radar_state_mode)))
  {
    return false;
  }
  // max_distance
  output->max_distance = input->max_distance;
  // sort_index
  output->sort_index = input->sort_index;
  // radar_power
  output->radar_power = input->radar_power;
  // ctl_relay
  output->ctl_relay = input->ctl_relay;
  // output_type
  output->output_type = input->output_type;
  // send_quality
  output->send_quality = input->send_quality;
  // send_extinfo
  output->send_extinfo = input->send_extinfo;
  // motion_rx_state
  output->motion_rx_state = input->motion_rx_state;
  // rcs_threshold
  output->rcs_threshold = input->rcs_threshold;
  // connector_direction
  output->connector_direction = input->connector_direction;
  // radar_position
  output->radar_position = input->radar_position;
  // hw_error
  output->hw_error = input->hw_error;
  return true;
}

ros2_interface__msg__RadarState *
ros2_interface__msg__RadarState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarState * msg = (ros2_interface__msg__RadarState *)allocator.allocate(sizeof(ros2_interface__msg__RadarState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__RadarState));
  bool success = ros2_interface__msg__RadarState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__RadarState__destroy(ros2_interface__msg__RadarState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__RadarState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__RadarState__Sequence__init(ros2_interface__msg__RadarState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarState * data = NULL;

  if (size) {
    data = (ros2_interface__msg__RadarState *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__RadarState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__RadarState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__RadarState__fini(&data[i - 1]);
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
ros2_interface__msg__RadarState__Sequence__fini(ros2_interface__msg__RadarState__Sequence * array)
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
      ros2_interface__msg__RadarState__fini(&array->data[i]);
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

ros2_interface__msg__RadarState__Sequence *
ros2_interface__msg__RadarState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarState__Sequence * array = (ros2_interface__msg__RadarState__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__RadarState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__RadarState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__RadarState__Sequence__destroy(ros2_interface__msg__RadarState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__RadarState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__RadarState__Sequence__are_equal(const ros2_interface__msg__RadarState__Sequence * lhs, const ros2_interface__msg__RadarState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__RadarState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__RadarState__Sequence__copy(
  const ros2_interface__msg__RadarState__Sequence * input,
  ros2_interface__msg__RadarState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__RadarState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__RadarState * data =
      (ros2_interface__msg__RadarState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__RadarState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__RadarState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__RadarState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
