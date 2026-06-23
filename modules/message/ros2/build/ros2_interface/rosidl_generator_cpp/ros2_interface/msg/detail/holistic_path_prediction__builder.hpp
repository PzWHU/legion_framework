// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HolisticPathPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/holistic_path_prediction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HolisticPathPrediction_confidence
{
public:
  explicit Init_HolisticPathPrediction_confidence(::ros2_interface::msg::HolisticPathPrediction & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HolisticPathPrediction confidence(::ros2_interface::msg::HolisticPathPrediction::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HolisticPathPrediction msg_;
};

class Init_HolisticPathPrediction_ego_lane_width
{
public:
  explicit Init_HolisticPathPrediction_ego_lane_width(::ros2_interface::msg::HolisticPathPrediction & msg)
  : msg_(msg)
  {}
  Init_HolisticPathPrediction_confidence ego_lane_width(::ros2_interface::msg::HolisticPathPrediction::_ego_lane_width_type arg)
  {
    msg_.ego_lane_width = std::move(arg);
    return Init_HolisticPathPrediction_confidence(msg_);
  }

private:
  ::ros2_interface::msg::HolisticPathPrediction msg_;
};

class Init_HolisticPathPrediction_planning_source
{
public:
  explicit Init_HolisticPathPrediction_planning_source(::ros2_interface::msg::HolisticPathPrediction & msg)
  : msg_(msg)
  {}
  Init_HolisticPathPrediction_ego_lane_width planning_source(::ros2_interface::msg::HolisticPathPrediction::_planning_source_type arg)
  {
    msg_.planning_source = std::move(arg);
    return Init_HolisticPathPrediction_ego_lane_width(msg_);
  }

private:
  ::ros2_interface::msg::HolisticPathPrediction msg_;
};

class Init_HolisticPathPrediction_hpp
{
public:
  Init_HolisticPathPrediction_hpp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HolisticPathPrediction_planning_source hpp(::ros2_interface::msg::HolisticPathPrediction::_hpp_type arg)
  {
    msg_.hpp = std::move(arg);
    return Init_HolisticPathPrediction_planning_source(msg_);
  }

private:
  ::ros2_interface::msg::HolisticPathPrediction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HolisticPathPrediction>()
{
  return ros2_interface::msg::builder::Init_HolisticPathPrediction_hpp();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__BUILDER_HPP_
