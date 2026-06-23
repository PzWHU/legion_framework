// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/WheelInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/wheel_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_WheelInfo_veh_lgt_accel_vld
{
public:
  explicit Init_WheelInfo_veh_lgt_accel_vld(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::WheelInfo veh_lgt_accel_vld(::ros2_interface::msg::WheelInfo::_veh_lgt_accel_vld_type arg)
  {
    msg_.veh_lgt_accel_vld = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_veh_lat_accel_vld
{
public:
  explicit Init_WheelInfo_veh_lat_accel_vld(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_veh_lgt_accel_vld veh_lat_accel_vld(::ros2_interface::msg::WheelInfo::_veh_lat_accel_vld_type arg)
  {
    msg_.veh_lat_accel_vld = std::move(arg);
    return Init_WheelInfo_veh_lgt_accel_vld(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_veh_lgt_accel
{
public:
  explicit Init_WheelInfo_veh_lgt_accel(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_veh_lat_accel_vld veh_lgt_accel(::ros2_interface::msg::WheelInfo::_veh_lgt_accel_type arg)
  {
    msg_.veh_lgt_accel = std::move(arg);
    return Init_WheelInfo_veh_lat_accel_vld(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_veh_lat_accel
{
public:
  explicit Init_WheelInfo_veh_lat_accel(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_veh_lgt_accel veh_lat_accel(::ros2_interface::msg::WheelInfo::_veh_lat_accel_type arg)
  {
    msg_.veh_lat_accel = std::move(arg);
    return Init_WheelInfo_veh_lgt_accel(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wss_rr_edges_sum_vld
{
public:
  explicit Init_WheelInfo_wss_rr_edges_sum_vld(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_veh_lat_accel wss_rr_edges_sum_vld(::ros2_interface::msg::WheelInfo::_wss_rr_edges_sum_vld_type arg)
  {
    msg_.wss_rr_edges_sum_vld = std::move(arg);
    return Init_WheelInfo_veh_lat_accel(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wss_rl_edges_sum_vld
{
public:
  explicit Init_WheelInfo_wss_rl_edges_sum_vld(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wss_rr_edges_sum_vld wss_rl_edges_sum_vld(::ros2_interface::msg::WheelInfo::_wss_rl_edges_sum_vld_type arg)
  {
    msg_.wss_rl_edges_sum_vld = std::move(arg);
    return Init_WheelInfo_wss_rr_edges_sum_vld(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wss_fr_edges_sum_vld
{
public:
  explicit Init_WheelInfo_wss_fr_edges_sum_vld(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wss_rl_edges_sum_vld wss_fr_edges_sum_vld(::ros2_interface::msg::WheelInfo::_wss_fr_edges_sum_vld_type arg)
  {
    msg_.wss_fr_edges_sum_vld = std::move(arg);
    return Init_WheelInfo_wss_rl_edges_sum_vld(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wss_fl_edges_sum_vld
{
public:
  explicit Init_WheelInfo_wss_fl_edges_sum_vld(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wss_fr_edges_sum_vld wss_fl_edges_sum_vld(::ros2_interface::msg::WheelInfo::_wss_fl_edges_sum_vld_type arg)
  {
    msg_.wss_fl_edges_sum_vld = std::move(arg);
    return Init_WheelInfo_wss_fr_edges_sum_vld(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wss_rr_edges_sum
{
public:
  explicit Init_WheelInfo_wss_rr_edges_sum(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wss_fl_edges_sum_vld wss_rr_edges_sum(::ros2_interface::msg::WheelInfo::_wss_rr_edges_sum_type arg)
  {
    msg_.wss_rr_edges_sum = std::move(arg);
    return Init_WheelInfo_wss_fl_edges_sum_vld(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wss_rl_edges_sum
{
public:
  explicit Init_WheelInfo_wss_rl_edges_sum(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wss_rr_edges_sum wss_rl_edges_sum(::ros2_interface::msg::WheelInfo::_wss_rl_edges_sum_type arg)
  {
    msg_.wss_rl_edges_sum = std::move(arg);
    return Init_WheelInfo_wss_rr_edges_sum(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wss_fr_edges_sum
{
public:
  explicit Init_WheelInfo_wss_fr_edges_sum(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wss_rl_edges_sum wss_fr_edges_sum(::ros2_interface::msg::WheelInfo::_wss_fr_edges_sum_type arg)
  {
    msg_.wss_fr_edges_sum = std::move(arg);
    return Init_WheelInfo_wss_rl_edges_sum(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wss_fl_edges_sum
{
public:
  explicit Init_WheelInfo_wss_fl_edges_sum(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wss_fr_edges_sum wss_fl_edges_sum(::ros2_interface::msg::WheelInfo::_wss_fl_edges_sum_type arg)
  {
    msg_.wss_fl_edges_sum = std::move(arg);
    return Init_WheelInfo_wss_fr_edges_sum(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_yaw_rate
{
public:
  explicit Init_WheelInfo_yaw_rate(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wss_fl_edges_sum yaw_rate(::ros2_interface::msg::WheelInfo::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_WheelInfo_wss_fl_edges_sum(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wheel_spd_fl
{
public:
  explicit Init_WheelInfo_wheel_spd_fl(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_yaw_rate wheel_spd_fl(::ros2_interface::msg::WheelInfo::_wheel_spd_fl_type arg)
  {
    msg_.wheel_spd_fl = std::move(arg);
    return Init_WheelInfo_yaw_rate(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wheel_direction_fl
{
public:
  explicit Init_WheelInfo_wheel_direction_fl(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wheel_spd_fl wheel_direction_fl(::ros2_interface::msg::WheelInfo::_wheel_direction_fl_type arg)
  {
    msg_.wheel_direction_fl = std::move(arg);
    return Init_WheelInfo_wheel_spd_fl(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wheel_spd_fr
{
public:
  explicit Init_WheelInfo_wheel_spd_fr(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wheel_direction_fl wheel_spd_fr(::ros2_interface::msg::WheelInfo::_wheel_spd_fr_type arg)
  {
    msg_.wheel_spd_fr = std::move(arg);
    return Init_WheelInfo_wheel_direction_fl(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wheel_direction_fr
{
public:
  explicit Init_WheelInfo_wheel_direction_fr(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wheel_spd_fr wheel_direction_fr(::ros2_interface::msg::WheelInfo::_wheel_direction_fr_type arg)
  {
    msg_.wheel_direction_fr = std::move(arg);
    return Init_WheelInfo_wheel_spd_fr(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wheel_spd_rl
{
public:
  explicit Init_WheelInfo_wheel_spd_rl(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wheel_direction_fr wheel_spd_rl(::ros2_interface::msg::WheelInfo::_wheel_spd_rl_type arg)
  {
    msg_.wheel_spd_rl = std::move(arg);
    return Init_WheelInfo_wheel_direction_fr(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wheel_direction_rl
{
public:
  explicit Init_WheelInfo_wheel_direction_rl(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wheel_spd_rl wheel_direction_rl(::ros2_interface::msg::WheelInfo::_wheel_direction_rl_type arg)
  {
    msg_.wheel_direction_rl = std::move(arg);
    return Init_WheelInfo_wheel_spd_rl(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wheel_spd_rr
{
public:
  explicit Init_WheelInfo_wheel_spd_rr(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wheel_direction_rl wheel_spd_rr(::ros2_interface::msg::WheelInfo::_wheel_spd_rr_type arg)
  {
    msg_.wheel_spd_rr = std::move(arg);
    return Init_WheelInfo_wheel_direction_rl(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_wheel_direction_rr
{
public:
  explicit Init_WheelInfo_wheel_direction_rr(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wheel_spd_rr wheel_direction_rr(::ros2_interface::msg::WheelInfo::_wheel_direction_rr_type arg)
  {
    msg_.wheel_direction_rr = std::move(arg);
    return Init_WheelInfo_wheel_spd_rr(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_gear_vld
{
public:
  explicit Init_WheelInfo_gear_vld(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_wheel_direction_rr gear_vld(::ros2_interface::msg::WheelInfo::_gear_vld_type arg)
  {
    msg_.gear_vld = std::move(arg);
    return Init_WheelInfo_wheel_direction_rr(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_gear
{
public:
  explicit Init_WheelInfo_gear(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_gear_vld gear(::ros2_interface::msg::WheelInfo::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_WheelInfo_gear_vld(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_veh_spd_vld
{
public:
  explicit Init_WheelInfo_veh_spd_vld(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_gear veh_spd_vld(::ros2_interface::msg::WheelInfo::_veh_spd_vld_type arg)
  {
    msg_.veh_spd_vld = std::move(arg);
    return Init_WheelInfo_gear(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_speed_mps
{
public:
  explicit Init_WheelInfo_speed_mps(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_veh_spd_vld speed_mps(::ros2_interface::msg::WheelInfo::_speed_mps_type arg)
  {
    msg_.speed_mps = std::move(arg);
    return Init_WheelInfo_veh_spd_vld(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_steering_rate_dps
{
public:
  explicit Init_WheelInfo_steering_rate_dps(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_speed_mps steering_rate_dps(::ros2_interface::msg::WheelInfo::_steering_rate_dps_type arg)
  {
    msg_.steering_rate_dps = std::move(arg);
    return Init_WheelInfo_speed_mps(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_steering_torque_nm
{
public:
  explicit Init_WheelInfo_steering_torque_nm(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_steering_rate_dps steering_torque_nm(::ros2_interface::msg::WheelInfo::_steering_torque_nm_type arg)
  {
    msg_.steering_torque_nm = std::move(arg);
    return Init_WheelInfo_steering_rate_dps(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_steering_value
{
public:
  explicit Init_WheelInfo_steering_value(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_steering_torque_nm steering_value(::ros2_interface::msg::WheelInfo::_steering_value_type arg)
  {
    msg_.steering_value = std::move(arg);
    return Init_WheelInfo_steering_torque_nm(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_steer_driving_mode
{
public:
  explicit Init_WheelInfo_steer_driving_mode(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_steering_value steer_driving_mode(::ros2_interface::msg::WheelInfo::_steer_driving_mode_type arg)
  {
    msg_.steer_driving_mode = std::move(arg);
    return Init_WheelInfo_steering_value(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_moving_status
{
public:
  explicit Init_WheelInfo_moving_status(::ros2_interface::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_steer_driving_mode moving_status(::ros2_interface::msg::WheelInfo::_moving_status_type arg)
  {
    msg_.moving_status = std::move(arg);
    return Init_WheelInfo_steer_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

class Init_WheelInfo_header
{
public:
  Init_WheelInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelInfo_moving_status header(::ros2_interface::msg::WheelInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelInfo_moving_status(msg_);
  }

private:
  ::ros2_interface::msg::WheelInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::WheelInfo>()
{
  return ros2_interface::msg::builder::Init_WheelInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__BUILDER_HPP_
