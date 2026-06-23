// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Obstacle_fusion_type
{
public:
  explicit Init_Obstacle_fusion_type(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Obstacle fusion_type(::ros2_interface::msg::Obstacle::_fusion_type_type arg)
  {
    msg_.fusion_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_blinker_flag
{
public:
  explicit Init_Obstacle_blinker_flag(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_fusion_type blinker_flag(::ros2_interface::msg::Obstacle::_blinker_flag_type arg)
  {
    msg_.blinker_flag = std::move(arg);
    return Init_Obstacle_fusion_type(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_pihp_percentage
{
public:
  explicit Init_Obstacle_pihp_percentage(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_blinker_flag pihp_percentage(::ros2_interface::msg::Obstacle::_pihp_percentage_type arg)
  {
    msg_.pihp_percentage = std::move(arg);
    return Init_Obstacle_blinker_flag(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_lane_position
{
public:
  explicit Init_Obstacle_lane_position(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_pihp_percentage lane_position(::ros2_interface::msg::Obstacle::_lane_position_type arg)
  {
    msg_.lane_position = std::move(arg);
    return Init_Obstacle_pihp_percentage(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_cipv_flag
{
public:
  explicit Init_Obstacle_cipv_flag(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_lane_position cipv_flag(::ros2_interface::msg::Obstacle::_cipv_flag_type arg)
  {
    msg_.cipv_flag = std::move(arg);
    return Init_Obstacle_lane_position(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_sensor_calibrator
{
public:
  explicit Init_Obstacle_sensor_calibrator(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_cipv_flag sensor_calibrator(::ros2_interface::msg::Obstacle::_sensor_calibrator_type arg)
  {
    msg_.sensor_calibrator = std::move(arg);
    return Init_Obstacle_cipv_flag(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_theta_vehicle_covariance
{
public:
  explicit Init_Obstacle_theta_vehicle_covariance(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_sensor_calibrator theta_vehicle_covariance(::ros2_interface::msg::Obstacle::_theta_vehicle_covariance_type arg)
  {
    msg_.theta_vehicle_covariance = std::move(arg);
    return Init_Obstacle_sensor_calibrator(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_acceleration_vehicle_covariance
{
public:
  explicit Init_Obstacle_acceleration_vehicle_covariance(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_theta_vehicle_covariance acceleration_vehicle_covariance(::ros2_interface::msg::Obstacle::_acceleration_vehicle_covariance_type arg)
  {
    msg_.acceleration_vehicle_covariance = std::move(arg);
    return Init_Obstacle_theta_vehicle_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_velocity_vehicle_covariance
{
public:
  explicit Init_Obstacle_velocity_vehicle_covariance(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_acceleration_vehicle_covariance velocity_vehicle_covariance(::ros2_interface::msg::Obstacle::_velocity_vehicle_covariance_type arg)
  {
    msg_.velocity_vehicle_covariance = std::move(arg);
    return Init_Obstacle_acceleration_vehicle_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_position_vehicle_covariance
{
public:
  explicit Init_Obstacle_position_vehicle_covariance(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_velocity_vehicle_covariance position_vehicle_covariance(::ros2_interface::msg::Obstacle::_position_vehicle_covariance_type arg)
  {
    msg_.position_vehicle_covariance = std::move(arg);
    return Init_Obstacle_velocity_vehicle_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_theta_abs_covariance
{
public:
  explicit Init_Obstacle_theta_abs_covariance(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_position_vehicle_covariance theta_abs_covariance(::ros2_interface::msg::Obstacle::_theta_abs_covariance_type arg)
  {
    msg_.theta_abs_covariance = std::move(arg);
    return Init_Obstacle_position_vehicle_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_acceleration_abs_covariance
{
public:
  explicit Init_Obstacle_acceleration_abs_covariance(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_theta_abs_covariance acceleration_abs_covariance(::ros2_interface::msg::Obstacle::_acceleration_abs_covariance_type arg)
  {
    msg_.acceleration_abs_covariance = std::move(arg);
    return Init_Obstacle_theta_abs_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_velocity_abs_covariance
{
public:
  explicit Init_Obstacle_velocity_abs_covariance(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_acceleration_abs_covariance velocity_abs_covariance(::ros2_interface::msg::Obstacle::_velocity_abs_covariance_type arg)
  {
    msg_.velocity_abs_covariance = std::move(arg);
    return Init_Obstacle_acceleration_abs_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_position_abs_covariance
{
public:
  explicit Init_Obstacle_position_abs_covariance(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_velocity_abs_covariance position_abs_covariance(::ros2_interface::msg::Obstacle::_position_abs_covariance_type arg)
  {
    msg_.position_abs_covariance = std::move(arg);
    return Init_Obstacle_velocity_abs_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_height_above_ground
{
public:
  explicit Init_Obstacle_height_above_ground(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_position_abs_covariance height_above_ground(::ros2_interface::msg::Obstacle::_height_above_ground_type arg)
  {
    msg_.height_above_ground = std::move(arg);
    return Init_Obstacle_position_abs_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_sub_type
{
public:
  explicit Init_Obstacle_sub_type(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_height_above_ground sub_type(::ros2_interface::msg::Obstacle::_sub_type_type arg)
  {
    msg_.sub_type = std::move(arg);
    return Init_Obstacle_height_above_ground(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_bbox2d_rear
{
public:
  explicit Init_Obstacle_bbox2d_rear(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_sub_type bbox2d_rear(::ros2_interface::msg::Obstacle::_bbox2d_rear_type arg)
  {
    msg_.bbox2d_rear = std::move(arg);
    return Init_Obstacle_sub_type(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_bbox2d
{
public:
  explicit Init_Obstacle_bbox2d(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_bbox2d_rear bbox2d(::ros2_interface::msg::Obstacle::_bbox2d_type arg)
  {
    msg_.bbox2d = std::move(arg);
    return Init_Obstacle_bbox2d_rear(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_anchor_point_abs
{
public:
  explicit Init_Obstacle_anchor_point_abs(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_bbox2d anchor_point_abs(::ros2_interface::msg::Obstacle::_anchor_point_abs_type arg)
  {
    msg_.anchor_point_abs = std::move(arg);
    return Init_Obstacle_bbox2d(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_anchor_point_vehicle
{
public:
  explicit Init_Obstacle_anchor_point_vehicle(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_anchor_point_abs anchor_point_vehicle(::ros2_interface::msg::Obstacle::_anchor_point_vehicle_type arg)
  {
    msg_.anchor_point_vehicle = std::move(arg);
    return Init_Obstacle_anchor_point_abs(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_anchor_point_image
{
public:
  explicit Init_Obstacle_anchor_point_image(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_anchor_point_vehicle anchor_point_image(::ros2_interface::msg::Obstacle::_anchor_point_image_type arg)
  {
    msg_.anchor_point_image = std::move(arg);
    return Init_Obstacle_anchor_point_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_acceleration_abs
{
public:
  explicit Init_Obstacle_acceleration_abs(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_anchor_point_image acceleration_abs(::ros2_interface::msg::Obstacle::_acceleration_abs_type arg)
  {
    msg_.acceleration_abs = std::move(arg);
    return Init_Obstacle_anchor_point_image(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_acceleration_vehicle
{
public:
  explicit Init_Obstacle_acceleration_vehicle(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_acceleration_abs acceleration_vehicle(::ros2_interface::msg::Obstacle::_acceleration_vehicle_type arg)
  {
    msg_.acceleration_vehicle = std::move(arg);
    return Init_Obstacle_acceleration_abs(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_drops
{
public:
  explicit Init_Obstacle_drops(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_acceleration_vehicle drops(::ros2_interface::msg::Obstacle::_drops_type arg)
  {
    msg_.drops = std::move(arg);
    return Init_Obstacle_acceleration_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_confidence_type
{
public:
  explicit Init_Obstacle_confidence_type(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_drops confidence_type(::ros2_interface::msg::Obstacle::_confidence_type_type arg)
  {
    msg_.confidence_type = std::move(arg);
    return Init_Obstacle_drops(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_confidence
{
public:
  explicit Init_Obstacle_confidence(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_confidence_type confidence(::ros2_interface::msg::Obstacle::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Obstacle_confidence_type(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_type
{
public:
  explicit Init_Obstacle_type(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_confidence type(::ros2_interface::msg::Obstacle::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Obstacle_confidence(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_tracking_time
{
public:
  explicit Init_Obstacle_tracking_time(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_type tracking_time(::ros2_interface::msg::Obstacle::_tracking_time_type arg)
  {
    msg_.tracking_time = std::move(arg);
    return Init_Obstacle_type(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_polygon_point_vehicle
{
public:
  explicit Init_Obstacle_polygon_point_vehicle(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_tracking_time polygon_point_vehicle(::ros2_interface::msg::Obstacle::_polygon_point_vehicle_type arg)
  {
    msg_.polygon_point_vehicle = std::move(arg);
    return Init_Obstacle_tracking_time(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_polygon_point_abs
{
public:
  explicit Init_Obstacle_polygon_point_abs(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_polygon_point_vehicle polygon_point_abs(::ros2_interface::msg::Obstacle::_polygon_point_abs_type arg)
  {
    msg_.polygon_point_abs = std::move(arg);
    return Init_Obstacle_polygon_point_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_image_key_points
{
public:
  explicit Init_Obstacle_image_key_points(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_polygon_point_abs image_key_points(::ros2_interface::msg::Obstacle::_image_key_points_type arg)
  {
    msg_.image_key_points = std::move(arg);
    return Init_Obstacle_polygon_point_abs(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_height
{
public:
  explicit Init_Obstacle_height(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_image_key_points height(::ros2_interface::msg::Obstacle::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Obstacle_image_key_points(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_width
{
public:
  explicit Init_Obstacle_width(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_height width(::ros2_interface::msg::Obstacle::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Obstacle_height(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_length
{
public:
  explicit Init_Obstacle_length(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_width length(::ros2_interface::msg::Obstacle::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Obstacle_width(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_velocity_abs
{
public:
  explicit Init_Obstacle_velocity_abs(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_length velocity_abs(::ros2_interface::msg::Obstacle::_velocity_abs_type arg)
  {
    msg_.velocity_abs = std::move(arg);
    return Init_Obstacle_length(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_velocity_vehicle
{
public:
  explicit Init_Obstacle_velocity_vehicle(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_velocity_abs velocity_vehicle(::ros2_interface::msg::Obstacle::_velocity_vehicle_type arg)
  {
    msg_.velocity_vehicle = std::move(arg);
    return Init_Obstacle_velocity_abs(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_theta_abs
{
public:
  explicit Init_Obstacle_theta_abs(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_velocity_vehicle theta_abs(::ros2_interface::msg::Obstacle::_theta_abs_type arg)
  {
    msg_.theta_abs = std::move(arg);
    return Init_Obstacle_velocity_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_theta_vehicle
{
public:
  explicit Init_Obstacle_theta_vehicle(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_theta_abs theta_vehicle(::ros2_interface::msg::Obstacle::_theta_vehicle_type arg)
  {
    msg_.theta_vehicle = std::move(arg);
    return Init_Obstacle_theta_abs(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_center_pos_abs
{
public:
  explicit Init_Obstacle_center_pos_abs(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_theta_vehicle center_pos_abs(::ros2_interface::msg::Obstacle::_center_pos_abs_type arg)
  {
    msg_.center_pos_abs = std::move(arg);
    return Init_Obstacle_theta_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_center_pos_vehicle
{
public:
  explicit Init_Obstacle_center_pos_vehicle(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_center_pos_abs center_pos_vehicle(::ros2_interface::msg::Obstacle::_center_pos_vehicle_type arg)
  {
    msg_.center_pos_vehicle = std::move(arg);
    return Init_Obstacle_center_pos_abs(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_last_updated_time
{
public:
  explicit Init_Obstacle_last_updated_time(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_center_pos_vehicle last_updated_time(::ros2_interface::msg::Obstacle::_last_updated_time_type arg)
  {
    msg_.last_updated_time = std::move(arg);
    return Init_Obstacle_center_pos_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_create_time
{
public:
  explicit Init_Obstacle_create_time(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_last_updated_time create_time(::ros2_interface::msg::Obstacle::_create_time_type arg)
  {
    msg_.create_time = std::move(arg);
    return Init_Obstacle_last_updated_time(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_existence_prob
{
public:
  explicit Init_Obstacle_existence_prob(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_create_time existence_prob(::ros2_interface::msg::Obstacle::_existence_prob_type arg)
  {
    msg_.existence_prob = std::move(arg);
    return Init_Obstacle_create_time(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_id
{
public:
  explicit Init_Obstacle_id(::ros2_interface::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_existence_prob id(::ros2_interface::msg::Obstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Obstacle_existence_prob(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

class Init_Obstacle_timestamp
{
public:
  Init_Obstacle_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_id timestamp(::ros2_interface::msg::Obstacle::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Obstacle_id(msg_);
  }

private:
  ::ros2_interface::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Obstacle>()
{
  return ros2_interface::msg::builder::Init_Obstacle_timestamp();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
