// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/GaussianInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GaussianInfo in the package ros2_interface.
typedef struct ros2_interface__msg__GaussianInfo
{
  /// 标准差x
  double sigma_x;
  /// 标准差y
  double sigma_y;
  /// 相关性
  double correlation;
  /// Information of representative uncertainty area
  double area_probability;
  /// 椭圆长轴
  double ellipse_a;
  /// 椭圆短轴
  double ellipse_b;
  /// 椭圆朝向
  double theta_a;
} ros2_interface__msg__GaussianInfo;

// Struct for a sequence of ros2_interface__msg__GaussianInfo.
typedef struct ros2_interface__msg__GaussianInfo__Sequence
{
  ros2_interface__msg__GaussianInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__GaussianInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__STRUCT_H_
