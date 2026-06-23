// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Region.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__REGION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Region_region_polygon
{
public:
  explicit Init_Region_region_polygon(::ros2_interface::msg::Region & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Region region_polygon(::ros2_interface::msg::Region::_region_polygon_type arg)
  {
    msg_.region_polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Region msg_;
};

class Init_Region_rank_risk
{
public:
  explicit Init_Region_rank_risk(::ros2_interface::msg::Region & msg)
  : msg_(msg)
  {}
  Init_Region_region_polygon rank_risk(::ros2_interface::msg::Region::_rank_risk_type arg)
  {
    msg_.rank_risk = std::move(arg);
    return Init_Region_region_polygon(msg_);
  }

private:
  ::ros2_interface::msg::Region msg_;
};

class Init_Region_score
{
public:
  explicit Init_Region_score(::ros2_interface::msg::Region & msg)
  : msg_(msg)
  {}
  Init_Region_rank_risk score(::ros2_interface::msg::Region::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Region_rank_risk(msg_);
  }

private:
  ::ros2_interface::msg::Region msg_;
};

class Init_Region_name_region
{
public:
  Init_Region_name_region()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Region_score name_region(::ros2_interface::msg::Region::_name_region_type arg)
  {
    msg_.name_region = std::move(arg);
    return Init_Region_score(msg_);
  }

private:
  ::ros2_interface::msg::Region msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Region>()
{
  return ros2_interface::msg::builder::Init_Region_name_region();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__REGION__BUILDER_HPP_
