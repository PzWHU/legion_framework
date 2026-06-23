// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Log.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "ros2_interface/msg/detail/time__functions.h"
// Member `name`
// Member `msg`
// Member `file`
// Member `function`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_interface__msg__Log__init(ros2_interface__msg__Log * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!ros2_interface__msg__Time__init(&msg->stamp)) {
    ros2_interface__msg__Log__fini(msg);
    return false;
  }
  // level
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros2_interface__msg__Log__fini(msg);
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    ros2_interface__msg__Log__fini(msg);
    return false;
  }
  // file
  if (!rosidl_runtime_c__String__init(&msg->file)) {
    ros2_interface__msg__Log__fini(msg);
    return false;
  }
  // function
  if (!rosidl_runtime_c__String__init(&msg->function)) {
    ros2_interface__msg__Log__fini(msg);
    return false;
  }
  // line
  return true;
}

void
ros2_interface__msg__Log__fini(ros2_interface__msg__Log * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  ros2_interface__msg__Time__fini(&msg->stamp);
  // level
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // file
  rosidl_runtime_c__String__fini(&msg->file);
  // function
  rosidl_runtime_c__String__fini(&msg->function);
  // line
}

bool
ros2_interface__msg__Log__are_equal(const ros2_interface__msg__Log * lhs, const ros2_interface__msg__Log * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!ros2_interface__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
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
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  // file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file), &(rhs->file)))
  {
    return false;
  }
  // function
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->function), &(rhs->function)))
  {
    return false;
  }
  // line
  if (lhs->line != rhs->line) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Log__copy(
  const ros2_interface__msg__Log * input,
  ros2_interface__msg__Log * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!ros2_interface__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // level
  output->level = input->level;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  // file
  if (!rosidl_runtime_c__String__copy(
      &(input->file), &(output->file)))
  {
    return false;
  }
  // function
  if (!rosidl_runtime_c__String__copy(
      &(input->function), &(output->function)))
  {
    return false;
  }
  // line
  output->line = input->line;
  return true;
}

ros2_interface__msg__Log *
ros2_interface__msg__Log__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Log * msg = (ros2_interface__msg__Log *)allocator.allocate(sizeof(ros2_interface__msg__Log), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Log));
  bool success = ros2_interface__msg__Log__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Log__destroy(ros2_interface__msg__Log * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Log__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Log__Sequence__init(ros2_interface__msg__Log__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Log * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Log *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Log), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Log__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Log__fini(&data[i - 1]);
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
ros2_interface__msg__Log__Sequence__fini(ros2_interface__msg__Log__Sequence * array)
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
      ros2_interface__msg__Log__fini(&array->data[i]);
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

ros2_interface__msg__Log__Sequence *
ros2_interface__msg__Log__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Log__Sequence * array = (ros2_interface__msg__Log__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Log__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Log__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Log__Sequence__destroy(ros2_interface__msg__Log__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Log__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Log__Sequence__are_equal(const ros2_interface__msg__Log__Sequence * lhs, const ros2_interface__msg__Log__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Log__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Log__Sequence__copy(
  const ros2_interface__msg__Log__Sequence * input,
  ros2_interface__msg__Log__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Log);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Log * data =
      (ros2_interface__msg__Log *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Log__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Log__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Log__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
