// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PointXYZIRT.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_XYZIRT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_XYZIRT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/point_xyzirt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PointXYZIRT_timestamp
{
public:
  explicit Init_PointXYZIRT_timestamp(::ros2_interface::msg::PointXYZIRT & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PointXYZIRT timestamp(::ros2_interface::msg::PointXYZIRT::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PointXYZIRT msg_;
};

class Init_PointXYZIRT_ring_id
{
public:
  explicit Init_PointXYZIRT_ring_id(::ros2_interface::msg::PointXYZIRT & msg)
  : msg_(msg)
  {}
  Init_PointXYZIRT_timestamp ring_id(::ros2_interface::msg::PointXYZIRT::_ring_id_type arg)
  {
    msg_.ring_id = std::move(arg);
    return Init_PointXYZIRT_timestamp(msg_);
  }

private:
  ::ros2_interface::msg::PointXYZIRT msg_;
};

class Init_PointXYZIRT_intensity
{
public:
  explicit Init_PointXYZIRT_intensity(::ros2_interface::msg::PointXYZIRT & msg)
  : msg_(msg)
  {}
  Init_PointXYZIRT_ring_id intensity(::ros2_interface::msg::PointXYZIRT::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return Init_PointXYZIRT_ring_id(msg_);
  }

private:
  ::ros2_interface::msg::PointXYZIRT msg_;
};

class Init_PointXYZIRT_z
{
public:
  explicit Init_PointXYZIRT_z(::ros2_interface::msg::PointXYZIRT & msg)
  : msg_(msg)
  {}
  Init_PointXYZIRT_intensity z(::ros2_interface::msg::PointXYZIRT::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PointXYZIRT_intensity(msg_);
  }

private:
  ::ros2_interface::msg::PointXYZIRT msg_;
};

class Init_PointXYZIRT_y
{
public:
  explicit Init_PointXYZIRT_y(::ros2_interface::msg::PointXYZIRT & msg)
  : msg_(msg)
  {}
  Init_PointXYZIRT_z y(::ros2_interface::msg::PointXYZIRT::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointXYZIRT_z(msg_);
  }

private:
  ::ros2_interface::msg::PointXYZIRT msg_;
};

class Init_PointXYZIRT_x
{
public:
  Init_PointXYZIRT_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointXYZIRT_y x(::ros2_interface::msg::PointXYZIRT::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointXYZIRT_y(msg_);
  }

private:
  ::ros2_interface::msg::PointXYZIRT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PointXYZIRT>()
{
  return ros2_interface::msg::builder::Init_PointXYZIRT_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_XYZIRT__BUILDER_HPP_
