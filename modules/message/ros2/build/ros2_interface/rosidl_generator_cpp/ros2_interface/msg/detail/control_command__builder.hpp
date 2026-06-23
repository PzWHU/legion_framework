// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_rr_door_ctrl
{
public:
  explicit Init_ControlCommand_rr_door_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ControlCommand rr_door_ctrl(::ros2_interface::msg::ControlCommand::_rr_door_ctrl_type arg)
  {
    msg_.rr_door_ctrl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_lr_door_ctrl
{
public:
  explicit Init_ControlCommand_lr_door_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_rr_door_ctrl lr_door_ctrl(::ros2_interface::msg::ControlCommand::_lr_door_ctrl_type arg)
  {
    msg_.lr_door_ctrl = std::move(arg);
    return Init_ControlCommand_rr_door_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_rf_door_ctrl
{
public:
  explicit Init_ControlCommand_rf_door_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_lr_door_ctrl rf_door_ctrl(::ros2_interface::msg::ControlCommand::_rf_door_ctrl_type arg)
  {
    msg_.rf_door_ctrl = std::move(arg);
    return Init_ControlCommand_lr_door_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_lf_door_ctrl
{
public:
  explicit Init_ControlCommand_lf_door_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_rf_door_ctrl lf_door_ctrl(::ros2_interface::msg::ControlCommand::_lf_door_ctrl_type arg)
  {
    msg_.lf_door_ctrl = std::move(arg);
    return Init_ControlCommand_rf_door_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_alarm_lamp_ctrl
{
public:
  explicit Init_ControlCommand_alarm_lamp_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_lf_door_ctrl alarm_lamp_ctrl(::ros2_interface::msg::ControlCommand::_alarm_lamp_ctrl_type arg)
  {
    msg_.alarm_lamp_ctrl = std::move(arg);
    return Init_ControlCommand_lf_door_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_brake_lamp_ctrl
{
public:
  explicit Init_ControlCommand_brake_lamp_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_alarm_lamp_ctrl brake_lamp_ctrl(::ros2_interface::msg::ControlCommand::_brake_lamp_ctrl_type arg)
  {
    msg_.brake_lamp_ctrl = std::move(arg);
    return Init_ControlCommand_alarm_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_rear_fog_lamp_ctrl
{
public:
  explicit Init_ControlCommand_rear_fog_lamp_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_brake_lamp_ctrl rear_fog_lamp_ctrl(::ros2_interface::msg::ControlCommand::_rear_fog_lamp_ctrl_type arg)
  {
    msg_.rear_fog_lamp_ctrl = std::move(arg);
    return Init_ControlCommand_brake_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_front_fog_lamp_ctrl
{
public:
  explicit Init_ControlCommand_front_fog_lamp_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_rear_fog_lamp_ctrl front_fog_lamp_ctrl(::ros2_interface::msg::ControlCommand::_front_fog_lamp_ctrl_type arg)
  {
    msg_.front_fog_lamp_ctrl = std::move(arg);
    return Init_ControlCommand_rear_fog_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_position_lamp_ctrl
{
public:
  explicit Init_ControlCommand_position_lamp_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_front_fog_lamp_ctrl position_lamp_ctrl(::ros2_interface::msg::ControlCommand::_position_lamp_ctrl_type arg)
  {
    msg_.position_lamp_ctrl = std::move(arg);
    return Init_ControlCommand_front_fog_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_rear_wiper_ctrl
{
public:
  explicit Init_ControlCommand_rear_wiper_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_position_lamp_ctrl rear_wiper_ctrl(::ros2_interface::msg::ControlCommand::_rear_wiper_ctrl_type arg)
  {
    msg_.rear_wiper_ctrl = std::move(arg);
    return Init_ControlCommand_position_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_front_wiper_ctrl
{
public:
  explicit Init_ControlCommand_front_wiper_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_rear_wiper_ctrl front_wiper_ctrl(::ros2_interface::msg::ControlCommand::_front_wiper_ctrl_type arg)
  {
    msg_.front_wiper_ctrl = std::move(arg);
    return Init_ControlCommand_rear_wiper_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_horn_ctrl
{
public:
  explicit Init_ControlCommand_horn_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_front_wiper_ctrl horn_ctrl(::ros2_interface::msg::ControlCommand::_horn_ctrl_type arg)
  {
    msg_.horn_ctrl = std::move(arg);
    return Init_ControlCommand_front_wiper_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_low_beam_ctrl
{
public:
  explicit Init_ControlCommand_low_beam_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_horn_ctrl low_beam_ctrl(::ros2_interface::msg::ControlCommand::_low_beam_ctrl_type arg)
  {
    msg_.low_beam_ctrl = std::move(arg);
    return Init_ControlCommand_horn_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_high_beam_ctrl
{
public:
  explicit Init_ControlCommand_high_beam_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_low_beam_ctrl high_beam_ctrl(::ros2_interface::msg::ControlCommand::_high_beam_ctrl_type arg)
  {
    msg_.high_beam_ctrl = std::move(arg);
    return Init_ControlCommand_low_beam_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_turn_lamp_ctrl
{
public:
  explicit Init_ControlCommand_turn_lamp_ctrl(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_high_beam_ctrl turn_lamp_ctrl(::ros2_interface::msg::ControlCommand::_turn_lamp_ctrl_type arg)
  {
    msg_.turn_lamp_ctrl = std::move(arg);
    return Init_ControlCommand_high_beam_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_acceleration
{
public:
  explicit Init_ControlCommand_acceleration(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_turn_lamp_ctrl acceleration(::ros2_interface::msg::ControlCommand::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ControlCommand_turn_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_speed
{
public:
  explicit Init_ControlCommand_speed(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_acceleration speed(::ros2_interface::msg::ControlCommand::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ControlCommand_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_gear_location
{
public:
  explicit Init_ControlCommand_gear_location(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_speed gear_location(::ros2_interface::msg::ControlCommand::_gear_location_type arg)
  {
    msg_.gear_location = std::move(arg);
    return Init_ControlCommand_speed(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_emergency_brake_enable
{
public:
  explicit Init_ControlCommand_emergency_brake_enable(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_gear_location emergency_brake_enable(::ros2_interface::msg::ControlCommand::_emergency_brake_enable_type arg)
  {
    msg_.emergency_brake_enable = std::move(arg);
    return Init_ControlCommand_gear_location(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_gear_driving_mode
{
public:
  explicit Init_ControlCommand_gear_driving_mode(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_emergency_brake_enable gear_driving_mode(::ros2_interface::msg::ControlCommand::_gear_driving_mode_type arg)
  {
    msg_.gear_driving_mode = std::move(arg);
    return Init_ControlCommand_emergency_brake_enable(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_epb_level
{
public:
  explicit Init_ControlCommand_epb_level(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_gear_driving_mode epb_level(::ros2_interface::msg::ControlCommand::_epb_level_type arg)
  {
    msg_.epb_level = std::move(arg);
    return Init_ControlCommand_gear_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_epb_driving_mode
{
public:
  explicit Init_ControlCommand_epb_driving_mode(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_epb_level epb_driving_mode(::ros2_interface::msg::ControlCommand::_epb_driving_mode_type arg)
  {
    msg_.epb_driving_mode = std::move(arg);
    return Init_ControlCommand_epb_level(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_backup_brake_value
{
public:
  explicit Init_ControlCommand_backup_brake_value(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_epb_driving_mode backup_brake_value(::ros2_interface::msg::ControlCommand::_backup_brake_value_type arg)
  {
    msg_.backup_brake_value = std::move(arg);
    return Init_ControlCommand_epb_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_backup_brake_driving_mode
{
public:
  explicit Init_ControlCommand_backup_brake_driving_mode(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_backup_brake_value backup_brake_driving_mode(::ros2_interface::msg::ControlCommand::_backup_brake_driving_mode_type arg)
  {
    msg_.backup_brake_driving_mode = std::move(arg);
    return Init_ControlCommand_backup_brake_value(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_brake_value
{
public:
  explicit Init_ControlCommand_brake_value(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_backup_brake_driving_mode brake_value(::ros2_interface::msg::ControlCommand::_brake_value_type arg)
  {
    msg_.brake_value = std::move(arg);
    return Init_ControlCommand_backup_brake_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_brake_driving_mode
{
public:
  explicit Init_ControlCommand_brake_driving_mode(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_brake_value brake_driving_mode(::ros2_interface::msg::ControlCommand::_brake_driving_mode_type arg)
  {
    msg_.brake_driving_mode = std::move(arg);
    return Init_ControlCommand_brake_value(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_accel_value
{
public:
  explicit Init_ControlCommand_accel_value(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_brake_driving_mode accel_value(::ros2_interface::msg::ControlCommand::_accel_value_type arg)
  {
    msg_.accel_value = std::move(arg);
    return Init_ControlCommand_brake_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_accel_driving_mode
{
public:
  explicit Init_ControlCommand_accel_driving_mode(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_accel_value accel_driving_mode(::ros2_interface::msg::ControlCommand::_accel_driving_mode_type arg)
  {
    msg_.accel_driving_mode = std::move(arg);
    return Init_ControlCommand_accel_value(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_rear_steering_rate
{
public:
  explicit Init_ControlCommand_rear_steering_rate(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_accel_driving_mode rear_steering_rate(::ros2_interface::msg::ControlCommand::_rear_steering_rate_type arg)
  {
    msg_.rear_steering_rate = std::move(arg);
    return Init_ControlCommand_accel_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_front_steering_rate
{
public:
  explicit Init_ControlCommand_front_steering_rate(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_rear_steering_rate front_steering_rate(::ros2_interface::msg::ControlCommand::_front_steering_rate_type arg)
  {
    msg_.front_steering_rate = std::move(arg);
    return Init_ControlCommand_rear_steering_rate(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_rear_steering_target
{
public:
  explicit Init_ControlCommand_rear_steering_target(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_front_steering_rate rear_steering_target(::ros2_interface::msg::ControlCommand::_rear_steering_target_type arg)
  {
    msg_.rear_steering_target = std::move(arg);
    return Init_ControlCommand_front_steering_rate(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_front_steering_target
{
public:
  explicit Init_ControlCommand_front_steering_target(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_rear_steering_target front_steering_target(::ros2_interface::msg::ControlCommand::_front_steering_target_type arg)
  {
    msg_.front_steering_target = std::move(arg);
    return Init_ControlCommand_rear_steering_target(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_steer_driving_mode
{
public:
  explicit Init_ControlCommand_steer_driving_mode(::ros2_interface::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_front_steering_target steer_driving_mode(::ros2_interface::msg::ControlCommand::_steer_driving_mode_type arg)
  {
    msg_.steer_driving_mode = std::move(arg);
    return Init_ControlCommand_front_steering_target(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

class Init_ControlCommand_header
{
public:
  Init_ControlCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_steer_driving_mode header(::ros2_interface::msg::ControlCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlCommand_steer_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ControlCommand>()
{
  return ros2_interface::msg::builder::Init_ControlCommand_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
