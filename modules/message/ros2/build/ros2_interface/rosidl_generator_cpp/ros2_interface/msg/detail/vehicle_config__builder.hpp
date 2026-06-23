// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/VehicleConfig.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_CONFIG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/vehicle_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_VehicleConfig_vehicle_param
{
public:
  explicit Init_VehicleConfig_vehicle_param(::ros2_interface::msg::VehicleConfig & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::VehicleConfig vehicle_param(::ros2_interface::msg::VehicleConfig::_vehicle_param_type arg)
  {
    msg_.vehicle_param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::VehicleConfig msg_;
};

class Init_VehicleConfig_header
{
public:
  Init_VehicleConfig_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleConfig_vehicle_param header(::ros2_interface::msg::VehicleConfig::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleConfig_vehicle_param(msg_);
  }

private:
  ::ros2_interface::msg::VehicleConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::VehicleConfig>()
{
  return ros2_interface::msg::builder::Init_VehicleConfig_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_CONFIG__BUILDER_HPP_
