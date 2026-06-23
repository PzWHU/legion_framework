// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
// Member 'create_time'
// Member 'last_updated_time'
#include "ros2_interface/msg/detail/time__struct.h"
// Member 'center_pos_vehicle'
// Member 'center_pos_abs'
// Member 'velocity_vehicle'
// Member 'velocity_abs'
// Member 'polygon_point_abs'
// Member 'polygon_point_vehicle'
// Member 'drops'
// Member 'acceleration_vehicle'
// Member 'acceleration_abs'
// Member 'anchor_point_vehicle'
// Member 'anchor_point_abs'
#include "ros2_interface/msg/detail/point3_d__struct.h"
// Member 'image_key_points'
#include "ros2_interface/msg/detail/image_key_point__struct.h"
// Member 'anchor_point_image'
#include "ros2_interface/msg/detail/point2_d__struct.h"
// Member 'bbox2d'
// Member 'bbox2d_rear'
#include "ros2_interface/msg/detail/b_box2_d__struct.h"
// Member 'position_abs_covariance'
// Member 'velocity_abs_covariance'
// Member 'acceleration_abs_covariance'
// Member 'position_vehicle_covariance'
// Member 'velocity_vehicle_covariance'
// Member 'acceleration_vehicle_covariance'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'sensor_calibrator'
#include "ros2_interface/msg/detail/sensor_calibrator__struct.h"

/// Struct defined in msg/Obstacle in the package ros2_interface.
typedef struct ros2_interface__msg__Obstacle
{
  /// 时间戳
  ros2_interface__msg__Time timestamp;
  /// 障碍物id
  int32_t id;
  /// 障碍物存在的概率
  double existence_prob;
  /// 障碍物被识别的时间戳
  ros2_interface__msg__Time create_time;
  /// 障碍物上一次更新的时间
  ros2_interface__msg__Time last_updated_time;
  /// 车辆坐标系下障碍物的中心位置
  ros2_interface__msg__Point3D center_pos_vehicle;
  /// 世界坐标系下障碍物的中心位置
  ros2_interface__msg__Point3D center_pos_abs;
  /// 车辆坐标系下障碍物的朝向
  double theta_vehicle;
  /// 世界坐标系下障碍物的朝向
  double theta_abs;
  /// 车辆坐标系下障碍物的速度
  ros2_interface__msg__Point3D velocity_vehicle;
  /// 世界坐标系下障碍物的速度
  ros2_interface__msg__Point3D velocity_abs;
  /// 障碍物长度
  double length;
  /// 障碍物宽度
  double width;
  /// 障碍物高度
  double height;
  /// 图像坐标系下障碍物多边形
  ros2_interface__msg__ImageKeyPoint__Sequence image_key_points;
  /// 世界坐标系下障碍物多边形
  ros2_interface__msg__Point3D__Sequence polygon_point_abs;
  /// 车辆坐标系下障碍物多边形
  ros2_interface__msg__Point3D__Sequence polygon_point_vehicle;
  /// 障碍物被追踪的时间
  double tracking_time;
  /// 障碍物类别： UNKNOWN = 0; UNKNOWN_MOVABLE = 1; UNKNOWN_UNMOVABLE = 2; PEDESTRIAN = 3; BICYCLE = 4; VEHICLE = 5;
  int32_t type;
  /// 障碍物类别置信度
  double confidence;
  /// 障碍物置信度类别： CONFIDENCE_UNKNOWN = 0; CONFIDENCE_CNN = 1; CONFIDENCE_RADAR = 2;
  int32_t confidence_type;
  /// 障碍物轨迹点
  ros2_interface__msg__Point3D__Sequence drops;
  /// 车辆坐标系下障碍物的加速度
  ros2_interface__msg__Point3D acceleration_vehicle;
  /// 世界坐标系下障碍物的加速度
  ros2_interface__msg__Point3D acceleration_abs;
  /// 障碍物尾框中心点(图像坐标系)
  ros2_interface__msg__Point2D anchor_point_image;
  /// 障碍物尾框中心点(车辆坐标系)
  ros2_interface__msg__Point3D anchor_point_vehicle;
  /// 障碍物尾框中心点(世界坐标系)
  ros2_interface__msg__Point3D anchor_point_abs;
  /// 障碍物图像框
  ros2_interface__msg__BBox2D bbox2d;
  /// 障碍物图像尾框
  ros2_interface__msg__BBox2D bbox2d_rear;
  /// 障碍物类别： ST_UNKNOWN = 0; ST_UNKNOWN_MOVABLE = 1; ST_UNKNOWN_UNMOVABLE = 2; ST_CAR = 3; ST_VAN = 4; ST_TRUCK = 5; ST_BUS = 6; ST_CYCLIST = 7; ST_MOTORCYCLIST = 8; ST_TRICYCLIST = 9; ST_PEDESTRIAN = 10; ST_TRAFFICCONE = 11; ST_PILLAR = 12; ST_SPEED_BUMP = 13;
  int32_t sub_type;
  /// 障碍物近地点到地面的高度
  double height_above_ground;
  /// 世界坐标系下障碍物中心位置的协方差矩阵
  rosidl_runtime_c__double__Sequence position_abs_covariance;
  /// 世界坐标系下障碍物速度的协方差矩阵
  rosidl_runtime_c__double__Sequence velocity_abs_covariance;
  /// 世界坐标系下障碍物加速度的协方差矩阵
  rosidl_runtime_c__double__Sequence acceleration_abs_covariance;
  /// 世界坐标系下障碍物朝向的协方差矩阵
  double theta_abs_covariance;
  /// 车辆坐标系下障碍物中心位置的协方差矩阵
  rosidl_runtime_c__double__Sequence position_vehicle_covariance;
  /// 车辆坐标系下障碍物速度的协方差矩阵
  rosidl_runtime_c__double__Sequence velocity_vehicle_covariance;
  /// 车辆坐标系下障碍物加速度的协方差矩阵
  rosidl_runtime_c__double__Sequence acceleration_vehicle_covariance;
  /// 车辆坐标系下障碍物朝向的协方差矩阵
  double theta_vehicle_covariance;
  /// 传感器标定参数
  ros2_interface__msg__SensorCalibrator sensor_calibrator;
  /// 障碍物状态标志（0-CIPV 1-CIPS 2-LPIHP 3-RPIHP 4-NONE）
  uint8_t cipv_flag;
  /// 车道线位置 -2-NEXT_LEFT_LANE -1-LEFT_LANE 0-EGO_LANE 1-RIGHT_LANE 2-NEXT_RIGHT_LANE 3-OTHERS 4-UNKNOWN
  int32_t lane_position;
  /// 临车道车辆压线比例
  double pihp_percentage;
  /// 障碍物车辆信号灯状态： 0-OFF 1-LEFT_TURN_VISIBLE 2-LEFT_TURN_ON 3-RIGHT_TURN_VISIBLE 4-RIGHT_TURN_ON 5-BRAKE_VISIBLE 6-BRAKE_ON 7-UNKNOWN
  int32_t blinker_flag;
  /// 融合障碍物类型 0-CAMERA 1-RADAR 2-LIDAR 3-ULTRASONIC 4-FUSED 5-UNKNOWN
  int32_t fusion_type;
} ros2_interface__msg__Obstacle;

// Struct for a sequence of ros2_interface__msg__Obstacle.
typedef struct ros2_interface__msg__Obstacle__Sequence
{
  ros2_interface__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__STRUCT_H_
