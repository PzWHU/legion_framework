// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ParkingOutInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/parking_out_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ParkingOutInfo_theta
{
public:
  explicit Init_ParkingOutInfo_theta(::ros2_interface::msg::ParkingOutInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ParkingOutInfo theta(::ros2_interface::msg::ParkingOutInfo::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ParkingOutInfo msg_;
};

class Init_ParkingOutInfo_parking_out_point
{
public:
  explicit Init_ParkingOutInfo_parking_out_point(::ros2_interface::msg::ParkingOutInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingOutInfo_theta parking_out_point(::ros2_interface::msg::ParkingOutInfo::_parking_out_point_type arg)
  {
    msg_.parking_out_point = std::move(arg);
    return Init_ParkingOutInfo_theta(msg_);
  }

private:
  ::ros2_interface::msg::ParkingOutInfo msg_;
};

class Init_ParkingOutInfo_is_parking_out_enable
{
public:
  explicit Init_ParkingOutInfo_is_parking_out_enable(::ros2_interface::msg::ParkingOutInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingOutInfo_parking_out_point is_parking_out_enable(::ros2_interface::msg::ParkingOutInfo::_is_parking_out_enable_type arg)
  {
    msg_.is_parking_out_enable = std::move(arg);
    return Init_ParkingOutInfo_parking_out_point(msg_);
  }

private:
  ::ros2_interface::msg::ParkingOutInfo msg_;
};

class Init_ParkingOutInfo_parking_direction_type
{
public:
  explicit Init_ParkingOutInfo_parking_direction_type(::ros2_interface::msg::ParkingOutInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingOutInfo_is_parking_out_enable parking_direction_type(::ros2_interface::msg::ParkingOutInfo::_parking_direction_type_type arg)
  {
    msg_.parking_direction_type = std::move(arg);
    return Init_ParkingOutInfo_is_parking_out_enable(msg_);
  }

private:
  ::ros2_interface::msg::ParkingOutInfo msg_;
};

class Init_ParkingOutInfo_parking_out_id
{
public:
  explicit Init_ParkingOutInfo_parking_out_id(::ros2_interface::msg::ParkingOutInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingOutInfo_parking_direction_type parking_out_id(::ros2_interface::msg::ParkingOutInfo::_parking_out_id_type arg)
  {
    msg_.parking_out_id = std::move(arg);
    return Init_ParkingOutInfo_parking_direction_type(msg_);
  }

private:
  ::ros2_interface::msg::ParkingOutInfo msg_;
};

class Init_ParkingOutInfo_header
{
public:
  Init_ParkingOutInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkingOutInfo_parking_out_id header(::ros2_interface::msg::ParkingOutInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParkingOutInfo_parking_out_id(msg_);
  }

private:
  ::ros2_interface::msg::ParkingOutInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ParkingOutInfo>()
{
  return ros2_interface::msg::builder::Init_ParkingOutInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__BUILDER_HPP_
