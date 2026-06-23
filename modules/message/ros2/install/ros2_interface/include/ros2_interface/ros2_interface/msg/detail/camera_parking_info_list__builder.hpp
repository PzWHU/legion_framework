// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/CameraParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/camera_parking_info_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_CameraParkingInfoList_is_valid
{
public:
  explicit Init_CameraParkingInfoList_is_valid(::ros2_interface::msg::CameraParkingInfoList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::CameraParkingInfoList is_valid(::ros2_interface::msg::CameraParkingInfoList::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfoList msg_;
};

class Init_CameraParkingInfoList_error_code
{
public:
  explicit Init_CameraParkingInfoList_error_code(::ros2_interface::msg::CameraParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfoList_is_valid error_code(::ros2_interface::msg::CameraParkingInfoList::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_CameraParkingInfoList_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfoList msg_;
};

class Init_CameraParkingInfoList_camera_parking_stoppers
{
public:
  explicit Init_CameraParkingInfoList_camera_parking_stoppers(::ros2_interface::msg::CameraParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfoList_error_code camera_parking_stoppers(::ros2_interface::msg::CameraParkingInfoList::_camera_parking_stoppers_type arg)
  {
    msg_.camera_parking_stoppers = std::move(arg);
    return Init_CameraParkingInfoList_error_code(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfoList msg_;
};

class Init_CameraParkingInfoList_camera_parking
{
public:
  explicit Init_CameraParkingInfoList_camera_parking(::ros2_interface::msg::CameraParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfoList_camera_parking_stoppers camera_parking(::ros2_interface::msg::CameraParkingInfoList::_camera_parking_type arg)
  {
    msg_.camera_parking = std::move(arg);
    return Init_CameraParkingInfoList_camera_parking_stoppers(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfoList msg_;
};

class Init_CameraParkingInfoList_sensor_id
{
public:
  explicit Init_CameraParkingInfoList_sensor_id(::ros2_interface::msg::CameraParkingInfoList & msg)
  : msg_(msg)
  {}
  Init_CameraParkingInfoList_camera_parking sensor_id(::ros2_interface::msg::CameraParkingInfoList::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_CameraParkingInfoList_camera_parking(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfoList msg_;
};

class Init_CameraParkingInfoList_header
{
public:
  Init_CameraParkingInfoList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraParkingInfoList_sensor_id header(::ros2_interface::msg::CameraParkingInfoList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraParkingInfoList_sensor_id(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingInfoList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::CameraParkingInfoList>()
{
  return ros2_interface::msg::builder::Init_CameraParkingInfoList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__BUILDER_HPP_
