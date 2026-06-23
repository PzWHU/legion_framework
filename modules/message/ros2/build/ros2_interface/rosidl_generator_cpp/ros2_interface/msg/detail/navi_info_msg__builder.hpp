// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/NaviInfoMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/navi_info_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_NaviInfoMsg_distance_to_stop
{
public:
  explicit Init_NaviInfoMsg_distance_to_stop(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::NaviInfoMsg distance_to_stop(::ros2_interface::msg::NaviInfoMsg::_distance_to_stop_type arg)
  {
    msg_.distance_to_stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_crossing_behavior
{
public:
  explicit Init_NaviInfoMsg_crossing_behavior(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_distance_to_stop crossing_behavior(::ros2_interface::msg::NaviInfoMsg::_crossing_behavior_type arg)
  {
    msg_.crossing_behavior = std::move(arg);
    return Init_NaviInfoMsg_distance_to_stop(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_traffic_light_stop
{
public:
  explicit Init_NaviInfoMsg_traffic_light_stop(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_crossing_behavior traffic_light_stop(::ros2_interface::msg::NaviInfoMsg::_traffic_light_stop_type arg)
  {
    msg_.traffic_light_stop = std::move(arg);
    return Init_NaviInfoMsg_crossing_behavior(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_distance_to_cross
{
public:
  explicit Init_NaviInfoMsg_distance_to_cross(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_traffic_light_stop distance_to_cross(::ros2_interface::msg::NaviInfoMsg::_distance_to_cross_type arg)
  {
    msg_.distance_to_cross = std::move(arg);
    return Init_NaviInfoMsg_traffic_light_stop(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_turning_deriction
{
public:
  explicit Init_NaviInfoMsg_turning_deriction(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_distance_to_cross turning_deriction(::ros2_interface::msg::NaviInfoMsg::_turning_deriction_type arg)
  {
    msg_.turning_deriction = std::move(arg);
    return Init_NaviInfoMsg_distance_to_cross(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_turning_speed
{
public:
  explicit Init_NaviInfoMsg_turning_speed(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_turning_deriction turning_speed(::ros2_interface::msg::NaviInfoMsg::_turning_speed_type arg)
  {
    msg_.turning_speed = std::move(arg);
    return Init_NaviInfoMsg_turning_deriction(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_road_speed
{
public:
  explicit Init_NaviInfoMsg_road_speed(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_turning_speed road_speed(::ros2_interface::msg::NaviInfoMsg::_road_speed_type arg)
  {
    msg_.road_speed = std::move(arg);
    return Init_NaviInfoMsg_turning_speed(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_lane_target
{
public:
  explicit Init_NaviInfoMsg_lane_target(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_road_speed lane_target(::ros2_interface::msg::NaviInfoMsg::_lane_target_type arg)
  {
    msg_.lane_target = std::move(arg);
    return Init_NaviInfoMsg_road_speed(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_lane_index
{
public:
  explicit Init_NaviInfoMsg_lane_index(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_lane_target lane_index(::ros2_interface::msg::NaviInfoMsg::_lane_index_type arg)
  {
    msg_.lane_index = std::move(arg);
    return Init_NaviInfoMsg_lane_target(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_lane_count
{
public:
  explicit Init_NaviInfoMsg_lane_count(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_lane_index lane_count(::ros2_interface::msg::NaviInfoMsg::_lane_count_type arg)
  {
    msg_.lane_count = std::move(arg);
    return Init_NaviInfoMsg_lane_index(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_lane_type
{
public:
  explicit Init_NaviInfoMsg_lane_type(::ros2_interface::msg::NaviInfoMsg & msg)
  : msg_(msg)
  {}
  Init_NaviInfoMsg_lane_count lane_type(::ros2_interface::msg::NaviInfoMsg::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_NaviInfoMsg_lane_count(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

class Init_NaviInfoMsg_header
{
public:
  Init_NaviInfoMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NaviInfoMsg_lane_type header(::ros2_interface::msg::NaviInfoMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NaviInfoMsg_lane_type(msg_);
  }

private:
  ::ros2_interface::msg::NaviInfoMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::NaviInfoMsg>()
{
  return ros2_interface::msg::builder::Init_NaviInfoMsg_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__BUILDER_HPP_
