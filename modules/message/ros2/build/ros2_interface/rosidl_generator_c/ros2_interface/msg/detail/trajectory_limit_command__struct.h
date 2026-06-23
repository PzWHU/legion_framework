// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrajectoryLimitCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrajectoryLimitCommand in the package ros2_interface.
typedef struct ros2_interface__msg__TrajectoryLimitCommand
{
  bool speed_limit_enable;
  /// m/s
  double speed_limit;
  bool kappa_limit_enable;
  /// deg/m
  double kappa_limit;
} ros2_interface__msg__TrajectoryLimitCommand;

// Struct for a sequence of ros2_interface__msg__TrajectoryLimitCommand.
typedef struct ros2_interface__msg__TrajectoryLimitCommand__Sequence
{
  ros2_interface__msg__TrajectoryLimitCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrajectoryLimitCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__STRUCT_H_
