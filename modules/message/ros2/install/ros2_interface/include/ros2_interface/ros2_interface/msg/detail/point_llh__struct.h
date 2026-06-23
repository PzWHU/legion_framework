// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PointLLH.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_LLH__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_LLH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PointLLH in the package ros2_interface.
typedef struct ros2_interface__msg__PointLLH
{
  /// Longitude in degrees, ranging from -180 to 180.
  double lon;
  /// Latitude in degrees, ranging from -90 to 90.
  double lat;
  /// WGS-84 ellipsoid height in meters.
  double height;
} ros2_interface__msg__PointLLH;

// Struct for a sequence of ros2_interface__msg__PointLLH.
typedef struct ros2_interface__msg__PointLLH__Sequence
{
  ros2_interface__msg__PointLLH * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PointLLH__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_LLH__STRUCT_H_
