// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

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

/// Struct defined in msg/ControlCommand in the package ros2_interface.
typedef struct ros2_interface__msg__ControlCommand
{
  std_msgs__msg__Header header;
  /// 0=COMPLETE_MANUAL  1=COMPLETE_AUTO_DRIVE 4=EMERGENCY_MODE
  int32_t steer_driving_mode;
  /// target steering angle
  double front_steering_target;
  /// target steering angle
  double rear_steering_target;
  /// target non-directional steering rate
  double front_steering_rate;
  /// target non-directional steering rate
  double rear_steering_rate;
  /// 0=COMPLETE_MANUAL  1=COMPLETE_AUTO_DRIVE 4=EMERGENCY_MODE
  int32_t accel_driving_mode;
  /// target accel value
  double accel_value;
  /// 0=COMPLETE_MANUAL  1=COMPLETE_AUTO_DRIVE 4=EMERGENCY_MODE
  int32_t brake_driving_mode;
  /// target brake
  double brake_value;
  /// 0=COMPLETE_MANUAL  1=COMPLETE_AUTO_DRIVE 4=EMERGENCY_MODE
  int32_t backup_brake_driving_mode;
  /// target brake
  double backup_brake_value;
  /// 0=COMPLETE_MANUAL  1=COMPLETE_AUTO_DRIVE 4=EMERGENCY_MODE
  int32_t epb_driving_mode;
  /// 0=RELEASE 1=APPLIY 2=INVALID
  int32_t epb_level;
  /// 0=COMPLETE_MANUAL  1=COMPLETE_AUTO_DRIVE 4=EMERGENCY_MODE
  int32_t gear_driving_mode;
  /// 0=disenable  1=enable
  int8_t emergency_brake_enable;
  /// 0=GEAR_NEUTRAL 1=GEAR_DRIVE 2=GEAR_REVERSE 3=GEAR_PARKING 4=GEAR_LOW 5=GEAR_INVALID 6=GEAR_NONE
  int32_t gear_location;
  /// target speed, in m/s
  double speed;
  /// target acceleration in m`s^-2
  double acceleration;
  /// 转向灯 0 关闭 1 开启 2 不响应
  int32_t turn_lamp_ctrl;
  /// 0 关闭 1 开启 2 不响应
  int32_t high_beam_ctrl;
  /// 0 关闭 1 开启 2 不响应
  int32_t low_beam_ctrl;
  /// 0 关闭 1 开启 2 不响应
  int32_t horn_ctrl;
  /// 前雨刮器 0 关闭 1 开启
  int32_t front_wiper_ctrl;
  /// 后雨刮器 0 关闭 1 开启
  int32_t rear_wiper_ctrl;
  /// 位置灯 0 关闭 1 开启
  int32_t position_lamp_ctrl;
  /// 前雾灯 0 关闭 1 开启
  int32_t front_fog_lamp_ctrl;
  /// 后雾灯 0 关闭 1 开启
  int32_t rear_fog_lamp_ctrl;
  /// 刹车灯 一般情况自动控制 0 关闭 1 开启
  int32_t brake_lamp_ctrl;
  /// 警报灯 双闪 0 关闭 1 开启
  int32_t alarm_lamp_ctrl;
  /// 左前门控制 0 关闭 1 开启
  int32_t lf_door_ctrl;
  /// 右前门控制 0 关闭 1 开启
  int32_t rf_door_ctrl;
  /// 左后门控制 0 关闭 1 开启
  int32_t lr_door_ctrl;
  /// 右后门控制 0 关闭 1 开启
  int32_t rr_door_ctrl;
} ros2_interface__msg__ControlCommand;

// Struct for a sequence of ros2_interface__msg__ControlCommand.
typedef struct ros2_interface__msg__ControlCommand__Sequence
{
  ros2_interface__msg__ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
