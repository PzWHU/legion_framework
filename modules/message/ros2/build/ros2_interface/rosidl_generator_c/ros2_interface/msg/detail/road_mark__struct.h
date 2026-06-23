// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RoadMark.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoadMark in the package ros2_interface.
typedef struct ros2_interface__msg__RoadMark
{
  /// 相对于车身坐标系原点的纵向距离,单位m
  double longitude_dist;
  /// 相对于车身坐标系原点的横向距离,单位m
  double lateral_dist;
  /// 质心坐标x
  double x;
  /// 质心坐标y
  double y;
  /// 质心坐标z
  double z;
  /// 置信度
  double confidence;
  /// 标识类型 1 - 停止线 2 - 斑马线 3 - 禁停区 4 - 直行箭头 5 - 左转箭头 6 - 右转箭头 7 - 直行+左转 8 - 直行+右转 9 - 直行+左转+右转 10 - 掉头 11 - 左掉头 12 - 菱形(前方有人行横道) 13 - 倒三角 (减速让行) 14 - 地面文字
  int32_t type;
} ros2_interface__msg__RoadMark;

// Struct for a sequence of ros2_interface__msg__RoadMark.
typedef struct ros2_interface__msg__RoadMark__Sequence
{
  ros2_interface__msg__RoadMark * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RoadMark__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__STRUCT_H_
