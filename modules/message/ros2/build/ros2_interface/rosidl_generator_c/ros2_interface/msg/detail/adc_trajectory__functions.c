// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ADCTrajectory.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/adc_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `trajectory_points`
#include "ros2_interface/msg/detail/trajectory_point__functions.h"
// Member `estop`
#include "ros2_interface/msg/detail/e_stop__functions.h"
// Member `replan_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `rss_info`
#include "ros2_interface/msg/detail/rss_info__functions.h"

bool
ros2_interface__msg__ADCTrajectory__init(ros2_interface__msg__ADCTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__ADCTrajectory__fini(msg);
    return false;
  }
  // total_path_length
  // total_path_time
  // trajectory_points
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&msg->trajectory_points, 0)) {
    ros2_interface__msg__ADCTrajectory__fini(msg);
    return false;
  }
  // car_action
  // behaviour_lat_state
  // behaviour_lon_state
  // scenario
  // driving_mode
  // adc_trajectory_type
  // estop
  if (!ros2_interface__msg__EStop__init(&msg->estop)) {
    ros2_interface__msg__ADCTrajectory__fini(msg);
    return false;
  }
  // is_replan
  // replan_reason
  if (!rosidl_runtime_c__String__init(&msg->replan_reason)) {
    ros2_interface__msg__ADCTrajectory__fini(msg);
    return false;
  }
  // right_of_way_status
  // rss_info
  if (!ros2_interface__msg__RSSInfo__init(&msg->rss_info)) {
    ros2_interface__msg__ADCTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__ADCTrajectory__fini(ros2_interface__msg__ADCTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // total_path_length
  // total_path_time
  // trajectory_points
  ros2_interface__msg__TrajectoryPoint__Sequence__fini(&msg->trajectory_points);
  // car_action
  // behaviour_lat_state
  // behaviour_lon_state
  // scenario
  // driving_mode
  // adc_trajectory_type
  // estop
  ros2_interface__msg__EStop__fini(&msg->estop);
  // is_replan
  // replan_reason
  rosidl_runtime_c__String__fini(&msg->replan_reason);
  // right_of_way_status
  // rss_info
  ros2_interface__msg__RSSInfo__fini(&msg->rss_info);
}

bool
ros2_interface__msg__ADCTrajectory__are_equal(const ros2_interface__msg__ADCTrajectory * lhs, const ros2_interface__msg__ADCTrajectory * rhs)
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
  // total_path_length
  if (lhs->total_path_length != rhs->total_path_length) {
    return false;
  }
  // total_path_time
  if (lhs->total_path_time != rhs->total_path_time) {
    return false;
  }
  // trajectory_points
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->trajectory_points), &(rhs->trajectory_points)))
  {
    return false;
  }
  // car_action
  if (lhs->car_action != rhs->car_action) {
    return false;
  }
  // behaviour_lat_state
  if (lhs->behaviour_lat_state != rhs->behaviour_lat_state) {
    return false;
  }
  // behaviour_lon_state
  if (lhs->behaviour_lon_state != rhs->behaviour_lon_state) {
    return false;
  }
  // scenario
  if (lhs->scenario != rhs->scenario) {
    return false;
  }
  // driving_mode
  if (lhs->driving_mode != rhs->driving_mode) {
    return false;
  }
  // adc_trajectory_type
  if (lhs->adc_trajectory_type != rhs->adc_trajectory_type) {
    return false;
  }
  // estop
  if (!ros2_interface__msg__EStop__are_equal(
      &(lhs->estop), &(rhs->estop)))
  {
    return false;
  }
  // is_replan
  if (lhs->is_replan != rhs->is_replan) {
    return false;
  }
  // replan_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->replan_reason), &(rhs->replan_reason)))
  {
    return false;
  }
  // right_of_way_status
  if (lhs->right_of_way_status != rhs->right_of_way_status) {
    return false;
  }
  // rss_info
  if (!ros2_interface__msg__RSSInfo__are_equal(
      &(lhs->rss_info), &(rhs->rss_info)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ADCTrajectory__copy(
  const ros2_interface__msg__ADCTrajectory * input,
  ros2_interface__msg__ADCTrajectory * output)
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
  // total_path_length
  output->total_path_length = input->total_path_length;
  // total_path_time
  output->total_path_time = input->total_path_time;
  // trajectory_points
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__copy(
      &(input->trajectory_points), &(output->trajectory_points)))
  {
    return false;
  }
  // car_action
  output->car_action = input->car_action;
  // behaviour_lat_state
  output->behaviour_lat_state = input->behaviour_lat_state;
  // behaviour_lon_state
  output->behaviour_lon_state = input->behaviour_lon_state;
  // scenario
  output->scenario = input->scenario;
  // driving_mode
  output->driving_mode = input->driving_mode;
  // adc_trajectory_type
  output->adc_trajectory_type = input->adc_trajectory_type;
  // estop
  if (!ros2_interface__msg__EStop__copy(
      &(input->estop), &(output->estop)))
  {
    return false;
  }
  // is_replan
  output->is_replan = input->is_replan;
  // replan_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->replan_reason), &(output->replan_reason)))
  {
    return false;
  }
  // right_of_way_status
  output->right_of_way_status = input->right_of_way_status;
  // rss_info
  if (!ros2_interface__msg__RSSInfo__copy(
      &(input->rss_info), &(output->rss_info)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__ADCTrajectory *
ros2_interface__msg__ADCTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ADCTrajectory * msg = (ros2_interface__msg__ADCTrajectory *)allocator.allocate(sizeof(ros2_interface__msg__ADCTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ADCTrajectory));
  bool success = ros2_interface__msg__ADCTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ADCTrajectory__destroy(ros2_interface__msg__ADCTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ADCTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ADCTrajectory__Sequence__init(ros2_interface__msg__ADCTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ADCTrajectory * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ADCTrajectory *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ADCTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ADCTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ADCTrajectory__fini(&data[i - 1]);
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
ros2_interface__msg__ADCTrajectory__Sequence__fini(ros2_interface__msg__ADCTrajectory__Sequence * array)
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
      ros2_interface__msg__ADCTrajectory__fini(&array->data[i]);
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

ros2_interface__msg__ADCTrajectory__Sequence *
ros2_interface__msg__ADCTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ADCTrajectory__Sequence * array = (ros2_interface__msg__ADCTrajectory__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ADCTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ADCTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ADCTrajectory__Sequence__destroy(ros2_interface__msg__ADCTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ADCTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ADCTrajectory__Sequence__are_equal(const ros2_interface__msg__ADCTrajectory__Sequence * lhs, const ros2_interface__msg__ADCTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ADCTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ADCTrajectory__Sequence__copy(
  const ros2_interface__msg__ADCTrajectory__Sequence * input,
  ros2_interface__msg__ADCTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ADCTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ADCTrajectory * data =
      (ros2_interface__msg__ADCTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ADCTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ADCTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ADCTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
