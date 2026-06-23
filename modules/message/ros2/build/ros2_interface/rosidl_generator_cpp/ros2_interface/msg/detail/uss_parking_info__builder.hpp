// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/UssParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/uss_parking_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_UssParkingInfo_parking_point3
{
public:
  explicit Init_UssParkingInfo_parking_point3(::ros2_interface::msg::UssParkingInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::UssParkingInfo parking_point3(::ros2_interface::msg::UssParkingInfo::_parking_point3_type arg)
  {
    msg_.parking_point3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfo msg_;
};

class Init_UssParkingInfo_parking_point2
{
public:
  explicit Init_UssParkingInfo_parking_point2(::ros2_interface::msg::UssParkingInfo & msg)
  : msg_(msg)
  {}
  Init_UssParkingInfo_parking_point3 parking_point2(::ros2_interface::msg::UssParkingInfo::_parking_point2_type arg)
  {
    msg_.parking_point2 = std::move(arg);
    return Init_UssParkingInfo_parking_point3(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfo msg_;
};

class Init_UssParkingInfo_parking_point1
{
public:
  explicit Init_UssParkingInfo_parking_point1(::ros2_interface::msg::UssParkingInfo & msg)
  : msg_(msg)
  {}
  Init_UssParkingInfo_parking_point2 parking_point1(::ros2_interface::msg::UssParkingInfo::_parking_point1_type arg)
  {
    msg_.parking_point1 = std::move(arg);
    return Init_UssParkingInfo_parking_point2(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfo msg_;
};

class Init_UssParkingInfo_parking_point0
{
public:
  explicit Init_UssParkingInfo_parking_point0(::ros2_interface::msg::UssParkingInfo & msg)
  : msg_(msg)
  {}
  Init_UssParkingInfo_parking_point1 parking_point0(::ros2_interface::msg::UssParkingInfo::_parking_point0_type arg)
  {
    msg_.parking_point0 = std::move(arg);
    return Init_UssParkingInfo_parking_point1(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfo msg_;
};

class Init_UssParkingInfo_uss_parking_type
{
public:
  explicit Init_UssParkingInfo_uss_parking_type(::ros2_interface::msg::UssParkingInfo & msg)
  : msg_(msg)
  {}
  Init_UssParkingInfo_parking_point0 uss_parking_type(::ros2_interface::msg::UssParkingInfo::_uss_parking_type_type arg)
  {
    msg_.uss_parking_type = std::move(arg);
    return Init_UssParkingInfo_parking_point0(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfo msg_;
};

class Init_UssParkingInfo_header
{
public:
  Init_UssParkingInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UssParkingInfo_uss_parking_type header(::ros2_interface::msg::UssParkingInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UssParkingInfo_uss_parking_type(msg_);
  }

private:
  ::ros2_interface::msg::UssParkingInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::UssParkingInfo>()
{
  return ros2_interface::msg::builder::Init_UssParkingInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__BUILDER_HPP_
