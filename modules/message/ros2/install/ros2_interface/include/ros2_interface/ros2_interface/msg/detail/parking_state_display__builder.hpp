// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ParkingStateDisplay.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_STATE_DISPLAY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_STATE_DISPLAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/parking_state_display__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ParkingStateDisplay_state
{
public:
  explicit Init_ParkingStateDisplay_state(::ros2_interface::msg::ParkingStateDisplay & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ParkingStateDisplay state(::ros2_interface::msg::ParkingStateDisplay::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStateDisplay msg_;
};

class Init_ParkingStateDisplay_distance_to_leader_obj
{
public:
  explicit Init_ParkingStateDisplay_distance_to_leader_obj(::ros2_interface::msg::ParkingStateDisplay & msg)
  : msg_(msg)
  {}
  Init_ParkingStateDisplay_state distance_to_leader_obj(::ros2_interface::msg::ParkingStateDisplay::_distance_to_leader_obj_type arg)
  {
    msg_.distance_to_leader_obj = std::move(arg);
    return Init_ParkingStateDisplay_state(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStateDisplay msg_;
};

class Init_ParkingStateDisplay_display_info
{
public:
  explicit Init_ParkingStateDisplay_display_info(::ros2_interface::msg::ParkingStateDisplay & msg)
  : msg_(msg)
  {}
  Init_ParkingStateDisplay_distance_to_leader_obj display_info(::ros2_interface::msg::ParkingStateDisplay::_display_info_type arg)
  {
    msg_.display_info = std::move(arg);
    return Init_ParkingStateDisplay_distance_to_leader_obj(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStateDisplay msg_;
};

class Init_ParkingStateDisplay_remian_distance
{
public:
  explicit Init_ParkingStateDisplay_remian_distance(::ros2_interface::msg::ParkingStateDisplay & msg)
  : msg_(msg)
  {}
  Init_ParkingStateDisplay_display_info remian_distance(::ros2_interface::msg::ParkingStateDisplay::_remian_distance_type arg)
  {
    msg_.remian_distance = std::move(arg);
    return Init_ParkingStateDisplay_display_info(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStateDisplay msg_;
};

class Init_ParkingStateDisplay_moves_counter
{
public:
  explicit Init_ParkingStateDisplay_moves_counter(::ros2_interface::msg::ParkingStateDisplay & msg)
  : msg_(msg)
  {}
  Init_ParkingStateDisplay_remian_distance moves_counter(::ros2_interface::msg::ParkingStateDisplay::_moves_counter_type arg)
  {
    msg_.moves_counter = std::move(arg);
    return Init_ParkingStateDisplay_remian_distance(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStateDisplay msg_;
};

class Init_ParkingStateDisplay_parking_type
{
public:
  explicit Init_ParkingStateDisplay_parking_type(::ros2_interface::msg::ParkingStateDisplay & msg)
  : msg_(msg)
  {}
  Init_ParkingStateDisplay_moves_counter parking_type(::ros2_interface::msg::ParkingStateDisplay::_parking_type_type arg)
  {
    msg_.parking_type = std::move(arg);
    return Init_ParkingStateDisplay_moves_counter(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStateDisplay msg_;
};

class Init_ParkingStateDisplay_header
{
public:
  Init_ParkingStateDisplay_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkingStateDisplay_parking_type header(::ros2_interface::msg::ParkingStateDisplay::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParkingStateDisplay_parking_type(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStateDisplay msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ParkingStateDisplay>()
{
  return ros2_interface::msg::builder::Init_ParkingStateDisplay_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_STATE_DISPLAY__BUILDER_HPP_
