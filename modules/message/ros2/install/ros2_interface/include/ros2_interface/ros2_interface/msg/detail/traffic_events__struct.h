// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrafficEvents.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__STRUCT_H_

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
// Member 'route_fusion_info'
#include "ros2_interface/msg/detail/route_fusion_info__struct.h"
// Member 'junction_info'
#include "ros2_interface/msg/detail/junction_info__struct.h"
// Member 'limit_speed_info'
#include "ros2_interface/msg/detail/limit_speed_info__struct.h"

/// Struct defined in msg/TrafficEvents in the package ros2_interface.
typedef struct ros2_interface__msg__TrafficEvents
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 地图融合信息
  ros2_interface__msg__RouteFusionInfo route_fusion_info;
  /// 路口信息
  ros2_interface__msg__JunctionInfo junction_info;
  /// 限速消息
  ros2_interface__msg__LimitSpeedInfo limit_speed_info;
} ros2_interface__msg__TrafficEvents;

// Struct for a sequence of ros2_interface__msg__TrafficEvents.
typedef struct ros2_interface__msg__TrafficEvents__Sequence
{
  ros2_interface__msg__TrafficEvents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrafficEvents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__STRUCT_H_
