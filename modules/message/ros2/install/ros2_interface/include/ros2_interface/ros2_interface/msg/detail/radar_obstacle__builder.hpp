// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RadarObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/radar_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RadarObstacle_track_type
{
public:
  explicit Init_RadarObstacle_track_type(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RadarObstacle track_type(::ros2_interface::msg::RadarObstacle::_track_type_type arg)
  {
    msg_.track_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_track_state
{
public:
  explicit Init_RadarObstacle_track_state(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_track_type track_state(::ros2_interface::msg::RadarObstacle::_track_state_type arg)
  {
    msg_.track_state = std::move(arg);
    return Init_RadarObstacle_track_type(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_mov_property
{
public:
  explicit Init_RadarObstacle_mov_property(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_track_state mov_property(::ros2_interface::msg::RadarObstacle::_mov_property_type arg)
  {
    msg_.mov_property = std::move(arg);
    return Init_RadarObstacle_track_state(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_exist_probability
{
public:
  explicit Init_RadarObstacle_exist_probability(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_mov_property exist_probability(::ros2_interface::msg::RadarObstacle::_exist_probability_type arg)
  {
    msg_.exist_probability = std::move(arg);
    return Init_RadarObstacle_mov_property(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_overpass_probability
{
public:
  explicit Init_RadarObstacle_overpass_probability(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_exist_probability overpass_probability(::ros2_interface::msg::RadarObstacle::_overpass_probability_type arg)
  {
    msg_.overpass_probability = std::move(arg);
    return Init_RadarObstacle_exist_probability(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_underpass_probability
{
public:
  explicit Init_RadarObstacle_underpass_probability(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_overpass_probability underpass_probability(::ros2_interface::msg::RadarObstacle::_underpass_probability_type arg)
  {
    msg_.underpass_probability = std::move(arg);
    return Init_RadarObstacle_overpass_probability(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_status
{
public:
  explicit Init_RadarObstacle_status(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_underpass_probability status(::ros2_interface::msg::RadarObstacle::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RadarObstacle_underpass_probability(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_moving_frames_count
{
public:
  explicit Init_RadarObstacle_moving_frames_count(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_status moving_frames_count(::ros2_interface::msg::RadarObstacle::_moving_frames_count_type arg)
  {
    msg_.moving_frames_count = std::move(arg);
    return Init_RadarObstacle_status(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_count
{
public:
  explicit Init_RadarObstacle_count(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_moving_frames_count count(::ros2_interface::msg::RadarObstacle::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_RadarObstacle_moving_frames_count(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_yaw_rms
{
public:
  explicit Init_RadarObstacle_yaw_rms(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_count yaw_rms(::ros2_interface::msg::RadarObstacle::_yaw_rms_type arg)
  {
    msg_.yaw_rms = std::move(arg);
    return Init_RadarObstacle_count(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_yaw
{
public:
  explicit Init_RadarObstacle_yaw(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_yaw_rms yaw(::ros2_interface::msg::RadarObstacle::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_RadarObstacle_yaw_rms(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_orient_rms
{
public:
  explicit Init_RadarObstacle_orient_rms(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_yaw orient_rms(::ros2_interface::msg::RadarObstacle::_orient_rms_type arg)
  {
    msg_.orient_rms = std::move(arg);
    return Init_RadarObstacle_yaw(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_orientation
{
public:
  explicit Init_RadarObstacle_orientation(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_orient_rms orientation(::ros2_interface::msg::RadarObstacle::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RadarObstacle_orient_rms(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_absolute_acceleration_rms
{
public:
  explicit Init_RadarObstacle_absolute_acceleration_rms(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_orientation absolute_acceleration_rms(::ros2_interface::msg::RadarObstacle::_absolute_acceleration_rms_type arg)
  {
    msg_.absolute_acceleration_rms = std::move(arg);
    return Init_RadarObstacle_orientation(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_absolute_acceleration
{
public:
  explicit Init_RadarObstacle_absolute_acceleration(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_absolute_acceleration_rms absolute_acceleration(::ros2_interface::msg::RadarObstacle::_absolute_acceleration_type arg)
  {
    msg_.absolute_acceleration = std::move(arg);
    return Init_RadarObstacle_absolute_acceleration_rms(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_absolute_velocity_rms
{
public:
  explicit Init_RadarObstacle_absolute_velocity_rms(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_absolute_acceleration absolute_velocity_rms(::ros2_interface::msg::RadarObstacle::_absolute_velocity_rms_type arg)
  {
    msg_.absolute_velocity_rms = std::move(arg);
    return Init_RadarObstacle_absolute_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_absolute_velocity
{
public:
  explicit Init_RadarObstacle_absolute_velocity(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_absolute_velocity_rms absolute_velocity(::ros2_interface::msg::RadarObstacle::_absolute_velocity_type arg)
  {
    msg_.absolute_velocity = std::move(arg);
    return Init_RadarObstacle_absolute_velocity_rms(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_absolute_position_rms
{
public:
  explicit Init_RadarObstacle_absolute_position_rms(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_absolute_velocity absolute_position_rms(::ros2_interface::msg::RadarObstacle::_absolute_position_rms_type arg)
  {
    msg_.absolute_position_rms = std::move(arg);
    return Init_RadarObstacle_absolute_velocity(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_absolute_position
{
public:
  explicit Init_RadarObstacle_absolute_position(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_absolute_position_rms absolute_position(::ros2_interface::msg::RadarObstacle::_absolute_position_type arg)
  {
    msg_.absolute_position = std::move(arg);
    return Init_RadarObstacle_absolute_position_rms(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_theta
{
public:
  explicit Init_RadarObstacle_theta(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_absolute_position theta(::ros2_interface::msg::RadarObstacle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_RadarObstacle_absolute_position(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_height
{
public:
  explicit Init_RadarObstacle_height(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_theta height(::ros2_interface::msg::RadarObstacle::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RadarObstacle_theta(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_length
{
public:
  explicit Init_RadarObstacle_length(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_height length(::ros2_interface::msg::RadarObstacle::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_RadarObstacle_height(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_width
{
public:
  explicit Init_RadarObstacle_width(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_length width(::ros2_interface::msg::RadarObstacle::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RadarObstacle_length(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_moving_status
{
public:
  explicit Init_RadarObstacle_moving_status(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_width moving_status(::ros2_interface::msg::RadarObstacle::_moving_status_type arg)
  {
    msg_.moving_status = std::move(arg);
    return Init_RadarObstacle_width(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_snr
{
public:
  explicit Init_RadarObstacle_snr(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_moving_status snr(::ros2_interface::msg::RadarObstacle::_snr_type arg)
  {
    msg_.snr = std::move(arg);
    return Init_RadarObstacle_moving_status(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_rcs
{
public:
  explicit Init_RadarObstacle_rcs(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_snr rcs(::ros2_interface::msg::RadarObstacle::_rcs_type arg)
  {
    msg_.rcs = std::move(arg);
    return Init_RadarObstacle_snr(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_relative_acceleration_rms
{
public:
  explicit Init_RadarObstacle_relative_acceleration_rms(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_rcs relative_acceleration_rms(::ros2_interface::msg::RadarObstacle::_relative_acceleration_rms_type arg)
  {
    msg_.relative_acceleration_rms = std::move(arg);
    return Init_RadarObstacle_rcs(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_relative_acceleration
{
public:
  explicit Init_RadarObstacle_relative_acceleration(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_relative_acceleration_rms relative_acceleration(::ros2_interface::msg::RadarObstacle::_relative_acceleration_type arg)
  {
    msg_.relative_acceleration = std::move(arg);
    return Init_RadarObstacle_relative_acceleration_rms(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_relative_velocity_rms
{
public:
  explicit Init_RadarObstacle_relative_velocity_rms(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_relative_acceleration relative_velocity_rms(::ros2_interface::msg::RadarObstacle::_relative_velocity_rms_type arg)
  {
    msg_.relative_velocity_rms = std::move(arg);
    return Init_RadarObstacle_relative_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_relative_velocity
{
public:
  explicit Init_RadarObstacle_relative_velocity(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_relative_velocity_rms relative_velocity(::ros2_interface::msg::RadarObstacle::_relative_velocity_type arg)
  {
    msg_.relative_velocity = std::move(arg);
    return Init_RadarObstacle_relative_velocity_rms(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_relative_position_rms
{
public:
  explicit Init_RadarObstacle_relative_position_rms(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_relative_velocity relative_position_rms(::ros2_interface::msg::RadarObstacle::_relative_position_rms_type arg)
  {
    msg_.relative_position_rms = std::move(arg);
    return Init_RadarObstacle_relative_velocity(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_relative_position
{
public:
  explicit Init_RadarObstacle_relative_position(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_relative_position_rms relative_position(::ros2_interface::msg::RadarObstacle::_relative_position_type arg)
  {
    msg_.relative_position = std::move(arg);
    return Init_RadarObstacle_relative_position_rms(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_life_time
{
public:
  explicit Init_RadarObstacle_life_time(::ros2_interface::msg::RadarObstacle & msg)
  : msg_(msg)
  {}
  Init_RadarObstacle_relative_position life_time(::ros2_interface::msg::RadarObstacle::_life_time_type arg)
  {
    msg_.life_time = std::move(arg);
    return Init_RadarObstacle_relative_position(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

class Init_RadarObstacle_id
{
public:
  Init_RadarObstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObstacle_life_time id(::ros2_interface::msg::RadarObstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RadarObstacle_life_time(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RadarObstacle>()
{
  return ros2_interface::msg::builder::Init_RadarObstacle_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__BUILDER_HPP_
