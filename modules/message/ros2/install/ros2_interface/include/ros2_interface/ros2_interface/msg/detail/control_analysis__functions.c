// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ControlAnalysis.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/control_analysis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros2_interface__msg__ControlAnalysis__init(ros2_interface__msg__ControlAnalysis * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__ControlAnalysis__fini(msg);
    return false;
  }
  // driving_mode
  // driving_mode_fd
  // gear_location_fd
  // gear_location_cmd
  // epb_level_fd
  // epb_level_cmd
  // speed_mps
  // speed_reference
  // accel_value_fd
  // accel_value_cmd
  // brake_value_fd
  // brake_value_cmd
  // path_remain
  // has_stop_point
  // is_full_stop
  // is_stopped
  // lon_acc_jerk
  // acceleration_cmd
  // acceleration_cmd_closeloop
  // preview_acceleration_reference
  // slope_offset_compensation
  // turning_offset_compensation
  // speed_error_limited
  // speed_error
  // speed_offset
  // station_error_limited
  // station_error
  // lon_target_point_s
  // lon_calculate_time
  // lon_calculate_time_max
  // ref_curvature
  // ref_heading
  // current_heading
  // heading_error
  // heading_error_rate
  // lateral_error
  // lateral_error_rate
  // lon_error
  // front_steering_value_fd
  // front_steering_target
  // front_steering_rate
  // front_steer_angle_feedforward
  // front_steer_angle_feedback
  // front_steer_angle_lateral_contribution
  // front_steer_angle_lateral_rate_contribution
  // front_steer_angle_heading_contribution
  // front_steer_angle_heading_rate_contribution
  // rear_steering_value_fd
  // rear_steering_target
  // rear_steering_rate
  // rear_steer_angle_feedforward
  // rear_steer_angle_feedback
  // rear_steer_angle_lateral_contribution
  // rear_steer_angle_lateral_rate_contribution
  // rear_steer_angle_heading_contribution
  // rear_steer_angle_heading_rate_contribution
  // matrix_k_00
  // matrix_k_01
  // matrix_k_02
  // matrix_k_03
  // matrix_k_10
  // matrix_k_11
  // matrix_k_12
  // matrix_k_13
  // matrix_state_0
  // matrix_state_1
  // matrix_state_2
  // matrix_state_3
  // matrix_q_updated_0
  // matrix_q_updated_1
  // matrix_q_updated_2
  // matrix_q_updated_3
  // current_x
  // current_y
  // target_point_x
  // target_point_y
  // lat_target_point_s
  // lqr_calculate_time
  // lqr_calculate_time_max
  return true;
}

void
ros2_interface__msg__ControlAnalysis__fini(ros2_interface__msg__ControlAnalysis * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // driving_mode
  // driving_mode_fd
  // gear_location_fd
  // gear_location_cmd
  // epb_level_fd
  // epb_level_cmd
  // speed_mps
  // speed_reference
  // accel_value_fd
  // accel_value_cmd
  // brake_value_fd
  // brake_value_cmd
  // path_remain
  // has_stop_point
  // is_full_stop
  // is_stopped
  // lon_acc_jerk
  // acceleration_cmd
  // acceleration_cmd_closeloop
  // preview_acceleration_reference
  // slope_offset_compensation
  // turning_offset_compensation
  // speed_error_limited
  // speed_error
  // speed_offset
  // station_error_limited
  // station_error
  // lon_target_point_s
  // lon_calculate_time
  // lon_calculate_time_max
  // ref_curvature
  // ref_heading
  // current_heading
  // heading_error
  // heading_error_rate
  // lateral_error
  // lateral_error_rate
  // lon_error
  // front_steering_value_fd
  // front_steering_target
  // front_steering_rate
  // front_steer_angle_feedforward
  // front_steer_angle_feedback
  // front_steer_angle_lateral_contribution
  // front_steer_angle_lateral_rate_contribution
  // front_steer_angle_heading_contribution
  // front_steer_angle_heading_rate_contribution
  // rear_steering_value_fd
  // rear_steering_target
  // rear_steering_rate
  // rear_steer_angle_feedforward
  // rear_steer_angle_feedback
  // rear_steer_angle_lateral_contribution
  // rear_steer_angle_lateral_rate_contribution
  // rear_steer_angle_heading_contribution
  // rear_steer_angle_heading_rate_contribution
  // matrix_k_00
  // matrix_k_01
  // matrix_k_02
  // matrix_k_03
  // matrix_k_10
  // matrix_k_11
  // matrix_k_12
  // matrix_k_13
  // matrix_state_0
  // matrix_state_1
  // matrix_state_2
  // matrix_state_3
  // matrix_q_updated_0
  // matrix_q_updated_1
  // matrix_q_updated_2
  // matrix_q_updated_3
  // current_x
  // current_y
  // target_point_x
  // target_point_y
  // lat_target_point_s
  // lqr_calculate_time
  // lqr_calculate_time_max
}

