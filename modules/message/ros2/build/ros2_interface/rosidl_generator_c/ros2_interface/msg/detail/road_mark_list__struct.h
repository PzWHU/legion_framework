// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RoadMarkList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__STRUCT_H_

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
// Member 'roadmarks'
#include "ros2_interface/msg/detail/road_mark__struct.h"

/// Struct defined in msg/RoadMarkList in the package ros2_interface.
typedef struct ros2_interface__msg__RoadMarkList
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 交通标识列表
  ros2_interface__msg__RoadMark__Sequence roadmarks;
} ros2_interface__msg__RoadMarkList;

// Struct for a sequence of ros2_interface__msg__RoadMarkList.
typedef struct ros2_interface__msg__RoadMarkList__Sequence
{
  ros2_interface__msg__RoadMarkList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RoadMarkList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__STRUCT_H_
