// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/VehicleParam.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'brand'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VehicleParam in the package ros2_interface.
typedef struct ros2_interface__msg__VehicleParam
{
  rosidl_runtime_c__String brand;
  int32_t steer_mode;
  double length;
  double width;
  double height;
  double mass_fl;
  double mass_fr;
  double mass_rl;
  double mass_rr;
  double wheel_radius;
  double wheelbase;
  double front_edge_to_center;
  double back_edge_to_center;
  double lf;
  double lr;
  double cf;
  double cr;
  double steer_ratio;
  double rolling_coefficient;
  double air_density;
  double air_damping_coefficient;
  double max_front_steer_angle;
  double min_front_steer_angle;
  double max_rear_steer_angle;
  double min_rear_steer_angle;
  double speed_limit;
  double max_brake_value;
  double min_brake_value;
  double max_accel_value;
  double min_accel_value;
  double speed_deadzone;
  double standstill_acceleration;
  double max_front_steer_angle_rate;
  double max_rear_steer_angle_rate;
  double max_abs_speed_when_stopped;
  double max_abs_speed_when_stopped_duration;
  double brake_value_when_gear_transitioning;
  double accel_deadzone;
  double brake_deadzone;
  double acceleration_in_idle;
  double deceleration_in_idle;
  double max_acceleration_jerk;
  double max_acceleration;
  double max_deceleration;
  double min_turning_radius;
} ros2_interface__msg__VehicleParam;

// Struct for a sequence of ros2_interface__msg__VehicleParam.
typedef struct ros2_interface__msg__VehicleParam__Sequence
{
  ros2_interface__msg__VehicleParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__VehicleParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__STRUCT_H_
