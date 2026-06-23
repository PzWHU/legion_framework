// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RadarObstacleListMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST_MSG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/radar_obstacle_list_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RadarObstacleListMsg_is_valid
{
public:
  explicit Init_RadarObstacleListMsg_is_valid(::ros2_interface::msg::RadarObstacleListMsg & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RadarObstacleListMsg is_valid(::ros2_interface::msg::RadarObstacleListMsg::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacleListMsg msg_;
};

class Init_RadarObstacleListMsg_radar_state
{
public:
  explicit Init_RadarObstacleListMsg_radar_state(::ros2_interface::msg::RadarObstacleListMsg & msg)
  : msg_(msg)
  {}
  Init_RadarObstacleListMsg_is_valid radar_state(::ros2_interface::msg::RadarObstacleListMsg::_radar_state_type arg)
  {
    msg_.radar_state = std::move(arg);
    return Init_RadarObstacleListMsg_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacleListMsg msg_;
};

class Init_RadarObstacleListMsg_sensor_id
{
public:
  explicit Init_RadarObstacleListMsg_sensor_id(::ros2_interface::msg::RadarObstacleListMsg & msg)
  : msg_(msg)
  {}
  Init_RadarObstacleListMsg_radar_state sensor_id(::ros2_interface::msg::RadarObstacleListMsg::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_RadarObstacleListMsg_radar_state(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacleListMsg msg_;
};

class Init_RadarObstacleListMsg_radar_obstacle
{
public:
  explicit Init_RadarObstacleListMsg_radar_obstacle(::ros2_interface::msg::RadarObstacleListMsg & msg)
  : msg_(msg)
  {}
  Init_RadarObstacleListMsg_sensor_id radar_obstacle(::ros2_interface::msg::RadarObstacleListMsg::_radar_obstacle_type arg)
  {
    msg_.radar_obstacle = std::move(arg);
    return Init_RadarObstacleListMsg_sensor_id(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacleListMsg msg_;
};

class Init_RadarObstacleListMsg_header
{
public:
  Init_RadarObstacleListMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObstacleListMsg_radar_obstacle header(::ros2_interface::msg::RadarObstacleListMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarObstacleListMsg_radar_obstacle(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacleListMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RadarObstacleListMsg>()
{
  return ros2_interface::msg::builder::Init_RadarObstacleListMsg_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST_MSG__BUILDER_HPP_
