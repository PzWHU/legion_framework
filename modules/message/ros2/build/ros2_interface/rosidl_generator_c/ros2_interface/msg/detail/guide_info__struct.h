// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/GuideInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__STRUCT_H_

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
// Member 'current_road'
// Member 'next_road'
#include "ros2_interface/msg/detail/guide_road__struct.h"

/// Struct defined in msg/GuideInfo in the package ros2_interface.
typedef struct ros2_interface__msg__GuideInfo
{
  /// 头部信息
  std_msgs__msg__Header header;
  /// 下一条规划路线上道路的距离
  double next_dis;
  /// 当前道路的引导信息
  ros2_interface__msg__GuideRoad current_road;
  /// 下一条规划道路的引导信息
  ros2_interface__msg__GuideRoad next_road;
  /// 环岛状态: 0：未知或非环岛状态 1：当前为非环岛道路并且规划路线即将驶入环岛主路 2：当前道路类型是环岛并且规划路线还是在环岛主路中行驶 3：当前道路类型是环岛并且规划路线即将驶出环岛主路
  int8_t round_status;
  /// 交叉路口状态: 0：未知 1：非交叉路口状态 2：交叉路口通行状态
  int8_t intersection_status;
  /// 当前行车推荐状态引导：(跨路口) 0：1km内（1km配置文件可配置）无需要左转、右转路口 1：需要左转路口（1km配置文件可配置） 2：需要右转路口  3：车道级规划失败
  int8_t roads_status;
} ros2_interface__msg__GuideInfo;

// Struct for a sequence of ros2_interface__msg__GuideInfo.
typedef struct ros2_interface__msg__GuideInfo__Sequence
{
  ros2_interface__msg__GuideInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__GuideInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__STRUCT_H_
