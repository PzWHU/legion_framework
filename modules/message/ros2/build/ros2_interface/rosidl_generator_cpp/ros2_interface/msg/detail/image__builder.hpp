// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__IMAGE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Image_data
{
public:
  explicit Init_Image_data(::ros2_interface::msg::Image & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Image data(::ros2_interface::msg::Image::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Image msg_;
};

class Init_Image_step
{
public:
  explicit Init_Image_step(::ros2_interface::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_data step(::ros2_interface::msg::Image::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_Image_data(msg_);
  }

private:
  ::ros2_interface::msg::Image msg_;
};

class Init_Image_is_bigendian
{
public:
  explicit Init_Image_is_bigendian(::ros2_interface::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_step is_bigendian(::ros2_interface::msg::Image::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_Image_step(msg_);
  }

private:
  ::ros2_interface::msg::Image msg_;
};

class Init_Image_encoding
{
public:
  explicit Init_Image_encoding(::ros2_interface::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_is_bigendian encoding(::ros2_interface::msg::Image::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_Image_is_bigendian(msg_);
  }

private:
  ::ros2_interface::msg::Image msg_;
};

class Init_Image_width
{
public:
  explicit Init_Image_width(::ros2_interface::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_encoding width(::ros2_interface::msg::Image::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Image_encoding(msg_);
  }

private:
  ::ros2_interface::msg::Image msg_;
};

class Init_Image_height
{
public:
  explicit Init_Image_height(::ros2_interface::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_width height(::ros2_interface::msg::Image::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Image_width(msg_);
  }

private:
  ::ros2_interface::msg::Image msg_;
};

class Init_Image_header
{
public:
  Init_Image_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Image_height header(::ros2_interface::msg::Image::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Image_height(msg_);
  }

private:
  ::ros2_interface::msg::Image msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Image>()
{
  return ros2_interface::msg::builder::Init_Image_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__IMAGE__BUILDER_HPP_
