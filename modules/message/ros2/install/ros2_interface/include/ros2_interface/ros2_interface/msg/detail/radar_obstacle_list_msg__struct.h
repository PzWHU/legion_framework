// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RadarObstacleListMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST_MSG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST_MSG__STRUCT_H_

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
// Member 'radar_state'
#include "ros2_interface/msg/detail/radar_state__struct.h"

/// Struct defined in msg/RadarObstacleListMsg in the package ros2_interface.
typedef struct ros2_interface__msg__RadarObstacleListMsg
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 毫米波雷达障碍物数组
  ros2_interface__msg__RadarObstacle__Sequence radar_obstacle;
  /// 毫米波雷达 ID.
  uint8_t sensor_id;
  /// radar state.
  ros2_interface__msg__RadarState radar_state;
  /// true: valid  false: invalid
  bool is_valid;
} ros2_interface__msg__RadarObstacleListMsg;

// Struct for a sequence of ros2_interface__msg__RadarObstacleListMsg.
typedef struct ros2_interface__msg__RadarObstacleListMsg__Sequence
{
  ros2_interface__msg__RadarObstacleListMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RadarObstacleListMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST_MSG__STRUCT_H_
