// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LaneletInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LaneletInfo in the package ros2_interface.
typedef struct ros2_interface__msg__LaneletInfo
{
  /// 道路id，与地图文件对应
  int32_t lanelet_id;
  /// 道路长度
  double length;
} ros2_interface__msg__LaneletInfo;

// Struct for a sequence of ros2_interface__msg__LaneletInfo.
typedef struct ros2_interface__msg__LaneletInfo__Sequence
{
  ros2_interface__msg__LaneletInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LaneletInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__STRUCT_H_
