// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ControlAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__STRUCT_H_

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

/// Struct defined in msg/ControlAnalysis in the package ros2_interface.
typedef struct ros2_interface__msg__ControlAnalysis
{
  std_msgs__msg__Header header;
  /// 驾驶模式
  int32_t driving_mode;
  /// 驾驶模式反馈
  int32_t driving_mode_fd;
  /// 档位反馈
  int32_t gear_location_fd;
  /// 档位命令
  int32_t gear_location_cmd;
  /// EPB状态反馈
  int32_t epb_level_fd;
  /// EPB命令
  int32_t epb_level_cmd;
  /// 车辆速度
  double speed_mps;
  /// 参考速度
  double speed_reference;
  /// 油门反馈
  double accel_value_fd;
  /// 油门命令
  double accel_value_cmd;
  /// 刹车反馈
  double brake_value_fd;
  /// 刹车命令
  double brake_value_cmd;
  /// 剩余轨迹里程
  double path_remain;
  /// 是否有停车点
  bool has_stop_point;
  /// 是否有停车轨迹
  bool is_full_stop;
  /// 是否停车
  bool is_stopped;
  /// 纵向加加速度
  double lon_acc_jerk;
  /// 加速度命令
  double acceleration_cmd;
  /// 闭环加速度命令
  double acceleration_cmd_closeloop;
  /// 预描参考加速度
  double preview_acceleration_reference;
  /// 坡道补偿
  double slope_offset_compensation;
  /// 转向补偿
  double turning_offset_compensation;
  /// 速度差限值
  double speed_error_limited;
  /// 速度差
  double speed_error;
  double speed_offset;
  /// 位置误差限值
  double station_error_limited;
  /// 位置误差
  double station_error;
  /// 纵向控制目标点里程
  double lon_target_point_s;
  /// 纵向计算时间
  int64_t lon_calculate_time;
  /// 纵向时间限值
  int64_t lon_calculate_time_max;
  /// 参考曲率
  double ref_curvature;
  /// 参考航向角
  double ref_heading;
  /// 当前航向角
  double current_heading;
  /// 航向角误差
  double heading_error;
  /// 航向角误差率
  double heading_error_rate;
  /// 横向误差
  double lateral_error;
  /// 横向误差率
  double lateral_error_rate;
  /// 纵向误差
  double lon_error;
  /// 前轮转向反馈
  double front_steering_value_fd;
  /// 前轮目标转向
  double front_steering_target;
  /// 前轮转向角速率
  double front_steering_rate;
  /// 前轮前馈计算
  double front_steer_angle_feedforward;
  /// 前轮反馈计算
  double front_steer_angle_feedback;
  /// 前轮横向误差贡献
  double front_steer_angle_lateral_contribution;
  /// 前轮横向误差率贡献
  double front_steer_angle_lateral_rate_contribution;
  /// 前轮航向角误差贡献
  double front_steer_angle_heading_contribution;
  /// 前轮航向角误差率贡献
  double front_steer_angle_heading_rate_contribution;
  /// 后轮转向反馈
  double rear_steering_value_fd;
  /// 后轮目标转向
  double rear_steering_target;
  /// 后轮转向角速率
  double rear_steering_rate;
  /// 后轮前馈计算
  double rear_steer_angle_feedforward;
  /// 后轮反馈计算
  double rear_steer_angle_feedback;
  /// 后轮横向误差贡献
  double rear_steer_angle_lateral_contribution;
  /// 后轮横向误差率贡献
  double rear_steer_angle_lateral_rate_contribution;
  /// 后轮航向角误差贡献
  double rear_steer_angle_heading_contribution;
  /// 后轮航向角误差率贡献
  double rear_steer_angle_heading_rate_contribution;
  /// k矩阵
  double matrix_k_00;
  /// k矩阵
  double matrix_k_01;
  /// k矩阵
  double matrix_k_02;
  /// k矩阵
  double matrix_k_03;
  /// k矩阵
  double matrix_k_10;
  /// k矩阵
  double matrix_k_11;
  /// k矩阵
  double matrix_k_12;
  /// k矩阵
  double matrix_k_13;
  /// 状态矩阵
  double matrix_state_0;
  /// 状态矩阵
  double matrix_state_1;
  /// 状态矩阵
  double matrix_state_2;
  /// 状态矩阵
  double matrix_state_3;
  /// 权重矩阵
  double matrix_q_updated_0;
  /// 权重矩阵
  double matrix_q_updated_1;
  /// 权重矩阵
  double matrix_q_updated_2;
  /// 权重矩阵
  double matrix_q_updated_3;
  /// 当前位置x
  double current_x;
  /// 当前位置y
  double current_y;
  /// 目标点x
  double target_point_x;
  /// 目标点y
  double target_point_y;
  /// 横向目标点里程
  double lat_target_point_s;
  /// LQR计算时间
  int64_t lqr_calculate_time;
  /// LQR计算时间限值
  int64_t lqr_calculate_time_max;
} ros2_interface__msg__ControlAnalysis;

// Struct for a sequence of ros2_interface__msg__ControlAnalysis.
typedef struct ros2_interface__msg__ControlAnalysis__Sequence
{
  ros2_interface__msg__ControlAnalysis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ControlAnalysis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__CONTROL_ANALYSIS__STRUCT_H_
