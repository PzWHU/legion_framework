// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrafficLightDebug.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/traffic_light_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrafficLightDebug_debug_roi
{
public:
  explicit Init_TrafficLightDebug_debug_roi(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrafficLightDebug debug_roi(::ros2_interface::msg::TrafficLightDebug::_debug_roi_type arg)
  {
    msg_.debug_roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_rectified_roi
{
public:
  explicit Init_TrafficLightDebug_rectified_roi(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_debug_roi rectified_roi(::ros2_interface::msg::TrafficLightDebug::_rectified_roi_type arg)
  {
    msg_.rectified_roi = std::move(arg);
    return Init_TrafficLightDebug_debug_roi(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_projected_roi
{
public:
  explicit Init_TrafficLightDebug_projected_roi(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_rectified_roi projected_roi(::ros2_interface::msg::TrafficLightDebug::_projected_roi_type arg)
  {
    msg_.projected_roi = std::move(arg);
    return Init_TrafficLightDebug_rectified_roi(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_crop_roi
{
public:
  explicit Init_TrafficLightDebug_crop_roi(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_projected_roi crop_roi(::ros2_interface::msg::TrafficLightDebug::_crop_roi_type arg)
  {
    msg_.crop_roi = std::move(arg);
    return Init_TrafficLightDebug_projected_roi(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_camera_id
{
public:
  explicit Init_TrafficLightDebug_camera_id(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_crop_roi camera_id(::ros2_interface::msg::TrafficLightDebug::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_TrafficLightDebug_crop_roi(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_distance_to_stop_line
{
public:
  explicit Init_TrafficLightDebug_distance_to_stop_line(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_camera_id distance_to_stop_line(::ros2_interface::msg::TrafficLightDebug::_distance_to_stop_line_type arg)
  {
    msg_.distance_to_stop_line = std::move(arg);
    return Init_TrafficLightDebug_camera_id(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_project_error
{
public:
  explicit Init_TrafficLightDebug_project_error(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_distance_to_stop_line project_error(::ros2_interface::msg::TrafficLightDebug::_project_error_type arg)
  {
    msg_.project_error = std::move(arg);
    return Init_TrafficLightDebug_distance_to_stop_line(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_ts_diff_sys
{
public:
  explicit Init_TrafficLightDebug_ts_diff_sys(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_project_error ts_diff_sys(::ros2_interface::msg::TrafficLightDebug::_ts_diff_sys_type arg)
  {
    msg_.ts_diff_sys = std::move(arg);
    return Init_TrafficLightDebug_project_error(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_ts_diff_pos
{
public:
  explicit Init_TrafficLightDebug_ts_diff_pos(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_ts_diff_sys ts_diff_pos(::ros2_interface::msg::TrafficLightDebug::_ts_diff_pos_type arg)
  {
    msg_.ts_diff_pos = std::move(arg);
    return Init_TrafficLightDebug_ts_diff_sys(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_valid_pos
{
public:
  explicit Init_TrafficLightDebug_valid_pos(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_ts_diff_pos valid_pos(::ros2_interface::msg::TrafficLightDebug::_valid_pos_type arg)
  {
    msg_.valid_pos = std::move(arg);
    return Init_TrafficLightDebug_ts_diff_pos(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_signal_num
{
public:
  explicit Init_TrafficLightDebug_signal_num(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_valid_pos signal_num(::ros2_interface::msg::TrafficLightDebug::_signal_num_type arg)
  {
    msg_.signal_num = std::move(arg);
    return Init_TrafficLightDebug_valid_pos(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_box
{
public:
  explicit Init_TrafficLightDebug_box(::ros2_interface::msg::TrafficLightDebug & msg)
  : msg_(msg)
  {}
  Init_TrafficLightDebug_signal_num box(::ros2_interface::msg::TrafficLightDebug::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_TrafficLightDebug_signal_num(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

class Init_TrafficLightDebug_cropbox
{
public:
  Init_TrafficLightDebug_cropbox()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightDebug_box cropbox(::ros2_interface::msg::TrafficLightDebug::_cropbox_type arg)
  {
    msg_.cropbox = std::move(arg);
    return Init_TrafficLightDebug_box(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrafficLightDebug>()
{
  return ros2_interface::msg::builder::Init_TrafficLightDebug_cropbox();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__BUILDER_HPP_
