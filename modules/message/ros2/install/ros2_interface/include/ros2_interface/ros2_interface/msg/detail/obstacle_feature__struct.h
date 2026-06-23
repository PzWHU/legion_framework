// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ObstacleFeature.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon_point'
// Member 'position'
// Member 'front_position'
// Member 'velocity'
// Member 'raw_velocity'
// Member 'acceleration'
// Member 't_position'
// Member 't_velocity'
// Member 't_acceleration'
#include "ros2_interface/msg/detail/point3_d__struct.h"
// Member 'priority'
#include "ros2_interface/msg/detail/obstacle_priority__struct.h"
// Member 'future_trajectory_points'
#include "ros2_interface/msg/detail/prediction_trajectory_point__struct.h"
// Member 'short_term_predicted_trajectory_points'
// Member 'adc_trajectory_point'
#include "ros2_interface/msg/detail/trajectory_point_in_prediction__struct.h"
// Member 'predicted_trajectory'
#include "ros2_interface/msg/detail/trajectory_in_prediction__struct.h"

/// Struct defined in msg/ObstacleFeature in the package ros2_interface.
typedef struct ros2_interface__msg__ObstacleFeature
{
  /// Obstacle ID
  int32_t obstacle_id;
  /// 障碍物边框点列
  ros2_interface__msg__Point3D polygon_point;
  ros2_interface__msg__Point3D position;
  ros2_interface__msg__Point3D front_position;
  ros2_interface__msg__Point3D velocity;
  /// from perception
  ros2_interface__msg__Point3D raw_velocity;
  ros2_interface__msg__Point3D acceleration;
  double velocity_heading;
  double speed;
  double acc;
  double theta;
  double length;
  double width;
  double height;
  double tracking_time;
  double timestamp;
  ros2_interface__msg__Point3D t_position;
  ros2_interface__msg__Point3D t_velocity;
  double t_velocity_heading;
  double t_speed;
  ros2_interface__msg__Point3D t_acceleration;
  double t_acc;
  bool is_still;
  /// 感知到的障碍物类型         0-UNKNOWN, 1-UNKNOWN_MOVABLE, 2-UNKNOWN_UNMOVABLE, 3-PEDESTRIAN, 4-BICYCLE,     5-VEHICLE
  int32_t type;
  double label_update_time_delta;
  /// CAUTION = 1; NORMAL = 2; IGNORE = 3;
  ros2_interface__msg__ObstaclePriority priority;
  bool is_near_junction;
  /// Obstacle ground-truth labels:
  ros2_interface__msg__PredictionTrajectoryPoint__Sequence future_trajectory_points;
  /// Obstacle short-term predicted trajectory points
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence short_term_predicted_trajectory_points;
  /// Obstacle predicted trajectories
  ros2_interface__msg__TrajectoryInPrediction__Sequence predicted_trajectory;
  /// ADC trajectory at the same frame
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence adc_trajectory_point;
} ros2_interface__msg__ObstacleFeature;

// Struct for a sequence of ros2_interface__msg__ObstacleFeature.
typedef struct ros2_interface__msg__ObstacleFeature__Sequence
{
  ros2_interface__msg__ObstacleFeature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ObstacleFeature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__STRUCT_H_
