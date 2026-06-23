// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/AlarmMessage.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/alarm_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `alarm_proc`
// Member `alarm_data`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_interface__msg__AlarmMessage__init(ros2_interface__msg__AlarmMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__AlarmMessage__fini(msg);
    return false;
  }
  // alarm_proc
  if (!rosidl_runtime_c__String__init(&msg->alarm_proc)) {
    ros2_interface__msg__AlarmMessage__fini(msg);
    return false;
  }
  // alarm_level
  // alarm_type
  // alarm_id
  // alarm_display
  // alarm_data
  if (!rosidl_runtime_c__String__init(&msg->alarm_data)) {
    ros2_interface__msg__AlarmMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__AlarmMessage__fini(ros2_interface__msg__AlarmMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // alarm_proc
  rosidl_runtime_c__String__fini(&msg->alarm_proc);
  // alarm_level
  // alarm_type
  // alarm_id
  // alarm_display
  // alarm_data
  rosidl_runtime_c__String__fini(&msg->alarm_data);
}

bool
ros2_interface__msg__AlarmMessage__are_equal(const ros2_interface__msg__AlarmMessage * lhs, const ros2_interface__msg__AlarmMessage * rhs)
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
  // alarm_proc
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->alarm_proc), &(rhs->alarm_proc)))
  {
    return false;
  }
  // alarm_level
  if (lhs->alarm_level != rhs->alarm_level) {
    return false;
  }
  // alarm_type
  if (lhs->alarm_type != rhs->alarm_type) {
    return false;
  }
  // alarm_id
  if (lhs->alarm_id != rhs->alarm_id) {
    return false;
  }
  // alarm_display
  if (lhs->alarm_display != rhs->alarm_display) {
    return false;
  }
  // alarm_data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->alarm_data), &(rhs->alarm_data)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__AlarmMessage__copy(
  const ros2_interface__msg__AlarmMessage * input,
  ros2_interface__msg__AlarmMessage * output)
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
  // alarm_proc
  if (!rosidl_runtime_c__String__copy(
      &(input->alarm_proc), &(output->alarm_proc)))
  {
    return false;
  }
  // alarm_level
  output->alarm_level = input->alarm_level;
  // alarm_type
  output->alarm_type = input->alarm_type;
  // alarm_id
  output->alarm_id = input->alarm_id;
  // alarm_display
  output->alarm_display = input->alarm_display;
  // alarm_data
  if (!rosidl_runtime_c__String__copy(
      &(input->alarm_data), &(output->alarm_data)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__AlarmMessage *
ros2_interface__msg__AlarmMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__AlarmMessage * msg = (ros2_interface__msg__AlarmMessage *)allocator.allocate(sizeof(ros2_interface__msg__AlarmMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__AlarmMessage));
  bool success = ros2_interface__msg__AlarmMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__AlarmMessage__destroy(ros2_interface__msg__AlarmMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__AlarmMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__AlarmMessage__Sequence__init(ros2_interface__msg__AlarmMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__AlarmMessage * data = NULL;

  if (size) {
    data = (ros2_interface__msg__AlarmMessage *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__AlarmMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__AlarmMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__AlarmMessage__fini(&data[i - 1]);
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
ros2_interface__msg__AlarmMessage__Sequence__fini(ros2_interface__msg__AlarmMessage__Sequence * array)
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
      ros2_interface__msg__AlarmMessage__fini(&array->data[i]);
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

ros2_interface__msg__AlarmMessage__Sequence *
ros2_interface__msg__AlarmMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__AlarmMessage__Sequence * array = (ros2_interface__msg__AlarmMessage__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__AlarmMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__AlarmMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__AlarmMessage__Sequence__destroy(ros2_interface__msg__AlarmMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__AlarmMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__AlarmMessage__Sequence__are_equal(const ros2_interface__msg__AlarmMessage__Sequence * lhs, const ros2_interface__msg__AlarmMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__AlarmMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__AlarmMessage__Sequence__copy(
  const ros2_interface__msg__AlarmMessage__Sequence * input,
  ros2_interface__msg__AlarmMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__AlarmMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__AlarmMessage * data =
      (ros2_interface__msg__AlarmMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__AlarmMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__AlarmMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__AlarmMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
