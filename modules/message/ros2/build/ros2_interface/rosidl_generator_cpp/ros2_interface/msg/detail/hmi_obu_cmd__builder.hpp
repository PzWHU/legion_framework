// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMIObuCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_obu_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMIObuCmd_val
{
public:
  explicit Init_HMIObuCmd_val(::ros2_interface::msg::HMIObuCmd & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMIObuCmd val(::ros2_interface::msg::HMIObuCmd::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMIObuCmd msg_;
};

class Init_HMIObuCmd_code
{
public:
  Init_HMIObuCmd_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMIObuCmd_val code(::ros2_interface::msg::HMIObuCmd::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_HMIObuCmd_val(msg_);
  }

private:
  ::ros2_interface::msg::HMIObuCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMIObuCmd>()
{
  return ros2_interface::msg::builder::Init_HMIObuCmd_code();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD__BUILDER_HPP_
