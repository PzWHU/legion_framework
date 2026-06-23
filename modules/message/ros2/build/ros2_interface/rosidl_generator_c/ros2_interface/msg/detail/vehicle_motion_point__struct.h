// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/VehicleMotionPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory_point'
#include "ros2_interface/msg/detail/trajectory_point__struct.h"

/// Struct defined in msg/VehicleMotionPoint in the package ros2_interface.
typedef struct ros2_interface__msg__VehicleMotionPoint
{
  /// trajectory point
  ros2_interface__msg__TrajectoryPoint trajectory_point;
  /// The angle between vehicle front wheel and vehicle longitudinal axis
  double steer;
} ros2_interface__msg__VehicleMotionPoint;

// Struct for a sequence of ros2_interface__msg__VehicleMotionPoint.
typedef struct ros2_interface__msg__VehicleMotionPoint__Sequence
{
  ros2_interface__msg__VehicleMotionPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__VehicleMotionPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__STRUCT_H_
