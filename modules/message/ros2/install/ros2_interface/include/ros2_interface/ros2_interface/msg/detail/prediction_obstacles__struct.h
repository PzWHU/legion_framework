// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PredictionObstacles.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__STRUCT_H_

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
// Member 'prediction_obstacles'
#include "ros2_interface/msg/detail/prediction_obstacle__struct.h"

/// Struct defined in msg/PredictionObstacles in the package ros2_interface.
typedef struct ros2_interface__msg__PredictionObstacles
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// make prediction for multiple obstacles
  ros2_interface__msg__PredictionObstacle__Sequence prediction_obstacles;
  /// 0:坐标系切换成功 1:坐标系切换中 2:坐标系切换故障
  int32_t change_origin_flag;
  /// start timestamp
  double start_timestamp;
  /// end timestamp
  double end_timestamp;
  /// 自动驾驶车辆意图  0-UNKNOWN, 1-STOP, 2-CRUISE, 3-CHANGE_LANE
  int32_t self_intent;
  /// 场景              0-UNKNOWN, 1000-CRUISE, 1001-CRUISE_URBAN 1002-CRUISE_HIGHWAY, 2000-JUNCTION  2001-JUNCTION_TRAFFIC_LIGHT 2002-JUNCTION_STOP_SIGN
  int32_t scenario;
} ros2_interface__msg__PredictionObstacles;

// Struct for a sequence of ros2_interface__msg__PredictionObstacles.
typedef struct ros2_interface__msg__PredictionObstacles__Sequence
{
  ros2_interface__msg__PredictionObstacles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PredictionObstacles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__STRUCT_H_
