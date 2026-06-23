// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/SecurityDecision.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__STRUCT_H_

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
// Member 'warning_command'
#include "ros2_interface/msg/detail/warning_command__struct.h"
// Member 'trajectory_limit_command'
#include "ros2_interface/msg/detail/trajectory_limit_command__struct.h"

/// Struct defined in msg/SecurityDecision in the package ros2_interface.
typedef struct ros2_interface__msg__SecurityDecision
{
  std_msgs__msg__Header header;
  /// 告警指令
  ros2_interface__msg__WarningCommand warning_command;
  /// 刹车报告
  int32_t brake_report;
  /// 换道指令
  int32_t change_lane_command;
  /// 轨迹限制指令
  ros2_interface__msg__TrajectoryLimitCommand trajectory_limit_command;
  /// 停车指令
  int32_t park_command;
  /// 驾驶模式报告
  int32_t drivingmode_report;
} ros2_interface__msg__SecurityDecision;

// Struct for a sequence of ros2_interface__msg__SecurityDecision.
typedef struct ros2_interface__msg__SecurityDecision__Sequence
{
  ros2_interface__msg__SecurityDecision * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__SecurityDecision__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__STRUCT_H_
