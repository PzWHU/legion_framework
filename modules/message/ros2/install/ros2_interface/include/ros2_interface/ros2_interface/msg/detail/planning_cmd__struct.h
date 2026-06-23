// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PlanningCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__STRUCT_H_

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

/// Struct defined in msg/PlanningCmd in the package ros2_interface.
typedef struct ros2_interface__msg__PlanningCmd
{
  std_msgs__msg__Header header;
  /// 转向灯 TURN_INACTIVE_SIGNAL:0 TURN_LEFT_SIGNAL:1 TURN_RIGHT_SIGNAL:2 TURN_INVALID_SIGNAL:3
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
} ros2_interface__msg__PlanningCmd;

// Struct for a sequence of ros2_interface__msg__PlanningCmd.
typedef struct ros2_interface__msg__PlanningCmd__Sequence
{
  ros2_interface__msg__PlanningCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PlanningCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__STRUCT_H_
