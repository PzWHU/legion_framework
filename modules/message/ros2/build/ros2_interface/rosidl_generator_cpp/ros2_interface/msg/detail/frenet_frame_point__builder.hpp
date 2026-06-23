// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/FrenetFramePoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/frenet_frame_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_FrenetFramePoint_ddl
{
public:
  explicit Init_FrenetFramePoint_ddl(::ros2_interface::msg::FrenetFramePoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::FrenetFramePoint ddl(::ros2_interface::msg::FrenetFramePoint::_ddl_type arg)
  {
    msg_.ddl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::FrenetFramePoint msg_;
};

class Init_FrenetFramePoint_dl
{
public:
  explicit Init_FrenetFramePoint_dl(::ros2_interface::msg::FrenetFramePoint & msg)
  : msg_(msg)
  {}
  Init_FrenetFramePoint_ddl dl(::ros2_interface::msg::FrenetFramePoint::_dl_type arg)
  {
    msg_.dl = std::move(arg);
    return Init_FrenetFramePoint_ddl(msg_);
  }

private:
  ::ros2_interface::msg::FrenetFramePoint msg_;
};

class Init_FrenetFramePoint_l
{
public:
  explicit Init_FrenetFramePoint_l(::ros2_interface::msg::FrenetFramePoint & msg)
  : msg_(msg)
  {}
  Init_FrenetFramePoint_dl l(::ros2_interface::msg::FrenetFramePoint::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_FrenetFramePoint_dl(msg_);
  }

private:
  ::ros2_interface::msg::FrenetFramePoint msg_;
};

class Init_FrenetFramePoint_s
{
public:
  Init_FrenetFramePoint_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrenetFramePoint_l s(::ros2_interface::msg::FrenetFramePoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_FrenetFramePoint_l(msg_);
  }

private:
  ::ros2_interface::msg::FrenetFramePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::FrenetFramePoint>()
{
  return ros2_interface::msg::builder::Init_FrenetFramePoint_s();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__BUILDER_HPP_
