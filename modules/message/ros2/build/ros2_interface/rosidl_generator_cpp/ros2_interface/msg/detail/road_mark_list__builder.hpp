// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RoadMarkList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/road_mark_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RoadMarkList_roadmarks
{
public:
  explicit Init_RoadMarkList_roadmarks(::ros2_interface::msg::RoadMarkList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RoadMarkList roadmarks(::ros2_interface::msg::RoadMarkList::_roadmarks_type arg)
  {
    msg_.roadmarks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RoadMarkList msg_;
};

class Init_RoadMarkList_header
{
public:
  Init_RoadMarkList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadMarkList_roadmarks header(::ros2_interface::msg::RoadMarkList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RoadMarkList_roadmarks(msg_);
  }

private:
  ::ros2_interface::msg::RoadMarkList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RoadMarkList>()
{
  return ros2_interface::msg::builder::Init_RoadMarkList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__BUILDER_HPP_
