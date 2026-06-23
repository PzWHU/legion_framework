// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/WLConstraintInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/wl_constraint_info_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_WLConstraintInfoList_is_valid
{
public:
  explicit Init_WLConstraintInfoList_is_valid(::ros2_interface::msg::WLConstraintInfoList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::WLConstraintInfoList is_valid(::ros2_interface::msg::WLConstraintInfoList::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfoList msg_;
};

class Init_WLConstraintInfoList_error_code
{
public:
  explicit Init_WLConstraintInfoList_error_code(::ros2_interface::msg::WLConstraintInfoList & msg)
  : msg_(msg)
  {}
  Init_WLConstraintInfoList_is_valid error_code(::ros2_interface::msg::WLConstraintInfoList::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_WLConstraintInfoList_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfoList msg_;
};

class Init_WLConstraintInfoList_wl_constraint_info
{
public:
  explicit Init_WLConstraintInfoList_wl_constraint_info(::ros2_interface::msg::WLConstraintInfoList & msg)
  : msg_(msg)
  {}
  Init_WLConstraintInfoList_error_code wl_constraint_info(::ros2_interface::msg::WLConstraintInfoList::_wl_constraint_info_type arg)
  {
    msg_.wl_constraint_info = std::move(arg);
    return Init_WLConstraintInfoList_error_code(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfoList msg_;
};

class Init_WLConstraintInfoList_header
{
public:
  Init_WLConstraintInfoList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WLConstraintInfoList_wl_constraint_info header(::ros2_interface::msg::WLConstraintInfoList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WLConstraintInfoList_wl_constraint_info(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfoList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::WLConstraintInfoList>()
{
  return ros2_interface::msg::builder::Init_WLConstraintInfoList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO_LIST__BUILDER_HPP_
