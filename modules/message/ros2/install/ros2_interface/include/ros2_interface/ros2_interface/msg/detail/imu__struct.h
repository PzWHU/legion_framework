// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__IMU__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__IMU__STRUCT_H_

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
// Member 'orientation'
#include "ros2_interface/msg/detail/quaternion__struct.h"
// Member 'orientation_covariance'
// Member 'angular_velocity_covariance'
// Member 'linear_acceleration_covariance'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/Imu in the package ros2_interface.
typedef struct ros2_interface__msg__Imu
{
  /// 头部信息
  std_msgs__msg__Header header;
  /// 数据有效性标志位
  bool is_valid;
  /// 角度（四元素）
  ros2_interface__msg__Quaternion orientation;
  /// 角度方差
  rosidl_runtime_c__double__Sequence orientation_covariance;
  /// 角速度信息angularVelocity.x：x方向角速度信息angularVelocity.y: y方向角速度信息angularVelocity.z：z方向角速度信息
  ros2_interface__msg__Point3D angular_velocity;
  /// 速度方差
  rosidl_runtime_c__double__Sequence angular_velocity_covariance;
  /// 线加速度信息linearAcceleration.x：x方向线加速度信息linearAcceleration.y: y方向线加速度信息linearAcceleration.z：z方向线加速度信息
  ros2_interface__msg__Point3D linear_acceleration;
  /// 线性加速度方差
  rosidl_runtime_c__double__Sequence linear_acceleration_covariance;
} ros2_interface__msg__Imu;

// Struct for a sequence of ros2_interface__msg__Imu.
typedef struct ros2_interface__msg__Imu__Sequence
{
  ros2_interface__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__IMU__STRUCT_H_
