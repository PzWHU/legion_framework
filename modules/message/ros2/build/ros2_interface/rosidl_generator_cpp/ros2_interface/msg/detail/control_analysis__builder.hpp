// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ControlAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/control_analysis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ControlAnalysis_lqr_calculate_time_max
{
public:
  explicit Init_ControlAnalysis_lqr_calculate_time_max(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ControlAnalysis lqr_calculate_time_max(::ros2_interface::msg::ControlAnalysis::_lqr_calculate_time_max_type arg)
  {
    msg_.lqr_calculate_time_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lqr_calculate_time
{
public:
  explicit Init_ControlAnalysis_lqr_calculate_time(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lqr_calculate_time_max lqr_calculate_time(::ros2_interface::msg::ControlAnalysis::_lqr_calculate_time_type arg)
  {
    msg_.lqr_calculate_time = std::move(arg);
    return Init_ControlAnalysis_lqr_calculate_time_max(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lat_target_point_s
{
public:
  explicit Init_ControlAnalysis_lat_target_point_s(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lqr_calculate_time lat_target_point_s(::ros2_interface::msg::ControlAnalysis::_lat_target_point_s_type arg)
  {
    msg_.lat_target_point_s = std::move(arg);
    return Init_ControlAnalysis_lqr_calculate_time(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_target_point_y
{
public:
  explicit Init_ControlAnalysis_target_point_y(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lat_target_point_s target_point_y(::ros2_interface::msg::ControlAnalysis::_target_point_y_type arg)
  {
    msg_.target_point_y = std::move(arg);
    return Init_ControlAnalysis_lat_target_point_s(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_target_point_x
{
public:
  explicit Init_ControlAnalysis_target_point_x(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_target_point_y target_point_x(::ros2_interface::msg::ControlAnalysis::_target_point_x_type arg)
  {
    msg_.target_point_x = std::move(arg);
    return Init_ControlAnalysis_target_point_y(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_current_y
{
public:
  explicit Init_ControlAnalysis_current_y(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_target_point_x current_y(::ros2_interface::msg::ControlAnalysis::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_ControlAnalysis_target_point_x(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_current_x
{
public:
  explicit Init_ControlAnalysis_current_x(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_current_y current_x(::ros2_interface::msg::ControlAnalysis::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_ControlAnalysis_current_y(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_q_updated_3
{
public:
  explicit Init_ControlAnalysis_matrix_q_updated_3(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_current_x matrix_q_updated_3(::ros2_interface::msg::ControlAnalysis::_matrix_q_updated_3_type arg)
  {
    msg_.matrix_q_updated_3 = std::move(arg);
    return Init_ControlAnalysis_current_x(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_q_updated_2
{
public:
  explicit Init_ControlAnalysis_matrix_q_updated_2(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_q_updated_3 matrix_q_updated_2(::ros2_interface::msg::ControlAnalysis::_matrix_q_updated_2_type arg)
  {
    msg_.matrix_q_updated_2 = std::move(arg);
    return Init_ControlAnalysis_matrix_q_updated_3(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_q_updated_1
{
public:
  explicit Init_ControlAnalysis_matrix_q_updated_1(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_q_updated_2 matrix_q_updated_1(::ros2_interface::msg::ControlAnalysis::_matrix_q_updated_1_type arg)
  {
    msg_.matrix_q_updated_1 = std::move(arg);
    return Init_ControlAnalysis_matrix_q_updated_2(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_q_updated_0
{
public:
  explicit Init_ControlAnalysis_matrix_q_updated_0(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_q_updated_1 matrix_q_updated_0(::ros2_interface::msg::ControlAnalysis::_matrix_q_updated_0_type arg)
  {
    msg_.matrix_q_updated_0 = std::move(arg);
    return Init_ControlAnalysis_matrix_q_updated_1(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_state_3
{
public:
  explicit Init_ControlAnalysis_matrix_state_3(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_q_updated_0 matrix_state_3(::ros2_interface::msg::ControlAnalysis::_matrix_state_3_type arg)
  {
    msg_.matrix_state_3 = std::move(arg);
    return Init_ControlAnalysis_matrix_q_updated_0(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_state_2
{
public:
  explicit Init_ControlAnalysis_matrix_state_2(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_state_3 matrix_state_2(::ros2_interface::msg::ControlAnalysis::_matrix_state_2_type arg)
  {
    msg_.matrix_state_2 = std::move(arg);
    return Init_ControlAnalysis_matrix_state_3(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_state_1
{
public:
  explicit Init_ControlAnalysis_matrix_state_1(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_state_2 matrix_state_1(::ros2_interface::msg::ControlAnalysis::_matrix_state_1_type arg)
  {
    msg_.matrix_state_1 = std::move(arg);
    return Init_ControlAnalysis_matrix_state_2(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_state_0
{
public:
  explicit Init_ControlAnalysis_matrix_state_0(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_state_1 matrix_state_0(::ros2_interface::msg::ControlAnalysis::_matrix_state_0_type arg)
  {
    msg_.matrix_state_0 = std::move(arg);
    return Init_ControlAnalysis_matrix_state_1(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_k_13
{
public:
  explicit Init_ControlAnalysis_matrix_k_13(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_state_0 matrix_k_13(::ros2_interface::msg::ControlAnalysis::_matrix_k_13_type arg)
  {
    msg_.matrix_k_13 = std::move(arg);
    return Init_ControlAnalysis_matrix_state_0(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_k_12
{
public:
  explicit Init_ControlAnalysis_matrix_k_12(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_k_13 matrix_k_12(::ros2_interface::msg::ControlAnalysis::_matrix_k_12_type arg)
  {
    msg_.matrix_k_12 = std::move(arg);
    return Init_ControlAnalysis_matrix_k_13(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_k_11
{
public:
  explicit Init_ControlAnalysis_matrix_k_11(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_k_12 matrix_k_11(::ros2_interface::msg::ControlAnalysis::_matrix_k_11_type arg)
  {
    msg_.matrix_k_11 = std::move(arg);
    return Init_ControlAnalysis_matrix_k_12(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_k_10
{
public:
  explicit Init_ControlAnalysis_matrix_k_10(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_k_11 matrix_k_10(::ros2_interface::msg::ControlAnalysis::_matrix_k_10_type arg)
  {
    msg_.matrix_k_10 = std::move(arg);
    return Init_ControlAnalysis_matrix_k_11(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_k_03
{
public:
  explicit Init_ControlAnalysis_matrix_k_03(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_k_10 matrix_k_03(::ros2_interface::msg::ControlAnalysis::_matrix_k_03_type arg)
  {
    msg_.matrix_k_03 = std::move(arg);
    return Init_ControlAnalysis_matrix_k_10(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_k_02
{
public:
  explicit Init_ControlAnalysis_matrix_k_02(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_k_03 matrix_k_02(::ros2_interface::msg::ControlAnalysis::_matrix_k_02_type arg)
  {
    msg_.matrix_k_02 = std::move(arg);
    return Init_ControlAnalysis_matrix_k_03(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_k_01
{
public:
  explicit Init_ControlAnalysis_matrix_k_01(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_k_02 matrix_k_01(::ros2_interface::msg::ControlAnalysis::_matrix_k_01_type arg)
  {
    msg_.matrix_k_01 = std::move(arg);
    return Init_ControlAnalysis_matrix_k_02(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_matrix_k_00
{
public:
  explicit Init_ControlAnalysis_matrix_k_00(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_k_01 matrix_k_00(::ros2_interface::msg::ControlAnalysis::_matrix_k_00_type arg)
  {
    msg_.matrix_k_00 = std::move(arg);
    return Init_ControlAnalysis_matrix_k_01(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steer_angle_heading_rate_contribution
{
public:
  explicit Init_ControlAnalysis_rear_steer_angle_heading_rate_contribution(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_matrix_k_00 rear_steer_angle_heading_rate_contribution(::ros2_interface::msg::ControlAnalysis::_rear_steer_angle_heading_rate_contribution_type arg)
  {
    msg_.rear_steer_angle_heading_rate_contribution = std::move(arg);
    return Init_ControlAnalysis_matrix_k_00(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steer_angle_heading_contribution
{
public:
  explicit Init_ControlAnalysis_rear_steer_angle_heading_contribution(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steer_angle_heading_rate_contribution rear_steer_angle_heading_contribution(::ros2_interface::msg::ControlAnalysis::_rear_steer_angle_heading_contribution_type arg)
  {
    msg_.rear_steer_angle_heading_contribution = std::move(arg);
    return Init_ControlAnalysis_rear_steer_angle_heading_rate_contribution(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steer_angle_lateral_rate_contribution
{
public:
  explicit Init_ControlAnalysis_rear_steer_angle_lateral_rate_contribution(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steer_angle_heading_contribution rear_steer_angle_lateral_rate_contribution(::ros2_interface::msg::ControlAnalysis::_rear_steer_angle_lateral_rate_contribution_type arg)
  {
    msg_.rear_steer_angle_lateral_rate_contribution = std::move(arg);
    return Init_ControlAnalysis_rear_steer_angle_heading_contribution(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steer_angle_lateral_contribution
{
public:
  explicit Init_ControlAnalysis_rear_steer_angle_lateral_contribution(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steer_angle_lateral_rate_contribution rear_steer_angle_lateral_contribution(::ros2_interface::msg::ControlAnalysis::_rear_steer_angle_lateral_contribution_type arg)
  {
    msg_.rear_steer_angle_lateral_contribution = std::move(arg);
    return Init_ControlAnalysis_rear_steer_angle_lateral_rate_contribution(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steer_angle_feedback
{
public:
  explicit Init_ControlAnalysis_rear_steer_angle_feedback(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steer_angle_lateral_contribution rear_steer_angle_feedback(::ros2_interface::msg::ControlAnalysis::_rear_steer_angle_feedback_type arg)
  {
    msg_.rear_steer_angle_feedback = std::move(arg);
    return Init_ControlAnalysis_rear_steer_angle_lateral_contribution(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steer_angle_feedforward
{
public:
  explicit Init_ControlAnalysis_rear_steer_angle_feedforward(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steer_angle_feedback rear_steer_angle_feedforward(::ros2_interface::msg::ControlAnalysis::_rear_steer_angle_feedforward_type arg)
  {
    msg_.rear_steer_angle_feedforward = std::move(arg);
    return Init_ControlAnalysis_rear_steer_angle_feedback(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steering_rate
{
public:
  explicit Init_ControlAnalysis_rear_steering_rate(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steer_angle_feedforward rear_steering_rate(::ros2_interface::msg::ControlAnalysis::_rear_steering_rate_type arg)
  {
    msg_.rear_steering_rate = std::move(arg);
    return Init_ControlAnalysis_rear_steer_angle_feedforward(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steering_target
{
public:
  explicit Init_ControlAnalysis_rear_steering_target(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steering_rate rear_steering_target(::ros2_interface::msg::ControlAnalysis::_rear_steering_target_type arg)
  {
    msg_.rear_steering_target = std::move(arg);
    return Init_ControlAnalysis_rear_steering_rate(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_rear_steering_value_fd
{
public:
  explicit Init_ControlAnalysis_rear_steering_value_fd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steering_target rear_steering_value_fd(::ros2_interface::msg::ControlAnalysis::_rear_steering_value_fd_type arg)
  {
    msg_.rear_steering_value_fd = std::move(arg);
    return Init_ControlAnalysis_rear_steering_target(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steer_angle_heading_rate_contribution
{
public:
  explicit Init_ControlAnalysis_front_steer_angle_heading_rate_contribution(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_rear_steering_value_fd front_steer_angle_heading_rate_contribution(::ros2_interface::msg::ControlAnalysis::_front_steer_angle_heading_rate_contribution_type arg)
  {
    msg_.front_steer_angle_heading_rate_contribution = std::move(arg);
    return Init_ControlAnalysis_rear_steering_value_fd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steer_angle_heading_contribution
{
public:
  explicit Init_ControlAnalysis_front_steer_angle_heading_contribution(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steer_angle_heading_rate_contribution front_steer_angle_heading_contribution(::ros2_interface::msg::ControlAnalysis::_front_steer_angle_heading_contribution_type arg)
  {
    msg_.front_steer_angle_heading_contribution = std::move(arg);
    return Init_ControlAnalysis_front_steer_angle_heading_rate_contribution(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steer_angle_lateral_rate_contribution
{
public:
  explicit Init_ControlAnalysis_front_steer_angle_lateral_rate_contribution(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steer_angle_heading_contribution front_steer_angle_lateral_rate_contribution(::ros2_interface::msg::ControlAnalysis::_front_steer_angle_lateral_rate_contribution_type arg)
  {
    msg_.front_steer_angle_lateral_rate_contribution = std::move(arg);
    return Init_ControlAnalysis_front_steer_angle_heading_contribution(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steer_angle_lateral_contribution
{
public:
  explicit Init_ControlAnalysis_front_steer_angle_lateral_contribution(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steer_angle_lateral_rate_contribution front_steer_angle_lateral_contribution(::ros2_interface::msg::ControlAnalysis::_front_steer_angle_lateral_contribution_type arg)
  {
    msg_.front_steer_angle_lateral_contribution = std::move(arg);
    return Init_ControlAnalysis_front_steer_angle_lateral_rate_contribution(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steer_angle_feedback
{
public:
  explicit Init_ControlAnalysis_front_steer_angle_feedback(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steer_angle_lateral_contribution front_steer_angle_feedback(::ros2_interface::msg::ControlAnalysis::_front_steer_angle_feedback_type arg)
  {
    msg_.front_steer_angle_feedback = std::move(arg);
    return Init_ControlAnalysis_front_steer_angle_lateral_contribution(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steer_angle_feedforward
{
public:
  explicit Init_ControlAnalysis_front_steer_angle_feedforward(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steer_angle_feedback front_steer_angle_feedforward(::ros2_interface::msg::ControlAnalysis::_front_steer_angle_feedforward_type arg)
  {
    msg_.front_steer_angle_feedforward = std::move(arg);
    return Init_ControlAnalysis_front_steer_angle_feedback(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steering_rate
{
public:
  explicit Init_ControlAnalysis_front_steering_rate(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steer_angle_feedforward front_steering_rate(::ros2_interface::msg::ControlAnalysis::_front_steering_rate_type arg)
  {
    msg_.front_steering_rate = std::move(arg);
    return Init_ControlAnalysis_front_steer_angle_feedforward(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steering_target
{
public:
  explicit Init_ControlAnalysis_front_steering_target(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steering_rate front_steering_target(::ros2_interface::msg::ControlAnalysis::_front_steering_target_type arg)
  {
    msg_.front_steering_target = std::move(arg);
    return Init_ControlAnalysis_front_steering_rate(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_front_steering_value_fd
{
public:
  explicit Init_ControlAnalysis_front_steering_value_fd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steering_target front_steering_value_fd(::ros2_interface::msg::ControlAnalysis::_front_steering_value_fd_type arg)
  {
    msg_.front_steering_value_fd = std::move(arg);
    return Init_ControlAnalysis_front_steering_target(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lon_error
{
public:
  explicit Init_ControlAnalysis_lon_error(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_front_steering_value_fd lon_error(::ros2_interface::msg::ControlAnalysis::_lon_error_type arg)
  {
    msg_.lon_error = std::move(arg);
    return Init_ControlAnalysis_front_steering_value_fd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lateral_error_rate
{
public:
  explicit Init_ControlAnalysis_lateral_error_rate(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lon_error lateral_error_rate(::ros2_interface::msg::ControlAnalysis::_lateral_error_rate_type arg)
  {
    msg_.lateral_error_rate = std::move(arg);
    return Init_ControlAnalysis_lon_error(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lateral_error
{
public:
  explicit Init_ControlAnalysis_lateral_error(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lateral_error_rate lateral_error(::ros2_interface::msg::ControlAnalysis::_lateral_error_type arg)
  {
    msg_.lateral_error = std::move(arg);
    return Init_ControlAnalysis_lateral_error_rate(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_heading_error_rate
{
public:
  explicit Init_ControlAnalysis_heading_error_rate(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lateral_error heading_error_rate(::ros2_interface::msg::ControlAnalysis::_heading_error_rate_type arg)
  {
    msg_.heading_error_rate = std::move(arg);
    return Init_ControlAnalysis_lateral_error(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_heading_error
{
public:
  explicit Init_ControlAnalysis_heading_error(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_heading_error_rate heading_error(::ros2_interface::msg::ControlAnalysis::_heading_error_type arg)
  {
    msg_.heading_error = std::move(arg);
    return Init_ControlAnalysis_heading_error_rate(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_current_heading
{
public:
  explicit Init_ControlAnalysis_current_heading(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_heading_error current_heading(::ros2_interface::msg::ControlAnalysis::_current_heading_type arg)
  {
    msg_.current_heading = std::move(arg);
    return Init_ControlAnalysis_heading_error(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_ref_heading
{
public:
  explicit Init_ControlAnalysis_ref_heading(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_current_heading ref_heading(::ros2_interface::msg::ControlAnalysis::_ref_heading_type arg)
  {
    msg_.ref_heading = std::move(arg);
    return Init_ControlAnalysis_current_heading(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_ref_curvature
{
public:
  explicit Init_ControlAnalysis_ref_curvature(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_ref_heading ref_curvature(::ros2_interface::msg::ControlAnalysis::_ref_curvature_type arg)
  {
    msg_.ref_curvature = std::move(arg);
    return Init_ControlAnalysis_ref_heading(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lon_calculate_time_max
{
public:
  explicit Init_ControlAnalysis_lon_calculate_time_max(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_ref_curvature lon_calculate_time_max(::ros2_interface::msg::ControlAnalysis::_lon_calculate_time_max_type arg)
  {
    msg_.lon_calculate_time_max = std::move(arg);
    return Init_ControlAnalysis_ref_curvature(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lon_calculate_time
{
public:
  explicit Init_ControlAnalysis_lon_calculate_time(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lon_calculate_time_max lon_calculate_time(::ros2_interface::msg::ControlAnalysis::_lon_calculate_time_type arg)
  {
    msg_.lon_calculate_time = std::move(arg);
    return Init_ControlAnalysis_lon_calculate_time_max(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lon_target_point_s
{
public:
  explicit Init_ControlAnalysis_lon_target_point_s(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lon_calculate_time lon_target_point_s(::ros2_interface::msg::ControlAnalysis::_lon_target_point_s_type arg)
  {
    msg_.lon_target_point_s = std::move(arg);
    return Init_ControlAnalysis_lon_calculate_time(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_station_error
{
public:
  explicit Init_ControlAnalysis_station_error(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lon_target_point_s station_error(::ros2_interface::msg::ControlAnalysis::_station_error_type arg)
  {
    msg_.station_error = std::move(arg);
    return Init_ControlAnalysis_lon_target_point_s(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_station_error_limited
{
public:
  explicit Init_ControlAnalysis_station_error_limited(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_station_error station_error_limited(::ros2_interface::msg::ControlAnalysis::_station_error_limited_type arg)
  {
    msg_.station_error_limited = std::move(arg);
    return Init_ControlAnalysis_station_error(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_speed_offset
{
public:
  explicit Init_ControlAnalysis_speed_offset(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_station_error_limited speed_offset(::ros2_interface::msg::ControlAnalysis::_speed_offset_type arg)
  {
    msg_.speed_offset = std::move(arg);
    return Init_ControlAnalysis_station_error_limited(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_speed_error
{
public:
  explicit Init_ControlAnalysis_speed_error(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_speed_offset speed_error(::ros2_interface::msg::ControlAnalysis::_speed_error_type arg)
  {
    msg_.speed_error = std::move(arg);
    return Init_ControlAnalysis_speed_offset(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_speed_error_limited
{
public:
  explicit Init_ControlAnalysis_speed_error_limited(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_speed_error speed_error_limited(::ros2_interface::msg::ControlAnalysis::_speed_error_limited_type arg)
  {
    msg_.speed_error_limited = std::move(arg);
    return Init_ControlAnalysis_speed_error(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_turning_offset_compensation
{
public:
  explicit Init_ControlAnalysis_turning_offset_compensation(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_speed_error_limited turning_offset_compensation(::ros2_interface::msg::ControlAnalysis::_turning_offset_compensation_type arg)
  {
    msg_.turning_offset_compensation = std::move(arg);
    return Init_ControlAnalysis_speed_error_limited(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_slope_offset_compensation
{
public:
  explicit Init_ControlAnalysis_slope_offset_compensation(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_turning_offset_compensation slope_offset_compensation(::ros2_interface::msg::ControlAnalysis::_slope_offset_compensation_type arg)
  {
    msg_.slope_offset_compensation = std::move(arg);
    return Init_ControlAnalysis_turning_offset_compensation(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_preview_acceleration_reference
{
public:
  explicit Init_ControlAnalysis_preview_acceleration_reference(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_slope_offset_compensation preview_acceleration_reference(::ros2_interface::msg::ControlAnalysis::_preview_acceleration_reference_type arg)
  {
    msg_.preview_acceleration_reference = std::move(arg);
    return Init_ControlAnalysis_slope_offset_compensation(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_acceleration_cmd_closeloop
{
public:
  explicit Init_ControlAnalysis_acceleration_cmd_closeloop(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_preview_acceleration_reference acceleration_cmd_closeloop(::ros2_interface::msg::ControlAnalysis::_acceleration_cmd_closeloop_type arg)
  {
    msg_.acceleration_cmd_closeloop = std::move(arg);
    return Init_ControlAnalysis_preview_acceleration_reference(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_acceleration_cmd
{
public:
  explicit Init_ControlAnalysis_acceleration_cmd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_acceleration_cmd_closeloop acceleration_cmd(::ros2_interface::msg::ControlAnalysis::_acceleration_cmd_type arg)
  {
    msg_.acceleration_cmd = std::move(arg);
    return Init_ControlAnalysis_acceleration_cmd_closeloop(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_lon_acc_jerk
{
public:
  explicit Init_ControlAnalysis_lon_acc_jerk(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_acceleration_cmd lon_acc_jerk(::ros2_interface::msg::ControlAnalysis::_lon_acc_jerk_type arg)
  {
    msg_.lon_acc_jerk = std::move(arg);
    return Init_ControlAnalysis_acceleration_cmd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_is_stopped
{
public:
  explicit Init_ControlAnalysis_is_stopped(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_lon_acc_jerk is_stopped(::ros2_interface::msg::ControlAnalysis::_is_stopped_type arg)
  {
    msg_.is_stopped = std::move(arg);
    return Init_ControlAnalysis_lon_acc_jerk(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_is_full_stop
{
public:
  explicit Init_ControlAnalysis_is_full_stop(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_is_stopped is_full_stop(::ros2_interface::msg::ControlAnalysis::_is_full_stop_type arg)
  {
    msg_.is_full_stop = std::move(arg);
    return Init_ControlAnalysis_is_stopped(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_has_stop_point
{
public:
  explicit Init_ControlAnalysis_has_stop_point(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_is_full_stop has_stop_point(::ros2_interface::msg::ControlAnalysis::_has_stop_point_type arg)
  {
    msg_.has_stop_point = std::move(arg);
    return Init_ControlAnalysis_is_full_stop(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_path_remain
{
public:
  explicit Init_ControlAnalysis_path_remain(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_has_stop_point path_remain(::ros2_interface::msg::ControlAnalysis::_path_remain_type arg)
  {
    msg_.path_remain = std::move(arg);
    return Init_ControlAnalysis_has_stop_point(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_brake_value_cmd
{
public:
  explicit Init_ControlAnalysis_brake_value_cmd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_path_remain brake_value_cmd(::ros2_interface::msg::ControlAnalysis::_brake_value_cmd_type arg)
  {
    msg_.brake_value_cmd = std::move(arg);
    return Init_ControlAnalysis_path_remain(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_brake_value_fd
{
public:
  explicit Init_ControlAnalysis_brake_value_fd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_brake_value_cmd brake_value_fd(::ros2_interface::msg::ControlAnalysis::_brake_value_fd_type arg)
  {
    msg_.brake_value_fd = std::move(arg);
    return Init_ControlAnalysis_brake_value_cmd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_accel_value_cmd
{
public:
  explicit Init_ControlAnalysis_accel_value_cmd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_brake_value_fd accel_value_cmd(::ros2_interface::msg::ControlAnalysis::_accel_value_cmd_type arg)
  {
    msg_.accel_value_cmd = std::move(arg);
    return Init_ControlAnalysis_brake_value_fd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_accel_value_fd
{
public:
  explicit Init_ControlAnalysis_accel_value_fd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_accel_value_cmd accel_value_fd(::ros2_interface::msg::ControlAnalysis::_accel_value_fd_type arg)
  {
    msg_.accel_value_fd = std::move(arg);
    return Init_ControlAnalysis_accel_value_cmd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_speed_reference
{
public:
  explicit Init_ControlAnalysis_speed_reference(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_accel_value_fd speed_reference(::ros2_interface::msg::ControlAnalysis::_speed_reference_type arg)
  {
    msg_.speed_reference = std::move(arg);
    return Init_ControlAnalysis_accel_value_fd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_speed_mps
{
public:
  explicit Init_ControlAnalysis_speed_mps(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_speed_reference speed_mps(::ros2_interface::msg::ControlAnalysis::_speed_mps_type arg)
  {
    msg_.speed_mps = std::move(arg);
    return Init_ControlAnalysis_speed_reference(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_epb_level_cmd
{
public:
  explicit Init_ControlAnalysis_epb_level_cmd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_speed_mps epb_level_cmd(::ros2_interface::msg::ControlAnalysis::_epb_level_cmd_type arg)
  {
    msg_.epb_level_cmd = std::move(arg);
    return Init_ControlAnalysis_speed_mps(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_epb_level_fd
{
public:
  explicit Init_ControlAnalysis_epb_level_fd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_epb_level_cmd epb_level_fd(::ros2_interface::msg::ControlAnalysis::_epb_level_fd_type arg)
  {
    msg_.epb_level_fd = std::move(arg);
    return Init_ControlAnalysis_epb_level_cmd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_gear_location_cmd
{
public:
  explicit Init_ControlAnalysis_gear_location_cmd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_epb_level_fd gear_location_cmd(::ros2_interface::msg::ControlAnalysis::_gear_location_cmd_type arg)
  {
    msg_.gear_location_cmd = std::move(arg);
    return Init_ControlAnalysis_epb_level_fd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_gear_location_fd
{
public:
  explicit Init_ControlAnalysis_gear_location_fd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_gear_location_cmd gear_location_fd(::ros2_interface::msg::ControlAnalysis::_gear_location_fd_type arg)
  {
    msg_.gear_location_fd = std::move(arg);
    return Init_ControlAnalysis_gear_location_cmd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_driving_mode_fd
{
public:
  explicit Init_ControlAnalysis_driving_mode_fd(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_gear_location_fd driving_mode_fd(::ros2_interface::msg::ControlAnalysis::_driving_mode_fd_type arg)
  {
    msg_.driving_mode_fd = std::move(arg);
    return Init_ControlAnalysis_gear_location_fd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_driving_mode
{
public:
  explicit Init_ControlAnalysis_driving_mode(::ros2_interface::msg::ControlAnalysis & msg)
  : msg_(msg)
  {}
  Init_ControlAnalysis_driving_mode_fd driving_mode(::ros2_interface::msg::ControlAnalysis::_driving_mode_type arg)
  {
    msg_.driving_mode = std::move(arg);
    return Init_ControlAnalysis_driving_mode_fd(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

class Init_ControlAnalysis_header
{
public:
  Init_ControlAnalysis_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlAnalysis_driving_mode header(::ros2_interface::msg::ControlAnalysis::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlAnalysis_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::ControlAnalysis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ControlAnalysis>()
{
  return ros2_interface::msg::builder::Init_ControlAnalysis_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__BUILDER_HPP_
