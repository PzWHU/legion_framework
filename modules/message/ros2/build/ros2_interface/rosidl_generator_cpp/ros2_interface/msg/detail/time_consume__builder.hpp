// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TimeConsume.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/time_consume__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TimeConsume_time_consume
{
public:
  explicit Init_TimeConsume_time_consume(::ros2_interface::msg::TimeConsume & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TimeConsume time_consume(::ros2_interface::msg::TimeConsume::_time_consume_type arg)
  {
    msg_.time_consume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TimeConsume msg_;
};

class Init_TimeConsume_name
{
public:
  Init_TimeConsume_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeConsume_time_consume name(::ros2_interface::msg::TimeConsume::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TimeConsume_time_consume(msg_);
  }

private:
  ::ros2_interface::msg::TimeConsume msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TimeConsume>()
{
  return ros2_interface::msg::builder::Init_TimeConsume_name();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__BUILDER_HPP_
