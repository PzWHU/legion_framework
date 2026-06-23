// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PathPoint in the package ros2_interface.
typedef struct ros2_interface__msg__PathPoint
{
  /// coordinates x
  double x;
  /// coordinates y
  double y;
  /// coordinates z
  double z;
  /// direction on the x-y plane
  double theta;
  /// curvature on the x-y planning
  double kappa;
  /// accumulated distance from beginning of the path
  double s;
  /// derivative of kappa w.r.t s.
  double dkappa;
  /// derivative of derivative of kappa w.r.t s.
  double ddkappa;
  /// The lane ID where the path point is on
  double lane_id;
  /// derivative of x w.r.t parametric parameter t in CosThetareferenceline
  double x_derivative;
  /// derivative of y w.r.t parametric parameter t in CosThetareferenceline
  double y_derivative;
} ros2_interface__msg__PathPoint;

// Struct for a sequence of ros2_interface__msg__PathPoint.
typedef struct ros2_interface__msg__PathPoint__Sequence
{
  ros2_interface__msg__PathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__STRUCT_H_
