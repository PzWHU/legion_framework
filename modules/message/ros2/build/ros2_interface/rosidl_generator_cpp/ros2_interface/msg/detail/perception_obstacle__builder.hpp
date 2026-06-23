// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PerceptionObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/perception_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PerceptionObstacle_light_status
{
public:
  explicit Init_PerceptionObstacle_light_status(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PerceptionObstacle light_status(::ros2_interface::msg::PerceptionObstacle::_light_status_type arg)
  {
    msg_.light_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_acceleration_covariance
{
public:
  explicit Init_PerceptionObstacle_acceleration_covariance(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_light_status acceleration_covariance(::ros2_interface::msg::PerceptionObstacle::_acceleration_covariance_type arg)
  {
    msg_.acceleration_covariance = std::move(arg);
    return Init_PerceptionObstacle_light_status(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_velocity_covariance
{
public:
  explicit Init_PerceptionObstacle_velocity_covariance(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_acceleration_covariance velocity_covariance(::ros2_interface::msg::PerceptionObstacle::_velocity_covariance_type arg)
  {
    msg_.velocity_covariance = std::move(arg);
    return Init_PerceptionObstacle_acceleration_covariance(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_position_covariance
{
public:
  explicit Init_PerceptionObstacle_position_covariance(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_velocity_covariance position_covariance(::ros2_interface::msg::PerceptionObstacle::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_PerceptionObstacle_velocity_covariance(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_height_above_ground
{
public:
  explicit Init_PerceptionObstacle_height_above_ground(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_position_covariance height_above_ground(::ros2_interface::msg::PerceptionObstacle::_height_above_ground_type arg)
  {
    msg_.height_above_ground = std::move(arg);
    return Init_PerceptionObstacle_position_covariance(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_sub_type
{
public:
  explicit Init_PerceptionObstacle_sub_type(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_height_above_ground sub_type(::ros2_interface::msg::PerceptionObstacle::_sub_type_type arg)
  {
    msg_.sub_type = std::move(arg);
    return Init_PerceptionObstacle_height_above_ground(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_bounding_box
{
public:
  explicit Init_PerceptionObstacle_bounding_box(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_sub_type bounding_box(::ros2_interface::msg::PerceptionObstacle::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_PerceptionObstacle_sub_type(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_anchor_point
{
public:
  explicit Init_PerceptionObstacle_anchor_point(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_bounding_box anchor_point(::ros2_interface::msg::PerceptionObstacle::_anchor_point_type arg)
  {
    msg_.anchor_point = std::move(arg);
    return Init_PerceptionObstacle_bounding_box(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_acceleration
{
public:
  explicit Init_PerceptionObstacle_acceleration(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_anchor_point acceleration(::ros2_interface::msg::PerceptionObstacle::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_PerceptionObstacle_anchor_point(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_drops
{
public:
  explicit Init_PerceptionObstacle_drops(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_acceleration drops(::ros2_interface::msg::PerceptionObstacle::_drops_type arg)
  {
    msg_.drops = std::move(arg);
    return Init_PerceptionObstacle_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_confidence_type
{
public:
  explicit Init_PerceptionObstacle_confidence_type(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_drops confidence_type(::ros2_interface::msg::PerceptionObstacle::_confidence_type_type arg)
  {
    msg_.confidence_type = std::move(arg);
    return Init_PerceptionObstacle_drops(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_timestamp
{
public:
  explicit Init_PerceptionObstacle_timestamp(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_confidence_type timestamp(::ros2_interface::msg::PerceptionObstacle::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PerceptionObstacle_confidence_type(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_confidence
{
public:
  explicit Init_PerceptionObstacle_confidence(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_timestamp confidence(::ros2_interface::msg::PerceptionObstacle::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_PerceptionObstacle_timestamp(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_lane_position
{
public:
  explicit Init_PerceptionObstacle_lane_position(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_confidence lane_position(::ros2_interface::msg::PerceptionObstacle::_lane_position_type arg)
  {
    msg_.lane_position = std::move(arg);
    return Init_PerceptionObstacle_confidence(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_type
{
public:
  explicit Init_PerceptionObstacle_type(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_lane_position type(::ros2_interface::msg::PerceptionObstacle::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PerceptionObstacle_lane_position(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_tracking_time
{
public:
  explicit Init_PerceptionObstacle_tracking_time(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_type tracking_time(::ros2_interface::msg::PerceptionObstacle::_tracking_time_type arg)
  {
    msg_.tracking_time = std::move(arg);
    return Init_PerceptionObstacle_type(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_polygon_point
{
public:
  explicit Init_PerceptionObstacle_polygon_point(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_tracking_time polygon_point(::ros2_interface::msg::PerceptionObstacle::_polygon_point_type arg)
  {
    msg_.polygon_point = std::move(arg);
    return Init_PerceptionObstacle_tracking_time(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_height
{
public:
  explicit Init_PerceptionObstacle_height(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_polygon_point height(::ros2_interface::msg::PerceptionObstacle::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_PerceptionObstacle_polygon_point(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_width
{
public:
  explicit Init_PerceptionObstacle_width(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_height width(::ros2_interface::msg::PerceptionObstacle::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_PerceptionObstacle_height(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_length
{
public:
  explicit Init_PerceptionObstacle_length(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_width length(::ros2_interface::msg::PerceptionObstacle::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_PerceptionObstacle_width(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_velocity
{
public:
  explicit Init_PerceptionObstacle_velocity(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_length velocity(::ros2_interface::msg::PerceptionObstacle::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_PerceptionObstacle_length(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_theta
{
public:
  explicit Init_PerceptionObstacle_theta(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_velocity theta(::ros2_interface::msg::PerceptionObstacle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_PerceptionObstacle_velocity(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_position
{
public:
  explicit Init_PerceptionObstacle_position(::ros2_interface::msg::PerceptionObstacle & msg)
  : msg_(msg)
  {}
  Init_PerceptionObstacle_theta position(::ros2_interface::msg::PerceptionObstacle::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PerceptionObstacle_theta(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

class Init_PerceptionObstacle_id
{
public:
  Init_PerceptionObstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionObstacle_position id(::ros2_interface::msg::PerceptionObstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PerceptionObstacle_position(msg_);
  }

private:
  ::ros2_interface::msg::PerceptionObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PerceptionObstacle>()
{
  return ros2_interface::msg::builder::Init_PerceptionObstacle_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__BUILDER_HPP_
