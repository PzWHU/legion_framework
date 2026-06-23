// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/compressed_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_CompressedImage_frame_type
{
public:
  explicit Init_CompressedImage_frame_type(::ros2_interface::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::CompressedImage frame_type(::ros2_interface::msg::CompressedImage::_frame_type_type arg)
  {
    msg_.frame_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::CompressedImage msg_;
};

class Init_CompressedImage_measurement_time
{
public:
  explicit Init_CompressedImage_measurement_time(::ros2_interface::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  Init_CompressedImage_frame_type measurement_time(::ros2_interface::msg::CompressedImage::_measurement_time_type arg)
  {
    msg_.measurement_time = std::move(arg);
    return Init_CompressedImage_frame_type(msg_);
  }

private:
  ::ros2_interface::msg::CompressedImage msg_;
};

class Init_CompressedImage_data
{
public:
  explicit Init_CompressedImage_data(::ros2_interface::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  Init_CompressedImage_measurement_time data(::ros2_interface::msg::CompressedImage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CompressedImage_measurement_time(msg_);
  }

private:
  ::ros2_interface::msg::CompressedImage msg_;
};

class Init_CompressedImage_format
{
public:
  explicit Init_CompressedImage_format(::ros2_interface::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  Init_CompressedImage_data format(::ros2_interface::msg::CompressedImage::_format_type arg)
  {
    msg_.format = std::move(arg);
    return Init_CompressedImage_data(msg_);
  }

private:
  ::ros2_interface::msg::CompressedImage msg_;
};

class Init_CompressedImage_frame_id
{
public:
  explicit Init_CompressedImage_frame_id(::ros2_interface::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  Init_CompressedImage_format frame_id(::ros2_interface::msg::CompressedImage::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_CompressedImage_format(msg_);
  }

private:
  ::ros2_interface::msg::CompressedImage msg_;
};

class Init_CompressedImage_header
{
public:
  Init_CompressedImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompressedImage_frame_id header(::ros2_interface::msg::CompressedImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CompressedImage_frame_id(msg_);
  }

private:
  ::ros2_interface::msg::CompressedImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::CompressedImage>()
{
  return ros2_interface::msg::builder::Init_CompressedImage_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_
