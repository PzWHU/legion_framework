// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RoutingRequest.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/routing_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RoutingRequest_key_point_list
{
public:
  explicit Init_RoutingRequest_key_point_list(::ros2_interface::msg::RoutingRequest & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RoutingRequest key_point_list(::ros2_interface::msg::RoutingRequest::_key_point_list_type arg)
  {
    msg_.key_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RoutingRequest msg_;
};

class Init_RoutingRequest_num_of_kp
{
public:
  explicit Init_RoutingRequest_num_of_kp(::ros2_interface::msg::RoutingRequest & msg)
  : msg_(msg)
  {}
  Init_RoutingRequest_key_point_list num_of_kp(::ros2_interface::msg::RoutingRequest::_num_of_kp_type arg)
  {
    msg_.num_of_kp = std::move(arg);
    return Init_RoutingRequest_key_point_list(msg_);
  }

private:
  ::ros2_interface::msg::RoutingRequest msg_;
};

class Init_RoutingRequest_request_type
{
public:
  explicit Init_RoutingRequest_request_type(::ros2_interface::msg::RoutingRequest & msg)
  : msg_(msg)
  {}
  Init_RoutingRequest_num_of_kp request_type(::ros2_interface::msg::RoutingRequest::_request_type_type arg)
  {
    msg_.request_type = std::move(arg);
    return Init_RoutingRequest_num_of_kp(msg_);
  }

private:
  ::ros2_interface::msg::RoutingRequest msg_;
};

class Init_RoutingRequest_request_source
{
public:
  explicit Init_RoutingRequest_request_source(::ros2_interface::msg::RoutingRequest & msg)
  : msg_(msg)
  {}
  Init_RoutingRequest_request_type request_source(::ros2_interface::msg::RoutingRequest::_request_source_type arg)
  {
    msg_.request_source = std::move(arg);
    return Init_RoutingRequest_request_type(msg_);
  }

private:
  ::ros2_interface::msg::RoutingRequest msg_;
};

class Init_RoutingRequest_header
{
public:
  Init_RoutingRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoutingRequest_request_source header(::ros2_interface::msg::RoutingRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RoutingRequest_request_source(msg_);
  }

private:
  ::ros2_interface::msg::RoutingRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RoutingRequest>()
{
  return ros2_interface::msg::builder::Init_RoutingRequest_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__BUILDER_HPP_
