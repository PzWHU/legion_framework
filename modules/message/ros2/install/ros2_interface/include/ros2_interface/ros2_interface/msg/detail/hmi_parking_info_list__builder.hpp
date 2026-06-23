// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMIParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_parking_info_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMIParkingInfoList_parking_out_id
{
public:
  explicit Init_HMIParkingInfoList_parking_out_id(::ros2_interface::msg::HMIParkingInfoList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMIParkingInfoList parking_out_id(::ros2_interface::msg::HMIParkingInfoList::_parking_out_id_type arg)
  {
    msg_.parking_out_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfoList msg_;
};

class Init_HMIParkingInfoList_parking_out_direction
{
public:
  explicit Init_HMIParkingInfoList_parking_out_direction(::ros2_interface::msg::HMIParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfoList_parking_out_id parking_out_direction(::ros2_interface::msg::HMIParkingInfoList::_parking_out_direction_type arg)
  {
    msg_.parking_out_direction = std::move(arg);
    return Init_HMIParkingInfoList_parking_out_id(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfoList msg_;
};

class Init_HMIParkingInfoList_parking_out_enable
{
public:
  explicit Init_HMIParkingInfoList_parking_out_enable(::ros2_interface::msg::HMIParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfoList_parking_out_direction parking_out_enable(::ros2_interface::msg::HMIParkingInfoList::_parking_out_enable_type arg)
  {
    msg_.parking_out_enable = std::move(arg);
    return Init_HMIParkingInfoList_parking_out_direction(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfoList msg_;
};

class Init_HMIParkingInfoList_parking_info
{
public:
  explicit Init_HMIParkingInfoList_parking_info(::ros2_interface::msg::HMIParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfoList_parking_out_enable parking_info(::ros2_interface::msg::HMIParkingInfoList::_parking_info_type arg)
  {
    msg_.parking_info = std::move(arg);
    return Init_HMIParkingInfoList_parking_out_enable(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfoList msg_;
};

class Init_HMIParkingInfoList_header
{
public:
  Init_HMIParkingInfoList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMIParkingInfoList_parking_info header(::ros2_interface::msg::HMIParkingInfoList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HMIParkingInfoList_parking_info(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfoList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMIParkingInfoList>()
{
  return ros2_interface::msg::builder::Init_HMIParkingInfoList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO_LIST__BUILDER_HPP_
