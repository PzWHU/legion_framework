// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Ins.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__INS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__INS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/ins__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Ins_acceleration
{
public:
  explicit Init_Ins_acceleration(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Ins acceleration(::ros2_interface::msg::Ins::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_angular_velocity
{
public:
  explicit Init_Ins_angular_velocity(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_acceleration angular_velocity(::ros2_interface::msg::Ins::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Ins_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_rtk_baseline
{
public:
  explicit Init_Ins_rtk_baseline(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_angular_velocity rtk_baseline(::ros2_interface::msg::Ins::_rtk_baseline_type arg)
  {
    msg_.rtk_baseline = std::move(arg);
    return Init_Ins_angular_velocity(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_aoc
{
public:
  explicit Init_Ins_aoc(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_rtk_baseline aoc(::ros2_interface::msg::Ins::_aoc_type arg)
  {
    msg_.aoc = std::move(arg);
    return Init_Ins_rtk_baseline(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_solution_source_dual
{
public:
  explicit Init_Ins_solution_source_dual(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_aoc solution_source_dual(::ros2_interface::msg::Ins::_solution_source_dual_type arg)
  {
    msg_.solution_source_dual = std::move(arg);
    return Init_Ins_aoc(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_position_type_dual
{
public:
  explicit Init_Ins_position_type_dual(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_solution_source_dual position_type_dual(::ros2_interface::msg::Ins::_position_type_dual_type arg)
  {
    msg_.position_type_dual = std::move(arg);
    return Init_Ins_solution_source_dual(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_solution_status_dual
{
public:
  explicit Init_Ins_solution_status_dual(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_position_type_dual solution_status_dual(::ros2_interface::msg::Ins::_solution_status_dual_type arg)
  {
    msg_.solution_status_dual = std::move(arg);
    return Init_Ins_position_type_dual(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_base_line_length_dual
{
public:
  explicit Init_Ins_base_line_length_dual(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_solution_status_dual base_line_length_dual(::ros2_interface::msg::Ins::_base_line_length_dual_type arg)
  {
    msg_.base_line_length_dual = std::move(arg);
    return Init_Ins_solution_status_dual(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_sd_angle_dual
{
public:
  explicit Init_Ins_sd_angle_dual(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_base_line_length_dual sd_angle_dual(::ros2_interface::msg::Ins::_sd_angle_dual_type arg)
  {
    msg_.sd_angle_dual = std::move(arg);
    return Init_Ins_base_line_length_dual(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_attitude_dual
{
public:
  explicit Init_Ins_attitude_dual(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_sd_angle_dual attitude_dual(::ros2_interface::msg::Ins::_attitude_dual_type arg)
  {
    msg_.attitude_dual = std::move(arg);
    return Init_Ins_sd_angle_dual(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_v_dop
{
public:
  explicit Init_Ins_v_dop(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_attitude_dual v_dop(::ros2_interface::msg::Ins::_v_dop_type arg)
  {
    msg_.v_dop = std::move(arg);
    return Init_Ins_attitude_dual(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_h_dop
{
public:
  explicit Init_Ins_h_dop(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_v_dop h_dop(::ros2_interface::msg::Ins::_h_dop_type arg)
  {
    msg_.h_dop = std::move(arg);
    return Init_Ins_v_dop(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_p_dop
{
public:
  explicit Init_Ins_p_dop(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_h_dop p_dop(::ros2_interface::msg::Ins::_p_dop_type arg)
  {
    msg_.p_dop = std::move(arg);
    return Init_Ins_h_dop(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_position_type
{
public:
  explicit Init_Ins_position_type(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_p_dop position_type(::ros2_interface::msg::Ins::_position_type_type arg)
  {
    msg_.position_type = std::move(arg);
    return Init_Ins_p_dop(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_solution_status
{
public:
  explicit Init_Ins_solution_status(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_position_type solution_status(::ros2_interface::msg::Ins::_solution_status_type arg)
  {
    msg_.solution_status = std::move(arg);
    return Init_Ins_position_type(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_sat_in_view_num
{
public:
  explicit Init_Ins_sat_in_view_num(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_solution_status sat_in_view_num(::ros2_interface::msg::Ins::_sat_in_view_num_type arg)
  {
    msg_.sat_in_view_num = std::move(arg);
    return Init_Ins_solution_status(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_sat_use_num
{
public:
  explicit Init_Ins_sat_use_num(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_sat_in_view_num sat_use_num(::ros2_interface::msg::Ins::_sat_use_num_type arg)
  {
    msg_.sat_use_num = std::move(arg);
    return Init_Ins_sat_in_view_num(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_second
{
public:
  explicit Init_Ins_second(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_sat_use_num second(::ros2_interface::msg::Ins::_second_type arg)
  {
    msg_.second = std::move(arg);
    return Init_Ins_sat_use_num(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_cep95
{
public:
  explicit Init_Ins_cep95(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_second cep95(::ros2_interface::msg::Ins::_cep95_type arg)
  {
    msg_.cep95 = std::move(arg);
    return Init_Ins_second(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_cep68
{
public:
  explicit Init_Ins_cep68(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_cep95 cep68(::ros2_interface::msg::Ins::_cep68_type arg)
  {
    msg_.cep68 = std::move(arg);
    return Init_Ins_cep95(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_sd_velocity
{
public:
  explicit Init_Ins_sd_velocity(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_cep68 sd_velocity(::ros2_interface::msg::Ins::_sd_velocity_type arg)
  {
    msg_.sd_velocity = std::move(arg);
    return Init_Ins_cep68(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_sd_attitude
{
public:
  explicit Init_Ins_sd_attitude(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_sd_velocity sd_attitude(::ros2_interface::msg::Ins::_sd_attitude_type arg)
  {
    msg_.sd_attitude = std::move(arg);
    return Init_Ins_sd_velocity(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_sd_position
{
public:
  explicit Init_Ins_sd_position(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_sd_attitude sd_position(::ros2_interface::msg::Ins::_sd_position_type arg)
  {
    msg_.sd_position = std::move(arg);
    return Init_Ins_sd_attitude(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_linear_velocity
{
public:
  explicit Init_Ins_linear_velocity(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_sd_position linear_velocity(::ros2_interface::msg::Ins::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_Ins_sd_position(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_attitude
{
public:
  explicit Init_Ins_attitude(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_linear_velocity attitude(::ros2_interface::msg::Ins::_attitude_type arg)
  {
    msg_.attitude = std::move(arg);
    return Init_Ins_linear_velocity(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_utm_zone_char
{
public:
  explicit Init_Ins_utm_zone_char(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_attitude utm_zone_char(::ros2_interface::msg::Ins::_utm_zone_char_type arg)
  {
    msg_.utm_zone_char = std::move(arg);
    return Init_Ins_attitude(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_utm_zone_mumber
{
public:
  explicit Init_Ins_utm_zone_mumber(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_utm_zone_char utm_zone_mumber(::ros2_interface::msg::Ins::_utm_zone_mumber_type arg)
  {
    msg_.utm_zone_mumber = std::move(arg);
    return Init_Ins_utm_zone_char(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_utm_position
{
public:
  explicit Init_Ins_utm_position(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_utm_zone_mumber utm_position(::ros2_interface::msg::Ins::_utm_position_type arg)
  {
    msg_.utm_position = std::move(arg);
    return Init_Ins_utm_zone_mumber(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_elevation
{
public:
  explicit Init_Ins_elevation(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_utm_position elevation(::ros2_interface::msg::Ins::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_Ins_utm_position(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_longitude
{
public:
  explicit Init_Ins_longitude(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_elevation longitude(::ros2_interface::msg::Ins::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Ins_elevation(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_latitude
{
public:
  explicit Init_Ins_latitude(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_longitude latitude(::ros2_interface::msg::Ins::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Ins_longitude(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_is_valid
{
public:
  explicit Init_Ins_is_valid(::ros2_interface::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_latitude is_valid(::ros2_interface::msg::Ins::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_Ins_latitude(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

class Init_Ins_header
{
public:
  Init_Ins_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ins_is_valid header(::ros2_interface::msg::Ins::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Ins_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::Ins msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Ins>()
{
  return ros2_interface::msg::builder::Init_Ins_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__INS__BUILDER_HPP_
