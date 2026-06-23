// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/HMIDiagnosticStatus.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/hmi_diagnostic_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `message`
// Member `hardware_id`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_interface__msg__HMIDiagnosticStatus__init(ros2_interface__msg__HMIDiagnosticStatus * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // level
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros2_interface__msg__HMIDiagnosticStatus__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ros2_interface__msg__HMIDiagnosticStatus__fini(msg);
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__init(&msg->hardware_id)) {
    ros2_interface__msg__HMIDiagnosticStatus__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__HMIDiagnosticStatus__fini(ros2_interface__msg__HMIDiagnosticStatus * msg)
{
  if (!msg) {
    return;
  }
  // id
  // level
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // hardware_id
  rosidl_runtime_c__String__fini(&msg->hardware_id);
}

bool
ros2_interface__msg__HMIDiagnosticStatus__are_equal(const ros2_interface__msg__HMIDiagnosticStatus * lhs, const ros2_interface__msg__HMIDiagnosticStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_id), &(rhs->hardware_id)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__HMIDiagnosticStatus__copy(
  const ros2_interface__msg__HMIDiagnosticStatus * input,
  ros2_interface__msg__HMIDiagnosticStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // level
  output->level = input->level;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_id), &(output->hardware_id)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__HMIDiagnosticStatus *
ros2_interface__msg__HMIDiagnosticStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIDiagnosticStatus * msg = (ros2_interface__msg__HMIDiagnosticStatus *)allocator.allocate(sizeof(ros2_interface__msg__HMIDiagnosticStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__HMIDiagnosticStatus));
  bool success = ros2_interface__msg__HMIDiagnosticStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__HMIDiagnosticStatus__destroy(ros2_interface__msg__HMIDiagnosticStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__HMIDiagnosticStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__HMIDiagnosticStatus__Sequence__init(ros2_interface__msg__HMIDiagnosticStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIDiagnosticStatus * data = NULL;

  if (size) {
    data = (ros2_interface__msg__HMIDiagnosticStatus *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__HMIDiagnosticStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__HMIDiagnosticStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__HMIDiagnosticStatus__fini(&data[i - 1]);
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
ros2_interface__msg__HMIDiagnosticStatus__Sequence__fini(ros2_interface__msg__HMIDiagnosticStatus__Sequence * array)
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
      ros2_interface__msg__HMIDiagnosticStatus__fini(&array->data[i]);
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

ros2_interface__msg__HMIDiagnosticStatus__Sequence *
ros2_interface__msg__HMIDiagnosticStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIDiagnosticStatus__Sequence * array = (ros2_interface__msg__HMIDiagnosticStatus__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__HMIDiagnosticStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__HMIDiagnosticStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__HMIDiagnosticStatus__Sequence__destroy(ros2_interface__msg__HMIDiagnosticStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__HMIDiagnosticStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__HMIDiagnosticStatus__Sequence__are_equal(const ros2_interface__msg__HMIDiagnosticStatus__Sequence * lhs, const ros2_interface__msg__HMIDiagnosticStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__HMIDiagnosticStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__HMIDiagnosticStatus__Sequence__copy(
  const ros2_interface__msg__HMIDiagnosticStatus__Sequence * input,
  ros2_interface__msg__HMIDiagnosticStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__HMIDiagnosticStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__HMIDiagnosticStatus * data =
      (ros2_interface__msg__HMIDiagnosticStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__HMIDiagnosticStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__HMIDiagnosticStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__HMIDiagnosticStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
