// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LaneInfoExtend.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/lane_info_extend__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LaneInfoExtend_lane_points
{
public:
  explicit Init_LaneInfoExtend_lane_points(::ros2_interface::msg::LaneInfoExtend & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LaneInfoExtend lane_points(::ros2_interface::msg::LaneInfoExtend::_lane_points_type arg)
  {
    msg_.lane_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfoExtend msg_;
};

class Init_LaneInfoExtend_type
{
public:
  explicit Init_LaneInfoExtend_type(::ros2_interface::msg::LaneInfoExtend & msg)
  : msg_(msg)
  {}
  Init_LaneInfoExtend_lane_points type(::ros2_interface::msg::LaneInfoExtend::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_LaneInfoExtend_lane_points(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfoExtend msg_;
};

class Init_LaneInfoExtend_right_neighbor_id
{
public:
  explicit Init_LaneInfoExtend_right_neighbor_id(::ros2_interface::msg::LaneInfoExtend & msg)
  : msg_(msg)
  {}
  Init_LaneInfoExtend_type right_neighbor_id(::ros2_interface::msg::LaneInfoExtend::_right_neighbor_id_type arg)
  {
    msg_.right_neighbor_id = std::move(arg);
    return Init_LaneInfoExtend_type(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfoExtend msg_;
};

class Init_LaneInfoExtend_left_neighbor_id
{
public:
  explicit Init_LaneInfoExtend_left_neighbor_id(::ros2_interface::msg::LaneInfoExtend & msg)
  : msg_(msg)
  {}
  Init_LaneInfoExtend_right_neighbor_id left_neighbor_id(::ros2_interface::msg::LaneInfoExtend::_left_neighbor_id_type arg)
  {
    msg_.left_neighbor_id = std::move(arg);
    return Init_LaneInfoExtend_right_neighbor_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfoExtend msg_;
};

class Init_LaneInfoExtend_successor_ids
{
public:
  explicit Init_LaneInfoExtend_successor_ids(::ros2_interface::msg::LaneInfoExtend & msg)
  : msg_(msg)
  {}
  Init_LaneInfoExtend_left_neighbor_id successor_ids(::ros2_interface::msg::LaneInfoExtend::_successor_ids_type arg)
  {
    msg_.successor_ids = std::move(arg);
    return Init_LaneInfoExtend_left_neighbor_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfoExtend msg_;
};

class Init_LaneInfoExtend_predecessor_ids
{
public:
  explicit Init_LaneInfoExtend_predecessor_ids(::ros2_interface::msg::LaneInfoExtend & msg)
  : msg_(msg)
  {}
  Init_LaneInfoExtend_successor_ids predecessor_ids(::ros2_interface::msg::LaneInfoExtend::_predecessor_ids_type arg)
  {
    msg_.predecessor_ids = std::move(arg);
    return Init_LaneInfoExtend_successor_ids(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfoExtend msg_;
};

class Init_LaneInfoExtend_global_id
{
public:
  explicit Init_LaneInfoExtend_global_id(::ros2_interface::msg::LaneInfoExtend & msg)
  : msg_(msg)
  {}
  Init_LaneInfoExtend_predecessor_ids global_id(::ros2_interface::msg::LaneInfoExtend::_global_id_type arg)
  {
    msg_.global_id = std::move(arg);
    return Init_LaneInfoExtend_predecessor_ids(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfoExtend msg_;
};

class Init_LaneInfoExtend_priority
{
public:
  Init_LaneInfoExtend_priority()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneInfoExtend_global_id priority(::ros2_interface::msg::LaneInfoExtend::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_LaneInfoExtend_global_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneInfoExtend msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LaneInfoExtend>()
{
  return ros2_interface::msg::builder::Init_LaneInfoExtend_priority();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__BUILDER_HPP_
