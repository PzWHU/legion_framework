// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PointCloud_height
{
public:
  explicit Init_PointCloud_height(::ros2_interface::msg::PointCloud & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PointCloud height(::ros2_interface::msg::PointCloud::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PointCloud msg_;
};

class Init_PointCloud_width
{
public:
  explicit Init_PointCloud_width(::ros2_interface::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_height width(::ros2_interface::msg::PointCloud::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_PointCloud_height(msg_);
  }

private:
  ::ros2_interface::msg::PointCloud msg_;
};

class Init_PointCloud_measurement_time
{
public:
  explicit Init_PointCloud_measurement_time(::ros2_interface::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_width measurement_time(::ros2_interface::msg::PointCloud::_measurement_time_type arg)
  {
    msg_.measurement_time = std::move(arg);
    return Init_PointCloud_width(msg_);
  }

private:
  ::ros2_interface::msg::PointCloud msg_;
};

class Init_PointCloud_point
{
public:
  explicit Init_PointCloud_point(::ros2_interface::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_measurement_time point(::ros2_interface::msg::PointCloud::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_PointCloud_measurement_time(msg_);
  }

private:
  ::ros2_interface::msg::PointCloud msg_;
};

class Init_PointCloud_is_dense
{
public:
  explicit Init_PointCloud_is_dense(::ros2_interface::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_point is_dense(::ros2_interface::msg::PointCloud::_is_dense_type arg)
  {
    msg_.is_dense = std::move(arg);
    return Init_PointCloud_point(msg_);
  }

private:
  ::ros2_interface::msg::PointCloud msg_;
};

class Init_PointCloud_frame_id
{
public:
  explicit Init_PointCloud_frame_id(::ros2_interface::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_is_dense frame_id(::ros2_interface::msg::PointCloud::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_PointCloud_is_dense(msg_);
  }

private:
  ::ros2_interface::msg::PointCloud msg_;
};

class Init_PointCloud_header
{
public:
  Init_PointCloud_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloud_frame_id header(::ros2_interface::msg::PointCloud::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PointCloud_frame_id(msg_);
  }

private:
  ::ros2_interface::msg::PointCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PointCloud>()
{
  return ros2_interface::msg::builder::Init_PointCloud_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
