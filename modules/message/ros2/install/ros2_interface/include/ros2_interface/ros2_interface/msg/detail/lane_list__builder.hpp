// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LaneList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/lane_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LaneList_road_marks
{
public:
  explicit Init_LaneList_road_marks(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LaneList road_marks(::ros2_interface::msg::LaneList::_road_marks_type arg)
  {
    msg_.road_marks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_hpp
{
public:
  explicit Init_LaneList_hpp(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  Init_LaneList_road_marks hpp(::ros2_interface::msg::LaneList::_hpp_type arg)
  {
    msg_.hpp = std::move(arg);
    return Init_LaneList_road_marks(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_camera_laneline
{
public:
  explicit Init_LaneList_camera_laneline(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  Init_LaneList_hpp camera_laneline(::ros2_interface::msg::LaneList::_camera_laneline_type arg)
  {
    msg_.camera_laneline = std::move(arg);
    return Init_LaneList_hpp(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_sensor_calibrator
{
public:
  explicit Init_LaneList_sensor_calibrator(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  Init_LaneList_camera_laneline sensor_calibrator(::ros2_interface::msg::LaneList::_sensor_calibrator_type arg)
  {
    msg_.sensor_calibrator = std::move(arg);
    return Init_LaneList_camera_laneline(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_is_valid
{
public:
  explicit Init_LaneList_is_valid(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  Init_LaneList_sensor_calibrator is_valid(::ros2_interface::msg::LaneList::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_LaneList_sensor_calibrator(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_change_origin_flag
{
public:
  explicit Init_LaneList_change_origin_flag(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  Init_LaneList_is_valid change_origin_flag(::ros2_interface::msg::LaneList::_change_origin_flag_type arg)
  {
    msg_.change_origin_flag = std::move(arg);
    return Init_LaneList_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_sensor_status
{
public:
  explicit Init_LaneList_sensor_status(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  Init_LaneList_change_origin_flag sensor_status(::ros2_interface::msg::LaneList::_sensor_status_type arg)
  {
    msg_.sensor_status = std::move(arg);
    return Init_LaneList_change_origin_flag(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_error_code
{
public:
  explicit Init_LaneList_error_code(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  Init_LaneList_sensor_status error_code(::ros2_interface::msg::LaneList::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_LaneList_sensor_status(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_sensor_id
{
public:
  explicit Init_LaneList_sensor_id(::ros2_interface::msg::LaneList & msg)
  : msg_(msg)
  {}
  Init_LaneList_error_code sensor_id(::ros2_interface::msg::LaneList::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_LaneList_error_code(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

class Init_LaneList_header
{
public:
  Init_LaneList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneList_sensor_id header(::ros2_interface::msg::LaneList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneList_sensor_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LaneList>()
{
  return ros2_interface::msg::builder::Init_LaneList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__BUILDER_HPP_
