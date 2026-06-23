// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LocalMap.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__STRUCT_H_

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
// Member 'ego_point'
#include "ros2_interface/msg/detail/point3_d__struct.h"
// Member 'lane_list'
#include "ros2_interface/msg/detail/lane_info_extend__struct.h"

/// Struct defined in msg/LocalMap in the package ros2_interface.
typedef struct ros2_interface__msg__LocalMap
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// Sequence number，lane_list数据有更新则加1，否则保持不变
  int32_t seq;
  /// 生成该LocalMap局部地图消息时的自车位置
  ros2_interface__msg__Point3D ego_point;
  /// 生成该LocalMap局部地图消息的范围，以ego_point为中心，range为边长的正方形，单位：m
  double range;
  /// 自车周边LocalMap范围内的车道信息列表
  ros2_interface__msg__LaneInfoExtend__Sequence lane_list;
} ros2_interface__msg__LocalMap;

// Struct for a sequence of ros2_interface__msg__LocalMap.
typedef struct ros2_interface__msg__LocalMap__Sequence
{
  ros2_interface__msg__LocalMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LocalMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__STRUCT_H_
