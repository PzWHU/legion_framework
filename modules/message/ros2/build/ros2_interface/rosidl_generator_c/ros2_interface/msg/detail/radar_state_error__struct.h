// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RadarStateError.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarStateError in the package ros2_interface.
typedef struct ros2_interface__msg__RadarStateError
{
  uint8_t persistent_error;
  uint8_t temporary_error;
  uint8_t interference_error;
  uint8_t temperature_error;
  uint8_t voltage_error;
  uint8_t block_error;
  uint8_t broadcast_error;
  uint8_t electric_axis_error;
  uint8_t config_error;
  uint8_t calibration_error;
} ros2_interface__msg__RadarStateError;

// Struct for a sequence of ros2_interface__msg__RadarStateError.
typedef struct ros2_interface__msg__RadarStateError__Sequence
{
  ros2_interface__msg__RadarStateError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RadarStateError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__STRUCT_H_
