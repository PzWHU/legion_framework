// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/VehicleTask.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/vehicle_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_VehicleTask_decorative_light_ctrl
{
public:
  explicit Init_VehicleTask_decorative_light_ctrl(::ros2_interface::msg::VehicleTask & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::VehicleTask decorative_light_ctrl(::ros2_interface::msg::VehicleTask::_decorative_light_ctrl_type arg)
  {
    msg_.decorative_light_ctrl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::VehicleTask msg_;
};

class Init_VehicleTask_hatch_unlock_ctrl
{
public:
  explicit Init_VehicleTask_hatch_unlock_ctrl(::ros2_interface::msg::VehicleTask & msg)
  : msg_(msg)
  {}
  Init_VehicleTask_decorative_light_ctrl hatch_unlock_ctrl(::ros2_interface::msg::VehicleTask::_hatch_unlock_ctrl_type arg)
  {
    msg_.hatch_unlock_ctrl = std::move(arg);
    return Init_VehicleTask_decorative_light_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::VehicleTask msg_;
};

class Init_VehicleTask_water_add_ctrl
{
public:
  explicit Init_VehicleTask_water_add_ctrl(::ros2_interface::msg::VehicleTask & msg)
  : msg_(msg)
  {}
  Init_VehicleTask_hatch_unlock_ctrl water_add_ctrl(::ros2_interface::msg::VehicleTask::_water_add_ctrl_type arg)
  {
    msg_.water_add_ctrl = std::move(arg);
    return Init_VehicleTask_hatch_unlock_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::VehicleTask msg_;
};

class Init_VehicleTask_watering_ctrl
{
public:
  explicit Init_VehicleTask_watering_ctrl(::ros2_interface::msg::VehicleTask & msg)
  : msg_(msg)
  {}
  Init_VehicleTask_water_add_ctrl watering_ctrl(::ros2_interface::msg::VehicleTask::_watering_ctrl_type arg)
  {
    msg_.watering_ctrl = std::move(arg);
    return Init_VehicleTask_water_add_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::VehicleTask msg_;
};

class Init_VehicleTask_clean_up_ctrl
{
public:
  explicit Init_VehicleTask_clean_up_ctrl(::ros2_interface::msg::VehicleTask & msg)
  : msg_(msg)
  {}
  Init_VehicleTask_watering_ctrl clean_up_ctrl(::ros2_interface::msg::VehicleTask::_clean_up_ctrl_type arg)
  {
    msg_.clean_up_ctrl = std::move(arg);
    return Init_VehicleTask_watering_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::VehicleTask msg_;
};

class Init_VehicleTask_header
{
public:
  Init_VehicleTask_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleTask_clean_up_ctrl header(::ros2_interface::msg::VehicleTask::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleTask_clean_up_ctrl(msg_);
  }

private:
  ::ros2_interface::msg::VehicleTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::VehicleTask>()
{
  return ros2_interface::msg::builder::Init_VehicleTask_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__BUILDER_HPP_
