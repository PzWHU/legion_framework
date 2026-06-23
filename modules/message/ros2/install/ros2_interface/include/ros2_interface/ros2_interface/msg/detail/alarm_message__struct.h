// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/AlarmMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__STRUCT_H_

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
// Member 'alarm_proc'
// Member 'alarm_data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AlarmMessage in the package ros2_interface.
typedef struct ros2_interface__msg__AlarmMessage
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 产生告警的进程名
  rosidl_runtime_c__String alarm_proc;
  /// 告警等级
  int32_t alarm_level;
  /// 告警类型
  int32_t alarm_type;
  /// 告警序列号，用于恢复告警
  int32_t alarm_id;
  /// 告警展示类型
  int32_t alarm_display;
  /// 告警正文
  rosidl_runtime_c__String alarm_data;
} ros2_interface__msg__AlarmMessage;

// Struct for a sequence of ros2_interface__msg__AlarmMessage.
typedef struct ros2_interface__msg__AlarmMessage__Sequence
{
  ros2_interface__msg__AlarmMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__AlarmMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__STRUCT_H_
