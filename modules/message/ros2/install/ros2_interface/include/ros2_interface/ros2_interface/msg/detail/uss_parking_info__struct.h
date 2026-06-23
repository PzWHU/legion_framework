// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/UssParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__STRUCT_H_

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
// Member 'parking_point0'
// Member 'parking_point1'
// Member 'parking_point2'
// Member 'parking_point3'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/UssParkingInfo in the package ros2_interface.
typedef struct ros2_interface__msg__UssParkingInfo
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 超声波车位类型： 0-右侧平行 1-左侧平行 2-右侧垂直 3-左侧垂直
  int32_t uss_parking_type;
  /// 车体中心坐标系下，超声波车位0点位置
  ros2_interface__msg__Point3D parking_point0;
  /// 车体中心坐标系下，超声波车位1点位置
  ros2_interface__msg__Point3D parking_point1;
  /// 车体中心坐标系下，超声波车位2点位置
  ros2_interface__msg__Point3D parking_point2;
  /// 车体中心坐标系下，超声波车位3点位置
  ros2_interface__msg__Point3D parking_point3;
} ros2_interface__msg__UssParkingInfo;

// Struct for a sequence of ros2_interface__msg__UssParkingInfo.
typedef struct ros2_interface__msg__UssParkingInfo__Sequence
{
  ros2_interface__msg__UssParkingInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__UssParkingInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__STRUCT_H_
