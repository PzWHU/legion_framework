// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/UssObstacleList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/uss_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_UssObstacleList_is_valid
{
public:
  explicit Init_UssObstacleList_is_valid(::ros2_interface::msg::UssObstacleList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::UssObstacleList is_valid(::ros2_interface::msg::UssObstacleList::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacleList msg_;
};

class Init_UssObstacleList_error_code
{
public:
  explicit Init_UssObstacleList_error_code(::ros2_interface::msg::UssObstacleList & msg)
  : msg_(msg)
  {}
  Init_UssObstacleList_is_valid error_code(::ros2_interface::msg::UssObstacleList::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_UssObstacleList_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacleList msg_;
};

class Init_UssObstacleList_uss_ranges
{
public:
  explicit Init_UssObstacleList_uss_ranges(::ros2_interface::msg::UssObstacleList & msg)
  : msg_(msg)
  {}
  Init_UssObstacleList_error_code uss_ranges(::ros2_interface::msg::UssObstacleList::_uss_ranges_type arg)
  {
    msg_.uss_ranges = std::move(arg);
    return Init_UssObstacleList_error_code(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacleList msg_;
};

class Init_UssObstacleList_uss_obstacles
{
public:
  explicit Init_UssObstacleList_uss_obstacles(::ros2_interface::msg::UssObstacleList & msg)
  : msg_(msg)
  {}
  Init_UssObstacleList_uss_ranges uss_obstacles(::ros2_interface::msg::UssObstacleList::_uss_obstacles_type arg)
  {
    msg_.uss_obstacles = std::move(arg);
    return Init_UssObstacleList_uss_ranges(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacleList msg_;
};

class Init_UssObstacleList_header
{
public:
  Init_UssObstacleList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UssObstacleList_uss_obstacles header(::ros2_interface::msg::UssObstacleList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UssObstacleList_uss_obstacles(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::UssObstacleList>()
{
  return ros2_interface::msg::builder::Init_UssObstacleList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE_LIST__BUILDER_HPP_
