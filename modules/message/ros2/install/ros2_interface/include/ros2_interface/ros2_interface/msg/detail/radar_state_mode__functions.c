// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/RadarStateMode.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/radar_state_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__RadarStateMode__init(ros2_interface__msg__RadarStateMode * msg)
{
  if (!msg) {
    return false;
  }
  // can0_work_mode
  // can1_work_mode
  // dual_can_mode
  // timming_mode
  // power_mode
  // performance_mode
  return true;
}

void
ros2_interface__msg__RadarStateMode__fini(ros2_interface__msg__RadarStateMode * msg)
{
  if (!msg) {
    return;
  }
  // can0_work_mode
  // can1_work_mode
  // dual_can_mode
  // timming_mode
  // power_mode
  // performance_mode
}

bool
ros2_interface__msg__RadarStateMode__are_equal(const ros2_interface__msg__RadarStateMode * lhs, const ros2_interface__msg__RadarStateMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // can0_work_mode
  if (lhs->can0_work_mode != rhs->can0_work_mode) {
    return false;
  }
  // can1_work_mode
  if (lhs->can1_work_mode != rhs->can1_work_mode) {
    return false;
  }
  // dual_can_mode
  if (lhs->dual_can_mode != rhs->dual_can_mode) {
    return false;
  }
  // timming_mode
  if (lhs->timming_mode != rhs->timming_mode) {
    return false;
  }
  // power_mode
  if (lhs->power_mode != rhs->power_mode) {
    return false;
  }
  // performance_mode
  if (lhs->performance_mode != rhs->performance_mode) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__RadarStateMode__copy(
  const ros2_interface__msg__RadarStateMode * input,
  ros2_interface__msg__RadarStateMode * output)
{
  if (!input || !output) {
    return false;
  }
  // can0_work_mode
  output->can0_work_mode = input->can0_work_mode;
  // can1_work_mode
  output->can1_work_mode = input->can1_work_mode;
  // dual_can_mode
  output->dual_can_mode = input->dual_can_mode;
  // timming_mode
  output->timming_mode = input->timming_mode;
  // power_mode
  output->power_mode = input->power_mode;
  // performance_mode
  output->performance_mode = input->performance_mode;
  return true;
}

ros2_interface__msg__RadarStateMode *
ros2_interface__msg__RadarStateMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarStateMode * msg = (ros2_interface__msg__RadarStateMode *)allocator.allocate(sizeof(ros2_interface__msg__RadarStateMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__RadarStateMode));
  bool success = ros2_interface__msg__RadarStateMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__RadarStateMode__destroy(ros2_interface__msg__RadarStateMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__RadarStateMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__RadarStateMode__Sequence__init(ros2_interface__msg__RadarStateMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarStateMode * data = NULL;

  if (size) {
    data = (ros2_interface__msg__RadarStateMode *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__RadarStateMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__RadarStateMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__RadarStateMode__fini(&data[i - 1]);
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
ros2_interface__msg__RadarStateMode__Sequence__fini(ros2_interface__msg__RadarStateMode__Sequence * array)
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
      ros2_interface__msg__RadarStateMode__fini(&array->data[i]);
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

ros2_interface__msg__RadarStateMode__Sequence *
ros2_interface__msg__RadarStateMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RadarStateMode__Sequence * array = (ros2_interface__msg__RadarStateMode__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__RadarStateMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__RadarStateMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__RadarStateMode__Sequence__destroy(ros2_interface__msg__RadarStateMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__RadarStateMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__RadarStateMode__Sequence__are_equal(const ros2_interface__msg__RadarStateMode__Sequence * lhs, const ros2_interface__msg__RadarStateMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__RadarStateMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__RadarStateMode__Sequence__copy(
  const ros2_interface__msg__RadarStateMode__Sequence * input,
  ros2_interface__msg__RadarStateMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__RadarStateMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__RadarStateMode * data =
      (ros2_interface__msg__RadarStateMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__RadarStateMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__RadarStateMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__RadarStateMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
