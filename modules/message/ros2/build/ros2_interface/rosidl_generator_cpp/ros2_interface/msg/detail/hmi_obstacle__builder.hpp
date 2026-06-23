// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMIObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMIObstacle_fusion_type
{
public:
  explicit Init_HMIObstacle_fusion_type(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMIObstacle fusion_type(::ros2_interface::msg::HMIObstacle::_fusion_type_type arg)
  {
    msg_.fusion_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_cipv_flag
{
public:
  explicit Init_HMIObstacle_cipv_flag(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_fusion_type cipv_flag(::ros2_interface::msg::HMIObstacle::_cipv_flag_type arg)
  {
    msg_.cipv_flag = std::move(arg);
    return Init_HMIObstacle_fusion_type(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_points
{
public:
  explicit Init_HMIObstacle_points(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_cipv_flag points(::ros2_interface::msg::HMIObstacle::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_HMIObstacle_cipv_flag(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_sub_type
{
public:
  explicit Init_HMIObstacle_sub_type(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_points sub_type(::ros2_interface::msg::HMIObstacle::_sub_type_type arg)
  {
    msg_.sub_type = std::move(arg);
    return Init_HMIObstacle_points(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_confidence_type
{
public:
  explicit Init_HMIObstacle_confidence_type(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_sub_type confidence_type(::ros2_interface::msg::HMIObstacle::_confidence_type_type arg)
  {
    msg_.confidence_type = std::move(arg);
    return Init_HMIObstacle_sub_type(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_confidence
{
public:
  explicit Init_HMIObstacle_confidence(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_confidence_type confidence(::ros2_interface::msg::HMIObstacle::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_HMIObstacle_confidence_type(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_type
{
public:
  explicit Init_HMIObstacle_type(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_confidence type(::ros2_interface::msg::HMIObstacle::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_HMIObstacle_confidence(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_height
{
public:
  explicit Init_HMIObstacle_height(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_type height(::ros2_interface::msg::HMIObstacle::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_HMIObstacle_type(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_width
{
public:
  explicit Init_HMIObstacle_width(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_height width(::ros2_interface::msg::HMIObstacle::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_HMIObstacle_height(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_length
{
public:
  explicit Init_HMIObstacle_length(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_width length(::ros2_interface::msg::HMIObstacle::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_HMIObstacle_width(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_theta_abs
{
public:
  explicit Init_HMIObstacle_theta_abs(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_length theta_abs(::ros2_interface::msg::HMIObstacle::_theta_abs_type arg)
  {
    msg_.theta_abs = std::move(arg);
    return Init_HMIObstacle_length(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_theta_vehicle
{
public:
  explicit Init_HMIObstacle_theta_vehicle(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_theta_abs theta_vehicle(::ros2_interface::msg::HMIObstacle::_theta_vehicle_type arg)
  {
    msg_.theta_vehicle = std::move(arg);
    return Init_HMIObstacle_theta_abs(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_center_pos_abs
{
public:
  explicit Init_HMIObstacle_center_pos_abs(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_theta_vehicle center_pos_abs(::ros2_interface::msg::HMIObstacle::_center_pos_abs_type arg)
  {
    msg_.center_pos_abs = std::move(arg);
    return Init_HMIObstacle_theta_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_center_pos_vehicle
{
public:
  explicit Init_HMIObstacle_center_pos_vehicle(::ros2_interface::msg::HMIObstacle & msg)
  : msg_(msg)
  {}
  Init_HMIObstacle_center_pos_abs center_pos_vehicle(::ros2_interface::msg::HMIObstacle::_center_pos_vehicle_type arg)
  {
    msg_.center_pos_vehicle = std::move(arg);
    return Init_HMIObstacle_center_pos_abs(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

class Init_HMIObstacle_id
{
public:
  Init_HMIObstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMIObstacle_center_pos_vehicle id(::ros2_interface::msg::HMIObstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_HMIObstacle_center_pos_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::HMIObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMIObstacle>()
{
  return ros2_interface::msg::builder::Init_HMIObstacle_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__BUILDER_HPP_
