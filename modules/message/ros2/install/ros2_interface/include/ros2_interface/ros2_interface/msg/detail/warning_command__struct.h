// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/WarningCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WarningCommand in the package ros2_interface.
typedef struct ros2_interface__msg__WarningCommand
{
  /// 声音告警
  int32_t sound_alarm;
  /// 车灯告警
  int32_t light_alarm;
  /// 媒体告警
  int32_t media_alarm;
  /// 震动告警
  int32_t motion_alarm;
} ros2_interface__msg__WarningCommand;

// Struct for a sequence of ros2_interface__msg__WarningCommand.
typedef struct ros2_interface__msg__WarningCommand__Sequence
{
  ros2_interface__msg__WarningCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__WarningCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__STRUCT_H_
