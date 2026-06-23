// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Location_angular_velocity_std_dev
{
public:
  explicit Init_Location_angular_velocity_std_dev(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Location angular_velocity_std_dev(::ros2_interface::msg::Location::_angular_velocity_std_dev_type arg)
  {
    msg_.angular_velocity_std_dev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_linear_acceleration_std_dev
{
public:
  explicit Init_Location_linear_acceleration_std_dev(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_angular_velocity_std_dev linear_acceleration_std_dev(::ros2_interface::msg::Location::_linear_acceleration_std_dev_type arg)
  {
    msg_.linear_acceleration_std_dev = std::move(arg);
    return Init_Location_angular_velocity_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_linear_velocity_std_dev
{
public:
  explicit Init_Location_linear_velocity_std_dev(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_linear_acceleration_std_dev linear_velocity_std_dev(::ros2_interface::msg::Location::_linear_velocity_std_dev_type arg)
  {
    msg_.linear_velocity_std_dev = std::move(arg);
    return Init_Location_linear_acceleration_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_orientation_std_dev
{
public:
  explicit Init_Location_orientation_std_dev(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_linear_velocity_std_dev orientation_std_dev(::ros2_interface::msg::Location::_orientation_std_dev_type arg)
  {
    msg_.orientation_std_dev = std::move(arg);
    return Init_Location_linear_velocity_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_position_std_dev
{
public:
  explicit Init_Location_position_std_dev(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_orientation_std_dev position_std_dev(::ros2_interface::msg::Location::_position_std_dev_type arg)
  {
    msg_.position_std_dev = std::move(arg);
    return Init_Location_orientation_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_utm_position_next
{
public:
  explicit Init_Location_utm_position_next(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_position_std_dev utm_position_next(::ros2_interface::msg::Location::_utm_position_next_type arg)
  {
    msg_.utm_position_next = std::move(arg);
    return Init_Location_position_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_change_origin_flag
{
public:
  explicit Init_Location_change_origin_flag(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_utm_position_next change_origin_flag(::ros2_interface::msg::Location::_change_origin_flag_type arg)
  {
    msg_.change_origin_flag = std::move(arg);
    return Init_Location_utm_position_next(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_utm_position
{
public:
  explicit Init_Location_utm_position(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_change_origin_flag utm_position(::ros2_interface::msg::Location::_utm_position_type arg)
  {
    msg_.utm_position = std::move(arg);
    return Init_Location_change_origin_flag(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_origin_lon
{
public:
  explicit Init_Location_origin_lon(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_utm_position origin_lon(::ros2_interface::msg::Location::_origin_lon_type arg)
  {
    msg_.origin_lon = std::move(arg);
    return Init_Location_utm_position(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_origin_lat
{
public:
  explicit Init_Location_origin_lat(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_origin_lon origin_lat(::ros2_interface::msg::Location::_origin_lat_type arg)
  {
    msg_.origin_lat = std::move(arg);
    return Init_Location_origin_lon(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_location_valid_flag
{
public:
  explicit Init_Location_location_valid_flag(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_origin_lat location_valid_flag(::ros2_interface::msg::Location::_location_valid_flag_type arg)
  {
    msg_.location_valid_flag = std::move(arg);
    return Init_Location_origin_lat(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_auxiliary_type
{
public:
  explicit Init_Location_auxiliary_type(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_location_valid_flag auxiliary_type(::ros2_interface::msg::Location::_auxiliary_type_type arg)
  {
    msg_.auxiliary_type = std::move(arg);
    return Init_Location_location_valid_flag(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_odom_type
{
public:
  explicit Init_Location_odom_type(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_auxiliary_type odom_type(::ros2_interface::msg::Location::_odom_type_type arg)
  {
    msg_.odom_type = std::move(arg);
    return Init_Location_auxiliary_type(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_rtk_flag
{
public:
  explicit Init_Location_rtk_flag(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_odom_type rtk_flag(::ros2_interface::msg::Location::_rtk_flag_type arg)
  {
    msg_.rtk_flag = std::move(arg);
    return Init_Location_odom_type(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_angular_velocity
{
public:
  explicit Init_Location_angular_velocity(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_rtk_flag angular_velocity(::ros2_interface::msg::Location::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Location_rtk_flag(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_linear_acceleration
{
public:
  explicit Init_Location_linear_acceleration(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_angular_velocity linear_acceleration(::ros2_interface::msg::Location::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Location_angular_velocity(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_linear_velocity
{
public:
  explicit Init_Location_linear_velocity(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_linear_acceleration linear_velocity(::ros2_interface::msg::Location::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_Location_linear_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_heading
{
public:
  explicit Init_Location_heading(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_linear_velocity heading(::ros2_interface::msg::Location::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Location_linear_velocity(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_roll
{
public:
  explicit Init_Location_roll(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_heading roll(::ros2_interface::msg::Location::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Location_heading(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_pitch
{
public:
  explicit Init_Location_pitch(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_roll pitch(::ros2_interface::msg::Location::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Location_roll(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_position
{
public:
  explicit Init_Location_position(::ros2_interface::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_pitch position(::ros2_interface::msg::Location::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Location_pitch(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

class Init_Location_header
{
public:
  Init_Location_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_position header(::ros2_interface::msg::Location::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Location_position(msg_);
  }

private:
  ::ros2_interface::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Location>()
{
  return ros2_interface::msg::builder::Init_Location_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOCATION__BUILDER_HPP_
