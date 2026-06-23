// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/WheelInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/WheelInfo in the package ros2_interface.
typedef struct ros2_interface__msg__WheelInfo
{
  std_msgs__msg__Header header;
  /// 0=UNKNOWN_VEHICLE_STATE  1=STATIONARY  2=MOVING_FORWARD  3=MOVING_BACKWARD
  int32_t moving_status;
  /// 0=COMPLETE_MANUAL  1=COMPLETE_AUTO_DRIVE  4=EMERGENCY_MODE
  int32_t steer_driving_mode;
  /// Real steering location
  double steering_value;
  /// Applied steering torque in
  double steering_torque_nm;
  /// degree/s
  double steering_rate_dps;
  /// Vehicle Speed in meters per second
  double speed_mps;
  /// 车速有效性
  bool veh_spd_vld;
  /// 档位
  int32_t gear;
  /// 档位有效性
  bool gear_vld;
  /// 0=FORWARD 1=BACKWARD 2=STANDSTILL 3=INVALID
  int32_t wheel_direction_rr;
  /// Actual speed of the right rear wheel
  double wheel_spd_rr;
  /// 0=FORWARD 1=BACKWARD 2=STANDSTILL 3=INVALID
  int32_t wheel_direction_rl;
  /// Actual speed of the left rear wheel
  double wheel_spd_rl;
  /// 0=FORWARD 1=BACKWARD 2=STANDSTILL 3=INVALID
  int32_t wheel_direction_fr;
  /// Actual speed of the right front wheel
  double wheel_spd_fr;
  /// 0=FORWARD 1=BACKWARD 2=STANDSTILL 3=INVALID
  int32_t wheel_direction_fl;
  /// Actual speed of the left front wheel
  double wheel_spd_fl;
  /// Yaw rate[degree/s] [-163.84|163.835]
  double yaw_rate;
  /// 左前轮边缘和
  int32_t wss_fl_edges_sum;
  /// 右前轮边缘和
  int32_t wss_fr_edges_sum;
  /// 左后轮边缘和
  int32_t wss_rl_edges_sum;
  /// 右后轮边缘和
  int32_t wss_rr_edges_sum;
  /// 左前轮边缘和有效位（0：无效 1：有效）
  bool wss_fl_edges_sum_vld;
  /// 右前轮边缘和有效位（0：无效 1：有效）
  bool wss_fr_edges_sum_vld;
  /// 左后轮边缘和有效位（0：无效 1：有效）
  bool wss_rl_edges_sum_vld;
  /// 右后轮边缘和有效位（0：无效 1：有效）
  bool wss_rr_edges_sum_vld;
  /// 车辆横向加速度
  double veh_lat_accel;
  /// 车辆纵向加速度
  double veh_lgt_accel;
  /// 车辆横向加速度有效性
  bool veh_lat_accel_vld;
  /// 车辆纵向加速度有效性
  bool veh_lgt_accel_vld;
} ros2_interface__msg__WheelInfo;

// Struct for a sequence of ros2_interface__msg__WheelInfo.
typedef struct ros2_interface__msg__WheelInfo__Sequence
{
  ros2_interface__msg__WheelInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__WheelInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__STRUCT_H_
