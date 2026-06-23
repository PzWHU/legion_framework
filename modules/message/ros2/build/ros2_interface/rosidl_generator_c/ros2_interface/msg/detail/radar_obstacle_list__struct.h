// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RadarObstacleList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__STRUCT_H_

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
// Member 'radar_obstacle'
#include "ros2_interface/msg/detail/radar_obstacle__struct.h"

/// Struct defined in msg/RadarObstacleList in the package ros2_interface.
typedef struct ros2_interface__msg__RadarObstacleList
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 毫米波雷达障碍物数组
  ros2_interface__msg__RadarObstacle__Sequence radar_obstacle;
} ros2_interface__msg__RadarObstacleList;

// Struct for a sequence of ros2_interface__msg__RadarObstacleList.
typedef struct ros2_interface__msg__RadarObstacleList__Sequence
{
  ros2_interface__msg__RadarObstacleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RadarObstacleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__STRUCT_H_
