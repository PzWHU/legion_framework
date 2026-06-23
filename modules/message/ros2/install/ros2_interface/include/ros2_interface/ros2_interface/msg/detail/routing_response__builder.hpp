// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RoutingResponse.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/routing_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RoutingResponse_lane_list
{
public:
  explicit Init_RoutingResponse_lane_list(::ros2_interface::msg::RoutingResponse & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RoutingResponse lane_list(::ros2_interface::msg::RoutingResponse::_lane_list_type arg)
  {
    msg_.lane_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RoutingResponse msg_;
};

class Init_RoutingResponse_route_reason
{
public:
  explicit Init_RoutingResponse_route_reason(::ros2_interface::msg::RoutingResponse & msg)
  : msg_(msg)
  {}
  Init_RoutingResponse_lane_list route_reason(::ros2_interface::msg::RoutingResponse::_route_reason_type arg)
  {
    msg_.route_reason = std::move(arg);
    return Init_RoutingResponse_lane_list(msg_);
  }

private:
  ::ros2_interface::msg::RoutingResponse msg_;
};

class Init_RoutingResponse_replan_flag
{
public:
  explicit Init_RoutingResponse_replan_flag(::ros2_interface::msg::RoutingResponse & msg)
  : msg_(msg)
  {}
  Init_RoutingResponse_route_reason replan_flag(::ros2_interface::msg::RoutingResponse::_replan_flag_type arg)
  {
    msg_.replan_flag = std::move(arg);
    return Init_RoutingResponse_route_reason(msg_);
  }

private:
  ::ros2_interface::msg::RoutingResponse msg_;
};

class Init_RoutingResponse_plan_status
{
public:
  explicit Init_RoutingResponse_plan_status(::ros2_interface::msg::RoutingResponse & msg)
  : msg_(msg)
  {}
  Init_RoutingResponse_replan_flag plan_status(::ros2_interface::msg::RoutingResponse::_plan_status_type arg)
  {
    msg_.plan_status = std::move(arg);
    return Init_RoutingResponse_replan_flag(msg_);
  }

private:
  ::ros2_interface::msg::RoutingResponse msg_;
};

class Init_RoutingResponse_header
{
public:
  Init_RoutingResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoutingResponse_plan_status header(::ros2_interface::msg::RoutingResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RoutingResponse_plan_status(msg_);
  }

private:
  ::ros2_interface::msg::RoutingResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RoutingResponse>()
{
  return ros2_interface::msg::builder::Init_RoutingResponse_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__BUILDER_HPP_
