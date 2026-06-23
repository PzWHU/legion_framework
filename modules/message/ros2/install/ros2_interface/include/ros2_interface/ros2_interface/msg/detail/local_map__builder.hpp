// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LocalMap.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/local_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LocalMap_lane_list
{
public:
  explicit Init_LocalMap_lane_list(::ros2_interface::msg::LocalMap & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LocalMap lane_list(::ros2_interface::msg::LocalMap::_lane_list_type arg)
  {
    msg_.lane_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LocalMap msg_;
};

class Init_LocalMap_range
{
public:
  explicit Init_LocalMap_range(::ros2_interface::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_lane_list range(::ros2_interface::msg::LocalMap::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_LocalMap_lane_list(msg_);
  }

private:
  ::ros2_interface::msg::LocalMap msg_;
};

class Init_LocalMap_ego_point
{
public:
  explicit Init_LocalMap_ego_point(::ros2_interface::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_range ego_point(::ros2_interface::msg::LocalMap::_ego_point_type arg)
  {
    msg_.ego_point = std::move(arg);
    return Init_LocalMap_range(msg_);
  }

private:
  ::ros2_interface::msg::LocalMap msg_;
};

class Init_LocalMap_seq
{
public:
  explicit Init_LocalMap_seq(::ros2_interface::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_ego_point seq(::ros2_interface::msg::LocalMap::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_LocalMap_ego_point(msg_);
  }

private:
  ::ros2_interface::msg::LocalMap msg_;
};

class Init_LocalMap_header
{
public:
  Init_LocalMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalMap_seq header(::ros2_interface::msg::LocalMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalMap_seq(msg_);
  }

private:
  ::ros2_interface::msg::LocalMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LocalMap>()
{
  return ros2_interface::msg::builder::Init_LocalMap_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__BUILDER_HPP_
