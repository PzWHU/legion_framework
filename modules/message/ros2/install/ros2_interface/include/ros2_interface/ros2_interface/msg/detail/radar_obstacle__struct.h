// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RadarObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'relative_position'
// Member 'relative_position_rms'
// Member 'relative_velocity'
// Member 'relative_velocity_rms'
// Member 'relative_acceleration'
// Member 'relative_acceleration_rms'
// Member 'absolute_position'
// Member 'absolute_position_rms'
// Member 'absolute_velocity'
// Member 'absolute_velocity_rms'
// Member 'absolute_acceleration'
// Member 'absolute_acceleration_rms'
#include "ros2_interface/msg/detail/point2_d__struct.h"
// Member 'status'
#include "ros2_interface/msg/detail/status__struct.h"

/// Struct defined in msg/RadarObstacle in the package ros2_interface.
typedef struct ros2_interface__msg__RadarObstacle
{
  /// obstacle ID.
  int32_t id;
  /// 障碍物存在时间
  uint8_t life_time;
  /// 雷达坐标系障碍物位置
  ros2_interface__msg__Point2D relative_position;
  /// 雷达坐标系障碍物位置标准差
  ros2_interface__msg__Point2D relative_position_rms;
  /// 雷达坐标系障碍物速度
  ros2_interface__msg__Point2D relative_velocity;
  /// 雷达坐标系障碍物速度标准差
  ros2_interface__msg__Point2D relative_velocity_rms;
  /// 雷达坐标系障碍物加速度
  ros2_interface__msg__Point2D relative_acceleration;
  /// 雷达坐标系障碍物加速度标准差
  ros2_interface__msg__Point2D relative_acceleration_rms;
  /// 雷达散射面积
  double rcs;
  double snr;
  /// STATIONARY = 0; NEARING = 1; AWAYING = 2; NONE = 3;
  int32_t moving_status;
  /// 雷达障碍物宽度
  double width;
  /// 雷达障碍物长度
  double length;
  /// 雷达障碍物高度
  double height;
  double theta;
  /// obstacle position in map coordinate system
  ros2_interface__msg__Point2D absolute_position;
  ros2_interface__msg__Point2D absolute_position_rms;
  /// obstacle position in map coordinate system
  ros2_interface__msg__Point2D absolute_velocity;
  ros2_interface__msg__Point2D absolute_velocity_rms;
  ros2_interface__msg__Point2D absolute_acceleration;
  ros2_interface__msg__Point2D absolute_acceleration_rms;
  /// 雷达障碍物方位角
  double orientation;
  /// 雷达障碍物方位角标准差
  double orient_rms;
  double yaw;
  double yaw_rms;
  int32_t count;
  int32_t moving_frames_count;
  /// 状态码
  ros2_interface__msg__Status status;
  double underpass_probability;
  double overpass_probability;
  /// 障碍物存在的概率
  uint8_t exist_probability;
  /// 障碍物移动属性：MOVING_PROPERTY_MOVING=0，MOVING_PROPERTY_STATIONARY=1，MOVING_PROPERTY_ONCOMING=2，MOVING_PROPERTY_STATIONARY_CANDIDATE=3，MOVING_PROPERTY_UNKOWN=4，MOVING_PROPERTY_CROSSING_STATIONARY=5，MOVING_PROPERTY_CROSSING_MOVING=6，MOVING_PROPERTY_STOPPED=7
  uint8_t mov_property;
  /// 跟踪状态：TRACK_STATE_DELETED=0；TRACK_STATE_INITED=1；TRACK_STATE_MEASURED=2；TRACK_STATE_PREDICTED=3；TRACK_STATE_DELETED_FOR_MERGE=4；TRACK_STATE_NEW_FOR_MERGE=5；
  uint8_t track_state;
  /// 追踪的障碍物类型：TRACK_TYPE_POINT=0；TRACK_TYPE_CAR=1；TRACK_TYPE_TRUCK=2；TRACK_TYPE_PEDESTRIAN=3；TRACK_TYPE_MOTORCYCLE=4；TRACK_TYPE_BICYCLE=5；TRACK_TYPE_WIDE=6；TRACK_TYPE_RESERVED=7；TRACK_TYPE_BRIDGE=8；
  uint8_t track_type;
} ros2_interface__msg__RadarObstacle;

// Struct for a sequence of ros2_interface__msg__RadarObstacle.
typedef struct ros2_interface__msg__RadarObstacle__Sequence
{
  ros2_interface__msg__RadarObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RadarObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__STRUCT_H_
