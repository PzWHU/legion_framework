// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/RadarStateError.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/radar_state_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__RadarStateError__init(ros2_interface__msg__RadarStateError * msg)
{
  if (!msg) {
    return false;
  }
  // persistent_error
  // temporary_error
  // interference_error
  // temperature_error
  // voltage_error
  // block_error
  // broadcast_error
  // electric_axis_error
  // config_error
  // calibration_error
  return true;
}

void
ros2_interface__msg__RadarStateError__fini(ros2_interface__msg__RadarStateError * msg)
{
  if (!msg) {
    return;
  }
  // persistent_error
  // temporary_error
  // interference_error
  // temperature_error
  // voltage_error
  // block_error
  // broadcast_error
  // electric_axis_error
  // config_error
  // calibration_error
}

bool
ros2_interface__msg__RadarStateError__are_equal(const ros2_interface__msg__RadarStateError * lhs, const ros2_interface__msg__RadarStateError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // persistent_error
  if (lhs->persistent_error != rhs->persistent_error) {
    return false;
  }
  // temporary_error
  if (lhs->temporary_error != rhs->temporary_error) {
    return false;
  }
  // interference_error
  if (lhs->interference_error != rhs->interference_error) {
    return false;
  }
  // temperature_error
  if (lhs->temperature_error != rhs->temperature_error) {
    return false;
  }
  // voltage_error
  if (lhs->voltage_error != rhs->voltage_error) {
    return false;
  }
  // block_error
  if (lhs->block_error != rhs->block_error) {
    return false;
  }
  // broadcast_error
  if (lhs->broadcast_error != rhs->broadcast_error) {
    return false;
  }
  // electric_axis_error
  if (lhs->electric_axis_error != rhs->electric_axis_error) {
    return false;
  }
  // config_error
  if (lhs->config_error != rhs->config_error) {
    return false;
  }
  // calibration_error
  if (lhs->calibration_error != rhs->calibration_error) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__RadarStateError__copy(
  const ros2_interface__msg__RadarStateError * input,
  ros2_interface__msg__RadarStateError * output)
{
  if (!input || !output) {
    return false;
  }
  // persistent_error
  output->persistent_error = input->persistent_error;
  // temporary_error
  output->temporary_error = input->temporary_error;
  // interference_error
  output->interference_error = input->interference_error;
  // temperature_error
  output->temperature_error = input->temperature_error;
  // voltage_error
  output->voltage_error = input->voltage_error;
  // block_error
  output->block_error = input->block_error;
  // broadcast_error
  output->broadcast_error = input->broadcast_error;
  // electric_axis_error
  output->electric_axis_error = input->electric_axis_error;
  // config_error
  output->config_error = input->config_error;
  // calibration_error
  output->calibration_error = input->calibration_error;
  return true;
}

ros2_interface__msg__RadarStateError *
ros2_interface__msg__RadarStateError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarStateError * msg = (ros2_interface__msg__RadarStateError *)allocator.allocate(sizeof(ros2_interface__msg__RadarStateError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__RadarStateError));
  bool success = ros2_interface__msg__RadarStateError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__RadarStateError__destroy(ros2_interface__msg__RadarStateError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__RadarStateError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__RadarStateError__Sequence__init(ros2_interface__msg__RadarStateError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarStateError * data = NULL;

  if (size) {
    data = (ros2_interface__msg__RadarStateError *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__RadarStateError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__RadarStateError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__RadarStateError__fini(&data[i - 1]);
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
ros2_interface__msg__RadarStateError__Sequence__fini(ros2_interface__msg__RadarStateError__Sequence * array)
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
      ros2_interface__msg__RadarStateError__fini(&array->data[i]);
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

ros2_interface__msg__RadarStateError__Sequence *
ros2_interface__msg__RadarStateError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarStateError__Sequence * array = (ros2_interface__msg__RadarStateError__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__RadarStateError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__RadarStateError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__RadarStateError__Sequence__destroy(ros2_interface__msg__RadarStateError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__RadarStateError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__RadarStateError__Sequence__are_equal(const ros2_interface__msg__RadarStateError__Sequence * lhs, const ros2_interface__msg__RadarStateError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__RadarStateError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__RadarStateError__Sequence__copy(
  const ros2_interface__msg__RadarStateError__Sequence * input,
  ros2_interface__msg__RadarStateError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__RadarStateError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__RadarStateError * data =
      (ros2_interface__msg__RadarStateError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__RadarStateError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__RadarStateError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__RadarStateError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
