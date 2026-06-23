// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ControlAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/control_analysis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlAnalysis & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: driving_mode
  {
    out << "driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode, out);
    out << ", ";
  }

  // member: driving_mode_fd
  {
    out << "driving_mode_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode_fd, out);
    out << ", ";
  }

  // member: gear_location_fd
  {
    out << "gear_location_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location_fd, out);
    out << ", ";
  }

  // member: gear_location_cmd
  {
    out << "gear_location_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location_cmd, out);
    out << ", ";
  }

  // member: epb_level_fd
  {
    out << "epb_level_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_level_fd, out);
    out << ", ";
  }

  // member: epb_level_cmd
  {
    out << "epb_level_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_level_cmd, out);
    out << ", ";
  }

  // member: speed_mps
  {
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << ", ";
  }

  // member: speed_reference
  {
    out << "speed_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_reference, out);
    out << ", ";
  }

  // member: accel_value_fd
  {
    out << "accel_value_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_value_fd, out);
    out << ", ";
  }

  // member: accel_value_cmd
  {
    out << "accel_value_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_value_cmd, out);
    out << ", ";
  }

  // member: brake_value_fd
  {
    out << "brake_value_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value_fd, out);
    out << ", ";
  }

  // member: brake_value_cmd
  {
    out << "brake_value_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value_cmd, out);
    out << ", ";
  }

  // member: path_remain
  {
    out << "path_remain: ";
    rosidl_generator_traits::value_to_yaml(msg.path_remain, out);
    out << ", ";
  }

  // member: has_stop_point
  {
    out << "has_stop_point: ";
    rosidl_generator_traits::value_to_yaml(msg.has_stop_point, out);
    out << ", ";
  }

  // member: is_full_stop
  {
    out << "is_full_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.is_full_stop, out);
    out << ", ";
  }

  // member: is_stopped
  {
    out << "is_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stopped, out);
    out << ", ";
  }

  // member: lon_acc_jerk
  {
    out << "lon_acc_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_acc_jerk, out);
    out << ", ";
  }

  // member: acceleration_cmd
  {
    out << "acceleration_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_cmd, out);
    out << ", ";
  }

  // member: acceleration_cmd_closeloop
  {
    out << "acceleration_cmd_closeloop: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_cmd_closeloop, out);
    out << ", ";
  }

  // member: preview_acceleration_reference
  {
    out << "preview_acceleration_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_acceleration_reference, out);
    out << ", ";
  }

  // member: slope_offset_compensation
  {
    out << "slope_offset_compensation: ";
    rosidl_generator_traits::value_to_yaml(msg.slope_offset_compensation, out);
    out << ", ";
  }

  // member: turning_offset_compensation
  {
    out << "turning_offset_compensation: ";
    rosidl_generator_traits::value_to_yaml(msg.turning_offset_compensation, out);
    out << ", ";
  }

  // member: speed_error_limited
  {
    out << "speed_error_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_error_limited, out);
    out << ", ";
  }

  // member: speed_error
  {
    out << "speed_error: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_error, out);
    out << ", ";
  }

  // member: speed_offset
  {
    out << "speed_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_offset, out);
    out << ", ";
  }

  // member: station_error_limited
  {
    out << "station_error_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.station_error_limited, out);
    out << ", ";
  }

  // member: station_error
  {
    out << "station_error: ";
    rosidl_generator_traits::value_to_yaml(msg.station_error, out);
    out << ", ";
  }

  // member: lon_target_point_s
  {
    out << "lon_target_point_s: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_target_point_s, out);
    out << ", ";
  }

  // member: lon_calculate_time
  {
    out << "lon_calculate_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_calculate_time, out);
    out << ", ";
  }

  // member: lon_calculate_time_max
  {
    out << "lon_calculate_time_max: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_calculate_time_max, out);
    out << ", ";
  }

  // member: ref_curvature
  {
    out << "ref_curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_curvature, out);
    out << ", ";
  }

  // member: ref_heading
  {
    out << "ref_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_heading, out);
    out << ", ";
  }

  // member: current_heading
  {
    out << "current_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.current_heading, out);
    out << ", ";
  }

  // member: heading_error
  {
    out << "heading_error: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error, out);
    out << ", ";
  }

  // member: heading_error_rate
  {
    out << "heading_error_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error_rate, out);
    out << ", ";
  }

  // member: lateral_error
  {
    out << "lateral_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error, out);
    out << ", ";
  }

  // member: lateral_error_rate
  {
    out << "lateral_error_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_rate, out);
    out << ", ";
  }

  // member: lon_error
  {
    out << "lon_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_error, out);
    out << ", ";
  }

  // member: front_steering_value_fd
  {
    out << "front_steering_value_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_value_fd, out);
    out << ", ";
  }

  // member: front_steering_target
  {
    out << "front_steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_target, out);
    out << ", ";
  }

  // member: front_steering_rate
  {
    out << "front_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_rate, out);
    out << ", ";
  }

  // member: front_steer_angle_feedforward
  {
    out << "front_steer_angle_feedforward: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_feedforward, out);
    out << ", ";
  }

  // member: front_steer_angle_feedback
  {
    out << "front_steer_angle_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_feedback, out);
    out << ", ";
  }

  // member: front_steer_angle_lateral_contribution
  {
    out << "front_steer_angle_lateral_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_lateral_contribution, out);
    out << ", ";
  }

  // member: front_steer_angle_lateral_rate_contribution
  {
    out << "front_steer_angle_lateral_rate_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_lateral_rate_contribution, out);
    out << ", ";
  }

  // member: front_steer_angle_heading_contribution
  {
    out << "front_steer_angle_heading_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_heading_contribution, out);
    out << ", ";
  }

  // member: front_steer_angle_heading_rate_contribution
  {
    out << "front_steer_angle_heading_rate_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_heading_rate_contribution, out);
    out << ", ";
  }

  // member: rear_steering_value_fd
  {
    out << "rear_steering_value_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_value_fd, out);
    out << ", ";
  }

  // member: rear_steering_target
  {
    out << "rear_steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_target, out);
    out << ", ";
  }

  // member: rear_steering_rate
  {
    out << "rear_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_rate, out);
    out << ", ";
  }

  // member: rear_steer_angle_feedforward
  {
    out << "rear_steer_angle_feedforward: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_feedforward, out);
    out << ", ";
  }

  // member: rear_steer_angle_feedback
  {
    out << "rear_steer_angle_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_feedback, out);
    out << ", ";
  }

  // member: rear_steer_angle_lateral_contribution
  {
    out << "rear_steer_angle_lateral_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_lateral_contribution, out);
    out << ", ";
  }

  // member: rear_steer_angle_lateral_rate_contribution
  {
    out << "rear_steer_angle_lateral_rate_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_lateral_rate_contribution, out);
    out << ", ";
  }

  // member: rear_steer_angle_heading_contribution
  {
    out << "rear_steer_angle_heading_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_heading_contribution, out);
    out << ", ";
  }

  // member: rear_steer_angle_heading_rate_contribution
  {
    out << "rear_steer_angle_heading_rate_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_heading_rate_contribution, out);
    out << ", ";
  }

  // member: matrix_k_00
  {
    out << "matrix_k_00: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_00, out);
    out << ", ";
  }

  // member: matrix_k_01
  {
    out << "matrix_k_01: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_01, out);
    out << ", ";
  }

  // member: matrix_k_02
  {
    out << "matrix_k_02: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_02, out);
    out << ", ";
  }

  // member: matrix_k_03
  {
    out << "matrix_k_03: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_03, out);
    out << ", ";
  }

  // member: matrix_k_10
  {
    out << "matrix_k_10: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_10, out);
    out << ", ";
  }

  // member: matrix_k_11
  {
    out << "matrix_k_11: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_11, out);
    out << ", ";
  }

  // member: matrix_k_12
  {
    out << "matrix_k_12: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_12, out);
    out << ", ";
  }

  // member: matrix_k_13
  {
    out << "matrix_k_13: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_13, out);
    out << ", ";
  }

  // member: matrix_state_0
  {
    out << "matrix_state_0: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_state_0, out);
    out << ", ";
  }

  // member: matrix_state_1
  {
    out << "matrix_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_state_1, out);
    out << ", ";
  }

  // member: matrix_state_2
  {
    out << "matrix_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_state_2, out);
    out << ", ";
  }

  // member: matrix_state_3
  {
    out << "matrix_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_state_3, out);
    out << ", ";
  }

  // member: matrix_q_updated_0
  {
    out << "matrix_q_updated_0: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_q_updated_0, out);
    out << ", ";
  }

  // member: matrix_q_updated_1
  {
    out << "matrix_q_updated_1: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_q_updated_1, out);
    out << ", ";
  }

  // member: matrix_q_updated_2
  {
    out << "matrix_q_updated_2: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_q_updated_2, out);
    out << ", ";
  }

  // member: matrix_q_updated_3
  {
    out << "matrix_q_updated_3: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_q_updated_3, out);
    out << ", ";
  }

  // member: current_x
  {
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << ", ";
  }

  // member: current_y
  {
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << ", ";
  }

  // member: target_point_x
  {
    out << "target_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_point_x, out);
    out << ", ";
  }

  // member: target_point_y
  {
    out << "target_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_point_y, out);
    out << ", ";
  }

  // member: lat_target_point_s
  {
    out << "lat_target_point_s: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_target_point_s, out);
    out << ", ";
  }

  // member: lqr_calculate_time
  {
    out << "lqr_calculate_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lqr_calculate_time, out);
    out << ", ";
  }

  // member: lqr_calculate_time_max
  {
    out << "lqr_calculate_time_max: ";
    rosidl_generator_traits::value_to_yaml(msg.lqr_calculate_time_max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlAnalysis & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode, out);
    out << "\n";
  }

  // member: driving_mode_fd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_mode_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode_fd, out);
    out << "\n";
  }

  // member: gear_location_fd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_location_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location_fd, out);
    out << "\n";
  }

  // member: gear_location_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_location_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location_cmd, out);
    out << "\n";
  }

  // member: epb_level_fd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_level_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_level_fd, out);
    out << "\n";
  }

  // member: epb_level_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_level_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_level_cmd, out);
    out << "\n";
  }

  // member: speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << "\n";
  }

  // member: speed_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_reference, out);
    out << "\n";
  }

  // member: accel_value_fd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_value_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_value_fd, out);
    out << "\n";
  }

  // member: accel_value_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_value_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_value_cmd, out);
    out << "\n";
  }

  // member: brake_value_fd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_value_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value_fd, out);
    out << "\n";
  }

  // member: brake_value_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_value_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value_cmd, out);
    out << "\n";
  }

  // member: path_remain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_remain: ";
    rosidl_generator_traits::value_to_yaml(msg.path_remain, out);
    out << "\n";
  }

  // member: has_stop_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_stop_point: ";
    rosidl_generator_traits::value_to_yaml(msg.has_stop_point, out);
    out << "\n";
  }

  // member: is_full_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_full_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.is_full_stop, out);
    out << "\n";
  }

  // member: is_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stopped, out);
    out << "\n";
  }

  // member: lon_acc_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_acc_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_acc_jerk, out);
    out << "\n";
  }

  // member: acceleration_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_cmd, out);
    out << "\n";
  }

  // member: acceleration_cmd_closeloop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_cmd_closeloop: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_cmd_closeloop, out);
    out << "\n";
  }

  // member: preview_acceleration_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preview_acceleration_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_acceleration_reference, out);
    out << "\n";
  }

  // member: slope_offset_compensation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slope_offset_compensation: ";
    rosidl_generator_traits::value_to_yaml(msg.slope_offset_compensation, out);
    out << "\n";
  }

  // member: turning_offset_compensation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turning_offset_compensation: ";
    rosidl_generator_traits::value_to_yaml(msg.turning_offset_compensation, out);
    out << "\n";
  }

  // member: speed_error_limited
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_error_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_error_limited, out);
    out << "\n";
  }

  // member: speed_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_error: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_error, out);
    out << "\n";
  }

  // member: speed_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_offset, out);
    out << "\n";
  }

  // member: station_error_limited
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station_error_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.station_error_limited, out);
    out << "\n";
  }

  // member: station_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station_error: ";
    rosidl_generator_traits::value_to_yaml(msg.station_error, out);
    out << "\n";
  }

  // member: lon_target_point_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_target_point_s: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_target_point_s, out);
    out << "\n";
  }

  // member: lon_calculate_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_calculate_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_calculate_time, out);
    out << "\n";
  }

  // member: lon_calculate_time_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_calculate_time_max: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_calculate_time_max, out);
    out << "\n";
  }

  // member: ref_curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_curvature, out);
    out << "\n";
  }

  // member: ref_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_heading, out);
    out << "\n";
  }

  // member: current_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.current_heading, out);
    out << "\n";
  }

  // member: heading_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_error: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error, out);
    out << "\n";
  }

  // member: heading_error_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_error_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error_rate, out);
    out << "\n";
  }

  // member: lateral_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error, out);
    out << "\n";
  }

  // member: lateral_error_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_rate, out);
    out << "\n";
  }

  // member: lon_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_error, out);
    out << "\n";
  }

  // member: front_steering_value_fd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steering_value_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_value_fd, out);
    out << "\n";
  }

  // member: front_steering_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_target, out);
    out << "\n";
  }

  // member: front_steering_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_rate, out);
    out << "\n";
  }

  // member: front_steer_angle_feedforward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steer_angle_feedforward: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_feedforward, out);
    out << "\n";
  }

  // member: front_steer_angle_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steer_angle_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_feedback, out);
    out << "\n";
  }

  // member: front_steer_angle_lateral_contribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steer_angle_lateral_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_lateral_contribution, out);
    out << "\n";
  }

  // member: front_steer_angle_lateral_rate_contribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steer_angle_lateral_rate_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_lateral_rate_contribution, out);
    out << "\n";
  }

  // member: front_steer_angle_heading_contribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steer_angle_heading_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_heading_contribution, out);
    out << "\n";
  }

  // member: front_steer_angle_heading_rate_contribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steer_angle_heading_rate_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steer_angle_heading_rate_contribution, out);
    out << "\n";
  }

  // member: rear_steering_value_fd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steering_value_fd: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_value_fd, out);
    out << "\n";
  }

  // member: rear_steering_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_target, out);
    out << "\n";
  }

  // member: rear_steering_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_rate, out);
    out << "\n";
  }

  // member: rear_steer_angle_feedforward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steer_angle_feedforward: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_feedforward, out);
    out << "\n";
  }

  // member: rear_steer_angle_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steer_angle_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_feedback, out);
    out << "\n";
  }

  // member: rear_steer_angle_lateral_contribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steer_angle_lateral_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_lateral_contribution, out);
    out << "\n";
  }

  // member: rear_steer_angle_lateral_rate_contribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steer_angle_lateral_rate_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_lateral_rate_contribution, out);
    out << "\n";
  }

  // member: rear_steer_angle_heading_contribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steer_angle_heading_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_heading_contribution, out);
    out << "\n";
  }

  // member: rear_steer_angle_heading_rate_contribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steer_angle_heading_rate_contribution: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steer_angle_heading_rate_contribution, out);
    out << "\n";
  }

  // member: matrix_k_00
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_k_00: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_00, out);
    out << "\n";
  }

  // member: matrix_k_01
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_k_01: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_01, out);
    out << "\n";
  }

  // member: matrix_k_02
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_k_02: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_02, out);
    out << "\n";
  }

  // member: matrix_k_03
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_k_03: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_03, out);
    out << "\n";
  }

  // member: matrix_k_10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_k_10: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_10, out);
    out << "\n";
  }

  // member: matrix_k_11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_k_11: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_11, out);
    out << "\n";
  }

  // member: matrix_k_12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_k_12: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_12, out);
    out << "\n";
  }

  // member: matrix_k_13
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_k_13: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_k_13, out);
    out << "\n";
  }

  // member: matrix_state_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_state_0: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_state_0, out);
    out << "\n";
  }

  // member: matrix_state_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_state_1, out);
    out << "\n";
  }

  // member: matrix_state_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_state_2, out);
    out << "\n";
  }

  // member: matrix_state_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_state_3, out);
    out << "\n";
  }

  // member: matrix_q_updated_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_q_updated_0: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_q_updated_0, out);
    out << "\n";
  }

  // member: matrix_q_updated_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_q_updated_1: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_q_updated_1, out);
    out << "\n";
  }

  // member: matrix_q_updated_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_q_updated_2: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_q_updated_2, out);
    out << "\n";
  }

  // member: matrix_q_updated_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix_q_updated_3: ";
    rosidl_generator_traits::value_to_yaml(msg.matrix_q_updated_3, out);
    out << "\n";
  }

  // member: current_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << "\n";
  }

  // member: current_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << "\n";
  }

  // member: target_point_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_point_x, out);
    out << "\n";
  }

  // member: target_point_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_point_y, out);
    out << "\n";
  }

  // member: lat_target_point_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_target_point_s: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_target_point_s, out);
    out << "\n";
  }

  // member: lqr_calculate_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lqr_calculate_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lqr_calculate_time, out);
    out << "\n";
  }

  // member: lqr_calculate_time_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lqr_calculate_time_max: ";
    rosidl_generator_traits::value_to_yaml(msg.lqr_calculate_time_max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlAnalysis & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_interface::msg::ControlAnalysis & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ControlAnalysis & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ControlAnalysis>()
{
  return "ros2_interface::msg::ControlAnalysis";
}

template<>
inline const char * name<ros2_interface::msg::ControlAnalysis>()
{
  return "ros2_interface/msg/ControlAnalysis";
}

template<>
struct has_fixed_size<ros2_interface::msg::ControlAnalysis>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::ControlAnalysis>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::ControlAnalysis>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__TRAITS_HPP_
