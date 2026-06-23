// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Grid.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GRID__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Grid_region_id
{
public:
  explicit Init_Grid_region_id(::ros2_interface::msg::Grid & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Grid region_id(::ros2_interface::msg::Grid::_region_id_type arg)
  {
    msg_.region_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Grid msg_;
};

class Init_Grid_potential
{
public:
  explicit Init_Grid_potential(::ros2_interface::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_region_id potential(::ros2_interface::msg::Grid::_potential_type arg)
  {
    msg_.potential = std::move(arg);
    return Init_Grid_region_id(msg_);
  }

private:
  ::ros2_interface::msg::Grid msg_;
};

class Init_Grid_yaw
{
public:
  explicit Init_Grid_yaw(::ros2_interface::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_potential yaw(::ros2_interface::msg::Grid::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Grid_potential(msg_);
  }

private:
  ::ros2_interface::msg::Grid msg_;
};

class Init_Grid_sl_point
{
public:
  explicit Init_Grid_sl_point(::ros2_interface::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_yaw sl_point(::ros2_interface::msg::Grid::_sl_point_type arg)
  {
    msg_.sl_point = std::move(arg);
    return Init_Grid_yaw(msg_);
  }

private:
  ::ros2_interface::msg::Grid msg_;
};

class Init_Grid_y
{
public:
  explicit Init_Grid_y(::ros2_interface::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_sl_point y(::ros2_interface::msg::Grid::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Grid_sl_point(msg_);
  }

private:
  ::ros2_interface::msg::Grid msg_;
};

class Init_Grid_x
{
public:
  Init_Grid_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Grid_y x(::ros2_interface::msg::Grid::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Grid_y(msg_);
  }

private:
  ::ros2_interface::msg::Grid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Grid>()
{
  return ros2_interface::msg::builder::Init_Grid_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GRID__BUILDER_HPP_
