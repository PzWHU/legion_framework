// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/trajectory_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `spline_s`
// Member `qp_smooth`
#include "ros2_interface/msg/detail/path__functions.h"
// Member `trajectory_list`
#include "ros2_interface/msg/detail/trajectory__functions.h"

bool
ros2_interface__msg__TrajectoryArray__init(ros2_interface__msg__TrajectoryArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__TrajectoryArray__fini(msg);
    return false;
  }
  // spline_s
  if (!ros2_interface__msg__Path__Sequence__init(&msg->spline_s, 0)) {
    ros2_interface__msg__TrajectoryArray__fini(msg);
    return false;
  }
  // qp_smooth
  if (!ros2_interface__msg__Path__Sequence__init(&msg->qp_smooth, 0)) {
    ros2_interface__msg__TrajectoryArray__fini(msg);
    return false;
  }
  // trajectory_list
  if (!ros2_interface__msg__Trajectory__Sequence__init(&msg->trajectory_list, 0)) {
    ros2_interface__msg__TrajectoryArray__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__TrajectoryArray__fini(ros2_interface__msg__TrajectoryArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // spline_s
  ros2_interface__msg__Path__Sequence__fini(&msg->spline_s);
  // qp_smooth
  ros2_interface__msg__Path__Sequence__fini(&msg->qp_smooth);
  // trajectory_list
  ros2_interface__msg__Trajectory__Sequence__fini(&msg->trajectory_list);
}

bool
ros2_interface__msg__TrajectoryArray__are_equal(const ros2_interface__msg__TrajectoryArray * lhs, const ros2_interface__msg__TrajectoryArray * rhs)
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
  // spline_s
  if (!ros2_interface__msg__Path__Sequence__are_equal(
      &(lhs->spline_s), &(rhs->spline_s)))
  {
    return false;
  }
  // qp_smooth
  if (!ros2_interface__msg__Path__Sequence__are_equal(
      &(lhs->qp_smooth), &(rhs->qp_smooth)))
  {
    return false;
  }
  // trajectory_list
  if (!ros2_interface__msg__Trajectory__Sequence__are_equal(
      &(lhs->trajectory_list), &(rhs->trajectory_list)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__TrajectoryArray__copy(
  const ros2_interface__msg__TrajectoryArray * input,
  ros2_interface__msg__TrajectoryArray * output)
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
  // spline_s
  if (!ros2_interface__msg__Path__Sequence__copy(
      &(input->spline_s), &(output->spline_s)))
  {
    return false;
  }
  // qp_smooth
  if (!ros2_interface__msg__Path__Sequence__copy(
      &(input->qp_smooth), &(output->qp_smooth)))
  {
    return false;
  }
  // trajectory_list
  if (!ros2_interface__msg__Trajectory__Sequence__copy(
      &(input->trajectory_list), &(output->trajectory_list)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__TrajectoryArray *
ros2_interface__msg__TrajectoryArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrajectoryArray * msg = (ros2_interface__msg__TrajectoryArray *)allocator.allocate(sizeof(ros2_interface__msg__TrajectoryArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__TrajectoryArray));
  bool success = ros2_interface__msg__TrajectoryArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__TrajectoryArray__destroy(ros2_interface__msg__TrajectoryArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__TrajectoryArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__TrajectoryArray__Sequence__init(ros2_interface__msg__TrajectoryArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrajectoryArray * data = NULL;

  if (size) {
    data = (ros2_interface__msg__TrajectoryArray *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__TrajectoryArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__TrajectoryArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__TrajectoryArray__fini(&data[i - 1]);
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
ros2_interface__msg__TrajectoryArray__Sequence__fini(ros2_interface__msg__TrajectoryArray__Sequence * array)
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
      ros2_interface__msg__TrajectoryArray__fini(&array->data[i]);
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

ros2_interface__msg__TrajectoryArray__Sequence *
ros2_interface__msg__TrajectoryArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__TrajectoryArray__Sequence * array = (ros2_interface__msg__TrajectoryArray__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__TrajectoryArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__TrajectoryArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__TrajectoryArray__Sequence__destroy(ros2_interface__msg__TrajectoryArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__TrajectoryArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__TrajectoryArray__Sequence__are_equal(const ros2_interface__msg__TrajectoryArray__Sequence * lhs, const ros2_interface__msg__TrajectoryArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__TrajectoryArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__TrajectoryArray__Sequence__copy(
  const ros2_interface__msg__TrajectoryArray__Sequence * input,
  ros2_interface__msg__TrajectoryArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__TrajectoryArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__TrajectoryArray * data =
      (ros2_interface__msg__TrajectoryArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__TrajectoryArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__TrajectoryArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__TrajectoryArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
