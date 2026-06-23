// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ADCTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/adc_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ADCTrajectory_rss_info
{
public:
  explicit Init_ADCTrajectory_rss_info(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ADCTrajectory rss_info(::ros2_interface::msg::ADCTrajectory::_rss_info_type arg)
  {
    msg_.rss_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_right_of_way_status
{
public:
  explicit Init_ADCTrajectory_right_of_way_status(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_rss_info right_of_way_status(::ros2_interface::msg::ADCTrajectory::_right_of_way_status_type arg)
  {
    msg_.right_of_way_status = std::move(arg);
    return Init_ADCTrajectory_rss_info(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_replan_reason
{
public:
  explicit Init_ADCTrajectory_replan_reason(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_right_of_way_status replan_reason(::ros2_interface::msg::ADCTrajectory::_replan_reason_type arg)
  {
    msg_.replan_reason = std::move(arg);
    return Init_ADCTrajectory_right_of_way_status(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_is_replan
{
public:
  explicit Init_ADCTrajectory_is_replan(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_replan_reason is_replan(::ros2_interface::msg::ADCTrajectory::_is_replan_type arg)
  {
    msg_.is_replan = std::move(arg);
    return Init_ADCTrajectory_replan_reason(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_estop
{
public:
  explicit Init_ADCTrajectory_estop(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_is_replan estop(::ros2_interface::msg::ADCTrajectory::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return Init_ADCTrajectory_is_replan(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_adc_trajectory_type
{
public:
  explicit Init_ADCTrajectory_adc_trajectory_type(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_estop adc_trajectory_type(::ros2_interface::msg::ADCTrajectory::_adc_trajectory_type_type arg)
  {
    msg_.adc_trajectory_type = std::move(arg);
    return Init_ADCTrajectory_estop(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_driving_mode
{
public:
  explicit Init_ADCTrajectory_driving_mode(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_adc_trajectory_type driving_mode(::ros2_interface::msg::ADCTrajectory::_driving_mode_type arg)
  {
    msg_.driving_mode = std::move(arg);
    return Init_ADCTrajectory_adc_trajectory_type(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_scenario
{
public:
  explicit Init_ADCTrajectory_scenario(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_driving_mode scenario(::ros2_interface::msg::ADCTrajectory::_scenario_type arg)
  {
    msg_.scenario = std::move(arg);
    return Init_ADCTrajectory_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_behaviour_lon_state
{
public:
  explicit Init_ADCTrajectory_behaviour_lon_state(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_scenario behaviour_lon_state(::ros2_interface::msg::ADCTrajectory::_behaviour_lon_state_type arg)
  {
    msg_.behaviour_lon_state = std::move(arg);
    return Init_ADCTrajectory_scenario(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_behaviour_lat_state
{
public:
  explicit Init_ADCTrajectory_behaviour_lat_state(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_behaviour_lon_state behaviour_lat_state(::ros2_interface::msg::ADCTrajectory::_behaviour_lat_state_type arg)
  {
    msg_.behaviour_lat_state = std::move(arg);
    return Init_ADCTrajectory_behaviour_lon_state(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_car_action
{
public:
  explicit Init_ADCTrajectory_car_action(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_behaviour_lat_state car_action(::ros2_interface::msg::ADCTrajectory::_car_action_type arg)
  {
    msg_.car_action = std::move(arg);
    return Init_ADCTrajectory_behaviour_lat_state(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_trajectory_points
{
public:
  explicit Init_ADCTrajectory_trajectory_points(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_car_action trajectory_points(::ros2_interface::msg::ADCTrajectory::_trajectory_points_type arg)
  {
    msg_.trajectory_points = std::move(arg);
    return Init_ADCTrajectory_car_action(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_total_path_time
{
public:
  explicit Init_ADCTrajectory_total_path_time(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_trajectory_points total_path_time(::ros2_interface::msg::ADCTrajectory::_total_path_time_type arg)
  {
    msg_.total_path_time = std::move(arg);
    return Init_ADCTrajectory_trajectory_points(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_total_path_length
{
public:
  explicit Init_ADCTrajectory_total_path_length(::ros2_interface::msg::ADCTrajectory & msg)
  : msg_(msg)
  {}
  Init_ADCTrajectory_total_path_time total_path_length(::ros2_interface::msg::ADCTrajectory::_total_path_length_type arg)
  {
    msg_.total_path_length = std::move(arg);
    return Init_ADCTrajectory_total_path_time(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

class Init_ADCTrajectory_header
{
public:
  Init_ADCTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ADCTrajectory_total_path_length header(::ros2_interface::msg::ADCTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ADCTrajectory_total_path_length(msg_);
  }

private:
  ::ros2_interface::msg::ADCTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ADCTrajectory>()
{
  return ros2_interface::msg::builder::Init_ADCTrajectory_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__BUILDER_HPP_
