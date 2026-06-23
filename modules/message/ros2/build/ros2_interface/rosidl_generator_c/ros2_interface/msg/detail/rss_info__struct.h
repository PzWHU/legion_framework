// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RSSInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RSSInfo in the package ros2_interface.
typedef struct ros2_interface__msg__RSSInfo
{
  bool is_rss_safe;
  /// current longitudinal distance
  double cur_dist_lon;
  /// longitudinal safe distance of rss
  double rss_safe_dist_lon;
  /// Minimum range of longitudinal acceleration
  double acc_lon_range_minimum;
  /// Maximum range of longitudinal acceleration
  double acc_lon_range_maximum;
  /// Minimum left range of lateral acceleration
  double acc_lat_left_range_minimum;
  /// Maximum left range of lateral acceleration
  double acc_lat_left_range_maximum;
  /// Minimum right range of lateral acceleration
  double acc_lat_right_range_minimum;
  /// Maximum right range of lateral acceleration
  double acc_lat_right_range_maximum;
} ros2_interface__msg__RSSInfo;

// Struct for a sequence of ros2_interface__msg__RSSInfo.
typedef struct ros2_interface__msg__RSSInfo__Sequence
{
  ros2_interface__msg__RSSInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RSSInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__STRUCT_H_
