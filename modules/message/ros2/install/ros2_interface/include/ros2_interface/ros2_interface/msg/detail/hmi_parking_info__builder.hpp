// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMIParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_parking_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMIParkingInfo_parking_source_type
{
public:
  explicit Init_HMIParkingInfo_parking_source_type(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMIParkingInfo parking_source_type(::ros2_interface::msg::HMIParkingInfo::_parking_source_type_type arg)
  {
    msg_.parking_source_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_polygon
{
public:
  explicit Init_HMIParkingInfo_polygon(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_parking_source_type polygon(::ros2_interface::msg::HMIParkingInfo::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return Init_HMIParkingInfo_parking_source_type(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_is_custom_parking
{
public:
  explicit Init_HMIParkingInfo_is_custom_parking(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_polygon is_custom_parking(::ros2_interface::msg::HMIParkingInfo::_is_custom_parking_type arg)
  {
    msg_.is_custom_parking = std::move(arg);
    return Init_HMIParkingInfo_polygon(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_length
{
public:
  explicit Init_HMIParkingInfo_length(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_is_custom_parking length(::ros2_interface::msg::HMIParkingInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_HMIParkingInfo_is_custom_parking(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_width
{
public:
  explicit Init_HMIParkingInfo_width(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_length width(::ros2_interface::msg::HMIParkingInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_HMIParkingInfo_length(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_theta
{
public:
  explicit Init_HMIParkingInfo_theta(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_width theta(::ros2_interface::msg::HMIParkingInfo::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_HMIParkingInfo_width(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_center_point_of_parking
{
public:
  explicit Init_HMIParkingInfo_center_point_of_parking(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_theta center_point_of_parking(::ros2_interface::msg::HMIParkingInfo::_center_point_of_parking_type arg)
  {
    msg_.center_point_of_parking = std::move(arg);
    return Init_HMIParkingInfo_theta(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_parking_status
{
public:
  explicit Init_HMIParkingInfo_parking_status(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_center_point_of_parking parking_status(::ros2_interface::msg::HMIParkingInfo::_parking_status_type arg)
  {
    msg_.parking_status = std::move(arg);
    return Init_HMIParkingInfo_center_point_of_parking(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_parking_type
{
public:
  explicit Init_HMIParkingInfo_parking_type(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_parking_status parking_type(::ros2_interface::msg::HMIParkingInfo::_parking_type_type arg)
  {
    msg_.parking_type = std::move(arg);
    return Init_HMIParkingInfo_parking_status(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_parking_space_id
{
public:
  explicit Init_HMIParkingInfo_parking_space_id(::ros2_interface::msg::HMIParkingInfo & msg)
  : msg_(msg)
  {}
  Init_HMIParkingInfo_parking_type parking_space_id(::ros2_interface::msg::HMIParkingInfo::_parking_space_id_type arg)
  {
    msg_.parking_space_id = std::move(arg);
    return Init_HMIParkingInfo_parking_type(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

class Init_HMIParkingInfo_header
{
public:
  Init_HMIParkingInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMIParkingInfo_parking_space_id header(::ros2_interface::msg::HMIParkingInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HMIParkingInfo_parking_space_id(msg_);
  }

private:
  ::ros2_interface::msg::HMIParkingInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMIParkingInfo>()
{
  return ros2_interface::msg::builder::Init_HMIParkingInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__BUILDER_HPP_
