// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/StopPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/StopPoint in the package ros2_interface.
typedef struct ros2_interface__msg__StopPoint
{
  /// 点xyz
  ros2_interface__msg__Point3D point;
  /// 方向（与东方向夹角，逆时针方向为正，单位为弧度）
  double theta;
  /// STOP_TYPE_TERMINAL=0 //目的地终点 STOP_TYPE_JUNCTION=1 //路口停止线
  int8_t type;
  /// 距停止点多少米停车
  double stop_distance;
} ros2_interface__msg__StopPoint;

// Struct for a sequence of ros2_interface__msg__StopPoint.
typedef struct ros2_interface__msg__StopPoint__Sequence
{
  ros2_interface__msg__StopPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__StopPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__STRUCT_H_
