// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/SensorCalibrator.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/sensor_calibrator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_SensorCalibrator_angle
{
public:
  explicit Init_SensorCalibrator_angle(::ros2_interface::msg::SensorCalibrator & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::SensorCalibrator angle(::ros2_interface::msg::SensorCalibrator::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::SensorCalibrator msg_;
};

class Init_SensorCalibrator_pose
{
public:
  Init_SensorCalibrator_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorCalibrator_angle pose(::ros2_interface::msg::SensorCalibrator::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_SensorCalibrator_angle(msg_);
  }

private:
  ::ros2_interface::msg::SensorCalibrator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::SensorCalibrator>()
{
  return ros2_interface::msg::builder::Init_SensorCalibrator_pose();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__BUILDER_HPP_
