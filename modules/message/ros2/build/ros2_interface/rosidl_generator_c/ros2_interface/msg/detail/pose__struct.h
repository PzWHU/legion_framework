// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POSE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "ros2_interface/msg/detail/point_enu__struct.h"
// Member 'orientation'
#include "ros2_interface/msg/detail/quaternion__struct.h"
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'linear_acceleration_vrf'
// Member 'angular_velocity_vrf'
// Member 'euler_angles'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/Pose in the package ros2_interface.
typedef struct ros2_interface__msg__Pose
{
  /// Position of the vehicle reference point (VRP) in the map reference frame.   The VRP is the center of rear axle.
  ros2_interface__msg__PointENU position;
  /// A quaternion that represents the rotation from the IMU coordinate (Right/Forward/Up) to the world coordinate (East/North/Up).
  ros2_interface__msg__Quaternion orientation;
  /// Linear velocity of the VRP in the map reference frame.East/north/up in meters per second.
  ros2_interface__msg__Point3D linear_velocity;
  /// Linear acceleration of the VRP in the map reference frame. East/north/up in meters per square second.
  ros2_interface__msg__Point3D linear_acceleration;
  /// Angular velocity of the vehicle in the map reference frame.Around east/north/up axes in radians per second.
  ros2_interface__msg__Point3D angular_velocity;
  /// The heading is zero when the car is facing East and positive when facing North
  double heading;
  /// Linear acceleration of the VRP in the vehicle reference frame.Right/forward/up in meters per square second.
  ros2_interface__msg__Point3D linear_acceleration_vrf;
  /// Angular velocity of the VRP in the vehicle reference frame. Around right/forward/up axes in radians per second.
  ros2_interface__msg__Point3D angular_velocity_vrf;
  /// // Roll/pitch/yaw that represents a rotation with intrinsic sequence z-x-y.   // in world coordinate (East/North/Up)   // The roll, in (-pi/2, pi/2), corresponds to a rotation around the y-axis.   // The pitch, in [-pi, pi), corresponds to a rotation around the x-axis.   // The yaw, in [-pi, pi), corresponds to a rotation around the z-axis.   // The direction of rotation follows the right-hand rule.
  ros2_interface__msg__Point3D euler_angles;
} ros2_interface__msg__Pose;

// Struct for a sequence of ros2_interface__msg__Pose.
typedef struct ros2_interface__msg__Pose__Sequence
{
  ros2_interface__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POSE__STRUCT_H_