bool
ros2_interface__msg__ControlAnalysis__are_equal(const ros2_interface__msg__ControlAnalysis * lhs, const ros2_interface__msg__ControlAnalysis * rhs)
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
  // driving_mode
  if (lhs->driving_mode != rhs->driving_mode) {
    return false;
  }
  // driving_mode_fd
  if (lhs->driving_mode_fd != rhs->driving_mode_fd) {
    return false;
  }
  // gear_location_fd
  if (lhs->gear_location_fd != rhs->gear_location_fd) {
    return false;
  }
  // gear_location_cmd
  if (lhs->gear_location_cmd != rhs->gear_location_cmd) {
    return false;
  }
  // epb_level_fd
  if (lhs->epb_level_fd != rhs->epb_level_fd) {
    return false;
  }
  // epb_level_cmd
  if (lhs->epb_level_cmd != rhs->epb_level_cmd) {
    return false;
  }
  // speed_mps
  if (lhs->speed_mps != rhs->speed_mps) {
    return false;
  }
  // speed_reference
  if (lhs->speed_reference != rhs->speed_reference) {
    return false;
  }
  // accel_value_fd
  if (lhs->accel_value_fd != rhs->accel_value_fd) {
    return false;
  }
  // accel_value_cmd
  if (lhs->accel_value_cmd != rhs->accel_value_cmd) {
    return false;
  }
  // brake_value_fd
  if (lhs->brake_value_fd != rhs->brake_value_fd) {
    return false;
  }
  // brake_value_cmd
  if (lhs->brake_value_cmd != rhs->brake_value_cmd) {
    return false;
  }
  // path_remain
  if (lhs->path_remain != rhs->path_remain) {
    return false;
  }
  // has_stop_point
  if (lhs->has_stop_point != rhs->has_stop_point) {
    return false;
  }
  // is_full_stop
  if (lhs->is_full_stop != rhs->is_full_stop) {
    return false;
  }
  // is_stopped
  if (lhs->is_stopped != rhs->is_stopped) {
    return false;
  }
  // lon_acc_jerk
  if (lhs->lon_acc_jerk != rhs->lon_acc_jerk) {
    return false;
  }
  // acceleration_cmd
  if (lhs->acceleration_cmd != rhs->acceleration_cmd) {
    return false;
  }
  // acceleration_cmd_closeloop
  if (lhs->acceleration_cmd_closeloop != rhs->acceleration_cmd_closeloop) {
    return false;
  }
  // preview_acceleration_reference
  if (lhs->preview_acceleration_reference != rhs->preview_acceleration_reference) {
    return false;
  }
  // slope_offset_compensation
  if (lhs->slope_offset_compensation != rhs->slope_offset_compensation) {
    return false;
  }
  // turning_offset_compensation
  if (lhs->turning_offset_compensation != rhs->turning_offset_compensation) {
    return false;
  }
  // speed_error_limited
  if (lhs->speed_error_limited != rhs->speed_error_limited) {
    return false;
  }
  // speed_error
  if (lhs->speed_error != rhs->speed_error) {
    return false;
  }
  // speed_offset
  if (lhs->speed_offset != rhs->speed_offset) {
    return false;
  }
  // station_error_limited
  if (lhs->station_error_limited != rhs->station_error_limited) {
    return false;
  }
  // station_error
  if (lhs->station_error != rhs->station_error) {
    return false;
  }
  // lon_target_point_s
  if (lhs->lon_target_point_s != rhs->lon_target_point_s) {
    return false;
  }
  // lon_calculate_time
  if (lhs->lon_calculate_time != rhs->lon_calculate_time) {
    return false;
  }
  // lon_calculate_time_max
  if (lhs->lon_calculate_time_max != rhs->lon_calculate_time_max) {
    return false;
  }
  // ref_curvature
  if (lhs->ref_curvature != rhs->ref_curvature) {
    return false;
  }
  // ref_heading
  if (lhs->ref_heading != rhs->ref_heading) {
    return false;
  }
  // current_heading
  if (lhs->current_heading != rhs->current_heading) {
    return false;
  }
  // heading_error
  if (lhs->heading_error != rhs->heading_error) {
    return false;
  }
  // heading_error_rate
  if (lhs->heading_error_rate != rhs->heading_error_rate) {
    return false;
  }
  // lateral_error
  if (lhs->lateral_error != rhs->lateral_error) {
    return false;
  }
  // lateral_error_rate
  if (lhs->lateral_error_rate != rhs->lateral_error_rate) {
    return false;
  }
  // lon_error
  if (lhs->lon_error != rhs->lon_error) {
    return false;
  }
  // front_steering_value_fd
  if (lhs->front_steering_value_fd != rhs->front_steering_value_fd) {
    return false;
  }
  // front_steering_target
  if (lhs->front_steering_target != rhs->front_steering_target) {
    return false;
  }
  // front_steering_rate
  if (lhs->front_steering_rate != rhs->front_steering_rate) {
    return false;
  }
  // front_steer_angle_feedforward
  if (lhs->front_steer_angle_feedforward != rhs->front_steer_angle_feedforward) {
    return false;
  }
  // front_steer_angle_feedback
  if (lhs->front_steer_angle_feedback != rhs->front_steer_angle_feedback) {
    return false;
  }
  // front_steer_angle_lateral_contribution
  if (lhs->front_steer_angle_lateral_contribution != rhs->front_steer_angle_lateral_contribution) {
    return false;
  }
  // front_steer_angle_lateral_rate_contribution
  if (lhs->front_steer_angle_lateral_rate_contribution != rhs->front_steer_angle_lateral_rate_contribution) {
    return false;
  }
  // front_steer_angle_heading_contribution
  if (lhs->front_steer_angle_heading_contribution != rhs->front_steer_angle_heading_contribution) {
    return false;
  }
  // front_steer_angle_heading_rate_contribution
  if (lhs->front_steer_angle_heading_rate_contribution != rhs->front_steer_angle_heading_rate_contribution) {
    return false;
  }
  // rear_steering_value_fd
  if (lhs->rear_steering_value_fd != rhs->rear_steering_value_fd) {
    return false;
  }
  // rear_steering_target
  if (lhs->rear_steering_target != rhs->rear_steering_target) {
    return false;
  }
  // rear_steering_rate
  if (lhs->rear_steering_rate != rhs->rear_steering_rate) {
    return false;
  }
  // rear_steer_angle_feedforward
  if (lhs->rear_steer_angle_feedforward != rhs->rear_steer_angle_feedforward) {
    return false;
  }
  // rear_steer_angle_feedback
  if (lhs->rear_steer_angle_feedback != rhs->rear_steer_angle_feedback) {
    return false;
  }
  // rear_steer_angle_lateral_contribution
  if (lhs->rear_steer_angle_lateral_contribution != rhs->rear_steer_angle_lateral_contribution) {
    return false;
  }
  // rear_steer_angle_lateral_rate_contribution
  if (lhs->rear_steer_angle_lateral_rate_contribution != rhs->rear_steer_angle_lateral_rate_contribution) {
    return false;
  }
  // rear_steer_angle_heading_contribution
  if (lhs->rear_steer_angle_heading_contribution != rhs->rear_steer_angle_heading_contribution) {
    return false;
  }
  // rear_steer_angle_heading_rate_contribution
  if (lhs->rear_steer_angle_heading_rate_contribution != rhs->rear_steer_angle_heading_rate_contribution) {
    return false;
  }
  // matrix_k_00
  if (lhs->matrix_k_00 != rhs->matrix_k_00) {
    return false;
  }
  // matrix_k_01
  if (lhs->matrix_k_01 != rhs->matrix_k_01) {
    return false;
  }
  // matrix_k_02
  if (lhs->matrix_k_02 != rhs->matrix_k_02) {
    return false;
  }
  // matrix_k_03
  if (lhs->matrix_k_03 != rhs->matrix_k_03) {
    return false;
  }
  // matrix_k_10
  if (lhs->matrix_k_10 != rhs->matrix_k_10) {
    return false;
  }
  // matrix_k_11
  if (lhs->matrix_k_11 != rhs->matrix_k_11) {
    return false;
  }
  // matrix_k_12
  if (lhs->matrix_k_12 != rhs->matrix_k_12) {
    return false;
  }
  // matrix_k_13
  if (lhs->matrix_k_13 != rhs->matrix_k_13) {
    return false;
  }
  // matrix_state_0
  if (lhs->matrix_state_0 != rhs->matrix_state_0) {
    return false;
  }
  // matrix_state_1
  if (lhs->matrix_state_1 != rhs->matrix_state_1) {
    return false;
  }
  // matrix_state_2
  if (lhs->matrix_state_2 != rhs->matrix_state_2) {
    return false;
  }
  // matrix_state_3
  if (lhs->matrix_state_3 != rhs->matrix_state_3) {
    return false;
  }
  // matrix_q_updated_0
  if (lhs->matrix_q_updated_0 != rhs->matrix_q_updated_0) {
    return false;
  }
  // matrix_q_updated_1
  if (lhs->matrix_q_updated_1 != rhs->matrix_q_updated_1) {
    return false;
  }
  // matrix_q_updated_2
  if (lhs->matrix_q_updated_2 != rhs->matrix_q_updated_2) {
    return false;
  }
  // matrix_q_updated_3
  if (lhs->matrix_q_updated_3 != rhs->matrix_q_updated_3) {
    return false;
  }
  // current_x
  if (lhs->current_x != rhs->current_x) {
    return false;
  }
  // current_y
  if (lhs->current_y != rhs->current_y) {
    return false;
  }
  // target_point_x
  if (lhs->target_point_x != rhs->target_point_x) {
    return false;
  }
  // target_point_y
  if (lhs->target_point_y != rhs->target_point_y) {
    return false;
  }
  // lat_target_point_s
  if (lhs->lat_target_point_s != rhs->lat_target_point_s) {
    return false;
  }
  // lqr_calculate_time
  if (lhs->lqr_calculate_time != rhs->lqr_calculate_time) {
    return false;
  }
  // lqr_calculate_time_max
  if (lhs->lqr_calculate_time_max != rhs->lqr_calculate_time_max) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ControlAnalysis__copy(
  const ros2_interface__msg__ControlAnalysis * input,
  ros2_interface__msg__ControlAnalysis * output)
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
  // driving_mode
  output->driving_mode = input->driving_mode;
  // driving_mode_fd
  output->driving_mode_fd = input->driving_mode_fd;
  // gear_location_fd
  output->gear_location_fd = input->gear_location_fd;
  // gear_location_cmd
  output->gear_location_cmd = input->gear_location_cmd;
  // epb_level_fd
  output->epb_level_fd = input->epb_level_fd;
  // epb_level_cmd
  output->epb_level_cmd = input->epb_level_cmd;
  // speed_mps
  output->speed_mps = input->speed_mps;
  // speed_reference
  output->speed_reference = input->speed_reference;
  // accel_value_fd
  output->accel_value_fd = input->accel_value_fd;
  // accel_value_cmd
  output->accel_value_cmd = input->accel_value_cmd;
  // brake_value_fd
  output->brake_value_fd = input->brake_value_fd;
  // brake_value_cmd
  output->brake_value_cmd = input->brake_value_cmd;
  // path_remain
  output->path_remain = input->path_remain;
  // has_stop_point
  output->has_stop_point = input->has_stop_point;
  // is_full_stop
  output->is_full_stop = input->is_full_stop;
  // is_stopped
  output->is_stopped = input->is_stopped;
  // lon_acc_jerk
  output->lon_acc_jerk = input->lon_acc_jerk;
  // acceleration_cmd
  output->acceleration_cmd = input->acceleration_cmd;
  // acceleration_cmd_closeloop
  output->acceleration_cmd_closeloop = input->acceleration_cmd_closeloop;
  // preview_acceleration_reference
  output->preview_acceleration_reference = input->preview_acceleration_reference;
  // slope_offset_compensation
  output->slope_offset_compensation = input->slope_offset_compensation;
  // turning_offset_compensation
  output->turning_offset_compensation = input->turning_offset_compensation;
  // speed_error_limited
  output->speed_error_limited = input->speed_error_limited;
  // speed_error
  output->speed_error = input->speed_error;
  // speed_offset
  output->speed_offset = input->speed_offset;
  // station_error_limited
  output->station_error_limited = input->station_error_limited;
  // station_error
  output->station_error = input->station_error;
  // lon_target_point_s
  output->lon_target_point_s = input->lon_target_point_s;
  // lon_calculate_time
  output->lon_calculate_time = input->lon_calculate_time;
  // lon_calculate_time_max
  output->lon_calculate_time_max = input->lon_calculate_time_max;
  // ref_curvature
  output->ref_curvature = input->ref_curvature;
  // ref_heading
  output->ref_heading = input->ref_heading;
  // current_heading
  output->current_heading = input->current_heading;
  // heading_error
  output->heading_error = input->heading_error;
  // heading_error_rate
  output->heading_error_rate = input->heading_error_rate;
  // lateral_error
  output->lateral_error = input->lateral_error;
  // lateral_error_rate
  output->lateral_error_rate = input->lateral_error_rate;
  // lon_error
  output->lon_error = input->lon_error;
  // front_steering_value_fd
  output->front_steering_value_fd = input->front_steering_value_fd;
  // front_steering_target
  output->front_steering_target = input->front_steering_target;
  // front_steering_rate
  output->front_steering_rate = input->front_steering_rate;
  // front_steer_angle_feedforward
  output->front_steer_angle_feedforward = input->front_steer_angle_feedforward;
  // front_steer_angle_feedback
  output->front_steer_angle_feedback = input->front_steer_angle_feedback;
  // front_steer_angle_lateral_contribution
  output->front_steer_angle_lateral_contribution = input->front_steer_angle_lateral_contribution;
  // front_steer_angle_lateral_rate_contribution
  output->front_steer_angle_lateral_rate_contribution = input->front_steer_angle_lateral_rate_contribution;
  // front_steer_angle_heading_contribution
  output->front_steer_angle_heading_contribution = input->front_steer_angle_heading_contribution;
  // front_steer_angle_heading_rate_contribution
  output->front_steer_angle_heading_rate_contribution = input->front_steer_angle_heading_rate_contribution;
  // rear_steering_value_fd
  output->rear_steering_value_fd = input->rear_steering_value_fd;
  // rear_steering_target
  output->rear_steering_target = input->rear_steering_target;
  // rear_steering_rate
  output->rear_steering_rate = input->rear_steering_rate;
  // rear_steer_angle_feedforward
  output->rear_steer_angle_feedforward = input->rear_steer_angle_feedforward;
  // rear_steer_angle_feedback
  output->rear_steer_angle_feedback = input->rear_steer_angle_feedback;
  // rear_steer_angle_lateral_contribution
  output->rear_steer_angle_lateral_contribution = input->rear_steer_angle_lateral_contribution;
  // rear_steer_angle_lateral_rate_contribution
  output->rear_steer_angle_lateral_rate_contribution = input->rear_steer_angle_lateral_rate_contribution;
  // rear_steer_angle_heading_contribution
  output->rear_steer_angle_heading_contribution = input->rear_steer_angle_heading_contribution;
  // rear_steer_angle_heading_rate_contribution
  output->rear_steer_angle_heading_rate_contribution = input->rear_steer_angle_heading_rate_contribution;
  // matrix_k_00
  output->matrix_k_00 = input->matrix_k_00;
  // matrix_k_01
  output->matrix_k_01 = input->matrix_k_01;
  // matrix_k_02
  output->matrix_k_02 = input->matrix_k_02;
  // matrix_k_03
  output->matrix_k_03 = input->matrix_k_03;
  // matrix_k_10
  output->matrix_k_10 = input->matrix_k_10;
  // matrix_k_11
  output->matrix_k_11 = input->matrix_k_11;
  // matrix_k_12
  output->matrix_k_12 = input->matrix_k_12;
  // matrix_k_13
  output->matrix_k_13 = input->matrix_k_13;
  // matrix_state_0
  output->matrix_state_0 = input->matrix_state_0;
  // matrix_state_1
  output->matrix_state_1 = input->matrix_state_1;
  // matrix_state_2
  output->matrix_state_2 = input->matrix_state_2;
  // matrix_state_3
  output->matrix_state_3 = input->matrix_state_3;
  // matrix_q_updated_0
  output->matrix_q_updated_0 = input->matrix_q_updated_0;
  // matrix_q_updated_1
  output->matrix_q_updated_1 = input->matrix_q_updated_1;
  // matrix_q_updated_2
  output->matrix_q_updated_2 = input->matrix_q_updated_2;
  // matrix_q_updated_3
  output->matrix_q_updated_3 = input->matrix_q_updated_3;
  // current_x
  output->current_x = input->current_x;
  // current_y
  output->current_y = input->current_y;
  // target_point_x
  output->target_point_x = input->target_point_x;
  // target_point_y
  output->target_point_y = input->target_point_y;
  // lat_target_point_s
  output->lat_target_point_s = input->lat_target_point_s;
  // lqr_calculate_time
  output->lqr_calculate_time = input->lqr_calculate_time;
  // lqr_calculate_time_max
  output->lqr_calculate_time_max = input->lqr_calculate_time_max;
  return true;
}

