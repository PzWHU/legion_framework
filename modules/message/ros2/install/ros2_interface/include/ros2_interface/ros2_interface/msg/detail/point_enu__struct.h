// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PointENU.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_ENU__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_ENU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PointENU in the package ros2_interface.
typedef struct ros2_interface__msg__PointENU
{
  /// East from the origin, in meters.
  double x;
  /// North from the origin, in meters.
  double y;
  /// Up from the WGS-84 ellipsoid, in meters.
  double z;
} ros2_interface__msg__PointENU;

// Struct for a sequence of ros2_interface__msg__PointENU.
typedef struct ros2_interface__msg__PointENU__Sequence
{
  ros2_interface__msg__PointENU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PointENU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_ENU__STRUCT_H_
