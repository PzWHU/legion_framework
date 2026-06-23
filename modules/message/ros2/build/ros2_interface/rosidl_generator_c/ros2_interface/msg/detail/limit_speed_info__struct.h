// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LimitSpeedInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LimitSpeedInfo in the package ros2_interface.
typedef struct ros2_interface__msg__LimitSpeedInfo
{
  /// 限速有效性标志位
  int32_t limitspeed_valid_flag;
  /// 限速大小（m/s）
  double limit_speed;
  /// 开始减速距离(m)
  double limit_distance;
} ros2_interface__msg__LimitSpeedInfo;

// Struct for a sequence of ros2_interface__msg__LimitSpeedInfo.
typedef struct ros2_interface__msg__LimitSpeedInfo__Sequence
{
  ros2_interface__msg__LimitSpeedInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LimitSpeedInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__STRUCT_H_
