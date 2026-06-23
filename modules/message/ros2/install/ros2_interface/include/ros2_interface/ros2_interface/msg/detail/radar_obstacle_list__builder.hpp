// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RadarObstacleList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/radar_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RadarObstacleList_radar_obstacle
{
public:
  explicit Init_RadarObstacleList_radar_obstacle(::ros2_interface::msg::RadarObstacleList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RadarObstacleList radar_obstacle(::ros2_interface::msg::RadarObstacleList::_radar_obstacle_type arg)
  {
    msg_.radar_obstacle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacleList msg_;
};

class Init_RadarObstacleList_header
{
public:
  Init_RadarObstacleList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObstacleList_radar_obstacle header(::ros2_interface::msg::RadarObstacleList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarObstacleList_radar_obstacle(msg_);
  }

private:
  ::ros2_interface::msg::RadarObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RadarObstacleList>()
{
  return ros2_interface::msg::builder::Init_RadarObstacleList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__BUILDER_HPP_
