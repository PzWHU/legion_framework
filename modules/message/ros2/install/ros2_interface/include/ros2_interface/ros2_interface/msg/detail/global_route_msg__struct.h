// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/GlobalRouteMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__STRUCT_H_

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
// Member 'route'
// Member 'current_lanelet'
// Member 'cur_slice'
#include "ros2_interface/msg/detail/lanelet_info__struct.h"

/// Struct defined in msg/GlobalRouteMsg in the package ros2_interface.
typedef struct ros2_interface__msg__GlobalRouteMsg
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 一次导航的全程道路集合，从起点到终点排序
  ros2_interface__msg__LaneletInfo__Sequence route;
  /// 当前所在车道的信息
  ros2_interface__msg__LaneletInfo current_lanelet;
  /// 总里程
  double total_mileage;
  /// 当前里程
  double cur_mileage;
  /// 当前地图切片,用来绘制局部地图
  ros2_interface__msg__LaneletInfo__Sequence cur_slice;
} ros2_interface__msg__GlobalRouteMsg;

// Struct for a sequence of ros2_interface__msg__GlobalRouteMsg.
typedef struct ros2_interface__msg__GlobalRouteMsg__Sequence
{
  ros2_interface__msg__GlobalRouteMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__GlobalRouteMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__STRUCT_H_
