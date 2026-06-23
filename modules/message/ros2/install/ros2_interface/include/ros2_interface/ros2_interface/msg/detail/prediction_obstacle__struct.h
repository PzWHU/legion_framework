// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PredictionObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'perception_obstacle'
#include "ros2_interface/msg/detail/perception_obstacle__struct.h"
// Member 'trajectory'
#include "ros2_interface/msg/detail/trajectory_in_prediction__struct.h"
// Member 'intent'
#include "ros2_interface/msg/detail/obstacle_intent__struct.h"
// Member 'priority'
#include "ros2_interface/msg/detail/obstacle_priority__struct.h"
// Member 'interactive_tag'
#include "ros2_interface/msg/detail/obstacle_interactive_tag__struct.h"

/// Struct defined in msg/PredictionObstacle in the package ros2_interface.
typedef struct ros2_interface__msg__PredictionObstacle
{
  /// perception info of obstacle
  ros2_interface__msg__PerceptionObstacle perception_obstacle;
  /// GPS time in seconds
  double timestamp;
  /// the length of the time for this prediction (e.g. 10s)
  double predicted_period;
  /// can have multiple trajectories per obstacle
  ros2_interface__msg__TrajectoryInPrediction__Sequence trajectory;
  /// 估计障碍物的意图        0-UNKNOWN, 1-STOP, 2-STATIONARY, 3-移动 MOVING, 4-HANGE_LANE, 5-LOW_ACCELERATION, 6-HIGH_ACCELERATION, 7-LOW_DECELERATION, 8-HIGH_DECELERATION,
  ros2_interface__msg__ObstacleIntent intent;
  /// 障碍物优先级               1-CAUTION, 2-NORMAL, 3-IGNORE
  ros2_interface__msg__ObstaclePriority priority;
  ros2_interface__msg__ObstacleInteractiveTag interactive_tag;
  /// is obstacle static (default = false)
  bool is_static;
} ros2_interface__msg__PredictionObstacle;

// Struct for a sequence of ros2_interface__msg__PredictionObstacle.
typedef struct ros2_interface__msg__PredictionObstacle__Sequence
{
  ros2_interface__msg__PredictionObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PredictionObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__STRUCT_H_
