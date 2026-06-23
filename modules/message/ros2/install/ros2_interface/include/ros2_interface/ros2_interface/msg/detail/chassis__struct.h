// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Chassis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CHASSIS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__CHASSIS__STRUCT_H_

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
// Member 'chassis_error_code'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Chassis in the package ros2_interface.
typedef struct ros2_interface__msg__Chassis
{
  std_msgs__msg__Header header;
  /// 移动状态
  int32_t moving_status;
  /// 驾驶状态
  int32_t driving_mode;
  /// 线控转向驾驶模式
  int32_t steer_driving_mode;
  /// 线控转向执行器状态
  int32_t steering_status;
  /// 方向盘转角
  double front_steering_value;
  /// 后轮转角
  double rear_steering_value;
  /// 方向盘扭矩
  double steering_torque_nm;
  /// 方向盘转速
  double front_steering_rate_dps;
  /// 方向盘转速
  double rear_steering_rate_dps;
  /// 线控驱动驾驶模式
  int32_t accel_driving_mode;
  /// 线控驱动状态
  int32_t accel_status;
  /// 线控驱动值（油门值）
  double accel_value;
  /// 线控制动驾驶模式
  int32_t brake_driving_mode;
  /// 线控制动状态
  int32_t brake_status;
  /// 线控制动值（刹车值）
  double brake_value;
  /// 备用线控制动驾驶模式
  int32_t backup_brake_driving_mode;
  /// 备用线控制动状态
  int32_t backup_brake_status;
  /// 备用线控制动值
  double backup_brake_value;
  /// EPB驾驶模式
  int32_t epb_driving_mode;
  /// EPB状态
  int32_t epb_status;
  /// EPB档位
  int32_t epb_level;
  /// 发动机状态
  int32_t engine_status;
  /// 发动机转速
  double engine_rpm;
  /// 发动机扭矩
  double engine_torque;
  /// 车速（m/s）
  double speed_mps;
  /// 里程(m)
  double odometer_m;
  /// 油表值
  int32_t fuel_range_m;
  /// 档位驾驶模式
  int32_t gear_driving_mode;
  /// 档位状态
  int32_t gear_status;
  /// 档位值
  int32_t gear_location;
  /// 主驾驶位安全带状态
  int32_t driver_seat_belt;
  /// 远光灯状态
  int32_t high_beam_status;
  /// 近光灯状态
  int32_t low_beam_status;
  /// 喇叭状态
  int32_t horn_status;
  /// 转向灯状态
  int32_t turn_lamp_status;
  /// 前雨刮器状态
  int32_t front_wiper_status;
  /// 后雨刮器状态
  int32_t rear_wiper_status;
  /// 位置灯状态
  int32_t position_lamp_status;
  /// 前雾灯状态
  int32_t front_fog_lamp_status;
  /// 后雾灯状态
  int32_t rear_fog_lamp_status;
  /// 刹车灯状态
  int32_t brake_lamp_status;
  /// 报警灯状态
  int32_t alarm_lamp_status;
  /// 左前门状态
  int32_t lf_door_status;
  /// 右前门状态
  int32_t rf_door_status;
  /// 左后门状态
  int32_t lr_door_status;
  /// 右后门状态
  int32_t rr_door_status;
  /// 后视镜状态
  int32_t rearview_mirror_status;
  /// 后备箱盖状态
  int32_t trunk_status;
  /// 发送机舱盖状态
  int32_t engine_bay_door_status;
  /// 右后轮方向
  int32_t wheel_direction_rr;
  /// 右后轮速
  double wheel_spd_rr;
  /// 左后轮方向
  int32_t wheel_direction_rl;
  /// 左后轮值
  double wheel_spd_rl;
  /// 右前轮方向
  int32_t wheel_direction_fr;
  /// 右前轮速
  double wheel_spd_fr;
  /// 左前轮方向
  int32_t wheel_direction_fl;
  /// 左前轮速
  double wheel_spd_fl;
  /// 胎压是否正常
  int32_t is_tire_pressure_ok;
  /// 左前轮胎压是否有效
  int32_t is_tire_pressure_lf_valid;
  /// 左前轮胎压
  double tire_pressure_lf;
  /// 右前轮胎压是否有效
  int32_t is_tire_pressure_rf_valid;
  /// 右前轮胎压
  double tire_pressure_rf;
  /// 左后轮胎压是否有效
  int32_t is_tire_pressure_lr_valid;
  /// 左后轮胎压
  double tire_pressure_lr;
  /// 右后轮胎压是否有效
  int32_t is_tire_pressure_rr_valid;
  /// 右后轮胎压
  double tire_pressure_rr;
  /// 电池电量值
  double battery_power_percentage;
  /// 气囊状态
  int32_t air_bag_status;
  /// 充电枪状态
  int32_t charging_gun_status;
  /// 电量表状态
  int32_t vehicle_power_status;
  /// 底盘错误码
  rosidl_runtime_c__int32__Sequence chassis_error_code;
} ros2_interface__msg__Chassis;

// Struct for a sequence of ros2_interface__msg__Chassis.
typedef struct ros2_interface__msg__Chassis__Sequence
{
  ros2_interface__msg__Chassis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Chassis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__CHASSIS__STRUCT_H_
