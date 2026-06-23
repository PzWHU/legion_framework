// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyPoint in the package ros2_interface.
typedef struct ros2_interface__msg__KeyPoint
{
  /// 关键点id
  int16_t id;
  /// 关键点纬度
  double latitude;
  /// 关键点经度
  double longitude;
  /// 关键点海拔
  double ele;
  /// 关键点航向角（与北方向夹角，顺时针方向为正，单位为°）
  double heading;
  /// 关键点名称
  rosidl_runtime_c__String name;
} ros2_interface__msg__KeyPoint;

// Struct for a sequence of ros2_interface__msg__KeyPoint.
typedef struct ros2_interface__msg__KeyPoint__Sequence
{
  ros2_interface__msg__KeyPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__KeyPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__STRUCT_H_
