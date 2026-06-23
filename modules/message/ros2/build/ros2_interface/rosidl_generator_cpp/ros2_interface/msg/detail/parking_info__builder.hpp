// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/parking_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ParkingInfo_parking_source_type
{
public:
  explicit Init_ParkingInfo_parking_source_type(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ParkingInfo parking_source_type(::ros2_interface::msg::ParkingInfo::_parking_source_type_type arg)
  {
    msg_.parking_source_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_right_occupied_status
{
public:
  explicit Init_ParkingInfo_right_occupied_status(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_parking_source_type right_occupied_status(::ros2_interface::msg::ParkingInfo::_right_occupied_status_type arg)
  {
    msg_.right_occupied_status = std::move(arg);
    return Init_ParkingInfo_parking_source_type(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_left_occupied_status
{
public:
  explicit Init_ParkingInfo_left_occupied_status(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_right_occupied_status left_occupied_status(::ros2_interface::msg::ParkingInfo::_left_occupied_status_type arg)
  {
    msg_.left_occupied_status = std::move(arg);
    return Init_ParkingInfo_right_occupied_status(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_parking_direction_type
{
public:
  explicit Init_ParkingInfo_parking_direction_type(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_left_occupied_status parking_direction_type(::ros2_interface::msg::ParkingInfo::_parking_direction_type_type arg)
  {
    msg_.parking_direction_type = std::move(arg);
    return Init_ParkingInfo_left_occupied_status(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_parking_stoppers
{
public:
  explicit Init_ParkingInfo_parking_stoppers(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_parking_direction_type parking_stoppers(::ros2_interface::msg::ParkingInfo::_parking_stoppers_type arg)
  {
    msg_.parking_stoppers = std::move(arg);
    return Init_ParkingInfo_parking_direction_type(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_lane_width
{
public:
  explicit Init_ParkingInfo_lane_width(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_parking_stoppers lane_width(::ros2_interface::msg::ParkingInfo::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_ParkingInfo_parking_stoppers(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_is_lane_width_valid
{
public:
  explicit Init_ParkingInfo_is_lane_width_valid(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_lane_width is_lane_width_valid(::ros2_interface::msg::ParkingInfo::_is_lane_width_valid_type arg)
  {
    msg_.is_lane_width_valid = std::move(arg);
    return Init_ParkingInfo_lane_width(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_sensor_id
{
public:
  explicit Init_ParkingInfo_sensor_id(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_is_lane_width_valid sensor_id(::ros2_interface::msg::ParkingInfo::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_ParkingInfo_is_lane_width_valid(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_polygon
{
public:
  explicit Init_ParkingInfo_polygon(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_sensor_id polygon(::ros2_interface::msg::ParkingInfo::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return Init_ParkingInfo_sensor_id(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_yaw_offset
{
public:
  explicit Init_ParkingInfo_yaw_offset(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_polygon yaw_offset(::ros2_interface::msg::ParkingInfo::_yaw_offset_type arg)
  {
    msg_.yaw_offset = std::move(arg);
    return Init_ParkingInfo_polygon(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_length
{
public:
  explicit Init_ParkingInfo_length(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_yaw_offset length(::ros2_interface::msg::ParkingInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_ParkingInfo_yaw_offset(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_width
{
public:
  explicit Init_ParkingInfo_width(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_length width(::ros2_interface::msg::ParkingInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ParkingInfo_length(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_theta
{
public:
  explicit Init_ParkingInfo_theta(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_width theta(::ros2_interface::msg::ParkingInfo::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_ParkingInfo_width(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_center_point_of_parking
{
public:
  explicit Init_ParkingInfo_center_point_of_parking(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_theta center_point_of_parking(::ros2_interface::msg::ParkingInfo::_center_point_of_parking_type arg)
  {
    msg_.center_point_of_parking = std::move(arg);
    return Init_ParkingInfo_theta(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_confidence
{
public:
  explicit Init_ParkingInfo_confidence(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_center_point_of_parking confidence(::ros2_interface::msg::ParkingInfo::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_ParkingInfo_center_point_of_parking(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_parking_status
{
public:
  explicit Init_ParkingInfo_parking_status(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_confidence parking_status(::ros2_interface::msg::ParkingInfo::_parking_status_type arg)
  {
    msg_.parking_status = std::move(arg);
    return Init_ParkingInfo_confidence(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_parking_type
{
public:
  explicit Init_ParkingInfo_parking_type(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_parking_status parking_type(::ros2_interface::msg::ParkingInfo::_parking_type_type arg)
  {
    msg_.parking_type = std::move(arg);
    return Init_ParkingInfo_parking_status(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_parking_space_id
{
public:
  explicit Init_ParkingInfo_parking_space_id(::ros2_interface::msg::ParkingInfo & msg)
  : msg_(msg)
  {}
  Init_ParkingInfo_parking_type parking_space_id(::ros2_interface::msg::ParkingInfo::_parking_space_id_type arg)
  {
    msg_.parking_space_id = std::move(arg);
    return Init_ParkingInfo_parking_type(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

class Init_ParkingInfo_header
{
public:
  Init_ParkingInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkingInfo_parking_space_id header(::ros2_interface::msg::ParkingInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParkingInfo_parking_space_id(msg_);
  }

private:
  ::ros2_interface::msg::ParkingInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ParkingInfo>()
{
  return ros2_interface::msg::builder::Init_ParkingInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__BUILDER_HPP_
