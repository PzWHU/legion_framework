// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PlanningCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/planning_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PlanningCmd_rr_door_ctrl
{
public:
  explicit Init_PlanningCmd_rr_door_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PlanningCmd rr_door_ctrl(::ros2_interface::msg::PlanningCmd::_rr_door_ctrl_type arg)
  {
    msg_.rr_door_ctrl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_lr_door_ctrl
{
public:
  explicit Init_PlanningCmd_lr_door_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_rr_door_ctrl lr_door_ctrl(::ros2_interface::msg::PlanningCmd::_lr_door_ctrl_type arg)
  {
    msg_.lr_door_ctrl = std::move(arg);
    return Init_PlanningCmd_rr_door_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_rf_door_ctrl
{
public:
  explicit Init_PlanningCmd_rf_door_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_lr_door_ctrl rf_door_ctrl(::ros2_interface::msg::PlanningCmd::_rf_door_ctrl_type arg)
  {
    msg_.rf_door_ctrl = std::move(arg);
    return Init_PlanningCmd_lr_door_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_lf_door_ctrl
{
public:
  explicit Init_PlanningCmd_lf_door_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_rf_door_ctrl lf_door_ctrl(::ros2_interface::msg::PlanningCmd::_lf_door_ctrl_type arg)
  {
    msg_.lf_door_ctrl = std::move(arg);
    return Init_PlanningCmd_rf_door_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_alarm_lamp_ctrl
{
public:
  explicit Init_PlanningCmd_alarm_lamp_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_lf_door_ctrl alarm_lamp_ctrl(::ros2_interface::msg::PlanningCmd::_alarm_lamp_ctrl_type arg)
  {
    msg_.alarm_lamp_ctrl = std::move(arg);
    return Init_PlanningCmd_lf_door_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_brake_lamp_ctrl
{
public:
  explicit Init_PlanningCmd_brake_lamp_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_alarm_lamp_ctrl brake_lamp_ctrl(::ros2_interface::msg::PlanningCmd::_brake_lamp_ctrl_type arg)
  {
    msg_.brake_lamp_ctrl = std::move(arg);
    return Init_PlanningCmd_alarm_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_rear_fog_lamp_ctrl
{
public:
  explicit Init_PlanningCmd_rear_fog_lamp_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_brake_lamp_ctrl rear_fog_lamp_ctrl(::ros2_interface::msg::PlanningCmd::_rear_fog_lamp_ctrl_type arg)
  {
    msg_.rear_fog_lamp_ctrl = std::move(arg);
    return Init_PlanningCmd_brake_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_front_fog_lamp_ctrl
{
public:
  explicit Init_PlanningCmd_front_fog_lamp_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_rear_fog_lamp_ctrl front_fog_lamp_ctrl(::ros2_interface::msg::PlanningCmd::_front_fog_lamp_ctrl_type arg)
  {
    msg_.front_fog_lamp_ctrl = std::move(arg);
    return Init_PlanningCmd_rear_fog_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_position_lamp_ctrl
{
public:
  explicit Init_PlanningCmd_position_lamp_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_front_fog_lamp_ctrl position_lamp_ctrl(::ros2_interface::msg::PlanningCmd::_position_lamp_ctrl_type arg)
  {
    msg_.position_lamp_ctrl = std::move(arg);
    return Init_PlanningCmd_front_fog_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_rear_wiper_ctrl
{
public:
  explicit Init_PlanningCmd_rear_wiper_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_position_lamp_ctrl rear_wiper_ctrl(::ros2_interface::msg::PlanningCmd::_rear_wiper_ctrl_type arg)
  {
    msg_.rear_wiper_ctrl = std::move(arg);
    return Init_PlanningCmd_position_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_front_wiper_ctrl
{
public:
  explicit Init_PlanningCmd_front_wiper_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_rear_wiper_ctrl front_wiper_ctrl(::ros2_interface::msg::PlanningCmd::_front_wiper_ctrl_type arg)
  {
    msg_.front_wiper_ctrl = std::move(arg);
    return Init_PlanningCmd_rear_wiper_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_horn_ctrl
{
public:
  explicit Init_PlanningCmd_horn_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_front_wiper_ctrl horn_ctrl(::ros2_interface::msg::PlanningCmd::_horn_ctrl_type arg)
  {
    msg_.horn_ctrl = std::move(arg);
    return Init_PlanningCmd_front_wiper_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_low_beam_ctrl
{
public:
  explicit Init_PlanningCmd_low_beam_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_horn_ctrl low_beam_ctrl(::ros2_interface::msg::PlanningCmd::_low_beam_ctrl_type arg)
  {
    msg_.low_beam_ctrl = std::move(arg);
    return Init_PlanningCmd_horn_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_high_beam_ctrl
{
public:
  explicit Init_PlanningCmd_high_beam_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_low_beam_ctrl high_beam_ctrl(::ros2_interface::msg::PlanningCmd::_high_beam_ctrl_type arg)
  {
    msg_.high_beam_ctrl = std::move(arg);
    return Init_PlanningCmd_low_beam_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_turn_lamp_ctrl
{
public:
  explicit Init_PlanningCmd_turn_lamp_ctrl(::ros2_interface::msg::PlanningCmd & msg)
  : msg_(msg)
  {}
  Init_PlanningCmd_high_beam_ctrl turn_lamp_ctrl(::ros2_interface::msg::PlanningCmd::_turn_lamp_ctrl_type arg)
  {
    msg_.turn_lamp_ctrl = std::move(arg);
    return Init_PlanningCmd_high_beam_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

class Init_PlanningCmd_header
{
public:
  Init_PlanningCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningCmd_turn_lamp_ctrl header(::ros2_interface::msg::PlanningCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningCmd_turn_lamp_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::PlanningCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PlanningCmd>()
{
  return ros2_interface::msg::builder::Init_PlanningCmd_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__BUILDER_HPP_