ros2_interface__msg__ControlAnalysis *
ros2_interface__msg__ControlAnalysis__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ControlAnalysis * msg = (ros2_interface__msg__ControlAnalysis *)allocator.allocate(sizeof(ros2_interface__msg__ControlAnalysis), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ControlAnalysis));
  bool success = ros2_interface__msg__ControlAnalysis__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ControlAnalysis__destroy(ros2_interface__msg__ControlAnalysis * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ControlAnalysis__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ControlAnalysis__Sequence__init(ros2_interface__msg__ControlAnalysis__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ControlAnalysis * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ControlAnalysis *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ControlAnalysis), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ControlAnalysis__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ControlAnalysis__fini(&data[i - 1]);
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
ros2_interface__msg__ControlAnalysis__Sequence__fini(ros2_interface__msg__ControlAnalysis__Sequence * array)
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
      ros2_interface__msg__ControlAnalysis__fini(&array->data[i]);
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

ros2_interface__msg__ControlAnalysis__Sequence *
ros2_interface__msg__ControlAnalysis__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ControlAnalysis__Sequence * array = (ros2_interface__msg__ControlAnalysis__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ControlAnalysis__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ControlAnalysis__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ControlAnalysis__Sequence__destroy(ros2_interface__msg__ControlAnalysis__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ControlAnalysis__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ControlAnalysis__Sequence__are_equal(const ros2_interface__msg__ControlAnalysis__Sequence * lhs, const ros2_interface__msg__ControlAnalysis__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ControlAnalysis__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ControlAnalysis__Sequence__copy(
  const ros2_interface__msg__ControlAnalysis__Sequence * input,
  ros2_interface__msg__ControlAnalysis__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ControlAnalysis);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ControlAnalysis * data =
      (ros2_interface__msg__ControlAnalysis *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ControlAnalysis__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ControlAnalysis__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ControlAnalysis__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
