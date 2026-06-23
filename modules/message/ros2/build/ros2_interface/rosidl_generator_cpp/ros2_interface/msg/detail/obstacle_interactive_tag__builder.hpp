// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ObstacleInteractiveTag.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/obstacle_interactive_tag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ObstacleInteractiveTag_interactive_tag
{
public:
  Init_ObstacleInteractiveTag_interactive_tag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_interface::msg::ObstacleInteractiveTag interactive_tag(::ros2_interface::msg::ObstacleInteractiveTag::_interactive_tag_type arg)
  {
    msg_.interactive_tag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ObstacleInteractiveTag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ObstacleInteractiveTag>()
{
  return ros2_interface::msg::builder::Init_ObstacleInteractiveTag_interactive_tag();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__BUILDER_HPP_
