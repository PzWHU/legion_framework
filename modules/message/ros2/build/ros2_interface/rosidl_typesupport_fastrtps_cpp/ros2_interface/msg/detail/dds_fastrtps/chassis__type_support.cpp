// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/Chassis.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/chassis__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/chassis__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace ros2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_serialize(
  const ros2_interface::msg::Chassis & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: moving_status
  cdr << ros_message.moving_status;
  // Member: driving_mode
  cdr << ros_message.driving_mode;
  // Member: steer_driving_mode
  cdr << ros_message.steer_driving_mode;
  // Member: steering_status
  cdr << ros_message.steering_status;
  // Member: front_steering_value
  cdr << ros_message.front_steering_value;
  // Member: rear_steering_value
  cdr << ros_message.rear_steering_value;
  // Member: steering_torque_nm
  cdr << ros_message.steering_torque_nm;
  // Member: front_steering_rate_dps
  cdr << ros_message.front_steering_rate_dps;
  // Member: rear_steering_rate_dps
  cdr << ros_message.rear_steering_rate_dps;
  // Member: accel_driving_mode
  cdr << ros_message.accel_driving_mode;
  // Member: accel_status
  cdr << ros_message.accel_status;
  // Member: accel_value
  cdr << ros_message.accel_value;
  // Member: brake_driving_mode
  cdr << ros_message.brake_driving_mode;
  // Member: brake_status
  cdr << ros_message.brake_status;
  // Member: brake_value
  cdr << ros_message.brake_value;
  // Member: backup_brake_driving_mode
  cdr << ros_message.backup_brake_driving_mode;
  // Member: backup_brake_status
  cdr << ros_message.backup_brake_status;
  // Member: backup_brake_value
  cdr << ros_message.backup_brake_value;
  // Member: epb_driving_mode
  cdr << ros_message.epb_driving_mode;
  // Member: epb_status
  cdr << ros_message.epb_status;
  // Member: epb_level
  cdr << ros_message.epb_level;
  // Member: engine_status
  cdr << ros_message.engine_status;
  // Member: engine_rpm
  cdr << ros_message.engine_rpm;
  // Member: engine_torque
  cdr << ros_message.engine_torque;
  // Member: speed_mps
  cdr << ros_message.speed_mps;
  // Member: odometer_m
  cdr << ros_message.odometer_m;
  // Member: fuel_range_m
  cdr << ros_message.fuel_range_m;
  // Member: gear_driving_mode
  cdr << ros_message.gear_driving_mode;
  // Member: gear_status
  cdr << ros_message.gear_status;
  // Member: gear_location
  cdr << ros_message.gear_location;
  // Member: driver_seat_belt
  cdr << ros_message.driver_seat_belt;
  // Member: high_beam_status
  cdr << ros_message.high_beam_status;
  // Member: low_beam_status
  cdr << ros_message.low_beam_status;
  // Member: horn_status
  cdr << ros_message.horn_status;
  // Member: turn_lamp_status
  cdr << ros_message.turn_lamp_status;
  // Member: front_wiper_status
  cdr << ros_message.front_wiper_status;
  // Member: rear_wiper_status
  cdr << ros_message.rear_wiper_status;
  // Member: position_lamp_status
  cdr << ros_message.position_lamp_status;
  // Member: front_fog_lamp_status
  cdr << ros_message.front_fog_lamp_status;
  // Member: rear_fog_lamp_status
  cdr << ros_message.rear_fog_lamp_status;
  // Member: brake_lamp_status
  cdr << ros_message.brake_lamp_status;
  // Member: alarm_lamp_status
  cdr << ros_message.alarm_lamp_status;
  // Member: lf_door_status
  cdr << ros_message.lf_door_status;
  // Member: rf_door_status
  cdr << ros_message.rf_door_status;
  // Member: lr_door_status
  cdr << ros_message.lr_door_status;
  // Member: rr_door_status
  cdr << ros_message.rr_door_status;
  // Member: rearview_mirror_status
  cdr << ros_message.rearview_mirror_status;
  // Member: trunk_status
  cdr << ros_message.trunk_status;
  // Member: engine_bay_door_status
  cdr << ros_message.engine_bay_door_status;
  // Member: wheel_direction_rr
  cdr << ros_message.wheel_direction_rr;
  // Member: wheel_spd_rr
  cdr << ros_message.wheel_spd_rr;
  // Member: wheel_direction_rl
  cdr << ros_message.wheel_direction_rl;
  // Member: wheel_spd_rl
  cdr << ros_message.wheel_spd_rl;
  // Member: wheel_direction_fr
  cdr << ros_message.wheel_direction_fr;
  // Member: wheel_spd_fr
  cdr << ros_message.wheel_spd_fr;
  // Member: wheel_direction_fl
  cdr << ros_message.wheel_direction_fl;
  // Member: wheel_spd_fl
  cdr << ros_message.wheel_spd_fl;
  // Member: is_tire_pressure_ok
  cdr << ros_message.is_tire_pressure_ok;
  // Member: is_tire_pressure_lf_valid
  cdr << ros_message.is_tire_pressure_lf_valid;
  // Member: tire_pressure_lf
  cdr << ros_message.tire_pressure_lf;
  // Member: is_tire_pressure_rf_valid
  cdr << ros_message.is_tire_pressure_rf_valid;
  // Member: tire_pressure_rf
  cdr << ros_message.tire_pressure_rf;
  // Member: is_tire_pressure_lr_valid
  cdr << ros_message.is_tire_pressure_lr_valid;
  // Member: tire_pressure_lr
  cdr << ros_message.tire_pressure_lr;
  // Member: is_tire_pressure_rr_valid
  cdr << ros_message.is_tire_pressure_rr_valid;
  // Member: tire_pressure_rr
  cdr << ros_message.tire_pressure_rr;
  // Member: battery_power_percentage
  cdr << ros_message.battery_power_percentage;
  // Member: air_bag_status
  cdr << ros_message.air_bag_status;
  // Member: charging_gun_status
  cdr << ros_message.charging_gun_status;
  // Member: vehicle_power_status
  cdr << ros_message.vehicle_power_status;
  // Member: chassis_error_code
  {
    cdr << ros_message.chassis_error_code;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::Chassis & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: moving_status
  cdr >> ros_message.moving_status;

  // Member: driving_mode
  cdr >> ros_message.driving_mode;

  // Member: steer_driving_mode
  cdr >> ros_message.steer_driving_mode;

  // Member: steering_status
  cdr >> ros_message.steering_status;

  // Member: front_steering_value
  cdr >> ros_message.front_steering_value;

  // Member: rear_steering_value
  cdr >> ros_message.rear_steering_value;

  // Member: steering_torque_nm
  cdr >> ros_message.steering_torque_nm;

  // Member: front_steering_rate_dps
  cdr >> ros_message.front_steering_rate_dps;

  // Member: rear_steering_rate_dps
  cdr >> ros_message.rear_steering_rate_dps;

  // Member: accel_driving_mode
  cdr >> ros_message.accel_driving_mode;

  // Member: accel_status
  cdr >> ros_message.accel_status;

  // Member: accel_value
  cdr >> ros_message.accel_value;

  // Member: brake_driving_mode
  cdr >> ros_message.brake_driving_mode;

  // Member: brake_status
  cdr >> ros_message.brake_status;

  // Member: brake_value
  cdr >> ros_message.brake_value;

  // Member: backup_brake_driving_mode
  cdr >> ros_message.backup_brake_driving_mode;

  // Member: backup_brake_status
  cdr >> ros_message.backup_brake_status;

  // Member: backup_brake_value
  cdr >> ros_message.backup_brake_value;

  // Member: epb_driving_mode
  cdr >> ros_message.epb_driving_mode;

  // Member: epb_status
  cdr >> ros_message.epb_status;

  // Member: epb_level
  cdr >> ros_message.epb_level;

  // Member: engine_status
  cdr >> ros_message.engine_status;

  // Member: engine_rpm
  cdr >> ros_message.engine_rpm;

  // Member: engine_torque
  cdr >> ros_message.engine_torque;

  // Member: speed_mps
  cdr >> ros_message.speed_mps;

  // Member: odometer_m
  cdr >> ros_message.odometer_m;

  // Member: fuel_range_m
  cdr >> ros_message.fuel_range_m;

  // Member: gear_driving_mode
  cdr >> ros_message.gear_driving_mode;

  // Member: gear_status
  cdr >> ros_message.gear_status;

  // Member: gear_location
  cdr >> ros_message.gear_location;

  // Member: driver_seat_belt
  cdr >> ros_message.driver_seat_belt;

  // Member: high_beam_status
  cdr >> ros_message.high_beam_status;

  // Member: low_beam_status
  cdr >> ros_message.low_beam_status;

  // Member: horn_status
  cdr >> ros_message.horn_status;

  // Member: turn_lamp_status
  cdr >> ros_message.turn_lamp_status;

  // Member: front_wiper_status
  cdr >> ros_message.front_wiper_status;

  // Member: rear_wiper_status
  cdr >> ros_message.rear_wiper_status;

  // Member: position_lamp_status
  cdr >> ros_message.position_lamp_status;

  // Member: front_fog_lamp_status
  cdr >> ros_message.front_fog_lamp_status;

  // Member: rear_fog_lamp_status
  cdr >> ros_message.rear_fog_lamp_status;

  // Member: brake_lamp_status
  cdr >> ros_message.brake_lamp_status;

  // Member: alarm_lamp_status
  cdr >> ros_message.alarm_lamp_status;

  // Member: lf_door_status
  cdr >> ros_message.lf_door_status;

  // Member: rf_door_status
  cdr >> ros_message.rf_door_status;

  // Member: lr_door_status
  cdr >> ros_message.lr_door_status;

  // Member: rr_door_status
  cdr >> ros_message.rr_door_status;

  // Member: rearview_mirror_status
  cdr >> ros_message.rearview_mirror_status;

  // Member: trunk_status
  cdr >> ros_message.trunk_status;

  // Member: engine_bay_door_status
  cdr >> ros_message.engine_bay_door_status;

  // Member: wheel_direction_rr
  cdr >> ros_message.wheel_direction_rr;

  // Member: wheel_spd_rr
  cdr >> ros_message.wheel_spd_rr;

  // Member: wheel_direction_rl
  cdr >> ros_message.wheel_direction_rl;

  // Member: wheel_spd_rl
  cdr >> ros_message.wheel_spd_rl;

  // Member: wheel_direction_fr
  cdr >> ros_message.wheel_direction_fr;

  // Member: wheel_spd_fr
  cdr >> ros_message.wheel_spd_fr;

  // Member: wheel_direction_fl
  cdr >> ros_message.wheel_direction_fl;

  // Member: wheel_spd_fl
  cdr >> ros_message.wheel_spd_fl;

  // Member: is_tire_pressure_ok
  cdr >> ros_message.is_tire_pressure_ok;

  // Member: is_tire_pressure_lf_valid
  cdr >> ros_message.is_tire_pressure_lf_valid;

  // Member: tire_pressure_lf
  cdr >> ros_message.tire_pressure_lf;

  // Member: is_tire_pressure_rf_valid
  cdr >> ros_message.is_tire_pressure_rf_valid;

  // Member: tire_pressure_rf
  cdr >> ros_message.tire_pressure_rf;

  // Member: is_tire_pressure_lr_valid
  cdr >> ros_message.is_tire_pressure_lr_valid;

  // Member: tire_pressure_lr
  cdr >> ros_message.tire_pressure_lr;

  // Member: is_tire_pressure_rr_valid
  cdr >> ros_message.is_tire_pressure_rr_valid;

  // Member: tire_pressure_rr
  cdr >> ros_message.tire_pressure_rr;

  // Member: battery_power_percentage
  cdr >> ros_message.battery_power_percentage;

  // Member: air_bag_status
  cdr >> ros_message.air_bag_status;

  // Member: charging_gun_status
  cdr >> ros_message.charging_gun_status;

  // Member: vehicle_power_status
  cdr >> ros_message.vehicle_power_status;

  // Member: chassis_error_code
  {
    cdr >> ros_message.chassis_error_code;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::Chassis & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: moving_status
  {
    size_t item_size = sizeof(ros_message.moving_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_mode
  {
    size_t item_size = sizeof(ros_message.driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_driving_mode
  {
    size_t item_size = sizeof(ros_message.steer_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_status
  {
    size_t item_size = sizeof(ros_message.steering_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steering_value
  {
    size_t item_size = sizeof(ros_message.front_steering_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steering_value
  {
    size_t item_size = sizeof(ros_message.rear_steering_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_torque_nm
  {
    size_t item_size = sizeof(ros_message.steering_torque_nm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steering_rate_dps
  {
    size_t item_size = sizeof(ros_message.front_steering_rate_dps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steering_rate_dps
  {
    size_t item_size = sizeof(ros_message.rear_steering_rate_dps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_driving_mode
  {
    size_t item_size = sizeof(ros_message.accel_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_status
  {
    size_t item_size = sizeof(ros_message.accel_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_value
  {
    size_t item_size = sizeof(ros_message.accel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_driving_mode
  {
    size_t item_size = sizeof(ros_message.brake_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_status
  {
    size_t item_size = sizeof(ros_message.brake_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_value
  {
    size_t item_size = sizeof(ros_message.brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: backup_brake_driving_mode
  {
    size_t item_size = sizeof(ros_message.backup_brake_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: backup_brake_status
  {
    size_t item_size = sizeof(ros_message.backup_brake_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: backup_brake_value
  {
    size_t item_size = sizeof(ros_message.backup_brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_driving_mode
  {
    size_t item_size = sizeof(ros_message.epb_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_status
  {
    size_t item_size = sizeof(ros_message.epb_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_level
  {
    size_t item_size = sizeof(ros_message.epb_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_status
  {
    size_t item_size = sizeof(ros_message.engine_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_rpm
  {
    size_t item_size = sizeof(ros_message.engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_torque
  {
    size_t item_size = sizeof(ros_message.engine_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_mps
  {
    size_t item_size = sizeof(ros_message.speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odometer_m
  {
    size_t item_size = sizeof(ros_message.odometer_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_range_m
  {
    size_t item_size = sizeof(ros_message.fuel_range_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_driving_mode
  {
    size_t item_size = sizeof(ros_message.gear_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_status
  {
    size_t item_size = sizeof(ros_message.gear_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_location
  {
    size_t item_size = sizeof(ros_message.gear_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_seat_belt
  {
    size_t item_size = sizeof(ros_message.driver_seat_belt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: high_beam_status
  {
    size_t item_size = sizeof(ros_message.high_beam_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_beam_status
  {
    size_t item_size = sizeof(ros_message.low_beam_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horn_status
  {
    size_t item_size = sizeof(ros_message.horn_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_lamp_status
  {
    size_t item_size = sizeof(ros_message.turn_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_wiper_status
  {
    size_t item_size = sizeof(ros_message.front_wiper_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_wiper_status
  {
    size_t item_size = sizeof(ros_message.rear_wiper_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_lamp_status
  {
    size_t item_size = sizeof(ros_message.position_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_fog_lamp_status
  {
    size_t item_size = sizeof(ros_message.front_fog_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_fog_lamp_status
  {
    size_t item_size = sizeof(ros_message.rear_fog_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_lamp_status
  {
    size_t item_size = sizeof(ros_message.brake_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alarm_lamp_status
  {
    size_t item_size = sizeof(ros_message.alarm_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lf_door_status
  {
    size_t item_size = sizeof(ros_message.lf_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rf_door_status
  {
    size_t item_size = sizeof(ros_message.rf_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lr_door_status
  {
    size_t item_size = sizeof(ros_message.lr_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_door_status
  {
    size_t item_size = sizeof(ros_message.rr_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rearview_mirror_status
  {
    size_t item_size = sizeof(ros_message.rearview_mirror_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trunk_status
  {
    size_t item_size = sizeof(ros_message.trunk_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_bay_door_status
  {
    size_t item_size = sizeof(ros_message.engine_bay_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_direction_rr
  {
    size_t item_size = sizeof(ros_message.wheel_direction_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spd_rr
  {
    size_t item_size = sizeof(ros_message.wheel_spd_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_direction_rl
  {
    size_t item_size = sizeof(ros_message.wheel_direction_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spd_rl
  {
    size_t item_size = sizeof(ros_message.wheel_spd_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_direction_fr
  {
    size_t item_size = sizeof(ros_message.wheel_direction_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spd_fr
  {
    size_t item_size = sizeof(ros_message.wheel_spd_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_direction_fl
  {
    size_t item_size = sizeof(ros_message.wheel_direction_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spd_fl
  {
    size_t item_size = sizeof(ros_message.wheel_spd_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_tire_pressure_ok
  {
    size_t item_size = sizeof(ros_message.is_tire_pressure_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_tire_pressure_lf_valid
  {
    size_t item_size = sizeof(ros_message.is_tire_pressure_lf_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tire_pressure_lf
  {
    size_t item_size = sizeof(ros_message.tire_pressure_lf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_tire_pressure_rf_valid
  {
    size_t item_size = sizeof(ros_message.is_tire_pressure_rf_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tire_pressure_rf
  {
    size_t item_size = sizeof(ros_message.tire_pressure_rf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_tire_pressure_lr_valid
  {
    size_t item_size = sizeof(ros_message.is_tire_pressure_lr_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tire_pressure_lr
  {
    size_t item_size = sizeof(ros_message.tire_pressure_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_tire_pressure_rr_valid
  {
    size_t item_size = sizeof(ros_message.is_tire_pressure_rr_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tire_pressure_rr
  {
    size_t item_size = sizeof(ros_message.tire_pressure_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_power_percentage
  {
    size_t item_size = sizeof(ros_message.battery_power_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: air_bag_status
  {
    size_t item_size = sizeof(ros_message.air_bag_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charging_gun_status
  {
    size_t item_size = sizeof(ros_message.charging_gun_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_power_status
  {
    size_t item_size = sizeof(ros_message.vehicle_power_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chassis_error_code
  {
    size_t array_size = ros_message.chassis_error_code.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.chassis_error_code[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_Chassis(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: moving_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_steering_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steering_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steering_torque_nm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steering_rate_dps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steering_rate_dps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: accel_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: backup_brake_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: backup_brake_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: backup_brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: epb_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: epb_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: epb_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: engine_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: odometer_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fuel_range_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_location
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: driver_seat_belt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: high_beam_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: low_beam_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: horn_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: turn_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_wiper_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rear_wiper_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_fog_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rear_fog_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alarm_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lf_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rf_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lr_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rearview_mirror_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trunk_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_bay_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_direction_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_spd_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_direction_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_spd_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_direction_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_spd_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_direction_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_spd_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_tire_pressure_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_tire_pressure_lf_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tire_pressure_lf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_tire_pressure_rf_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tire_pressure_rf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_tire_pressure_lr_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tire_pressure_lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_tire_pressure_rr_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tire_pressure_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_power_percentage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: air_bag_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: charging_gun_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_power_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: chassis_error_code
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface::msg::Chassis;
    is_plain =
      (
      offsetof(DataType, chassis_error_code) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Chassis__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::Chassis *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Chassis__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::Chassis *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Chassis__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::Chassis *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Chassis__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Chassis(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Chassis__callbacks = {
  "ros2_interface::msg",
  "Chassis",
  _Chassis__cdr_serialize,
  _Chassis__cdr_deserialize,
  _Chassis__get_serialized_size,
  _Chassis__max_serialized_size
};

static rosidl_message_type_support_t _Chassis__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Chassis__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_interface::msg::Chassis>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_Chassis__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, Chassis)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_Chassis__handle;
}

#ifdef __cplusplus
}
#endif
