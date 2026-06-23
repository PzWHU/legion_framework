// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ObstacleFeature.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/obstacle_feature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `polygon_point`
// Member `position`
// Member `front_position`
// Member `velocity`
// Member `raw_velocity`
// Member `acceleration`
// Member `t_position`
// Member `t_velocity`
// Member `t_acceleration`
#include "ros2_interface/msg/detail/point3_d__functions.h"
// Member `priority`
#include "ros2_interface/msg/detail/obstacle_priority__functions.h"
// Member `future_trajectory_points`
#include "ros2_interface/msg/detail/prediction_trajectory_point__functions.h"
// Member `short_term_predicted_trajectory_points`
// Member `adc_trajectory_point`
#include "ros2_interface/msg/detail/trajectory_point_in_prediction__functions.h"
// Member `predicted_trajectory`
#include "ros2_interface/msg/detail/trajectory_in_prediction__functions.h"

bool
ros2_interface__msg__ObstacleFeature__init(ros2_interface__msg__ObstacleFeature * msg)
{
  if (!msg) {
    return false;
  }
  // obstacle_id
  // polygon_point
  if (!ros2_interface__msg__Point3D__init(&msg->polygon_point)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // position
  if (!ros2_interface__msg__Point3D__init(&msg->position)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // front_position
  if (!ros2_interface__msg__Point3D__init(&msg->front_position)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // velocity
  if (!ros2_interface__msg__Point3D__init(&msg->velocity)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // raw_velocity
  if (!ros2_interface__msg__Point3D__init(&msg->raw_velocity)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // acceleration
  if (!ros2_interface__msg__Point3D__init(&msg->acceleration)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // velocity_heading
  // speed
  // acc
  // theta
  // length
  // width
  // height
  // tracking_time
  // timestamp
  // t_position
  if (!ros2_interface__msg__Point3D__init(&msg->t_position)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // t_velocity
  if (!ros2_interface__msg__Point3D__init(&msg->t_velocity)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // t_velocity_heading
  // t_speed
  // t_acceleration
  if (!ros2_interface__msg__Point3D__init(&msg->t_acceleration)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // t_acc
  // is_still
  // type
  // label_update_time_delta
  // priority
  if (!ros2_interface__msg__ObstaclePriority__init(&msg->priority)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // is_near_junction
  // future_trajectory_points
  if (!ros2_interface__msg__PredictionTrajectoryPoint__Sequence__init(&msg->future_trajectory_points, 0)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // short_term_predicted_trajectory_points
  if (!ros2_interface__msg__TrajectoryPointInPrediction__Sequence__init(&msg->short_term_predicted_trajectory_points, 0)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // predicted_trajectory
  if (!ros2_interface__msg__TrajectoryInPrediction__Sequence__init(&msg->predicted_trajectory, 0)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  // adc_trajectory_point
  if (!ros2_interface__msg__TrajectoryPointInPrediction__Sequence__init(&msg->adc_trajectory_point, 0)) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__ObstacleFeature__fini(ros2_interface__msg__ObstacleFeature * msg)
{
  if (!msg) {
    return;
  }
  // obstacle_id
  // polygon_point
  ros2_interface__msg__Point3D__fini(&msg->polygon_point);
  // position
  ros2_interface__msg__Point3D__fini(&msg->position);
  // front_position
  ros2_interface__msg__Point3D__fini(&msg->front_position);
  // velocity
  ros2_interface__msg__Point3D__fini(&msg->velocity);
  // raw_velocity
  ros2_interface__msg__Point3D__fini(&msg->raw_velocity);
  // acceleration
  ros2_interface__msg__Point3D__fini(&msg->acceleration);
  // velocity_heading
  // speed
  // acc
  // theta
  // length
  // width
  // height
  // tracking_time
  // timestamp
  // t_position
  ros2_interface__msg__Point3D__fini(&msg->t_position);
  // t_velocity
  ros2_interface__msg__Point3D__fini(&msg->t_velocity);
  // t_velocity_heading
  // t_speed
  // t_acceleration
  ros2_interface__msg__Point3D__fini(&msg->t_acceleration);
  // t_acc
  // is_still
  // type
  // label_update_time_delta
  // priority
  ros2_interface__msg__ObstaclePriority__fini(&msg->priority);
  // is_near_junction
  // future_trajectory_points
  ros2_interface__msg__PredictionTrajectoryPoint__Sequence__fini(&msg->future_trajectory_points);
  // short_term_predicted_trajectory_points
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence__fini(&msg->short_term_predicted_trajectory_points);
  // predicted_trajectory
  ros2_interface__msg__TrajectoryInPrediction__Sequence__fini(&msg->predicted_trajectory);
  // adc_trajectory_point
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence__fini(&msg->adc_trajectory_point);
}

bool
ros2_interface__msg__ObstacleFeature__are_equal(const ros2_interface__msg__ObstacleFeature * lhs, const ros2_interface__msg__ObstacleFeature * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obstacle_id
  if (lhs->obstacle_id != rhs->obstacle_id) {
    return false;
  }
  // polygon_point
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->polygon_point), &(rhs->polygon_point)))
  {
    return false;
  }
  // position
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // front_position
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->front_position), &(rhs->front_position)))
  {
    return false;
  }
  // velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // raw_velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->raw_velocity), &(rhs->raw_velocity)))
  {
    return false;
  }
  // acceleration
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // velocity_heading
  if (lhs->velocity_heading != rhs->velocity_heading) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // acc
  if (lhs->acc != rhs->acc) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // tracking_time
  if (lhs->tracking_time != rhs->tracking_time) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // t_position
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->t_position), &(rhs->t_position)))
  {
    return false;
  }
  // t_velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->t_velocity), &(rhs->t_velocity)))
  {
    return false;
  }
  // t_velocity_heading
  if (lhs->t_velocity_heading != rhs->t_velocity_heading) {
    return false;
  }
  // t_speed
  if (lhs->t_speed != rhs->t_speed) {
    return false;
  }
  // t_acceleration
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->t_acceleration), &(rhs->t_acceleration)))
  {
    return false;
  }
  // t_acc
  if (lhs->t_acc != rhs->t_acc) {
    return false;
  }
  // is_still
  if (lhs->is_still != rhs->is_still) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // label_update_time_delta
  if (lhs->label_update_time_delta != rhs->label_update_time_delta) {
    return false;
  }
  // priority
  if (!ros2_interface__msg__ObstaclePriority__are_equal(
      &(lhs->priority), &(rhs->priority)))
  {
    return false;
  }
  // is_near_junction
  if (lhs->is_near_junction != rhs->is_near_junction) {
    return false;
  }
  // future_trajectory_points
  if (!ros2_interface__msg__PredictionTrajectoryPoint__Sequence__are_equal(
      &(lhs->future_trajectory_points), &(rhs->future_trajectory_points)))
  {
    return false;
  }
  // short_term_predicted_trajectory_points
  if (!ros2_interface__msg__TrajectoryPointInPrediction__Sequence__are_equal(
      &(lhs->short_term_predicted_trajectory_points), &(rhs->short_term_predicted_trajectory_points)))
  {
    return false;
  }
  // predicted_trajectory
  if (!ros2_interface__msg__TrajectoryInPrediction__Sequence__are_equal(
      &(lhs->predicted_trajectory), &(rhs->predicted_trajectory)))
  {
    return false;
  }
  // adc_trajectory_point
  if (!ros2_interface__msg__TrajectoryPointInPrediction__Sequence__are_equal(
      &(lhs->adc_trajectory_point), &(rhs->adc_trajectory_point)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ObstacleFeature__copy(
  const ros2_interface__msg__ObstacleFeature * input,
  ros2_interface__msg__ObstacleFeature * output)
{
  if (!input || !output) {
    return false;
  }
  // obstacle_id
  output->obstacle_id = input->obstacle_id;
  // polygon_point
  if (!ros2_interface__msg__Point3D__copy(
      &(input->polygon_point), &(output->polygon_point)))
  {
    return false;
  }
  // position
  if (!ros2_interface__msg__Point3D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // front_position
  if (!ros2_interface__msg__Point3D__copy(
      &(input->front_position), &(output->front_position)))
  {
    return false;
  }
  // velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // raw_velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->raw_velocity), &(output->raw_velocity)))
  {
    return false;
  }
  // acceleration
  if (!ros2_interface__msg__Point3D__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // velocity_heading
  output->velocity_heading = input->velocity_heading;
  // speed
  output->speed = input->speed;
  // acc
  output->acc = input->acc;
  // theta
  output->theta = input->theta;
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // tracking_time
  output->tracking_time = input->tracking_time;
  // timestamp
  output->timestamp = input->timestamp;
  // t_position
  if (!ros2_interface__msg__Point3D__copy(
      &(input->t_position), &(output->t_position)))
  {
    return false;
  }
  // t_velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->t_velocity), &(output->t_velocity)))
  {
    return false;
  }
  // t_velocity_heading
  output->t_velocity_heading = input->t_velocity_heading;
  // t_speed
  output->t_speed = input->t_speed;
  // t_acceleration
  if (!ros2_interface__msg__Point3D__copy(
      &(input->t_acceleration), &(output->t_acceleration)))
  {
    return false;
  }
  // t_acc
  output->t_acc = input->t_acc;
  // is_still
  output->is_still = input->is_still;
  // type
  output->type = input->type;
  // label_update_time_delta
  output->label_update_time_delta = input->label_update_time_delta;
  // priority
  if (!ros2_interface__msg__ObstaclePriority__copy(
      &(input->priority), &(output->priority)))
  {
    return false;
  }
  // is_near_junction
  output->is_near_junction = input->is_near_junction;
  // future_trajectory_points
  if (!ros2_interface__msg__PredictionTrajectoryPoint__Sequence__copy(
      &(input->future_trajectory_points), &(output->future_trajectory_points)))
  {
    return false;
  }
  // short_term_predicted_trajectory_points
  if (!ros2_interface__msg__TrajectoryPointInPrediction__Sequence__copy(
      &(input->short_term_predicted_trajectory_points), &(output->short_term_predicted_trajectory_points)))
  {
    return false;
  }
  // predicted_trajectory
  if (!ros2_interface__msg__TrajectoryInPrediction__Sequence__copy(
      &(input->predicted_trajectory), &(output->predicted_trajectory)))
  {
    return false;
  }
  // adc_trajectory_point
  if (!ros2_interface__msg__TrajectoryPointInPrediction__Sequence__copy(
      &(input->adc_trajectory_point), &(output->adc_trajectory_point)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__ObstacleFeature *
ros2_interface__msg__ObstacleFeature__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ObstacleFeature * msg = (ros2_interface__msg__ObstacleFeature *)allocator.allocate(sizeof(ros2_interface__msg__ObstacleFeature), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ObstacleFeature));
  bool success = ros2_interface__msg__ObstacleFeature__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ObstacleFeature__destroy(ros2_interface__msg__ObstacleFeature * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ObstacleFeature__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ObstacleFeature__Sequence__init(ros2_interface__msg__ObstacleFeature__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ObstacleFeature * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ObstacleFeature *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ObstacleFeature), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ObstacleFeature__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ObstacleFeature__fini(&data[i - 1]);
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
ros2_interface__msg__ObstacleFeature__Sequence__fini(ros2_interface__msg__ObstacleFeature__Sequence * array)
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
      ros2_interface__msg__ObstacleFeature__fini(&array->data[i]);
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

ros2_interface__msg__ObstacleFeature__Sequence *
ros2_interface__msg__ObstacleFeature__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ObstacleFeature__Sequence * array = (ros2_interface__msg__ObstacleFeature__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ObstacleFeature__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ObstacleFeature__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ObstacleFeature__Sequence__destroy(ros2_interface__msg__ObstacleFeature__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ObstacleFeature__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ObstacleFeature__Sequence__are_equal(const ros2_interface__msg__ObstacleFeature__Sequence * lhs, const ros2_interface__msg__ObstacleFeature__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ObstacleFeature__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ObstacleFeature__Sequence__copy(
  const ros2_interface__msg__ObstacleFeature__Sequence * input,
  ros2_interface__msg__ObstacleFeature__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ObstacleFeature);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ObstacleFeature * data =
      (ros2_interface__msg__ObstacleFeature *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ObstacleFeature__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ObstacleFeature__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ObstacleFeature__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
