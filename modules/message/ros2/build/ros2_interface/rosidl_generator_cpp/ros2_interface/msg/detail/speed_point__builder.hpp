// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/SpeedPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/speed_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_SpeedPoint_da
{
public:
  explicit Init_SpeedPoint_da(::ros2_interface::msg::SpeedPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::SpeedPoint da(::ros2_interface::msg::SpeedPoint::_da_type arg)
  {
    msg_.da = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::SpeedPoint msg_;
};

class Init_SpeedPoint_a
{
public:
  explicit Init_SpeedPoint_a(::ros2_interface::msg::SpeedPoint & msg)
  : msg_(msg)
  {}
  Init_SpeedPoint_da a(::ros2_interface::msg::SpeedPoint::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SpeedPoint_da(msg_);
  }

private:
  ::ros2_interface::msg::SpeedPoint msg_;
};

class Init_SpeedPoint_v
{
public:
  explicit Init_SpeedPoint_v(::ros2_interface::msg::SpeedPoint & msg)
  : msg_(msg)
  {}
  Init_SpeedPoint_a v(::ros2_interface::msg::SpeedPoint::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_SpeedPoint_a(msg_);
  }

private:
  ::ros2_interface::msg::SpeedPoint msg_;
};

class Init_SpeedPoint_t
{
public:
  explicit Init_SpeedPoint_t(::ros2_interface::msg::SpeedPoint & msg)
  : msg_(msg)
  {}
  Init_SpeedPoint_v t(::ros2_interface::msg::SpeedPoint::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_SpeedPoint_v(msg_);
  }

private:
  ::ros2_interface::msg::SpeedPoint msg_;
};

class Init_SpeedPoint_s
{
public:
  Init_SpeedPoint_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedPoint_t s(::ros2_interface::msg::SpeedPoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_SpeedPoint_t(msg_);
  }

private:
  ::ros2_interface::msg::SpeedPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::SpeedPoint>()
{
  return ros2_interface::msg::builder::Init_SpeedPoint_s();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__BUILDER_HPP_
