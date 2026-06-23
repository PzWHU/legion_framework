// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/EndPoints.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__END_POINTS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__END_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/end_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_EndPoints_end
{
public:
  explicit Init_EndPoints_end(::ros2_interface::msg::EndPoints & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::EndPoints end(::ros2_interface::msg::EndPoints::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::EndPoints msg_;
};

class Init_EndPoints_start
{
public:
  Init_EndPoints_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EndPoints_end start(::ros2_interface::msg::EndPoints::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_EndPoints_end(msg_);
  }

private:
  ::ros2_interface::msg::EndPoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::EndPoints>()
{
  return ros2_interface::msg::builder::Init_EndPoints_start();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__END_POINTS__BUILDER_HPP_
