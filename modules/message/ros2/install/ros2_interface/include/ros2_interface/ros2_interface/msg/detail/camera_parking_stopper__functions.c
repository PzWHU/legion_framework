// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/CameraParkingStopper.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/camera_parking_stopper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bbox2d`
#include "ros2_interface/msg/detail/b_box2_d__functions.h"

bool
ros2_interface__msg__CameraParkingStopper__init(ros2_interface__msg__CameraParkingStopper * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__CameraParkingStopper__fini(msg);
    return false;
  }
  // bbox2d
  if (!ros2_interface__msg__BBox2D__init(&msg->bbox2d)) {
    ros2_interface__msg__CameraParkingStopper__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__CameraParkingStopper__fini(ros2_interface__msg__CameraParkingStopper * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bbox2d
  ros2_interface__msg__BBox2D__fini(&msg->bbox2d);
}

bool
ros2_interface__msg__CameraParkingStopper__are_equal(const ros2_interface__msg__CameraParkingStopper * lhs, const ros2_interface__msg__CameraParkingStopper * rhs)
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
  // bbox2d
  if (!ros2_interface__msg__BBox2D__are_equal(
      &(lhs->bbox2d), &(rhs->bbox2d)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__CameraParkingStopper__copy(
  const ros2_interface__msg__CameraParkingStopper * input,
  ros2_interface__msg__CameraParkingStopper * output)
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
  // bbox2d
  if (!ros2_interface__msg__BBox2D__copy(
      &(input->bbox2d), &(output->bbox2d)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__CameraParkingStopper *
ros2_interface__msg__CameraParkingStopper__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__CameraParkingStopper * msg = (ros2_interface__msg__CameraParkingStopper *)allocator.allocate(sizeof(ros2_interface__msg__CameraParkingStopper), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__CameraParkingStopper));
  bool success = ros2_interface__msg__CameraParkingStopper__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__CameraParkingStopper__destroy(ros2_interface__msg__CameraParkingStopper * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__CameraParkingStopper__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__CameraParkingStopper__Sequence__init(ros2_interface__msg__CameraParkingStopper__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__CameraParkingStopper * data = NULL;

  if (size) {
    data = (ros2_interface__msg__CameraParkingStopper *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__CameraParkingStopper), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__CameraParkingStopper__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__CameraParkingStopper__fini(&data[i - 1]);
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
ros2_interface__msg__CameraParkingStopper__Sequence__fini(ros2_interface__msg__CameraParkingStopper__Sequence * array)
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
      ros2_interface__msg__CameraParkingStopper__fini(&array->data[i]);
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

ros2_interface__msg__CameraParkingStopper__Sequence *
ros2_interface__msg__CameraParkingStopper__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__CameraParkingStopper__Sequence * array = (ros2_interface__msg__CameraParkingStopper__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__CameraParkingStopper__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__CameraParkingStopper__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__CameraParkingStopper__Sequence__destroy(ros2_interface__msg__CameraParkingStopper__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__CameraParkingStopper__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__CameraParkingStopper__Sequence__are_equal(const ros2_interface__msg__CameraParkingStopper__Sequence * lhs, const ros2_interface__msg__CameraParkingStopper__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__CameraParkingStopper__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__CameraParkingStopper__Sequence__copy(
  const ros2_interface__msg__CameraParkingStopper__Sequence * input,
  ros2_interface__msg__CameraParkingStopper__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__CameraParkingStopper);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__CameraParkingStopper * data =
      (ros2_interface__msg__CameraParkingStopper *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__CameraParkingStopper__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__CameraParkingStopper__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__CameraParkingStopper__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
