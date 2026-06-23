// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PATH__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Path_path_points
{
public:
  explicit Init_Path_path_points(::ros2_interface::msg::Path & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Path path_points(::ros2_interface::msg::Path::_path_points_type arg)
  {
    msg_.path_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Path msg_;
};

class Init_Path_name
{
public:
  Init_Path_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_path_points name(::ros2_interface::msg::Path::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Path_path_points(msg_);
  }

private:
  ::ros2_interface::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Path>()
{
  return ros2_interface::msg::builder::Init_Path_name();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PATH__BUILDER_HPP_
