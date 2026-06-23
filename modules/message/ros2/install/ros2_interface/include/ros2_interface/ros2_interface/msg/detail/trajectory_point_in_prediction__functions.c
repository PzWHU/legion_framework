// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/TrajectoryPointInPrediction.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/trajectory_point_in_prediction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path_point`
#include "ros2_interface/msg/detail/path_point__functions.h"

bool
ros2_interface__msg__TrajectoryPointInPrediction__init(ros2_interface__msg__TrajectoryPointInPrediction * msg)
{
  if (!msg) {
    return false;
  }
  // path_point
  if (!ros2_interface__msg__PathPoint__init(&msg->path_point)) {
    ros2_interface__msg__TrajectoryPointInPrediction__fini(msg);
    return false;
  }
  // v
  // a
  // relative_time
  return true;
}

void
ros2_interface__msg__TrajectoryPointInPrediction__fini(ros2_interface__msg__TrajectoryPointInPrediction * msg)
{
  if (!msg) {
    return;
  }
  // path_point
  ros2_interface__msg__PathPoint__fini(&msg->path_point);
  // v
  // a
  // relative_time
}

bool
ros2_interface__msg__TrajectoryPointInPrediction__are_equal(const ros2_interface__msg__TrajectoryPointInPrediction * lhs, const ros2_interface__msg__TrajectoryPointInPrediction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_point
  if (!ros2_interface__msg__PathPoint__are_equal(
      &(lhs->path_point), &(rhs->path_point)))
  {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // relative_time
  if (lhs->relative_time != rhs->relative_time) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__TrajectoryPointInPrediction__copy(
  const ros2_interface__msg__TrajectoryPointInPrediction * input,
  ros2_interface__msg__TrajectoryPointInPrediction * output)
{
  if (!input || !output) {
    return false;
  }
  // path_point
  if (!ros2_interface__msg__PathPoint__copy(
      &(input->path_point), &(output->path_point)))
  {
    return false;
  }
  // v
  output->v = input->v;
  // a
  output->a = input->a;
  // relative_time
  output->relative_time = input->relative_time;
  return true;
}

ros2_interface__msg__TrajectoryPointInPrediction *
ros2_interface__msg__TrajectoryPointInPrediction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrajectoryPointInPrediction * msg = (ros2_interface__msg__TrajectoryPointInPrediction *)allocator.allocate(sizeof(ros2_interface__msg__TrajectoryPointInPrediction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__TrajectoryPointInPrediction));
  bool success = ros2_interface__msg__TrajectoryPointInPrediction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__TrajectoryPointInPrediction__destroy(ros2_interface__msg__TrajectoryPointInPrediction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__TrajectoryPointInPrediction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__TrajectoryPointInPrediction__Sequence__init(ros2_interface__msg__TrajectoryPointInPrediction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrajectoryPointInPrediction * data = NULL;

  if (size) {
    data = (ros2_interface__msg__TrajectoryPointInPrediction *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__TrajectoryPointInPrediction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__TrajectoryPointInPrediction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__TrajectoryPointInPrediction__fini(&data[i - 1]);
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
ros2_interface__msg__TrajectoryPointInPrediction__Sequence__fini(ros2_interface__msg__TrajectoryPointInPrediction__Sequence * array)
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
      ros2_interface__msg__TrajectoryPointInPrediction__fini(&array->data[i]);
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

ros2_interface__msg__TrajectoryPointInPrediction__Sequence *
ros2_interface__msg__TrajectoryPointInPrediction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence * array = (ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__TrajectoryPointInPrediction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__TrajectoryPointInPrediction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__TrajectoryPointInPrediction__Sequence__destroy(ros2_interface__msg__TrajectoryPointInPrediction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__TrajectoryPointInPrediction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__TrajectoryPointInPrediction__Sequence__are_equal(const ros2_interface__msg__TrajectoryPointInPrediction__Sequence * lhs, const ros2_interface__msg__TrajectoryPointInPrediction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__TrajectoryPointInPrediction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__TrajectoryPointInPrediction__Sequence__copy(
  const ros2_interface__msg__TrajectoryPointInPrediction__Sequence * input,
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__TrajectoryPointInPrediction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__TrajectoryPointInPrediction * data =
      (ros2_interface__msg__TrajectoryPointInPrediction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__TrajectoryPointInPrediction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__TrajectoryPointInPrediction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__TrajectoryPointInPrediction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
