// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/GuideInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/guide_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_GuideInfo_roads_status
{
public:
  explicit Init_GuideInfo_roads_status(::ros2_interface::msg::GuideInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::GuideInfo roads_status(::ros2_interface::msg::GuideInfo::_roads_status_type arg)
  {
    msg_.roads_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::GuideInfo msg_;
};

class Init_GuideInfo_intersection_status
{
public:
  explicit Init_GuideInfo_intersection_status(::ros2_interface::msg::GuideInfo & msg)
  : msg_(msg)
  {}
  Init_GuideInfo_roads_status intersection_status(::ros2_interface::msg::GuideInfo::_intersection_status_type arg)
  {
    msg_.intersection_status = std::move(arg);
    return Init_GuideInfo_roads_status(msg_);
  }

private:
  ::ros2_interface::msg::GuideInfo msg_;
};

class Init_GuideInfo_round_status
{
public:
  explicit Init_GuideInfo_round_status(::ros2_interface::msg::GuideInfo & msg)
  : msg_(msg)
  {}
  Init_GuideInfo_intersection_status round_status(::ros2_interface::msg::GuideInfo::_round_status_type arg)
  {
    msg_.round_status = std::move(arg);
    return Init_GuideInfo_intersection_status(msg_);
  }

private:
  ::ros2_interface::msg::GuideInfo msg_;
};

class Init_GuideInfo_next_road
{
public:
  explicit Init_GuideInfo_next_road(::ros2_interface::msg::GuideInfo & msg)
  : msg_(msg)
  {}
  Init_GuideInfo_round_status next_road(::ros2_interface::msg::GuideInfo::_next_road_type arg)
  {
    msg_.next_road = std::move(arg);
    return Init_GuideInfo_round_status(msg_);
  }

private:
  ::ros2_interface::msg::GuideInfo msg_;
};

class Init_GuideInfo_current_road
{
public:
  explicit Init_GuideInfo_current_road(::ros2_interface::msg::GuideInfo & msg)
  : msg_(msg)
  {}
  Init_GuideInfo_next_road current_road(::ros2_interface::msg::GuideInfo::_current_road_type arg)
  {
    msg_.current_road = std::move(arg);
    return Init_GuideInfo_next_road(msg_);
  }

private:
  ::ros2_interface::msg::GuideInfo msg_;
};

class Init_GuideInfo_next_dis
{
public:
  explicit Init_GuideInfo_next_dis(::ros2_interface::msg::GuideInfo & msg)
  : msg_(msg)
  {}
  Init_GuideInfo_current_road next_dis(::ros2_interface::msg::GuideInfo::_next_dis_type arg)
  {
    msg_.next_dis = std::move(arg);
    return Init_GuideInfo_current_road(msg_);
  }

private:
  ::ros2_interface::msg::GuideInfo msg_;
};

class Init_GuideInfo_header
{
public:
  Init_GuideInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GuideInfo_next_dis header(::ros2_interface::msg::GuideInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GuideInfo_next_dis(msg_);
  }

private:
  ::ros2_interface::msg::GuideInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::GuideInfo>()
{
  return ros2_interface::msg::builder::Init_GuideInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__BUILDER_HPP_
