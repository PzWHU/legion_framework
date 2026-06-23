// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/UssParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/uss_parking_info_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_UssParkingInfoList_is_valid
{
public:
  explicit Init_UssParkingInfoList_is_valid(::ros2_interface::msg::UssParkingInfoList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::UssParkingInfoList is_valid(::ros2_interface::msg::UssParkingInfoList::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfoList msg_;
};

class Init_UssParkingInfoList_error_code
{
public:
  explicit Init_UssParkingInfoList_error_code(::ros2_interface::msg::UssParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_UssParkingInfoList_is_valid error_code(::ros2_interface::msg::UssParkingInfoList::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_UssParkingInfoList_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfoList msg_;
};

class Init_UssParkingInfoList_uss_parking_info
{
public:
  explicit Init_UssParkingInfoList_uss_parking_info(::ros2_interface::msg::UssParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_UssParkingInfoList_error_code uss_parking_info(::ros2_interface::msg::UssParkingInfoList::_uss_parking_info_type arg)
  {
    msg_.uss_parking_info = std::move(arg);
    return Init_UssParkingInfoList_error_code(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfoList msg_;
};

class Init_UssParkingInfoList_header
{
public:
  Init_UssParkingInfoList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UssParkingInfoList_uss_parking_info header(::ros2_interface::msg::UssParkingInfoList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UssParkingInfoList_uss_parking_info(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfoList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::UssParkingInfoList>()
{
  return ros2_interface::msg::builder::Init_UssParkingInfoList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__BUILDER_HPP_
