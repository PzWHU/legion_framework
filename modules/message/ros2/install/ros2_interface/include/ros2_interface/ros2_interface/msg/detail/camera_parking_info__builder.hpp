// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/CameraParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/camera_parking_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_CameraParkingInfo_parking_points_in_image
{
public:
  explicit Init_CameraParkingInfo_parking_points_in_image(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::CameraParkingInfo parking_points_in_image(::ros2_interface::msg::CameraParkingInfo::_parking_points_in_image_type arg)
  {
    msg_.parking_points_in_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_yaw_offset
{
public:
  explicit Init_CameraParkingInfo_yaw_offset(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_parking_points_in_image yaw_offset(::ros2_interface::msg::CameraParkingInfo::_yaw_offset_type arg)
  {
    msg_.yaw_offset = std::move(arg);
    return Init_CameraParkingInfo_parking_points_in_image(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_length
{
public:
  explicit Init_CameraParkingInfo_length(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_yaw_offset length(::ros2_interface::msg::CameraParkingInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_CameraParkingInfo_yaw_offset(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_width
{
public:
  explicit Init_CameraParkingInfo_width(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_length width(::ros2_interface::msg::CameraParkingInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_CameraParkingInfo_length(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_theta
{
public:
  explicit Init_CameraParkingInfo_theta(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_width theta(::ros2_interface::msg::CameraParkingInfo::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_CameraParkingInfo_width(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_center_point_of_parking
{
public:
  explicit Init_CameraParkingInfo_center_point_of_parking(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_theta center_point_of_parking(::ros2_interface::msg::CameraParkingInfo::_center_point_of_parking_type arg)
  {
    msg_.center_point_of_parking = std::move(arg);
    return Init_CameraParkingInfo_theta(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_confidence
{
public:
  explicit Init_CameraParkingInfo_confidence(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_center_point_of_parking confidence(::ros2_interface::msg::CameraParkingInfo::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_CameraParkingInfo_center_point_of_parking(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_is_parking_enable
{
public:
  explicit Init_CameraParkingInfo_is_parking_enable(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_confidence is_parking_enable(::ros2_interface::msg::CameraParkingInfo::_is_parking_enable_type arg)
  {
    msg_.is_parking_enable = std::move(arg);
    return Init_CameraParkingInfo_confidence(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_parking_type
{
public:
  explicit Init_CameraParkingInfo_parking_type(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_is_parking_enable parking_type(::ros2_interface::msg::CameraParkingInfo::_parking_type_type arg)
  {
    msg_.parking_type = std::move(arg);
    return Init_CameraParkingInfo_is_parking_enable(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_parking_space_id
{
public:
  explicit Init_CameraParkingInfo_parking_space_id(::ros2_interface::msg::CameraParkingInfo & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfo_parking_type parking_space_id(::ros2_interface::msg::CameraParkingInfo::_parking_space_id_type arg)
  {
    msg_.parking_space_id = std::move(arg);
    return Init_CameraParkingInfo_parking_type(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

class Init_CameraParkingInfo_header
{
public:
  Init_CameraParkingInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraParkingInfo_parking_space_id header(::ros2_interface::msg::CameraParkingInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraParkingInfo_parking_space_id(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::CameraParkingInfo>()
{
  return ros2_interface::msg::builder::Init_CameraParkingInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO__BUILDER_HPP_
