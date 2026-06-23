// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/GuideRoad.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'curvature'
#include "ros2_interface/msg/detail/curvature_info__struct.h"

/// Struct defined in msg/GuideRoad in the package ros2_interface.
typedef struct ros2_interface__msg__GuideRoad
{
  /// 道路的id
  int64_t road_id;
  /// 道路的类型: 0：未知或一般道路  1：环岛 2：交叉路口 3：主路 4：辅路
  int8_t road_type;
  /// 规划路线上道路的转向信息 1：左转 2：直行 3：右转
  int8_t turn_type;
  /// 道路的平均曲率
  double avg_curvature;
  /// 道路中心线上点(曲率)数量
  int32_t curvature_size;
  /// 道路曲率信息数组
  ros2_interface__msg__CurvatureInfo__Sequence curvature;
} ros2_interface__msg__GuideRoad;

// Struct for a sequence of ros2_interface__msg__GuideRoad.
typedef struct ros2_interface__msg__GuideRoad__Sequence
{
  ros2_interface__msg__GuideRoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__GuideRoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__STRUCT_H_
