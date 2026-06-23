// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ControlAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ControlAnalysis __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ControlAnalysis __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlAnalysis_
{
  using Type = ControlAnalysis_<ContainerAllocator>;

  explicit ControlAnalysis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driving_mode = 0l;
      this->driving_mode_fd = 0l;
      this->gear_location_fd = 0l;
      this->gear_location_cmd = 0l;
      this->epb_level_fd = 0l;
      this->epb_level_cmd = 0l;
      this->speed_mps = 0.0;
      this->speed_reference = 0.0;
      this->accel_value_fd = 0.0;
      this->accel_value_cmd = 0.0;
      this->brake_value_fd = 0.0;
      this->brake_value_cmd = 0.0;
      this->path_remain = 0.0;
      this->has_stop_point = false;
      this->is_full_stop = false;
      this->is_stopped = false;
      this->lon_acc_jerk = 0.0;
      this->acceleration_cmd = 0.0;
      this->acceleration_cmd_closeloop = 0.0;
      this->preview_acceleration_reference = 0.0;
      this->slope_offset_compensation = 0.0;
      this->turning_offset_compensation = 0.0;
      this->speed_error_limited = 0.0;
      this->speed_error = 0.0;
      this->speed_offset = 0.0;
      this->station_error_limited = 0.0;
      this->station_error = 0.0;
      this->lon_target_point_s = 0.0;
      this->lon_calculate_time = 0ll;
      this->lon_calculate_time_max = 0ll;
      this->ref_curvature = 0.0;
      this->ref_heading = 0.0;
      this->current_heading = 0.0;
      this->heading_error = 0.0;
      this->heading_error_rate = 0.0;
      this->lateral_error = 0.0;
      this->lateral_error_rate = 0.0;
      this->lon_error = 0.0;
      this->front_steering_value_fd = 0.0;
      this->front_steering_target = 0.0;
      this->front_steering_rate = 0.0;
      this->front_steer_angle_feedforward = 0.0;
      this->front_steer_angle_feedback = 0.0;
      this->front_steer_angle_lateral_contribution = 0.0;
      this->front_steer_angle_lateral_rate_contribution = 0.0;
      this->front_steer_angle_heading_contribution = 0.0;
      this->front_steer_angle_heading_rate_contribution = 0.0;
      this->rear_steering_value_fd = 0.0;
      this->rear_steering_target = 0.0;
      this->rear_steering_rate = 0.0;
      this->rear_steer_angle_feedforward = 0.0;
      this->rear_steer_angle_feedback = 0.0;
      this->rear_steer_angle_lateral_contribution = 0.0;
      this->rear_steer_angle_lateral_rate_contribution = 0.0;
      this->rear_steer_angle_heading_contribution = 0.0;
      this->rear_steer_angle_heading_rate_contribution = 0.0;
      this->matrix_k_00 = 0.0;
      this->matrix_k_01 = 0.0;
      this->matrix_k_02 = 0.0;
      this->matrix_k_03 = 0.0;
      this->matrix_k_10 = 0.0;
      this->matrix_k_11 = 0.0;
      this->matrix_k_12 = 0.0;
      this->matrix_k_13 = 0.0;
      this->matrix_state_0 = 0.0;
      this->matrix_state_1 = 0.0;
      this->matrix_state_2 = 0.0;
      this->matrix_state_3 = 0.0;
      this->matrix_q_updated_0 = 0.0;
      this->matrix_q_updated_1 = 0.0;
      this->matrix_q_updated_2 = 0.0;
      this->matrix_q_updated_3 = 0.0;
      this->current_x = 0.0;
      this->current_y = 0.0;
      this->target_point_x = 0.0;
      this->target_point_y = 0.0;
      this->lat_target_point_s = 0.0;
      this->lqr_calculate_time = 0ll;
      this->lqr_calculate_time_max = 0ll;
    }
  }

  explicit ControlAnalysis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driving_mode = 0l;
      this->driving_mode_fd = 0l;
      this->gear_location_fd = 0l;
      this->gear_location_cmd = 0l;
      this->epb_level_fd = 0l;
      this->epb_level_cmd = 0l;
      this->speed_mps = 0.0;
      this->speed_reference = 0.0;
      this->accel_value_fd = 0.0;
      this->accel_value_cmd = 0.0;
      this->brake_value_fd = 0.0;
      this->brake_value_cmd = 0.0;
      this->path_remain = 0.0;
      this->has_stop_point = false;
      this->is_full_stop = false;
      this->is_stopped = false;
      this->lon_acc_jerk = 0.0;
      this->acceleration_cmd = 0.0;
      this->acceleration_cmd_closeloop = 0.0;
      this->preview_acceleration_reference = 0.0;
      this->slope_offset_compensation = 0.0;
      this->turning_offset_compensation = 0.0;
      this->speed_error_limited = 0.0;
      this->speed_error = 0.0;
      this->speed_offset = 0.0;
      this->station_error_limited = 0.0;
      this->station_error = 0.0;
      this->lon_target_point_s = 0.0;
      this->lon_calculate_time = 0ll;
      this->lon_calculate_time_max = 0ll;
      this->ref_curvature = 0.0;
      this->ref_heading = 0.0;
      this->current_heading = 0.0;
      this->heading_error = 0.0;
      this->heading_error_rate = 0.0;
      this->lateral_error = 0.0;
      this->lateral_error_rate = 0.0;
      this->lon_error = 0.0;
      this->front_steering_value_fd = 0.0;
      this->front_steering_target = 0.0;
      this->front_steering_rate = 0.0;
      this->front_steer_angle_feedforward = 0.0;
      this->front_steer_angle_feedback = 0.0;
      this->front_steer_angle_lateral_contribution = 0.0;
      this->front_steer_angle_lateral_rate_contribution = 0.0;
      this->front_steer_angle_heading_contribution = 0.0;
      this->front_steer_angle_heading_rate_contribution = 0.0;
      this->rear_steering_value_fd = 0.0;
      this->rear_steering_target = 0.0;
      this->rear_steering_rate = 0.0;
      this->rear_steer_angle_feedforward = 0.0;
      this->rear_steer_angle_feedback = 0.0;
      this->rear_steer_angle_lateral_contribution = 0.0;
      this->rear_steer_angle_lateral_rate_contribution = 0.0;
      this->rear_steer_angle_heading_contribution = 0.0;
      this->rear_steer_angle_heading_rate_contribution = 0.0;
      this->matrix_k_00 = 0.0;
      this->matrix_k_01 = 0.0;
      this->matrix_k_02 = 0.0;
      this->matrix_k_03 = 0.0;
      this->matrix_k_10 = 0.0;
      this->matrix_k_11 = 0.0;
      this->matrix_k_12 = 0.0;
      this->matrix_k_13 = 0.0;
      this->matrix_state_0 = 0.0;
      this->matrix_state_1 = 0.0;
      this->matrix_state_2 = 0.0;
      this->matrix_state_3 = 0.0;
      this->matrix_q_updated_0 = 0.0;
      this->matrix_q_updated_1 = 0.0;
      this->matrix_q_updated_2 = 0.0;
      this->matrix_q_updated_3 = 0.0;
      this->current_x = 0.0;
      this->current_y = 0.0;
      this->target_point_x = 0.0;
      this->target_point_y = 0.0;
      this->lat_target_point_s = 0.0;
      this->lqr_calculate_time = 0ll;
      this->lqr_calculate_time_max = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _driving_mode_type =
    int32_t;
  _driving_mode_type driving_mode;
  using _driving_mode_fd_type =
    int32_t;
  _driving_mode_fd_type driving_mode_fd;
  using _gear_location_fd_type =
    int32_t;
  _gear_location_fd_type gear_location_fd;
  using _gear_location_cmd_type =
    int32_t;
  _gear_location_cmd_type gear_location_cmd;
  using _epb_level_fd_type =
    int32_t;
  _epb_level_fd_type epb_level_fd;
  using _epb_level_cmd_type =
    int32_t;
  _epb_level_cmd_type epb_level_cmd;
  using _speed_mps_type =
    double;
  _speed_mps_type speed_mps;
  using _speed_reference_type =
    double;
  _speed_reference_type speed_reference;
  using _accel_value_fd_type =
    double;
  _accel_value_fd_type accel_value_fd;
  using _accel_value_cmd_type =
    double;
  _accel_value_cmd_type accel_value_cmd;
  using _brake_value_fd_type =
    double;
  _brake_value_fd_type brake_value_fd;
  using _brake_value_cmd_type =
    double;
  _brake_value_cmd_type brake_value_cmd;
  using _path_remain_type =
    double;
  _path_remain_type path_remain;
  using _has_stop_point_type =
    bool;
  _has_stop_point_type has_stop_point;
  using _is_full_stop_type =
    bool;
  _is_full_stop_type is_full_stop;
  using _is_stopped_type =
    bool;
  _is_stopped_type is_stopped;
  using _lon_acc_jerk_type =
    double;
  _lon_acc_jerk_type lon_acc_jerk;
  using _acceleration_cmd_type =
    double;
  _acceleration_cmd_type acceleration_cmd;
  using _acceleration_cmd_closeloop_type =
    double;
  _acceleration_cmd_closeloop_type acceleration_cmd_closeloop;
  using _preview_acceleration_reference_type =
    double;
  _preview_acceleration_reference_type preview_acceleration_reference;
  using _slope_offset_compensation_type =
    double;
  _slope_offset_compensation_type slope_offset_compensation;
  using _turning_offset_compensation_type =
    double;
  _turning_offset_compensation_type turning_offset_compensation;
  using _speed_error_limited_type =
    double;
  _speed_error_limited_type speed_error_limited;
  using _speed_error_type =
    double;
  _speed_error_type speed_error;
  using _speed_offset_type =
    double;
  _speed_offset_type speed_offset;
  using _station_error_limited_type =
    double;
  _station_error_limited_type station_error_limited;
  using _station_error_type =
    double;
  _station_error_type station_error;
  using _lon_target_point_s_type =
    double;
  _lon_target_point_s_type lon_target_point_s;
  using _lon_calculate_time_type =
    int64_t;
  _lon_calculate_time_type lon_calculate_time;
  using _lon_calculate_time_max_type =
    int64_t;
  _lon_calculate_time_max_type lon_calculate_time_max;
  using _ref_curvature_type =
    double;
  _ref_curvature_type ref_curvature;
  using _ref_heading_type =
    double;
  _ref_heading_type ref_heading;
  using _current_heading_type =
    double;
  _current_heading_type current_heading;
  using _heading_error_type =
    double;
  _heading_error_type heading_error;
  using _heading_error_rate_type =
    double;
  _heading_error_rate_type heading_error_rate;
  using _lateral_error_type =
    double;
  _lateral_error_type lateral_error;
  using _lateral_error_rate_type =
    double;
  _lateral_error_rate_type lateral_error_rate;
  using _lon_error_type =
    double;
  _lon_error_type lon_error;
  using _front_steering_value_fd_type =
    double;
  _front_steering_value_fd_type front_steering_value_fd;
  using _front_steering_target_type =
    double;
  _front_steering_target_type front_steering_target;
  using _front_steering_rate_type =
    double;
  _front_steering_rate_type front_steering_rate;
  using _front_steer_angle_feedforward_type =
    double;
  _front_steer_angle_feedforward_type front_steer_angle_feedforward;
  using _front_steer_angle_feedback_type =
    double;
  _front_steer_angle_feedback_type front_steer_angle_feedback;
  using _front_steer_angle_lateral_contribution_type =
    double;
  _front_steer_angle_lateral_contribution_type front_steer_angle_lateral_contribution;
  using _front_steer_angle_lateral_rate_contribution_type =
    double;
  _front_steer_angle_lateral_rate_contribution_type front_steer_angle_lateral_rate_contribution;
  using _front_steer_angle_heading_contribution_type =
    double;
  _front_steer_angle_heading_contribution_type front_steer_angle_heading_contribution;
  using _front_steer_angle_heading_rate_contribution_type =
    double;
  _front_steer_angle_heading_rate_contribution_type front_steer_angle_heading_rate_contribution;
  using _rear_steering_value_fd_type =
    double;
  _rear_steering_value_fd_type rear_steering_value_fd;
  using _rear_steering_target_type =
    double;
  _rear_steering_target_type rear_steering_target;
  using _rear_steering_rate_type =
    double;
  _rear_steering_rate_type rear_steering_rate;
  using _rear_steer_angle_feedforward_type =
    double;
  _rear_steer_angle_feedforward_type rear_steer_angle_feedforward;
  using _rear_steer_angle_feedback_type =
    double;
  _rear_steer_angle_feedback_type rear_steer_angle_feedback;
  using _rear_steer_angle_lateral_contribution_type =
    double;
  _rear_steer_angle_lateral_contribution_type rear_steer_angle_lateral_contribution;
  using _rear_steer_angle_lateral_rate_contribution_type =
    double;
  _rear_steer_angle_lateral_rate_contribution_type rear_steer_angle_lateral_rate_contribution;
  using _rear_steer_angle_heading_contribution_type =
    double;
  _rear_steer_angle_heading_contribution_type rear_steer_angle_heading_contribution;
  using _rear_steer_angle_heading_rate_contribution_type =
    double;
  _rear_steer_angle_heading_rate_contribution_type rear_steer_angle_heading_rate_contribution;
  using _matrix_k_00_type =
    double;
  _matrix_k_00_type matrix_k_00;
  using _matrix_k_01_type =
    double;
  _matrix_k_01_type matrix_k_01;
  using _matrix_k_02_type =
    double;
  _matrix_k_02_type matrix_k_02;
  using _matrix_k_03_type =
    double;
  _matrix_k_03_type matrix_k_03;
  using _matrix_k_10_type =
    double;
  _matrix_k_10_type matrix_k_10;
  using _matrix_k_11_type =
    double;
  _matrix_k_11_type matrix_k_11;
  using _matrix_k_12_type =
    double;
  _matrix_k_12_type matrix_k_12;
  using _matrix_k_13_type =
    double;
  _matrix_k_13_type matrix_k_13;
  using _matrix_state_0_type =
    double;
  _matrix_state_0_type matrix_state_0;
  using _matrix_state_1_type =
    double;
  _matrix_state_1_type matrix_state_1;
  using _matrix_state_2_type =
    double;
  _matrix_state_2_type matrix_state_2;
  using _matrix_state_3_type =
    double;
  _matrix_state_3_type matrix_state_3;
  using _matrix_q_updated_0_type =
    double;
  _matrix_q_updated_0_type matrix_q_updated_0;
  using _matrix_q_updated_1_type =
    double;
  _matrix_q_updated_1_type matrix_q_updated_1;
  using _matrix_q_updated_2_type =
    double;
  _matrix_q_updated_2_type matrix_q_updated_2;
  using _matrix_q_updated_3_type =
    double;
  _matrix_q_updated_3_type matrix_q_updated_3;
  using _current_x_type =
    double;
  _current_x_type current_x;
  using _current_y_type =
    double;
  _current_y_type current_y;
  using _target_point_x_type =
    double;
  _target_point_x_type target_point_x;
  using _target_point_y_type =
    double;
  _target_point_y_type target_point_y;
  using _lat_target_point_s_type =
    double;
  _lat_target_point_s_type lat_target_point_s;
  using _lqr_calculate_time_type =
    int64_t;
  _lqr_calculate_time_type lqr_calculate_time;
  using _lqr_calculate_time_max_type =
    int64_t;
  _lqr_calculate_time_max_type lqr_calculate_time_max;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__driving_mode(
    const int32_t & _arg)
  {
    this->driving_mode = _arg;
    return *this;
  }
  Type & set__driving_mode_fd(
    const int32_t & _arg)
  {
    this->driving_mode_fd = _arg;
    return *this;
  }
  Type & set__gear_location_fd(
    const int32_t & _arg)
  {
    this->gear_location_fd = _arg;
    return *this;
  }
  Type & set__gear_location_cmd(
    const int32_t & _arg)
  {
    this->gear_location_cmd = _arg;
    return *this;
  }
  Type & set__epb_level_fd(
    const int32_t & _arg)
  {
    this->epb_level_fd = _arg;
    return *this;
  }
  Type & set__epb_level_cmd(
    const int32_t & _arg)
  {
    this->epb_level_cmd = _arg;
    return *this;
  }
  Type & set__speed_mps(
    const double & _arg)
  {
    this->speed_mps = _arg;
    return *this;
  }
  Type & set__speed_reference(
    const double & _arg)
  {
    this->speed_reference = _arg;
    return *this;
  }
  Type & set__accel_value_fd(
    const double & _arg)
  {
    this->accel_value_fd = _arg;
    return *this;
  }
  Type & set__accel_value_cmd(
    const double & _arg)
  {
    this->accel_value_cmd = _arg;
    return *this;
  }
  Type & set__brake_value_fd(
    const double & _arg)
  {
    this->brake_value_fd = _arg;
    return *this;
  }
  Type & set__brake_value_cmd(
    const double & _arg)
  {
    this->brake_value_cmd = _arg;
    return *this;
  }
  Type & set__path_remain(
    const double & _arg)
  {
    this->path_remain = _arg;
    return *this;
  }
  Type & set__has_stop_point(
    const bool & _arg)
  {
    this->has_stop_point = _arg;
    return *this;
  }
  Type & set__is_full_stop(
    const bool & _arg)
  {
    this->is_full_stop = _arg;
    return *this;
  }
  Type & set__is_stopped(
    const bool & _arg)
  {
    this->is_stopped = _arg;
    return *this;
  }
  Type & set__lon_acc_jerk(
    const double & _arg)
  {
    this->lon_acc_jerk = _arg;
    return *this;
  }
  Type & set__acceleration_cmd(
    const double & _arg)
  {
    this->acceleration_cmd = _arg;
    return *this;
  }
  Type & set__acceleration_cmd_closeloop(
    const double & _arg)
  {
    this->acceleration_cmd_closeloop = _arg;
    return *this;
  }
  Type & set__preview_acceleration_reference(
    const double & _arg)
  {
    this->preview_acceleration_reference = _arg;
    return *this;
  }
  Type & set__slope_offset_compensation(
    const double & _arg)
  {
    this->slope_offset_compensation = _arg;
    return *this;
  }
  Type & set__turning_offset_compensation(
    const double & _arg)
  {
    this->turning_offset_compensation = _arg;
    return *this;
  }
  Type & set__speed_error_limited(
    const double & _arg)
  {
    this->speed_error_limited = _arg;
    return *this;
  }
  Type & set__speed_error(
    const double & _arg)
  {
    this->speed_error = _arg;
    return *this;
  }
  Type & set__speed_offset(
    const double & _arg)
  {
    this->speed_offset = _arg;
    return *this;
  }
  Type & set__station_error_limited(
    const double & _arg)
  {
    this->station_error_limited = _arg;
    return *this;
  }
  Type & set__station_error(
    const double & _arg)
  {
    this->station_error = _arg;
    return *this;
  }
  Type & set__lon_target_point_s(
    const double & _arg)
  {
    this->lon_target_point_s = _arg;
    return *this;
  }
  Type & set__lon_calculate_time(
    const int64_t & _arg)
  {
    this->lon_calculate_time = _arg;
    return *this;
  }
  Type & set__lon_calculate_time_max(
    const int64_t & _arg)
  {
    this->lon_calculate_time_max = _arg;
    return *this;
  }
  Type & set__ref_curvature(
    const double & _arg)
  {
    this->ref_curvature = _arg;
    return *this;
  }
  Type & set__ref_heading(
    const double & _arg)
  {
    this->ref_heading = _arg;
    return *this;
  }
  Type & set__current_heading(
    const double & _arg)
  {
    this->current_heading = _arg;
    return *this;
  }
  Type & set__heading_error(
    const double & _arg)
  {
    this->heading_error = _arg;
    return *this;
  }
  Type & set__heading_error_rate(
    const double & _arg)
  {
    this->heading_error_rate = _arg;
    return *this;
  }
  Type & set__lateral_error(
    const double & _arg)
  {
    this->lateral_error = _arg;
    return *this;
  }
  Type & set__lateral_error_rate(
    const double & _arg)
  {
    this->lateral_error_rate = _arg;
    return *this;
  }
  Type & set__lon_error(
    const double & _arg)
  {
    this->lon_error = _arg;
    return *this;
  }
  Type & set__front_steering_value_fd(
    const double & _arg)
  {
    this->front_steering_value_fd = _arg;
    return *this;
  }
  Type & set__front_steering_target(
    const double & _arg)
  {
    this->front_steering_target = _arg;
    return *this;
  }
  Type & set__front_steering_rate(
    const double & _arg)
  {
    this->front_steering_rate = _arg;
    return *this;
  }
  Type & set__front_steer_angle_feedforward(
    const double & _arg)
  {
    this->front_steer_angle_feedforward = _arg;
    return *this;
  }
  Type & set__front_steer_angle_feedback(
    const double & _arg)
  {
    this->front_steer_angle_feedback = _arg;
    return *this;
  }
  Type & set__front_steer_angle_lateral_contribution(
    const double & _arg)
  {
    this->front_steer_angle_lateral_contribution = _arg;
    return *this;
  }
  Type & set__front_steer_angle_lateral_rate_contribution(
    const double & _arg)
  {
    this->front_steer_angle_lateral_rate_contribution = _arg;
    return *this;
  }
  Type & set__front_steer_angle_heading_contribution(
    const double & _arg)
  {
    this->front_steer_angle_heading_contribution = _arg;
    return *this;
  }
  Type & set__front_steer_angle_heading_rate_contribution(
    const double & _arg)
  {
    this->front_steer_angle_heading_rate_contribution = _arg;
    return *this;
  }
  Type & set__rear_steering_value_fd(
    const double & _arg)
  {
    this->rear_steering_value_fd = _arg;
    return *this;
  }
  Type & set__rear_steering_target(
    const double & _arg)
  {
    this->rear_steering_target = _arg;
    return *this;
  }
  Type & set__rear_steering_rate(
    const double & _arg)
  {
    this->rear_steering_rate = _arg;
    return *this;
  }
  Type & set__rear_steer_angle_feedforward(
    const double & _arg)
  {
    this->rear_steer_angle_feedforward = _arg;
    return *this;
  }
  Type & set__rear_steer_angle_feedback(
    const double & _arg)
  {
    this->rear_steer_angle_feedback = _arg;
    return *this;
  }
  Type & set__rear_steer_angle_lateral_contribution(
    const double & _arg)
  {
    this->rear_steer_angle_lateral_contribution = _arg;
    return *this;
  }
  Type & set__rear_steer_angle_lateral_rate_contribution(
    const double & _arg)
  {
    this->rear_steer_angle_lateral_rate_contribution = _arg;
    return *this;
  }
  Type & set__rear_steer_angle_heading_contribution(
    const double & _arg)
  {
    this->rear_steer_angle_heading_contribution = _arg;
    return *this;
  }
  Type & set__rear_steer_angle_heading_rate_contribution(
    const double & _arg)
  {
    this->rear_steer_angle_heading_rate_contribution = _arg;
    return *this;
  }
  Type & set__matrix_k_00(
    const double & _arg)
  {
    this->matrix_k_00 = _arg;
    return *this;
  }
  Type & set__matrix_k_01(
    const double & _arg)
  {
    this->matrix_k_01 = _arg;
    return *this;
  }
  Type & set__matrix_k_02(
    const double & _arg)
  {
    this->matrix_k_02 = _arg;
    return *this;
  }
  Type & set__matrix_k_03(
    const double & _arg)
  {
    this->matrix_k_03 = _arg;
    return *this;
  }
  Type & set__matrix_k_10(
    const double & _arg)
  {
    this->matrix_k_10 = _arg;
    return *this;
  }
  Type & set__matrix_k_11(
    const double & _arg)
  {
    this->matrix_k_11 = _arg;
    return *this;
  }
  Type & set__matrix_k_12(
    const double & _arg)
  {
    this->matrix_k_12 = _arg;
    return *this;
  }
  Type & set__matrix_k_13(
    const double & _arg)
  {
    this->matrix_k_13 = _arg;
    return *this;
  }
  Type & set__matrix_state_0(
    const double & _arg)
  {
    this->matrix_state_0 = _arg;
    return *this;
  }
  Type & set__matrix_state_1(
    const double & _arg)
  {
    this->matrix_state_1 = _arg;
    return *this;
  }
  Type & set__matrix_state_2(
    const double & _arg)
  {
    this->matrix_state_2 = _arg;
    return *this;
  }
  Type & set__matrix_state_3(
    const double & _arg)
  {
    this->matrix_state_3 = _arg;
    return *this;
  }
  Type & set__matrix_q_updated_0(
    const double & _arg)
  {
    this->matrix_q_updated_0 = _arg;
    return *this;
  }
  Type & set__matrix_q_updated_1(
    const double & _arg)
  {
    this->matrix_q_updated_1 = _arg;
    return *this;
  }
  Type & set__matrix_q_updated_2(
    const double & _arg)
  {
    this->matrix_q_updated_2 = _arg;
    return *this;
  }
  Type & set__matrix_q_updated_3(
    const double & _arg)
  {
    this->matrix_q_updated_3 = _arg;
    return *this;
  }
  Type & set__current_x(
    const double & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const double & _arg)
  {
    this->current_y = _arg;
    return *this;
  }
  Type & set__target_point_x(
    const double & _arg)
  {
    this->target_point_x = _arg;
    return *this;
  }
  Type & set__target_point_y(
    const double & _arg)
  {
    this->target_point_y = _arg;
    return *this;
  }
  Type & set__lat_target_point_s(
    const double & _arg)
  {
    this->lat_target_point_s = _arg;
    return *this;
  }
  Type & set__lqr_calculate_time(
    const int64_t & _arg)
  {
    this->lqr_calculate_time = _arg;
    return *this;
  }
  Type & set__lqr_calculate_time_max(
    const int64_t & _arg)
  {
    this->lqr_calculate_time_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ControlAnalysis_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ControlAnalysis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ControlAnalysis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ControlAnalysis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ControlAnalysis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ControlAnalysis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ControlAnalysis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ControlAnalysis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ControlAnalysis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ControlAnalysis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ControlAnalysis
    std::shared_ptr<ros2_interface::msg::ControlAnalysis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ControlAnalysis
    std::shared_ptr<ros2_interface::msg::ControlAnalysis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlAnalysis_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->driving_mode != other.driving_mode) {
      return false;
    }
    if (this->driving_mode_fd != other.driving_mode_fd) {
      return false;
    }
    if (this->gear_location_fd != other.gear_location_fd) {
      return false;
    }
    if (this->gear_location_cmd != other.gear_location_cmd) {
      return false;
    }
    if (this->epb_level_fd != other.epb_level_fd) {
      return false;
    }
    if (this->epb_level_cmd != other.epb_level_cmd) {
      return false;
    }
    if (this->speed_mps != other.speed_mps) {
      return false;
    }
    if (this->speed_reference != other.speed_reference) {
      return false;
    }
    if (this->accel_value_fd != other.accel_value_fd) {
      return false;
    }
    if (this->accel_value_cmd != other.accel_value_cmd) {
      return false;
    }
    if (this->brake_value_fd != other.brake_value_fd) {
      return false;
    }
    if (this->brake_value_cmd != other.brake_value_cmd) {
      return false;
    }
    if (this->path_remain != other.path_remain) {
      return false;
    }
    if (this->has_stop_point != other.has_stop_point) {
      return false;
    }
    if (this->is_full_stop != other.is_full_stop) {
      return false;
    }
    if (this->is_stopped != other.is_stopped) {
      return false;
    }
    if (this->lon_acc_jerk != other.lon_acc_jerk) {
      return false;
    }
    if (this->acceleration_cmd != other.acceleration_cmd) {
      return false;
    }
    if (this->acceleration_cmd_closeloop != other.acceleration_cmd_closeloop) {
      return false;
    }
    if (this->preview_acceleration_reference != other.preview_acceleration_reference) {
      return false;
    }
    if (this->slope_offset_compensation != other.slope_offset_compensation) {
      return false;
    }
    if (this->turning_offset_compensation != other.turning_offset_compensation) {
      return false;
    }
    if (this->speed_error_limited != other.speed_error_limited) {
      return false;
    }
    if (this->speed_error != other.speed_error) {
      return false;
    }
    if (this->speed_offset != other.speed_offset) {
      return false;
    }
    if (this->station_error_limited != other.station_error_limited) {
      return false;
    }
    if (this->station_error != other.station_error) {
      return false;
    }
    if (this->lon_target_point_s != other.lon_target_point_s) {
      return false;
    }
    if (this->lon_calculate_time != other.lon_calculate_time) {
      return false;
    }
    if (this->lon_calculate_time_max != other.lon_calculate_time_max) {
      return false;
    }
    if (this->ref_curvature != other.ref_curvature) {
      return false;
    }
    if (this->ref_heading != other.ref_heading) {
      return false;
    }
    if (this->current_heading != other.current_heading) {
      return false;
    }
    if (this->heading_error != other.heading_error) {
      return false;
    }
    if (this->heading_error_rate != other.heading_error_rate) {
      return false;
    }
    if (this->lateral_error != other.lateral_error) {
      return false;
    }
    if (this->lateral_error_rate != other.lateral_error_rate) {
      return false;
    }
    if (this->lon_error != other.lon_error) {
      return false;
    }
    if (this->front_steering_value_fd != other.front_steering_value_fd) {
      return false;
    }
    if (this->front_steering_target != other.front_steering_target) {
      return false;
    }
    if (this->front_steering_rate != other.front_steering_rate) {
      return false;
    }
    if (this->front_steer_angle_feedforward != other.front_steer_angle_feedforward) {
      return false;
    }
    if (this->front_steer_angle_feedback != other.front_steer_angle_feedback) {
      return false;
    }
    if (this->front_steer_angle_lateral_contribution != other.front_steer_angle_lateral_contribution) {
      return false;
    }
    if (this->front_steer_angle_lateral_rate_contribution != other.front_steer_angle_lateral_rate_contribution) {
      return false;
    }
    if (this->front_steer_angle_heading_contribution != other.front_steer_angle_heading_contribution) {
      return false;
    }
    if (this->front_steer_angle_heading_rate_contribution != other.front_steer_angle_heading_rate_contribution) {
      return false;
    }
    if (this->rear_steering_value_fd != other.rear_steering_value_fd) {
      return false;
    }
    if (this->rear_steering_target != other.rear_steering_target) {
      return false;
    }
    if (this->rear_steering_rate != other.rear_steering_rate) {
      return false;
    }
    if (this->rear_steer_angle_feedforward != other.rear_steer_angle_feedforward) {
      return false;
    }
    if (this->rear_steer_angle_feedback != other.rear_steer_angle_feedback) {
      return false;
    }
    if (this->rear_steer_angle_lateral_contribution != other.rear_steer_angle_lateral_contribution) {
      return false;
    }
    if (this->rear_steer_angle_lateral_rate_contribution != other.rear_steer_angle_lateral_rate_contribution) {
      return false;
    }
    if (this->rear_steer_angle_heading_contribution != other.rear_steer_angle_heading_contribution) {
      return false;
    }
    if (this->rear_steer_angle_heading_rate_contribution != other.rear_steer_angle_heading_rate_contribution) {
      return false;
    }
    if (this->matrix_k_00 != other.matrix_k_00) {
      return false;
    }
    if (this->matrix_k_01 != other.matrix_k_01) {
      return false;
    }
    if (this->matrix_k_02 != other.matrix_k_02) {
      return false;
    }
    if (this->matrix_k_03 != other.matrix_k_03) {
      return false;
    }
    if (this->matrix_k_10 != other.matrix_k_10) {
      return false;
    }
    if (this->matrix_k_11 != other.matrix_k_11) {
      return false;
    }
    if (this->matrix_k_12 != other.matrix_k_12) {
      return false;
    }
    if (this->matrix_k_13 != other.matrix_k_13) {
      return false;
    }
    if (this->matrix_state_0 != other.matrix_state_0) {
      return false;
    }
    if (this->matrix_state_1 != other.matrix_state_1) {
      return false;
    }
    if (this->matrix_state_2 != other.matrix_state_2) {
      return false;
    }
    if (this->matrix_state_3 != other.matrix_state_3) {
      return false;
    }
    if (this->matrix_q_updated_0 != other.matrix_q_updated_0) {
      return false;
    }
    if (this->matrix_q_updated_1 != other.matrix_q_updated_1) {
      return false;
    }
    if (this->matrix_q_updated_2 != other.matrix_q_updated_2) {
      return false;
    }
    if (this->matrix_q_updated_3 != other.matrix_q_updated_3) {
      return false;
    }
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    if (this->target_point_x != other.target_point_x) {
      return false;
    }
    if (this->target_point_y != other.target_point_y) {
      return false;
    }
    if (this->lat_target_point_s != other.lat_target_point_s) {
      return false;
    }
    if (this->lqr_calculate_time != other.lqr_calculate_time) {
      return false;
    }
    if (this->lqr_calculate_time_max != other.lqr_calculate_time_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlAnalysis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlAnalysis_

// alias to use template instance with default allocator
using ControlAnalysis =
  ros2_interface::msg::ControlAnalysis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__STRUCT_HPP_
