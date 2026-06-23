// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PlanningAnalysis.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/planning_analysis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `evaluator_time`
#include "ros2_interface/msg/detail/time_consume__functions.h"
// Member `planning_parking_debug`
#include "ros2_interface/msg/detail/planning_parking_debug__functions.h"

bool
ros2_interface__msg__PlanningAnalysis__init(ros2_interface__msg__PlanningAnalysis * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__PlanningAnalysis__fini(msg);
    return false;
  }
  // frame_update_time
  // generator_time
  // evaluator_time
  if (!ros2_interface__msg__TimeConsume__Sequence__init(&msg->evaluator_time, 0)) {
    ros2_interface__msg__PlanningAnalysis__fini(msg);
    return false;
  }
  // selector_time
  // planning_parking_debug
  if (!ros2_interface__msg__PlanningParkingDebug__init(&msg->planning_parking_debug)) {
    ros2_interface__msg__PlanningAnalysis__fini(msg);
    return false;
  }
  // dis_to_center_line
  // diff_to_velocity
  // referencline_kappa
  return true;
}

void
ros2_interface__msg__PlanningAnalysis__fini(ros2_interface__msg__PlanningAnalysis * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frame_update_time
  // generator_time
  // evaluator_time
  ros2_interface__msg__TimeConsume__Sequence__fini(&msg->evaluator_time);
  // selector_time
  // planning_parking_debug
  ros2_interface__msg__PlanningParkingDebug__fini(&msg->planning_parking_debug);
  // dis_to_center_line
  // diff_to_velocity
  // referencline_kappa
}

bool
ros2_interface__msg__PlanningAnalysis__are_equal(const ros2_interface__msg__PlanningAnalysis * lhs, const ros2_interface__msg__PlanningAnalysis * rhs)
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
  // frame_update_time
  if (lhs->frame_update_time != rhs->frame_update_time) {
    return false;
  }
  // generator_time
  if (lhs->generator_time != rhs->generator_time) {
    return false;
  }
  // evaluator_time
  if (!ros2_interface__msg__TimeConsume__Sequence__are_equal(
      &(lhs->evaluator_time), &(rhs->evaluator_time)))
  {
    return false;
  }
  // selector_time
  if (lhs->selector_time != rhs->selector_time) {
    return false;
  }
  // planning_parking_debug
  if (!ros2_interface__msg__PlanningParkingDebug__are_equal(
      &(lhs->planning_parking_debug), &(rhs->planning_parking_debug)))
  {
    return false;
  }
  // dis_to_center_line
  if (lhs->dis_to_center_line != rhs->dis_to_center_line) {
    return false;
  }
  // diff_to_velocity
  if (lhs->diff_to_velocity != rhs->diff_to_velocity) {
    return false;
  }
  // referencline_kappa
  if (lhs->referencline_kappa != rhs->referencline_kappa) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__PlanningAnalysis__copy(
  const ros2_interface__msg__PlanningAnalysis * input,
  ros2_interface__msg__PlanningAnalysis * output)
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
  // frame_update_time
  output->frame_update_time = input->frame_update_time;
  // generator_time
  output->generator_time = input->generator_time;
  // evaluator_time
  if (!ros2_interface__msg__TimeConsume__Sequence__copy(
      &(input->evaluator_time), &(output->evaluator_time)))
  {
    return false;
  }
  // selector_time
  output->selector_time = input->selector_time;
  // planning_parking_debug
  if (!ros2_interface__msg__PlanningParkingDebug__copy(
      &(input->planning_parking_debug), &(output->planning_parking_debug)))
  {
    return false;
  }
  // dis_to_center_line
  output->dis_to_center_line = input->dis_to_center_line;
  // diff_to_velocity
  output->diff_to_velocity = input->diff_to_velocity;
  // referencline_kappa
  output->referencline_kappa = input->referencline_kappa;
  return true;
}

ros2_interface__msg__PlanningAnalysis *
ros2_interface__msg__PlanningAnalysis__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningAnalysis * msg = (ros2_interface__msg__PlanningAnalysis *)allocator.allocate(sizeof(ros2_interface__msg__PlanningAnalysis), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PlanningAnalysis));
  bool success = ros2_interface__msg__PlanningAnalysis__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PlanningAnalysis__destroy(ros2_interface__msg__PlanningAnalysis * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PlanningAnalysis__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PlanningAnalysis__Sequence__init(ros2_interface__msg__PlanningAnalysis__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningAnalysis * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PlanningAnalysis *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PlanningAnalysis), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PlanningAnalysis__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PlanningAnalysis__fini(&data[i - 1]);
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
ros2_interface__msg__PlanningAnalysis__Sequence__fini(ros2_interface__msg__PlanningAnalysis__Sequence * array)
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
      ros2_interface__msg__PlanningAnalysis__fini(&array->data[i]);
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

ros2_interface__msg__PlanningAnalysis__Sequence *
ros2_interface__msg__PlanningAnalysis__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningAnalysis__Sequence * array = (ros2_interface__msg__PlanningAnalysis__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PlanningAnalysis__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PlanningAnalysis__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PlanningAnalysis__Sequence__destroy(ros2_interface__msg__PlanningAnalysis__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PlanningAnalysis__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PlanningAnalysis__Sequence__are_equal(const ros2_interface__msg__PlanningAnalysis__Sequence * lhs, const ros2_interface__msg__PlanningAnalysis__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PlanningAnalysis__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PlanningAnalysis__Sequence__copy(
  const ros2_interface__msg__PlanningAnalysis__Sequence * input,
  ros2_interface__msg__PlanningAnalysis__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PlanningAnalysis);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PlanningAnalysis * data =
      (ros2_interface__msg__PlanningAnalysis *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PlanningAnalysis__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PlanningAnalysis__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PlanningAnalysis__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
