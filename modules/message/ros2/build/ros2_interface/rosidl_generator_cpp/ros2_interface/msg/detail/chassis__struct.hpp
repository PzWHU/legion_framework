// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Chassis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CHASSIS__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CHASSIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Chassis __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Chassis __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Chassis_
{
  using Type = Chassis_<ContainerAllocator>;

  explicit Chassis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_status = 0l;
      this->driving_mode = 0l;
      this->steer_driving_mode = 0l;
      this->steering_status = 0l;
      this->front_steering_value = 0.0;
      this->rear_steering_value = 0.0;
      this->steering_torque_nm = 0.0;
      this->front_steering_rate_dps = 0.0;
      this->rear_steering_rate_dps = 0.0;
      this->accel_driving_mode = 0l;
      this->accel_status = 0l;
      this->accel_value = 0.0;
      this->brake_driving_mode = 0l;
      this->brake_status = 0l;
      this->brake_value = 0.0;
      this->backup_brake_driving_mode = 0l;
      this->backup_brake_status = 0l;
      this->backup_brake_value = 0.0;
      this->epb_driving_mode = 0l;
      this->epb_status = 0l;
      this->epb_level = 0l;
      this->engine_status = 0l;
      this->engine_rpm = 0.0;
      this->engine_torque = 0.0;
      this->speed_mps = 0.0;
      this->odometer_m = 0.0;
      this->fuel_range_m = 0l;
      this->gear_driving_mode = 0l;
      this->gear_status = 0l;
      this->gear_location = 0l;
      this->driver_seat_belt = 0l;
      this->high_beam_status = 0l;
      this->low_beam_status = 0l;
      this->horn_status = 0l;
      this->turn_lamp_status = 0l;
      this->front_wiper_status = 0l;
      this->rear_wiper_status = 0l;
      this->position_lamp_status = 0l;
      this->front_fog_lamp_status = 0l;
      this->rear_fog_lamp_status = 0l;
      this->brake_lamp_status = 0l;
      this->alarm_lamp_status = 0l;
      this->lf_door_status = 0l;
      this->rf_door_status = 0l;
      this->lr_door_status = 0l;
      this->rr_door_status = 0l;
      this->rearview_mirror_status = 0l;
      this->trunk_status = 0l;
      this->engine_bay_door_status = 0l;
      this->wheel_direction_rr = 0l;
      this->wheel_spd_rr = 0.0;
      this->wheel_direction_rl = 0l;
      this->wheel_spd_rl = 0.0;
      this->wheel_direction_fr = 0l;
      this->wheel_spd_fr = 0.0;
      this->wheel_direction_fl = 0l;
      this->wheel_spd_fl = 0.0;
      this->is_tire_pressure_ok = 0l;
      this->is_tire_pressure_lf_valid = 0l;
      this->tire_pressure_lf = 0.0;
      this->is_tire_pressure_rf_valid = 0l;
      this->tire_pressure_rf = 0.0;
      this->is_tire_pressure_lr_valid = 0l;
      this->tire_pressure_lr = 0.0;
      this->is_tire_pressure_rr_valid = 0l;
      this->tire_pressure_rr = 0.0;
      this->battery_power_percentage = 0.0;
      this->air_bag_status = 0l;
      this->charging_gun_status = 0l;
      this->vehicle_power_status = 0l;
    }
  }

  explicit Chassis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_status = 0l;
      this->driving_mode = 0l;
      this->steer_driving_mode = 0l;
      this->steering_status = 0l;
      this->front_steering_value = 0.0;
      this->rear_steering_value = 0.0;
      this->steering_torque_nm = 0.0;
      this->front_steering_rate_dps = 0.0;
      this->rear_steering_rate_dps = 0.0;
      this->accel_driving_mode = 0l;
      this->accel_status = 0l;
      this->accel_value = 0.0;
      this->brake_driving_mode = 0l;
      this->brake_status = 0l;
      this->brake_value = 0.0;
      this->backup_brake_driving_mode = 0l;
      this->backup_brake_status = 0l;
      this->backup_brake_value = 0.0;
      this->epb_driving_mode = 0l;
      this->epb_status = 0l;
      this->epb_level = 0l;
      this->engine_status = 0l;
      this->engine_rpm = 0.0;
      this->engine_torque = 0.0;
      this->speed_mps = 0.0;
      this->odometer_m = 0.0;
      this->fuel_range_m = 0l;
      this->gear_driving_mode = 0l;
      this->gear_status = 0l;
      this->gear_location = 0l;
      this->driver_seat_belt = 0l;
      this->high_beam_status = 0l;
      this->low_beam_status = 0l;
      this->horn_status = 0l;
      this->turn_lamp_status = 0l;
      this->front_wiper_status = 0l;
      this->rear_wiper_status = 0l;
      this->position_lamp_status = 0l;
      this->front_fog_lamp_status = 0l;
      this->rear_fog_lamp_status = 0l;
      this->brake_lamp_status = 0l;
      this->alarm_lamp_status = 0l;
      this->lf_door_status = 0l;
      this->rf_door_status = 0l;
      this->lr_door_status = 0l;
      this->rr_door_status = 0l;
      this->rearview_mirror_status = 0l;
      this->trunk_status = 0l;
      this->engine_bay_door_status = 0l;
      this->wheel_direction_rr = 0l;
      this->wheel_spd_rr = 0.0;
      this->wheel_direction_rl = 0l;
      this->wheel_spd_rl = 0.0;
      this->wheel_direction_fr = 0l;
      this->wheel_spd_fr = 0.0;
      this->wheel_direction_fl = 0l;
      this->wheel_spd_fl = 0.0;
      this->is_tire_pressure_ok = 0l;
      this->is_tire_pressure_lf_valid = 0l;
      this->tire_pressure_lf = 0.0;
      this->is_tire_pressure_rf_valid = 0l;
      this->tire_pressure_rf = 0.0;
      this->is_tire_pressure_lr_valid = 0l;
      this->tire_pressure_lr = 0.0;
      this->is_tire_pressure_rr_valid = 0l;
      this->tire_pressure_rr = 0.0;
      this->battery_power_percentage = 0.0;
      this->air_bag_status = 0l;
      this->charging_gun_status = 0l;
      this->vehicle_power_status = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _moving_status_type =
    int32_t;
  _moving_status_type moving_status;
  using _driving_mode_type =
    int32_t;
  _driving_mode_type driving_mode;
  using _steer_driving_mode_type =
    int32_t;
  _steer_driving_mode_type steer_driving_mode;
  using _steering_status_type =
    int32_t;
  _steering_status_type steering_status;
  using _front_steering_value_type =
    double;
  _front_steering_value_type front_steering_value;
  using _rear_steering_value_type =
    double;
  _rear_steering_value_type rear_steering_value;
  using _steering_torque_nm_type =
    double;
  _steering_torque_nm_type steering_torque_nm;
  using _front_steering_rate_dps_type =
    double;
  _front_steering_rate_dps_type front_steering_rate_dps;
  using _rear_steering_rate_dps_type =
    double;
  _rear_steering_rate_dps_type rear_steering_rate_dps;
  using _accel_driving_mode_type =
    int32_t;
  _accel_driving_mode_type accel_driving_mode;
  using _accel_status_type =
    int32_t;
  _accel_status_type accel_status;
  using _accel_value_type =
    double;
  _accel_value_type accel_value;
  using _brake_driving_mode_type =
    int32_t;
  _brake_driving_mode_type brake_driving_mode;
  using _brake_status_type =
    int32_t;
  _brake_status_type brake_status;
  using _brake_value_type =
    double;
  _brake_value_type brake_value;
  using _backup_brake_driving_mode_type =
    int32_t;
  _backup_brake_driving_mode_type backup_brake_driving_mode;
  using _backup_brake_status_type =
    int32_t;
  _backup_brake_status_type backup_brake_status;
  using _backup_brake_value_type =
    double;
  _backup_brake_value_type backup_brake_value;
  using _epb_driving_mode_type =
    int32_t;
  _epb_driving_mode_type epb_driving_mode;
  using _epb_status_type =
    int32_t;
  _epb_status_type epb_status;
  using _epb_level_type =
    int32_t;
  _epb_level_type epb_level;
  using _engine_status_type =
    int32_t;
  _engine_status_type engine_status;
  using _engine_rpm_type =
    double;
  _engine_rpm_type engine_rpm;
  using _engine_torque_type =
    double;
  _engine_torque_type engine_torque;
  using _speed_mps_type =
    double;
  _speed_mps_type speed_mps;
  using _odometer_m_type =
    double;
  _odometer_m_type odometer_m;
  using _fuel_range_m_type =
    int32_t;
  _fuel_range_m_type fuel_range_m;
  using _gear_driving_mode_type =
    int32_t;
  _gear_driving_mode_type gear_driving_mode;
  using _gear_status_type =
    int32_t;
  _gear_status_type gear_status;
  using _gear_location_type =
    int32_t;
  _gear_location_type gear_location;
  using _driver_seat_belt_type =
    int32_t;
  _driver_seat_belt_type driver_seat_belt;
  using _high_beam_status_type =
    int32_t;
  _high_beam_status_type high_beam_status;
  using _low_beam_status_type =
    int32_t;
  _low_beam_status_type low_beam_status;
  using _horn_status_type =
    int32_t;
  _horn_status_type horn_status;
  using _turn_lamp_status_type =
    int32_t;
  _turn_lamp_status_type turn_lamp_status;
  using _front_wiper_status_type =
    int32_t;
  _front_wiper_status_type front_wiper_status;
  using _rear_wiper_status_type =
    int32_t;
  _rear_wiper_status_type rear_wiper_status;
  using _position_lamp_status_type =
    int32_t;
  _position_lamp_status_type position_lamp_status;
  using _front_fog_lamp_status_type =
    int32_t;
  _front_fog_lamp_status_type front_fog_lamp_status;
  using _rear_fog_lamp_status_type =
    int32_t;
  _rear_fog_lamp_status_type rear_fog_lamp_status;
  using _brake_lamp_status_type =
    int32_t;
  _brake_lamp_status_type brake_lamp_status;
  using _alarm_lamp_status_type =
    int32_t;
  _alarm_lamp_status_type alarm_lamp_status;
  using _lf_door_status_type =
    int32_t;
  _lf_door_status_type lf_door_status;
  using _rf_door_status_type =
    int32_t;
  _rf_door_status_type rf_door_status;
  using _lr_door_status_type =
    int32_t;
  _lr_door_status_type lr_door_status;
  using _rr_door_status_type =
    int32_t;
  _rr_door_status_type rr_door_status;
  using _rearview_mirror_status_type =
    int32_t;
  _rearview_mirror_status_type rearview_mirror_status;
  using _trunk_status_type =
    int32_t;
  _trunk_status_type trunk_status;
  using _engine_bay_door_status_type =
    int32_t;
  _engine_bay_door_status_type engine_bay_door_status;
  using _wheel_direction_rr_type =
    int32_t;
  _wheel_direction_rr_type wheel_direction_rr;
  using _wheel_spd_rr_type =
    double;
  _wheel_spd_rr_type wheel_spd_rr;
  using _wheel_direction_rl_type =
    int32_t;
  _wheel_direction_rl_type wheel_direction_rl;
  using _wheel_spd_rl_type =
    double;
  _wheel_spd_rl_type wheel_spd_rl;
  using _wheel_direction_fr_type =
    int32_t;
  _wheel_direction_fr_type wheel_direction_fr;
  using _wheel_spd_fr_type =
    double;
  _wheel_spd_fr_type wheel_spd_fr;
  using _wheel_direction_fl_type =
    int32_t;
  _wheel_direction_fl_type wheel_direction_fl;
  using _wheel_spd_fl_type =
    double;
  _wheel_spd_fl_type wheel_spd_fl;
  using _is_tire_pressure_ok_type =
    int32_t;
  _is_tire_pressure_ok_type is_tire_pressure_ok;
  using _is_tire_pressure_lf_valid_type =
    int32_t;
  _is_tire_pressure_lf_valid_type is_tire_pressure_lf_valid;
  using _tire_pressure_lf_type =
    double;
  _tire_pressure_lf_type tire_pressure_lf;
  using _is_tire_pressure_rf_valid_type =
    int32_t;
  _is_tire_pressure_rf_valid_type is_tire_pressure_rf_valid;
  using _tire_pressure_rf_type =
    double;
  _tire_pressure_rf_type tire_pressure_rf;
  using _is_tire_pressure_lr_valid_type =
    int32_t;
  _is_tire_pressure_lr_valid_type is_tire_pressure_lr_valid;
  using _tire_pressure_lr_type =
    double;
  _tire_pressure_lr_type tire_pressure_lr;
  using _is_tire_pressure_rr_valid_type =
    int32_t;
  _is_tire_pressure_rr_valid_type is_tire_pressure_rr_valid;
  using _tire_pressure_rr_type =
    double;
  _tire_pressure_rr_type tire_pressure_rr;
  using _battery_power_percentage_type =
    double;
  _battery_power_percentage_type battery_power_percentage;
  using _air_bag_status_type =
    int32_t;
  _air_bag_status_type air_bag_status;
  using _charging_gun_status_type =
    int32_t;
  _charging_gun_status_type charging_gun_status;
  using _vehicle_power_status_type =
    int32_t;
  _vehicle_power_status_type vehicle_power_status;
  using _chassis_error_code_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _chassis_error_code_type chassis_error_code;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__moving_status(
    const int32_t & _arg)
  {
    this->moving_status = _arg;
    return *this;
  }
  Type & set__driving_mode(
    const int32_t & _arg)
  {
    this->driving_mode = _arg;
    return *this;
  }
  Type & set__steer_driving_mode(
    const int32_t & _arg)
  {
    this->steer_driving_mode = _arg;
    return *this;
  }
  Type & set__steering_status(
    const int32_t & _arg)
  {
    this->steering_status = _arg;
    return *this;
  }
  Type & set__front_steering_value(
    const double & _arg)
  {
    this->front_steering_value = _arg;
    return *this;
  }
  Type & set__rear_steering_value(
    const double & _arg)
  {
    this->rear_steering_value = _arg;
    return *this;
  }
  Type & set__steering_torque_nm(
    const double & _arg)
  {
    this->steering_torque_nm = _arg;
    return *this;
  }
  Type & set__front_steering_rate_dps(
    const double & _arg)
  {
    this->front_steering_rate_dps = _arg;
    return *this;
  }
  Type & set__rear_steering_rate_dps(
    const double & _arg)
  {
    this->rear_steering_rate_dps = _arg;
    return *this;
  }
  Type & set__accel_driving_mode(
    const int32_t & _arg)
  {
    this->accel_driving_mode = _arg;
    return *this;
  }
  Type & set__accel_status(
    const int32_t & _arg)
  {
    this->accel_status = _arg;
    return *this;
  }
  Type & set__accel_value(
    const double & _arg)
  {
    this->accel_value = _arg;
    return *this;
  }
  Type & set__brake_driving_mode(
    const int32_t & _arg)
  {
    this->brake_driving_mode = _arg;
    return *this;
  }
  Type & set__brake_status(
    const int32_t & _arg)
  {
    this->brake_status = _arg;
    return *this;
  }
  Type & set__brake_value(
    const double & _arg)
  {
    this->brake_value = _arg;
    return *this;
  }
  Type & set__backup_brake_driving_mode(
    const int32_t & _arg)
  {
    this->backup_brake_driving_mode = _arg;
    return *this;
  }
  Type & set__backup_brake_status(
    const int32_t & _arg)
  {
    this->backup_brake_status = _arg;
    return *this;
  }
  Type & set__backup_brake_value(
    const double & _arg)
  {
    this->backup_brake_value = _arg;
    return *this;
  }
  Type & set__epb_driving_mode(
    const int32_t & _arg)
  {
    this->epb_driving_mode = _arg;
    return *this;
  }
  Type & set__epb_status(
    const int32_t & _arg)
  {
    this->epb_status = _arg;
    return *this;
  }
  Type & set__epb_level(
    const int32_t & _arg)
  {
    this->epb_level = _arg;
    return *this;
  }
  Type & set__engine_status(
    const int32_t & _arg)
  {
    this->engine_status = _arg;
    return *this;
  }
  Type & set__engine_rpm(
    const double & _arg)
  {
    this->engine_rpm = _arg;
    return *this;
  }
  Type & set__engine_torque(
    const double & _arg)
  {
    this->engine_torque = _arg;
    return *this;
  }
  Type & set__speed_mps(
    const double & _arg)
  {
    this->speed_mps = _arg;
    return *this;
  }
  Type & set__odometer_m(
    const double & _arg)
  {
    this->odometer_m = _arg;
    return *this;
  }
  Type & set__fuel_range_m(
    const int32_t & _arg)
  {
    this->fuel_range_m = _arg;
    return *this;
  }
  Type & set__gear_driving_mode(
    const int32_t & _arg)
  {
    this->gear_driving_mode = _arg;
    return *this;
  }
  Type & set__gear_status(
    const int32_t & _arg)
  {
    this->gear_status = _arg;
    return *this;
  }
  Type & set__gear_location(
    const int32_t & _arg)
  {
    this->gear_location = _arg;
    return *this;
  }
  Type & set__driver_seat_belt(
    const int32_t & _arg)
  {
    this->driver_seat_belt = _arg;
    return *this;
  }
  Type & set__high_beam_status(
    const int32_t & _arg)
  {
    this->high_beam_status = _arg;
    return *this;
  }
  Type & set__low_beam_status(
    const int32_t & _arg)
  {
    this->low_beam_status = _arg;
    return *this;
  }
  Type & set__horn_status(
    const int32_t & _arg)
  {
    this->horn_status = _arg;
    return *this;
  }
  Type & set__turn_lamp_status(
    const int32_t & _arg)
  {
    this->turn_lamp_status = _arg;
    return *this;
  }
  Type & set__front_wiper_status(
    const int32_t & _arg)
  {
    this->front_wiper_status = _arg;
    return *this;
  }
  Type & set__rear_wiper_status(
    const int32_t & _arg)
  {
    this->rear_wiper_status = _arg;
    return *this;
  }
  Type & set__position_lamp_status(
    const int32_t & _arg)
  {
    this->position_lamp_status = _arg;
    return *this;
  }
  Type & set__front_fog_lamp_status(
    const int32_t & _arg)
  {
    this->front_fog_lamp_status = _arg;
    return *this;
  }
  Type & set__rear_fog_lamp_status(
    const int32_t & _arg)
  {
    this->rear_fog_lamp_status = _arg;
    return *this;
  }
  Type & set__brake_lamp_status(
    const int32_t & _arg)
  {
    this->brake_lamp_status = _arg;
    return *this;
  }
  Type & set__alarm_lamp_status(
    const int32_t & _arg)
  {
    this->alarm_lamp_status = _arg;
    return *this;
  }
  Type & set__lf_door_status(
    const int32_t & _arg)
  {
    this->lf_door_status = _arg;
    return *this;
  }
  Type & set__rf_door_status(
    const int32_t & _arg)
  {
    this->rf_door_status = _arg;
    return *this;
  }
  Type & set__lr_door_status(
    const int32_t & _arg)
  {
    this->lr_door_status = _arg;
    return *this;
  }
  Type & set__rr_door_status(
    const int32_t & _arg)
  {
    this->rr_door_status = _arg;
    return *this;
  }
  Type & set__rearview_mirror_status(
    const int32_t & _arg)
  {
    this->rearview_mirror_status = _arg;
    return *this;
  }
  Type & set__trunk_status(
    const int32_t & _arg)
  {
    this->trunk_status = _arg;
    return *this;
  }
  Type & set__engine_bay_door_status(
    const int32_t & _arg)
  {
    this->engine_bay_door_status = _arg;
    return *this;
  }
  Type & set__wheel_direction_rr(
    const int32_t & _arg)
  {
    this->wheel_direction_rr = _arg;
    return *this;
  }
  Type & set__wheel_spd_rr(
    const double & _arg)
  {
    this->wheel_spd_rr = _arg;
    return *this;
  }
  Type & set__wheel_direction_rl(
    const int32_t & _arg)
  {
    this->wheel_direction_rl = _arg;
    return *this;
  }
  Type & set__wheel_spd_rl(
    const double & _arg)
  {
    this->wheel_spd_rl = _arg;
    return *this;
  }
  Type & set__wheel_direction_fr(
    const int32_t & _arg)
  {
    this->wheel_direction_fr = _arg;
    return *this;
  }
  Type & set__wheel_spd_fr(
    const double & _arg)
  {
    this->wheel_spd_fr = _arg;
    return *this;
  }
  Type & set__wheel_direction_fl(
    const int32_t & _arg)
  {
    this->wheel_direction_fl = _arg;
    return *this;
  }
  Type & set__wheel_spd_fl(
    const double & _arg)
  {
    this->wheel_spd_fl = _arg;
    return *this;
  }
  Type & set__is_tire_pressure_ok(
    const int32_t & _arg)
  {
    this->is_tire_pressure_ok = _arg;
    return *this;
  }
  Type & set__is_tire_pressure_lf_valid(
    const int32_t & _arg)
  {
    this->is_tire_pressure_lf_valid = _arg;
    return *this;
  }
  Type & set__tire_pressure_lf(
    const double & _arg)
  {
    this->tire_pressure_lf = _arg;
    return *this;
  }
  Type & set__is_tire_pressure_rf_valid(
    const int32_t & _arg)
  {
    this->is_tire_pressure_rf_valid = _arg;
    return *this;
  }
  Type & set__tire_pressure_rf(
    const double & _arg)
  {
    this->tire_pressure_rf = _arg;
    return *this;
  }
  Type & set__is_tire_pressure_lr_valid(
    const int32_t & _arg)
  {
    this->is_tire_pressure_lr_valid = _arg;
    return *this;
  }
  Type & set__tire_pressure_lr(
    const double & _arg)
  {
    this->tire_pressure_lr = _arg;
    return *this;
  }
  Type & set__is_tire_pressure_rr_valid(
    const int32_t & _arg)
  {
    this->is_tire_pressure_rr_valid = _arg;
    return *this;
  }
  Type & set__tire_pressure_rr(
    const double & _arg)
  {
    this->tire_pressure_rr = _arg;
    return *this;
  }
  Type & set__battery_power_percentage(
    const double & _arg)
  {
    this->battery_power_percentage = _arg;
    return *this;
  }
  Type & set__air_bag_status(
    const int32_t & _arg)
  {
    this->air_bag_status = _arg;
    return *this;
  }
  Type & set__charging_gun_status(
    const int32_t & _arg)
  {
    this->charging_gun_status = _arg;
    return *this;
  }
  Type & set__vehicle_power_status(
    const int32_t & _arg)
  {
    this->vehicle_power_status = _arg;
    return *this;
  }
  Type & set__chassis_error_code(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->chassis_error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Chassis_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Chassis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Chassis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Chassis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Chassis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Chassis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Chassis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Chassis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Chassis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Chassis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Chassis
    std::shared_ptr<ros2_interface::msg::Chassis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Chassis
    std::shared_ptr<ros2_interface::msg::Chassis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Chassis_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->moving_status != other.moving_status) {
      return false;
    }
    if (this->driving_mode != other.driving_mode) {
      return false;
    }
    if (this->steer_driving_mode != other.steer_driving_mode) {
      return false;
    }
    if (this->steering_status != other.steering_status) {
      return false;
    }
    if (this->front_steering_value != other.front_steering_value) {
      return false;
    }
    if (this->rear_steering_value != other.rear_steering_value) {
      return false;
    }
    if (this->steering_torque_nm != other.steering_torque_nm) {
      return false;
    }
    if (this->front_steering_rate_dps != other.front_steering_rate_dps) {
      return false;
    }
    if (this->rear_steering_rate_dps != other.rear_steering_rate_dps) {
      return false;
    }
    if (this->accel_driving_mode != other.accel_driving_mode) {
      return false;
    }
    if (this->accel_status != other.accel_status) {
      return false;
    }
    if (this->accel_value != other.accel_value) {
      return false;
    }
    if (this->brake_driving_mode != other.brake_driving_mode) {
      return false;
    }
    if (this->brake_status != other.brake_status) {
      return false;
    }
    if (this->brake_value != other.brake_value) {
      return false;
    }
    if (this->backup_brake_driving_mode != other.backup_brake_driving_mode) {
      return false;
    }
    if (this->backup_brake_status != other.backup_brake_status) {
      return false;
    }
    if (this->backup_brake_value != other.backup_brake_value) {
      return false;
    }
    if (this->epb_driving_mode != other.epb_driving_mode) {
      return false;
    }
    if (this->epb_status != other.epb_status) {
      return false;
    }
    if (this->epb_level != other.epb_level) {
      return false;
    }
    if (this->engine_status != other.engine_status) {
      return false;
    }
    if (this->engine_rpm != other.engine_rpm) {
      return false;
    }
    if (this->engine_torque != other.engine_torque) {
      return false;
    }
    if (this->speed_mps != other.speed_mps) {
      return false;
    }
    if (this->odometer_m != other.odometer_m) {
      return false;
    }
    if (this->fuel_range_m != other.fuel_range_m) {
      return false;
    }
    if (this->gear_driving_mode != other.gear_driving_mode) {
      return false;
    }
    if (this->gear_status != other.gear_status) {
      return false;
    }
    if (this->gear_location != other.gear_location) {
      return false;
    }
    if (this->driver_seat_belt != other.driver_seat_belt) {
      return false;
    }
    if (this->high_beam_status != other.high_beam_status) {
      return false;
    }
    if (this->low_beam_status != other.low_beam_status) {
      return false;
    }
    if (this->horn_status != other.horn_status) {
      return false;
    }
    if (this->turn_lamp_status != other.turn_lamp_status) {
      return false;
    }
    if (this->front_wiper_status != other.front_wiper_status) {
      return false;
    }
    if (this->rear_wiper_status != other.rear_wiper_status) {
      return false;
    }
    if (this->position_lamp_status != other.position_lamp_status) {
      return false;
    }
    if (this->front_fog_lamp_status != other.front_fog_lamp_status) {
      return false;
    }
    if (this->rear_fog_lamp_status != other.rear_fog_lamp_status) {
      return false;
    }
    if (this->brake_lamp_status != other.brake_lamp_status) {
      return false;
    }
    if (this->alarm_lamp_status != other.alarm_lamp_status) {
      return false;
    }
    if (this->lf_door_status != other.lf_door_status) {
      return false;
    }
    if (this->rf_door_status != other.rf_door_status) {
      return false;
    }
    if (this->lr_door_status != other.lr_door_status) {
      return false;
    }
    if (this->rr_door_status != other.rr_door_status) {
      return false;
    }
    if (this->rearview_mirror_status != other.rearview_mirror_status) {
      return false;
    }
    if (this->trunk_status != other.trunk_status) {
      return false;
    }
    if (this->engine_bay_door_status != other.engine_bay_door_status) {
      return false;
    }
    if (this->wheel_direction_rr != other.wheel_direction_rr) {
      return false;
    }
    if (this->wheel_spd_rr != other.wheel_spd_rr) {
      return false;
    }
    if (this->wheel_direction_rl != other.wheel_direction_rl) {
      return false;
    }
    if (this->wheel_spd_rl != other.wheel_spd_rl) {
      return false;
    }
    if (this->wheel_direction_fr != other.wheel_direction_fr) {
      return false;
    }
    if (this->wheel_spd_fr != other.wheel_spd_fr) {
      return false;
    }
    if (this->wheel_direction_fl != other.wheel_direction_fl) {
      return false;
    }
    if (this->wheel_spd_fl != other.wheel_spd_fl) {
      return false;
    }
    if (this->is_tire_pressure_ok != other.is_tire_pressure_ok) {
      return false;
    }
    if (this->is_tire_pressure_lf_valid != other.is_tire_pressure_lf_valid) {
      return false;
    }
    if (this->tire_pressure_lf != other.tire_pressure_lf) {
      return false;
    }
    if (this->is_tire_pressure_rf_valid != other.is_tire_pressure_rf_valid) {
      return false;
    }
    if (this->tire_pressure_rf != other.tire_pressure_rf) {
      return false;
    }
    if (this->is_tire_pressure_lr_valid != other.is_tire_pressure_lr_valid) {
      return false;
    }
    if (this->tire_pressure_lr != other.tire_pressure_lr) {
      return false;
    }
    if (this->is_tire_pressure_rr_valid != other.is_tire_pressure_rr_valid) {
      return false;
    }
    if (this->tire_pressure_rr != other.tire_pressure_rr) {
      return false;
    }
    if (this->battery_power_percentage != other.battery_power_percentage) {
      return false;
    }
    if (this->air_bag_status != other.air_bag_status) {
      return false;
    }
    if (this->charging_gun_status != other.charging_gun_status) {
      return false;
    }
    if (this->vehicle_power_status != other.vehicle_power_status) {
      return false;
    }
    if (this->chassis_error_code != other.chassis_error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const Chassis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Chassis_

// alias to use template instance with default allocator
using Chassis =
  ros2_interface::msg::Chassis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CHASSIS__STRUCT_HPP_
