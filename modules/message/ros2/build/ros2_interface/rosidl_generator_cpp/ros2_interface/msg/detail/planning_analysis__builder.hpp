// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PlanningAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/planning_analysis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PlanningAnalysis_referencline_kappa
{
public:
  explicit Init_PlanningAnalysis_referencline_kappa(::ros2_interface::msg::PlanningAnalysis & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PlanningAnalysis referencline_kappa(::ros2_interface::msg::PlanningAnalysis::_referencline_kappa_type arg)
  {
    msg_.referencline_kappa = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

class Init_PlanningAnalysis_diff_to_velocity
{
public:
  explicit Init_PlanningAnalysis_diff_to_velocity(::ros2_interface::msg::PlanningAnalysis & msg)
  : msg_(msg)
  {}
  Init_PlanningAnalysis_referencline_kappa diff_to_velocity(::ros2_interface::msg::PlanningAnalysis::_diff_to_velocity_type arg)
  {
    msg_.diff_to_velocity = std::move(arg);
    return Init_PlanningAnalysis_referencline_kappa(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

class Init_PlanningAnalysis_dis_to_center_line
{
public:
  explicit Init_PlanningAnalysis_dis_to_center_line(::ros2_interface::msg::PlanningAnalysis & msg)
  : msg_(msg)
  {}
  Init_PlanningAnalysis_diff_to_velocity dis_to_center_line(::ros2_interface::msg::PlanningAnalysis::_dis_to_center_line_type arg)
  {
    msg_.dis_to_center_line = std::move(arg);
    return Init_PlanningAnalysis_diff_to_velocity(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

class Init_PlanningAnalysis_planning_parking_debug
{
public:
  explicit Init_PlanningAnalysis_planning_parking_debug(::ros2_interface::msg::PlanningAnalysis & msg)
  : msg_(msg)
  {}
  Init_PlanningAnalysis_dis_to_center_line planning_parking_debug(::ros2_interface::msg::PlanningAnalysis::_planning_parking_debug_type arg)
  {
    msg_.planning_parking_debug = std::move(arg);
    return Init_PlanningAnalysis_dis_to_center_line(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

class Init_PlanningAnalysis_selector_time
{
public:
  explicit Init_PlanningAnalysis_selector_time(::ros2_interface::msg::PlanningAnalysis & msg)
  : msg_(msg)
  {}
  Init_PlanningAnalysis_planning_parking_debug selector_time(::ros2_interface::msg::PlanningAnalysis::_selector_time_type arg)
  {
    msg_.selector_time = std::move(arg);
    return Init_PlanningAnalysis_planning_parking_debug(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

class Init_PlanningAnalysis_evaluator_time
{
public:
  explicit Init_PlanningAnalysis_evaluator_time(::ros2_interface::msg::PlanningAnalysis & msg)
  : msg_(msg)
  {}
  Init_PlanningAnalysis_selector_time evaluator_time(::ros2_interface::msg::PlanningAnalysis::_evaluator_time_type arg)
  {
    msg_.evaluator_time = std::move(arg);
    return Init_PlanningAnalysis_selector_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

class Init_PlanningAnalysis_generator_time
{
public:
  explicit Init_PlanningAnalysis_generator_time(::ros2_interface::msg::PlanningAnalysis & msg)
  : msg_(msg)
  {}
  Init_PlanningAnalysis_evaluator_time generator_time(::ros2_interface::msg::PlanningAnalysis::_generator_time_type arg)
  {
    msg_.generator_time = std::move(arg);
    return Init_PlanningAnalysis_evaluator_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

class Init_PlanningAnalysis_frame_update_time
{
public:
  explicit Init_PlanningAnalysis_frame_update_time(::ros2_interface::msg::PlanningAnalysis & msg)
  : msg_(msg)
  {}
  Init_PlanningAnalysis_generator_time frame_update_time(::ros2_interface::msg::PlanningAnalysis::_frame_update_time_type arg)
  {
    msg_.frame_update_time = std::move(arg);
    return Init_PlanningAnalysis_generator_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

class Init_PlanningAnalysis_header
{
public:
  Init_PlanningAnalysis_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningAnalysis_frame_update_time header(::ros2_interface::msg::PlanningAnalysis::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningAnalysis_frame_update_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningAnalysis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PlanningAnalysis>()
{
  return ros2_interface::msg::builder::Init_PlanningAnalysis_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__BUILDER_HPP_
