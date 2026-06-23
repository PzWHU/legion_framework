// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PointXYZIRT.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_XYZIRT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_XYZIRT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PointXYZIRT in the package ros2_interface.
typedef struct ros2_interface__msg__PointXYZIRT
{
  /// x//坐标x
  double x;
  /// y//坐标y
  double y;
  /// z//坐标z
  double z;
  /// 反射强度
  uint32_t intensity;
  /// 线束ID
  uint8_t ring_id;
  /// 时间戳
  uint64_t timestamp;
} ros2_interface__msg__PointXYZIRT;

// Struct for a sequence of ros2_interface__msg__PointXYZIRT.
typedef struct ros2_interface__msg__PointXYZIRT__Sequence
{
  ros2_interface__msg__PointXYZIRT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PointXYZIRT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_XYZIRT__STRUCT_H_
