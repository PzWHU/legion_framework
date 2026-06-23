// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/SotifMonitorResult.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/sotif_monitor_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_SotifMonitorResult_grid_map
{
public:
  explicit Init_SotifMonitorResult_grid_map(::ros2_interface::msg::SotifMonitorResult & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::SotifMonitorResult grid_map(::ros2_interface::msg::SotifMonitorResult::_grid_map_type arg)
  {
    msg_.grid_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::SotifMonitorResult msg_;
};

class Init_SotifMonitorResult_region_value
{
public:
  explicit Init_SotifMonitorResult_region_value(::ros2_interface::msg::SotifMonitorResult & msg)
  : msg_(msg)
  {}
  Init_SotifMonitorResult_grid_map region_value(::ros2_interface::msg::SotifMonitorResult::_region_value_type arg)
  {
    msg_.region_value = std::move(arg);
    return Init_SotifMonitorResult_grid_map(msg_);
  }

private:
  ::ros2_interface::msg::SotifMonitorResult msg_;
};

class Init_SotifMonitorResult_header
{
public:
  Init_SotifMonitorResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SotifMonitorResult_region_value header(::ros2_interface::msg::SotifMonitorResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SotifMonitorResult_region_value(msg_);
  }

private:
  ::ros2_interface::msg::SotifMonitorResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::SotifMonitorResult>()
{
  return ros2_interface::msg::builder::Init_SotifMonitorResult_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__BUILDER_HPP_
