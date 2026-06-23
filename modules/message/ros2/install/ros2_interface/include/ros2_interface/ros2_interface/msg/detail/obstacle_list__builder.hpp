// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ObstacleList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ObstacleList_change_origin_flag
{
public:
  explicit Init_ObstacleList_change_origin_flag(::ros2_interface::msg::ObstacleList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ObstacleList change_origin_flag(::ros2_interface::msg::ObstacleList::_change_origin_flag_type arg)
  {
    msg_.change_origin_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleList msg_;
};

class Init_ObstacleList_is_valid
{
public:
  explicit Init_ObstacleList_is_valid(::ros2_interface::msg::ObstacleList & msg)
  : msg_(msg)
  {}
  Init_ObstacleList_change_origin_flag is_valid(::ros2_interface::msg::ObstacleList::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_ObstacleList_change_origin_flag(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleList msg_;
};

class Init_ObstacleList_error_code
{
public:
  explicit Init_ObstacleList_error_code(::ros2_interface::msg::ObstacleList & msg)
  : msg_(msg)
  {}
  Init_ObstacleList_is_valid error_code(::ros2_interface::msg::ObstacleList::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ObstacleList_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleList msg_;
};

class Init_ObstacleList_obstacle
{
public:
  explicit Init_ObstacleList_obstacle(::ros2_interface::msg::ObstacleList & msg)
  : msg_(msg)
  {}
  Init_ObstacleList_error_code obstacle(::ros2_interface::msg::ObstacleList::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_ObstacleList_error_code(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleList msg_;
};

class Init_ObstacleList_sensor_id
{
public:
  explicit Init_ObstacleList_sensor_id(::ros2_interface::msg::ObstacleList & msg)
  : msg_(msg)
  {}
  Init_ObstacleList_obstacle sensor_id(::ros2_interface::msg::ObstacleList::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_ObstacleList_obstacle(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleList msg_;
};

class Init_ObstacleList_header
{
public:
  Init_ObstacleList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleList_sensor_id header(::ros2_interface::msg::ObstacleList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleList_sensor_id(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ObstacleList>()
{
  return ros2_interface::msg::builder::Init_ObstacleList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_LIST__BUILDER_HPP_
