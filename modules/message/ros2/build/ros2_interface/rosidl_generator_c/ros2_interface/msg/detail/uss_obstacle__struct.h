// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/UssObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__STRUCT_H_

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

/// Struct defined in msg/UssObstacle in the package ros2_interface.
typedef struct ros2_interface__msg__UssObstacle
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 超声波障碍物点区域 0-车辆后方区域 1-车辆前方区域 2-车辆右方区域 3-车辆左方区域
  int32_t uss_obstacle_region;
  /// 车体中心坐标系下，超声波障碍物点x坐标
  double mx;
  /// 车体中心坐标系下，超声波障碍物点y坐标
  double my;
} ros2_interface__msg__UssObstacle;

// Struct for a sequence of ros2_interface__msg__UssObstacle.
typedef struct ros2_interface__msg__UssObstacle__Sequence
{
  ros2_interface__msg__UssObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__UssObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__STRUCT_H_
