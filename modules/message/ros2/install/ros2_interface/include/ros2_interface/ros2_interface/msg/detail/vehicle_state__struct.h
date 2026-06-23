// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

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
// Member 'pose'
#include "ros2_interface/msg/detail/pose__struct.h"

/// Struct defined in msg/VehicleState in the package ros2_interface.
typedef struct ros2_interface__msg__VehicleState
{
  std_msgs__msg__Header header;
  double x;
  double y;
  double z;
  double timestamp;
  double roll;
  double pitch;
  double yaw;
  double heading;
  double kappa;
  double linear_velocity;
  double angular_velocity;
  double linear_acceleration;
  int32_t gear;
  int32_t driving_mode;
  ros2_interface__msg__Pose pose;
  double front_steering_value;
  double rear_steering_value;
} ros2_interface__msg__VehicleState;

// Struct for a sequence of ros2_interface__msg__VehicleState.
typedef struct ros2_interface__msg__VehicleState__Sequence
{
  ros2_interface__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
