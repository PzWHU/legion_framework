// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/UssObstacleList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE_LIST__STRUCT_H_

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
// Member 'uss_obstacles'
#include "ros2_interface/msg/detail/uss_obstacle__struct.h"
// Member 'uss_ranges'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UssObstacleList in the package ros2_interface.
typedef struct ros2_interface__msg__UssObstacleList
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 检测出的超声波障碍物数组
  ros2_interface__msg__UssObstacle__Sequence uss_obstacles;
  /// 超声波检测的距离数组，存放顺序按照FA,FB,FC,FD,FE,FF,RA,RB,RC,RD,RE,RF
  rosidl_runtime_c__double__Sequence uss_ranges;
  /// 错误码（default = OK）
  int32_t error_code;
  /// 超声波障碍物数据是否合法
  bool is_valid;
} ros2_interface__msg__UssObstacleList;

// Struct for a sequence of ros2_interface__msg__UssObstacleList.
typedef struct ros2_interface__msg__UssObstacleList__Sequence
{
  ros2_interface__msg__UssObstacleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__UssObstacleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE_LIST__STRUCT_H_
