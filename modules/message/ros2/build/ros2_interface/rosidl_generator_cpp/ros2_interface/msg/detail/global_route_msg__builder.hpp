// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/GlobalRouteMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/global_route_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_GlobalRouteMsg_cur_slice
{
public:
  explicit Init_GlobalRouteMsg_cur_slice(::ros2_interface::msg::GlobalRouteMsg & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::GlobalRouteMsg cur_slice(::ros2_interface::msg::GlobalRouteMsg::_cur_slice_type arg)
  {
    msg_.cur_slice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::GlobalRouteMsg msg_;
};

class Init_GlobalRouteMsg_cur_mileage
{
public:
  explicit Init_GlobalRouteMsg_cur_mileage(::ros2_interface::msg::GlobalRouteMsg & msg)
  : msg_(msg)
  {}
  Init_GlobalRouteMsg_cur_slice cur_mileage(::ros2_interface::msg::GlobalRouteMsg::_cur_mileage_type arg)
  {
    msg_.cur_mileage = std::move(arg);
    return Init_GlobalRouteMsg_cur_slice(msg_);
  }

private:
  ::ros2_interface::msg::GlobalRouteMsg msg_;
};

class Init_GlobalRouteMsg_total_mileage
{
public:
  explicit Init_GlobalRouteMsg_total_mileage(::ros2_interface::msg::GlobalRouteMsg & msg)
  : msg_(msg)
  {}
  Init_GlobalRouteMsg_cur_mileage total_mileage(::ros2_interface::msg::GlobalRouteMsg::_total_mileage_type arg)
  {
    msg_.total_mileage = std::move(arg);
    return Init_GlobalRouteMsg_cur_mileage(msg_);
  }

private:
  ::ros2_interface::msg::GlobalRouteMsg msg_;
};

class Init_GlobalRouteMsg_current_lanelet
{
public:
  explicit Init_GlobalRouteMsg_current_lanelet(::ros2_interface::msg::GlobalRouteMsg & msg)
  : msg_(msg)
  {}
  Init_GlobalRouteMsg_total_mileage current_lanelet(::ros2_interface::msg::GlobalRouteMsg::_current_lanelet_type arg)
  {
    msg_.current_lanelet = std::move(arg);
    return Init_GlobalRouteMsg_total_mileage(msg_);
  }

private:
  ::ros2_interface::msg::GlobalRouteMsg msg_;
};

class Init_GlobalRouteMsg_route
{
public:
  explicit Init_GlobalRouteMsg_route(::ros2_interface::msg::GlobalRouteMsg & msg)
  : msg_(msg)
  {}
  Init_GlobalRouteMsg_current_lanelet route(::ros2_interface::msg::GlobalRouteMsg::_route_type arg)
  {
    msg_.route = std::move(arg);
    return Init_GlobalRouteMsg_current_lanelet(msg_);
  }

private:
  ::ros2_interface::msg::GlobalRouteMsg msg_;
};

class Init_GlobalRouteMsg_header
{
public:
  Init_GlobalRouteMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalRouteMsg_route header(::ros2_interface::msg::GlobalRouteMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GlobalRouteMsg_route(msg_);
  }

private:
  ::ros2_interface::msg::GlobalRouteMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::GlobalRouteMsg>()
{
  return ros2_interface::msg::builder::Init_GlobalRouteMsg_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__BUILDER_HPP_
