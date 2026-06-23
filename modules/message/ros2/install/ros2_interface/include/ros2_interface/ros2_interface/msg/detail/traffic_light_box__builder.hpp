// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrafficLightBox.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_BOX__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/traffic_light_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrafficLightBox_camera_name
{
public:
  explicit Init_TrafficLightBox_camera_name(::ros2_interface::msg::TrafficLightBox & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrafficLightBox camera_name(::ros2_interface::msg::TrafficLightBox::_camera_name_type arg)
  {
    msg_.camera_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightBox msg_;
};

class Init_TrafficLightBox_selected
{
public:
  explicit Init_TrafficLightBox_selected(::ros2_interface::msg::TrafficLightBox & msg)
  : msg_(msg)
  {}
  Init_TrafficLightBox_camera_name selected(::ros2_interface::msg::TrafficLightBox::_selected_type arg)
  {
    msg_.selected = std::move(arg);
    return Init_TrafficLightBox_camera_name(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightBox msg_;
};

class Init_TrafficLightBox_color
{
public:
  explicit Init_TrafficLightBox_color(::ros2_interface::msg::TrafficLightBox & msg)
  : msg_(msg)
  {}
  Init_TrafficLightBox_selected color(::ros2_interface::msg::TrafficLightBox::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TrafficLightBox_selected(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightBox msg_;
};

class Init_TrafficLightBox_height
{
public:
  explicit Init_TrafficLightBox_height(::ros2_interface::msg::TrafficLightBox & msg)
  : msg_(msg)
  {}
  Init_TrafficLightBox_color height(::ros2_interface::msg::TrafficLightBox::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_TrafficLightBox_color(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightBox msg_;
};

class Init_TrafficLightBox_width
{
public:
  explicit Init_TrafficLightBox_width(::ros2_interface::msg::TrafficLightBox & msg)
  : msg_(msg)
  {}
  Init_TrafficLightBox_height width(::ros2_interface::msg::TrafficLightBox::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_TrafficLightBox_height(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightBox msg_;
};

class Init_TrafficLightBox_y
{
public:
  explicit Init_TrafficLightBox_y(::ros2_interface::msg::TrafficLightBox & msg)
  : msg_(msg)
  {}
  Init_TrafficLightBox_width y(::ros2_interface::msg::TrafficLightBox::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TrafficLightBox_width(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightBox msg_;
};

class Init_TrafficLightBox_x
{
public:
  Init_TrafficLightBox_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightBox_y x(::ros2_interface::msg::TrafficLightBox::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrafficLightBox_y(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrafficLightBox>()
{
  return ros2_interface::msg::builder::Init_TrafficLightBox_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_BOX__BUILDER_HPP_
