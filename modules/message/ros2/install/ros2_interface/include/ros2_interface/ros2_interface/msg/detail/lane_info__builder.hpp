// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/lane_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LaneInfo_lane_points
{
public:
  explicit Init_LaneInfo_lane_points(::ros2_interface::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LaneInfo lane_points(::ros2_interface::msg::LaneInfo::_lane_points_type arg)
  {
    msg_.lane_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfo msg_;
};

class Init_LaneInfo_type
{
public:
  explicit Init_LaneInfo_type(::ros2_interface::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_lane_points type(::ros2_interface::msg::LaneInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_LaneInfo_lane_points(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfo msg_;
};

class Init_LaneInfo_right_neighbor_id
{
public:
  explicit Init_LaneInfo_right_neighbor_id(::ros2_interface::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_type right_neighbor_id(::ros2_interface::msg::LaneInfo::_right_neighbor_id_type arg)
  {
    msg_.right_neighbor_id = std::move(arg);
    return Init_LaneInfo_type(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfo msg_;
};

class Init_LaneInfo_left_neighbor_id
{
public:
  explicit Init_LaneInfo_left_neighbor_id(::ros2_interface::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_right_neighbor_id left_neighbor_id(::ros2_interface::msg::LaneInfo::_left_neighbor_id_type arg)
  {
    msg_.left_neighbor_id = std::move(arg);
    return Init_LaneInfo_right_neighbor_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfo msg_;
};

class Init_LaneInfo_successor_id
{
public:
  explicit Init_LaneInfo_successor_id(::ros2_interface::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_left_neighbor_id successor_id(::ros2_interface::msg::LaneInfo::_successor_id_type arg)
  {
    msg_.successor_id = std::move(arg);
    return Init_LaneInfo_left_neighbor_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfo msg_;
};

class Init_LaneInfo_predecessor_id
{
public:
  explicit Init_LaneInfo_predecessor_id(::ros2_interface::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_successor_id predecessor_id(::ros2_interface::msg::LaneInfo::_predecessor_id_type arg)
  {
    msg_.predecessor_id = std::move(arg);
    return Init_LaneInfo_successor_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfo msg_;
};

class Init_LaneInfo_global_id
{
public:
  explicit Init_LaneInfo_global_id(::ros2_interface::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_predecessor_id global_id(::ros2_interface::msg::LaneInfo::_global_id_type arg)
  {
    msg_.global_id = std::move(arg);
    return Init_LaneInfo_predecessor_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfo msg_;
};

class Init_LaneInfo_priority
{
public:
  Init_LaneInfo_priority()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneInfo_global_id priority(::ros2_interface::msg::LaneInfo::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_LaneInfo_global_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LaneInfo>()
{
  return ros2_interface::msg::builder::Init_LaneInfo_priority();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__BUILDER_HPP_
