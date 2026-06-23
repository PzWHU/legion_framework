// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PerceptionObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__STRUCT_H_

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
// Member 'velocity'
// Member 'polygon_point'
// Member 'drops'
// Member 'acceleration'
// Member 'anchor_point'
// Member 'bounding_box'
#include "ros2_interface/msg/detail/point3_d__struct.h"
// Member 'position_covariance'
// Member 'velocity_covariance'
// Member 'acceleration_covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PerceptionObstacle in the package ros2_interface.
typedef struct ros2_interface__msg__PerceptionObstacle
{
  int32_t id;
  ros2_interface__msg__Point3D position;
  double theta;
  ros2_interface__msg__Point3D velocity;
  double length;
  double width;
  double height;
  ros2_interface__msg__Point3D__Sequence polygon_point;
  double tracking_time;
  /// 障碍物类型： 0-Unknown 1-Unknown_movable 2-Unknown_unmovable 3-Pedestrian 4-Bicycle   5-Vehicle
  int32_t type;
  /// 车道线位置 -2-NEXT_LEFT_LANE -1-LEFT_LANE 0-EGO_LANE 1-RIGHT_LANE 2-NEXT_RIGHT_LANE 3-OTHERS 4-UNKNOWN
  int32_t lane_position;
  double confidence;
  double timestamp;
  /// 置信度类型                  0-CONFIDENCE_UNKNOWN, 1-CONFIDENCE_CN, 2-CONFIDENCE_RAD
  uint8_t confidence_type;
  ros2_interface__msg__Point3D drops;
  ros2_interface__msg__Point3D acceleration;
  ros2_interface__msg__Point3D anchor_point;
  ros2_interface__msg__Point3D__Sequence bounding_box;
  int32_t sub_type;
  double height_above_ground;
  rosidl_runtime_c__double__Sequence position_covariance;
  rosidl_runtime_c__double__Sequence velocity_covariance;
  rosidl_runtime_c__double__Sequence acceleration_covariance;
  uint8_t light_status;
} ros2_interface__msg__PerceptionObstacle;

// Struct for a sequence of ros2_interface__msg__PerceptionObstacle.
typedef struct ros2_interface__msg__PerceptionObstacle__Sequence
{
  ros2_interface__msg__PerceptionObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PerceptionObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__STRUCT_H_
