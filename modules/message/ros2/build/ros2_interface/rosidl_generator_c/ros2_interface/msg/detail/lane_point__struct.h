// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LanePoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__STRUCT_H_

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

/// Struct defined in msg/LanePoint in the package ros2_interface.
typedef struct ros2_interface__msg__LanePoint
{
  /// 点xyz
  ros2_interface__msg__Point3D point;
  /// 方向（与东方向夹角，逆时针方向为正，单位为弧度）
  double theta;
  /// 总体里程
  double mileage;
  /// 地图限速（单位m/s）
  double limit_speed;
  /// 左边车道宽
  double left_road_width;
  /// 右边车道宽
  double right_road_width;
  /// 左边车线线型
  int32_t left_line_type;
  /// 右边车线线型
  int32_t right_line_type;
} ros2_interface__msg__LanePoint;

// Struct for a sequence of ros2_interface__msg__LanePoint.
typedef struct ros2_interface__msg__LanePoint__Sequence
{
  ros2_interface__msg__LanePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LanePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__STRUCT_H_
