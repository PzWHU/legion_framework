// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RouteFusionInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/route_fusion_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RouteFusionInfo_fusion_reason
{
public:
  explicit Init_RouteFusionInfo_fusion_reason(::ros2_interface::msg::RouteFusionInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RouteFusionInfo fusion_reason(::ros2_interface::msg::RouteFusionInfo::_fusion_reason_type arg)
  {
    msg_.fusion_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RouteFusionInfo msg_;
};

class Init_RouteFusionInfo_fusion_flag
{
public:
  Init_RouteFusionInfo_fusion_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteFusionInfo_fusion_reason fusion_flag(::ros2_interface::msg::RouteFusionInfo::_fusion_flag_type arg)
  {
    msg_.fusion_flag = std::move(arg);
    return Init_RouteFusionInfo_fusion_reason(msg_);
  }

private:
  ::ros2_interface::msg::RouteFusionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RouteFusionInfo>()
{
  return ros2_interface::msg::builder::Init_RouteFusionInfo_fusion_flag();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__BUILDER_HPP_
