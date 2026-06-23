// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Matrix3D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Matrix3D in the package ros2_interface.
typedef struct ros2_interface__msg__Matrix3D
{
  /// 第一行第一列元素
  double a00;
  /// 第一行第二列元素
  double a01;
  /// 第一行第三列元素
  double a02;
  /// 第二行第一列元素
  double a10;
  /// 第二行第二列元素
  double a11;
  /// 第二行第三列元素
  double a12;
  /// 第三行第一列元素
  double a20;
  /// 第三行第二列元素
  double a21;
  /// 第三行第三列元素
  double a22;
} ros2_interface__msg__Matrix3D;

// Struct for a sequence of ros2_interface__msg__Matrix3D.
typedef struct ros2_interface__msg__Matrix3D__Sequence
{
  ros2_interface__msg__Matrix3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Matrix3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__STRUCT_H_
