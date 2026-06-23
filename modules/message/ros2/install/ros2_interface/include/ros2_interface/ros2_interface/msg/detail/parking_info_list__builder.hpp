// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/parking_info_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ParkingInfoList_parking_out_id
{
public:
  explicit Init_ParkingInfoList_parking_out_id(::ros2_interface::msg::ParkingInfoList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ParkingInfoList parking_out_id(::ros2_interface::msg::ParkingInfoList::_parking_out_id_type arg)
  {
    msg_.parking_out_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfoList msg_;
};

class Init_ParkingInfoList_parking_out_direction
{
public:
  explicit Init_ParkingInfoList_parking_out_direction(::ros2_interface::msg::ParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_ParkingInfoList_parking_out_id parking_out_direction(::ros2_interface::msg::ParkingInfoList::_parking_out_direction_type arg)
  {
    msg_.parking_out_direction = std::move(arg);
    return Init_ParkingInfoList_parking_out_id(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfoList msg_;
};

class Init_ParkingInfoList_parking_out_enable
{
public:
  explicit Init_ParkingInfoList_parking_out_enable(::ros2_interface::msg::ParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_ParkingInfoList_parking_out_direction parking_out_enable(::ros2_interface::msg::ParkingInfoList::_parking_out_enable_type arg)
  {
    msg_.parking_out_enable = std::move(arg);
    return Init_ParkingInfoList_parking_out_direction(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfoList msg_;
};

class Init_ParkingInfoList_is_valid
{
public:
  explicit Init_ParkingInfoList_is_valid(::ros2_interface::msg::ParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_ParkingInfoList_parking_out_enable is_valid(::ros2_interface::msg::ParkingInfoList::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_ParkingInfoList_parking_out_enable(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfoList msg_;
};

class Init_ParkingInfoList_error_code
{
public:
  explicit Init_ParkingInfoList_error_code(::ros2_interface::msg::ParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_ParkingInfoList_is_valid error_code(::ros2_interface::msg::ParkingInfoList::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ParkingInfoList_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfoList msg_;
};

class Init_ParkingInfoList_parking_info
{
public:
  explicit Init_ParkingInfoList_parking_info(::ros2_interface::msg::ParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_ParkingInfoList_error_code parking_info(::ros2_interface::msg::ParkingInfoList::_parking_info_type arg)
  {
    msg_.parking_info = std::move(arg);
    return Init_ParkingInfoList_error_code(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfoList msg_;
};

class Init_ParkingInfoList_header
{
public:
  Init_ParkingInfoList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkingInfoList_parking_info header(::ros2_interface::msg::ParkingInfoList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParkingInfoList_parking_info(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfoList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ParkingInfoList>()
{
  return ros2_interface::msg::builder::Init_ParkingInfoList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO_LIST__BUILDER_HPP_
