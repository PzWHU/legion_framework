// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PredictionObstacle.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/prediction_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `perception_obstacle`
#include "ros2_interface/msg/detail/perception_obstacle__functions.h"
// Member `trajectory`
#include "ros2_interface/msg/detail/trajectory_in_prediction__functions.h"
// Member `intent`
#include "ros2_interface/msg/detail/obstacle_intent__functions.h"
// Member `priority`
#include "ros2_interface/msg/detail/obstacle_priority__functions.h"
// Member `interactive_tag`
#include "ros2_interface/msg/detail/obstacle_interactive_tag__functions.h"

bool
ros2_interface__msg__PredictionObstacle__init(ros2_interface__msg__PredictionObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // perception_obstacle
  if (!ros2_interface__msg__PerceptionObstacle__init(&msg->perception_obstacle)) {
    ros2_interface__msg__PredictionObstacle__fini(msg);
    return false;
  }
  // timestamp
  // predicted_period
  // trajectory
  if (!ros2_interface__msg__TrajectoryInPrediction__Sequence__init(&msg->trajectory, 0)) {
    ros2_interface__msg__PredictionObstacle__fini(msg);
    return false;
  }
  // intent
  if (!ros2_interface__msg__ObstacleIntent__init(&msg->intent)) {
    ros2_interface__msg__PredictionObstacle__fini(msg);
    return false;
  }
  // priority
  if (!ros2_interface__msg__ObstaclePriority__init(&msg->priority)) {
    ros2_interface__msg__PredictionObstacle__fini(msg);
    return false;
  }
  // interactive_tag
  if (!ros2_interface__msg__ObstacleInteractiveTag__init(&msg->interactive_tag)) {
    ros2_interface__msg__PredictionObstacle__fini(msg);
    return false;
  }
  // is_static
  return true;
}

void
ros2_interface__msg__PredictionObstacle__fini(ros2_interface__msg__PredictionObstacle * msg)
{
  if (!msg) {
    return;
  }
  // perception_obstacle
  ros2_interface__msg__PerceptionObstacle__fini(&msg->perception_obstacle);
  // timestamp
  // predicted_period
  // trajectory
  ros2_interface__msg__TrajectoryInPrediction__Sequence__fini(&msg->trajectory);
  // intent
  ros2_interface__msg__ObstacleIntent__fini(&msg->intent);
  // priority
  ros2_interface__msg__ObstaclePriority__fini(&msg->priority);
  // interactive_tag
  ros2_interface__msg__ObstacleInteractiveTag__fini(&msg->interactive_tag);
  // is_static
}

bool
ros2_interface__msg__PredictionObstacle__are_equal(const ros2_interface__msg__PredictionObstacle * lhs, const ros2_interface__msg__PredictionObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // perception_obstacle
  if (!ros2_interface__msg__PerceptionObstacle__are_equal(
      &(lhs->perception_obstacle), &(rhs->perception_obstacle)))
  {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // predicted_period
  if (lhs->predicted_period != rhs->predicted_period) {
    return false;
  }
  // trajectory
  if (!ros2_interface__msg__TrajectoryInPrediction__Sequence__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  // intent
  if (!ros2_interface__msg__ObstacleIntent__are_equal(
      &(lhs->intent), &(rhs->intent)))
  {
    return false;
  }
  // priority
  if (!ros2_interface__msg__ObstaclePriority__are_equal(
      &(lhs->priority), &(rhs->priority)))
  {
    return false;
  }
  // interactive_tag
  if (!ros2_interface__msg__ObstacleInteractiveTag__are_equal(
      &(lhs->interactive_tag), &(rhs->interactive_tag)))
  {
    return false;
  }
  // is_static
  if (lhs->is_static != rhs->is_static) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__PredictionObstacle__copy(
  const ros2_interface__msg__PredictionObstacle * input,
  ros2_interface__msg__PredictionObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // perception_obstacle
  if (!ros2_interface__msg__PerceptionObstacle__copy(
      &(input->perception_obstacle), &(output->perception_obstacle)))
  {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // predicted_period
  output->predicted_period = input->predicted_period;
  // trajectory
  if (!ros2_interface__msg__TrajectoryInPrediction__Sequence__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  // intent
  if (!ros2_interface__msg__ObstacleIntent__copy(
      &(input->intent), &(output->intent)))
  {
    return false;
  }
  // priority
  if (!ros2_interface__msg__ObstaclePriority__copy(
      &(input->priority), &(output->priority)))
  {
    return false;
  }
  // interactive_tag
  if (!ros2_interface__msg__ObstacleInteractiveTag__copy(
      &(input->interactive_tag), &(output->interactive_tag)))
  {
    return false;
  }
  // is_static
  output->is_static = input->is_static;
  return true;
}

ros2_interface__msg__PredictionObstacle *
ros2_interface__msg__PredictionObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PredictionObstacle * msg = (ros2_interface__msg__PredictionObstacle *)allocator.allocate(sizeof(ros2_interface__msg__PredictionObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PredictionObstacle));
  bool success = ros2_interface__msg__PredictionObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PredictionObstacle__destroy(ros2_interface__msg__PredictionObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PredictionObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PredictionObstacle__Sequence__init(ros2_interface__msg__PredictionObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PredictionObstacle * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PredictionObstacle *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PredictionObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PredictionObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PredictionObstacle__fini(&data[i - 1]);
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
ros2_interface__msg__PredictionObstacle__Sequence__fini(ros2_interface__msg__PredictionObstacle__Sequence * array)
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
      ros2_interface__msg__PredictionObstacle__fini(&array->data[i]);
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

ros2_interface__msg__PredictionObstacle__Sequence *
ros2_interface__msg__PredictionObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PredictionObstacle__Sequence * array = (ros2_interface__msg__PredictionObstacle__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PredictionObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PredictionObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PredictionObstacle__Sequence__destroy(ros2_interface__msg__PredictionObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PredictionObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PredictionObstacle__Sequence__are_equal(const ros2_interface__msg__PredictionObstacle__Sequence * lhs, const ros2_interface__msg__PredictionObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PredictionObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PredictionObstacle__Sequence__copy(
  const ros2_interface__msg__PredictionObstacle__Sequence * input,
  ros2_interface__msg__PredictionObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PredictionObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PredictionObstacle * data =
      (ros2_interface__msg__PredictionObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PredictionObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PredictionObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PredictionObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
