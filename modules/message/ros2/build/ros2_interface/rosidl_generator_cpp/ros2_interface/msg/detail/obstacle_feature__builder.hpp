// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ObstacleFeature.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/obstacle_feature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ObstacleFeature_adc_trajectory_point
{
public:
  explicit Init_ObstacleFeature_adc_trajectory_point(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ObstacleFeature adc_trajectory_point(::ros2_interface::msg::ObstacleFeature::_adc_trajectory_point_type arg)
  {
    msg_.adc_trajectory_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_predicted_trajectory
{
public:
  explicit Init_ObstacleFeature_predicted_trajectory(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_adc_trajectory_point predicted_trajectory(::ros2_interface::msg::ObstacleFeature::_predicted_trajectory_type arg)
  {
    msg_.predicted_trajectory = std::move(arg);
    return Init_ObstacleFeature_adc_trajectory_point(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_short_term_predicted_trajectory_points
{
public:
  explicit Init_ObstacleFeature_short_term_predicted_trajectory_points(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_predicted_trajectory short_term_predicted_trajectory_points(::ros2_interface::msg::ObstacleFeature::_short_term_predicted_trajectory_points_type arg)
  {
    msg_.short_term_predicted_trajectory_points = std::move(arg);
    return Init_ObstacleFeature_predicted_trajectory(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_future_trajectory_points
{
public:
  explicit Init_ObstacleFeature_future_trajectory_points(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_short_term_predicted_trajectory_points future_trajectory_points(::ros2_interface::msg::ObstacleFeature::_future_trajectory_points_type arg)
  {
    msg_.future_trajectory_points = std::move(arg);
    return Init_ObstacleFeature_short_term_predicted_trajectory_points(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_is_near_junction
{
public:
  explicit Init_ObstacleFeature_is_near_junction(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_future_trajectory_points is_near_junction(::ros2_interface::msg::ObstacleFeature::_is_near_junction_type arg)
  {
    msg_.is_near_junction = std::move(arg);
    return Init_ObstacleFeature_future_trajectory_points(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_priority
{
public:
  explicit Init_ObstacleFeature_priority(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_is_near_junction priority(::ros2_interface::msg::ObstacleFeature::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_ObstacleFeature_is_near_junction(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_label_update_time_delta
{
public:
  explicit Init_ObstacleFeature_label_update_time_delta(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_priority label_update_time_delta(::ros2_interface::msg::ObstacleFeature::_label_update_time_delta_type arg)
  {
    msg_.label_update_time_delta = std::move(arg);
    return Init_ObstacleFeature_priority(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_type
{
public:
  explicit Init_ObstacleFeature_type(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_label_update_time_delta type(::ros2_interface::msg::ObstacleFeature::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ObstacleFeature_label_update_time_delta(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_is_still
{
public:
  explicit Init_ObstacleFeature_is_still(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_type is_still(::ros2_interface::msg::ObstacleFeature::_is_still_type arg)
  {
    msg_.is_still = std::move(arg);
    return Init_ObstacleFeature_type(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_t_acc
{
public:
  explicit Init_ObstacleFeature_t_acc(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_is_still t_acc(::ros2_interface::msg::ObstacleFeature::_t_acc_type arg)
  {
    msg_.t_acc = std::move(arg);
    return Init_ObstacleFeature_is_still(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_t_acceleration
{
public:
  explicit Init_ObstacleFeature_t_acceleration(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_t_acc t_acceleration(::ros2_interface::msg::ObstacleFeature::_t_acceleration_type arg)
  {
    msg_.t_acceleration = std::move(arg);
    return Init_ObstacleFeature_t_acc(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_t_speed
{
public:
  explicit Init_ObstacleFeature_t_speed(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_t_acceleration t_speed(::ros2_interface::msg::ObstacleFeature::_t_speed_type arg)
  {
    msg_.t_speed = std::move(arg);
    return Init_ObstacleFeature_t_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_t_velocity_heading
{
public:
  explicit Init_ObstacleFeature_t_velocity_heading(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_t_speed t_velocity_heading(::ros2_interface::msg::ObstacleFeature::_t_velocity_heading_type arg)
  {
    msg_.t_velocity_heading = std::move(arg);
    return Init_ObstacleFeature_t_speed(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_t_velocity
{
public:
  explicit Init_ObstacleFeature_t_velocity(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_t_velocity_heading t_velocity(::ros2_interface::msg::ObstacleFeature::_t_velocity_type arg)
  {
    msg_.t_velocity = std::move(arg);
    return Init_ObstacleFeature_t_velocity_heading(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_t_position
{
public:
  explicit Init_ObstacleFeature_t_position(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_t_velocity t_position(::ros2_interface::msg::ObstacleFeature::_t_position_type arg)
  {
    msg_.t_position = std::move(arg);
    return Init_ObstacleFeature_t_velocity(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_timestamp
{
public:
  explicit Init_ObstacleFeature_timestamp(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_t_position timestamp(::ros2_interface::msg::ObstacleFeature::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ObstacleFeature_t_position(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_tracking_time
{
public:
  explicit Init_ObstacleFeature_tracking_time(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_timestamp tracking_time(::ros2_interface::msg::ObstacleFeature::_tracking_time_type arg)
  {
    msg_.tracking_time = std::move(arg);
    return Init_ObstacleFeature_timestamp(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_height
{
public:
  explicit Init_ObstacleFeature_height(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_tracking_time height(::ros2_interface::msg::ObstacleFeature::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ObstacleFeature_tracking_time(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_width
{
public:
  explicit Init_ObstacleFeature_width(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_height width(::ros2_interface::msg::ObstacleFeature::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ObstacleFeature_height(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_length
{
public:
  explicit Init_ObstacleFeature_length(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_width length(::ros2_interface::msg::ObstacleFeature::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_ObstacleFeature_width(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_theta
{
public:
  explicit Init_ObstacleFeature_theta(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_length theta(::ros2_interface::msg::ObstacleFeature::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_ObstacleFeature_length(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_acc
{
public:
  explicit Init_ObstacleFeature_acc(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_theta acc(::ros2_interface::msg::ObstacleFeature::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_ObstacleFeature_theta(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_speed
{
public:
  explicit Init_ObstacleFeature_speed(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_acc speed(::ros2_interface::msg::ObstacleFeature::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ObstacleFeature_acc(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_velocity_heading
{
public:
  explicit Init_ObstacleFeature_velocity_heading(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_speed velocity_heading(::ros2_interface::msg::ObstacleFeature::_velocity_heading_type arg)
  {
    msg_.velocity_heading = std::move(arg);
    return Init_ObstacleFeature_speed(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_acceleration
{
public:
  explicit Init_ObstacleFeature_acceleration(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_velocity_heading acceleration(::ros2_interface::msg::ObstacleFeature::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ObstacleFeature_velocity_heading(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_raw_velocity
{
public:
  explicit Init_ObstacleFeature_raw_velocity(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_acceleration raw_velocity(::ros2_interface::msg::ObstacleFeature::_raw_velocity_type arg)
  {
    msg_.raw_velocity = std::move(arg);
    return Init_ObstacleFeature_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_velocity
{
public:
  explicit Init_ObstacleFeature_velocity(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_raw_velocity velocity(::ros2_interface::msg::ObstacleFeature::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ObstacleFeature_raw_velocity(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_front_position
{
public:
  explicit Init_ObstacleFeature_front_position(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_velocity front_position(::ros2_interface::msg::ObstacleFeature::_front_position_type arg)
  {
    msg_.front_position = std::move(arg);
    return Init_ObstacleFeature_velocity(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_position
{
public:
  explicit Init_ObstacleFeature_position(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_front_position position(::ros2_interface::msg::ObstacleFeature::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ObstacleFeature_front_position(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_polygon_point
{
public:
  explicit Init_ObstacleFeature_polygon_point(::ros2_interface::msg::ObstacleFeature & msg)
  : msg_(msg)
  {}
  Init_ObstacleFeature_position polygon_point(::ros2_interface::msg::ObstacleFeature::_polygon_point_type arg)
  {
    msg_.polygon_point = std::move(arg);
    return Init_ObstacleFeature_position(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

class Init_ObstacleFeature_obstacle_id
{
public:
  Init_ObstacleFeature_obstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleFeature_polygon_point obstacle_id(::ros2_interface::msg::ObstacleFeature::_obstacle_id_type arg)
  {
    msg_.obstacle_id = std::move(arg);
    return Init_ObstacleFeature_polygon_point(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleFeature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ObstacleFeature>()
{
  return ros2_interface::msg::builder::Init_ObstacleFeature_obstacle_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__BUILDER_HPP_
