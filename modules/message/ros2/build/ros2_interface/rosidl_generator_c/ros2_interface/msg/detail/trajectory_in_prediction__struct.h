// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrajectoryInPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory_points'
#include "ros2_interface/msg/detail/trajectory_point__struct.h"

/// Struct defined in msg/TrajectoryInPrediction in the package ros2_interface.
typedef struct ros2_interface__msg__TrajectoryInPrediction
{
  /// probability of this trajectory
  double probability;
  ros2_interface__msg__TrajectoryPoint__Sequence trajectory_points;
} ros2_interface__msg__TrajectoryInPrediction;

// Struct for a sequence of ros2_interface__msg__TrajectoryInPrediction.
typedef struct ros2_interface__msg__TrajectoryInPrediction__Sequence
{
  ros2_interface__msg__TrajectoryInPrediction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrajectoryInPrediction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__STRUCT_H_
