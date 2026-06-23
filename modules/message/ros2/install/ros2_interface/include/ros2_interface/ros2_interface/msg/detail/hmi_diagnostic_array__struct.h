// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HMIDiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_ARRAY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_ARRAY__STRUCT_H_

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
// Member 'status'
#include "ros2_interface/msg/detail/hmi_diagnostic_status__struct.h"

/// Struct defined in msg/HMIDiagnosticArray in the package ros2_interface.
typedef struct ros2_interface__msg__HMIDiagnosticArray
{
  /// timestamp is  included in header
  std_msgs__msg__Header header;
  ros2_interface__msg__HMIDiagnosticStatus__Sequence status;
} ros2_interface__msg__HMIDiagnosticArray;

// Struct for a sequence of ros2_interface__msg__HMIDiagnosticArray.
typedef struct ros2_interface__msg__HMIDiagnosticArray__Sequence
{
  ros2_interface__msg__HMIDiagnosticArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HMIDiagnosticArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_ARRAY__STRUCT_H_
