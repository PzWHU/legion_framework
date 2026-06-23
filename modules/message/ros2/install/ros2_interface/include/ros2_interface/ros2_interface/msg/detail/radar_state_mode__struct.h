// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RadarStateMode.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarStateMode in the package ros2_interface.
typedef struct ros2_interface__msg__RadarStateMode
{
  /// can0工作模式
  uint8_t can0_work_mode;
  /// can1工作模式
  uint8_t can1_work_mode;
  /// 双总线工作模式
  uint8_t dual_can_mode;
  /// 计时模式
  uint8_t timming_mode;
  /// 电源模式
  uint8_t power_mode;
  /// 效能模式
  uint8_t performance_mode;
} ros2_interface__msg__RadarStateMode;

// Struct for a sequence of ros2_interface__msg__RadarStateMode.
typedef struct ros2_interface__msg__RadarStateMode__Sequence
{
  ros2_interface__msg__RadarStateMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RadarStateMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__STRUCT_H_
