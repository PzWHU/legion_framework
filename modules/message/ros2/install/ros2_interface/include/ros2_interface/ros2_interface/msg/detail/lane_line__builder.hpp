// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LaneLine.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/lane_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LaneLine_create_time
{
public:
  explicit Init_LaneLine_create_time(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LaneLine create_time(::ros2_interface::msg::LaneLine::_create_time_type arg)
  {
    msg_.create_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_use_type
{
public:
  explicit Init_LaneLine_use_type(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_create_time use_type(::ros2_interface::msg::LaneLine::_use_type_type arg)
  {
    msg_.use_type = std::move(arg);
    return Init_LaneLine_create_time(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_lane_coordinate_type
{
public:
  explicit Init_LaneLine_lane_coordinate_type(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_use_type lane_coordinate_type(::ros2_interface::msg::LaneLine::_lane_coordinate_type_type arg)
  {
    msg_.lane_coordinate_type = std::move(arg);
    return Init_LaneLine_use_type(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_homography_mat_inv
{
public:
  explicit Init_LaneLine_homography_mat_inv(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_lane_coordinate_type homography_mat_inv(::ros2_interface::msg::LaneLine::_homography_mat_inv_type arg)
  {
    msg_.homography_mat_inv = std::move(arg);
    return Init_LaneLine_lane_coordinate_type(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_homography_mat
{
public:
  explicit Init_LaneLine_homography_mat(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_homography_mat_inv homography_mat(::ros2_interface::msg::LaneLine::_homography_mat_type arg)
  {
    msg_.homography_mat = std::move(arg);
    return Init_LaneLine_homography_mat_inv(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_fused_lane_type
{
public:
  explicit Init_LaneLine_fused_lane_type(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_homography_mat fused_lane_type(::ros2_interface::msg::LaneLine::_fused_lane_type_type arg)
  {
    msg_.fused_lane_type = std::move(arg);
    return Init_LaneLine_homography_mat(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_lane_quality
{
public:
  explicit Init_LaneLine_lane_quality(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_fused_lane_type lane_quality(::ros2_interface::msg::LaneLine::_lane_quality_type arg)
  {
    msg_.lane_quality = std::move(arg);
    return Init_LaneLine_fused_lane_type(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_confidence
{
public:
  explicit Init_LaneLine_confidence(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_lane_quality confidence(::ros2_interface::msg::LaneLine::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_LaneLine_lane_quality(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_hd_lane_id
{
public:
  explicit Init_LaneLine_hd_lane_id(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_confidence hd_lane_id(::ros2_interface::msg::LaneLine::_hd_lane_id_type arg)
  {
    msg_.hd_lane_id = std::move(arg);
    return Init_LaneLine_confidence(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_pts_key
{
public:
  explicit Init_LaneLine_pts_key(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_hd_lane_id pts_key(::ros2_interface::msg::LaneLine::_pts_key_type arg)
  {
    msg_.pts_key = std::move(arg);
    return Init_LaneLine_hd_lane_id(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_image_end_point
{
public:
  explicit Init_LaneLine_image_end_point(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_pts_key image_end_point(::ros2_interface::msg::LaneLine::_image_end_point_type arg)
  {
    msg_.image_end_point = std::move(arg);
    return Init_LaneLine_pts_key(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_pts_abs
{
public:
  explicit Init_LaneLine_pts_abs(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_image_end_point pts_abs(::ros2_interface::msg::LaneLine::_pts_abs_type arg)
  {
    msg_.pts_abs = std::move(arg);
    return Init_LaneLine_image_end_point(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_pts_image
{
public:
  explicit Init_LaneLine_pts_image(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_pts_abs pts_image(::ros2_interface::msg::LaneLine::_pts_image_type arg)
  {
    msg_.pts_image = std::move(arg);
    return Init_LaneLine_pts_abs(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_pts_vehicle
{
public:
  explicit Init_LaneLine_pts_vehicle(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_pts_image pts_vehicle(::ros2_interface::msg::LaneLine::_pts_vehicle_type arg)
  {
    msg_.pts_vehicle = std::move(arg);
    return Init_LaneLine_pts_image(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_curve_abs
{
public:
  explicit Init_LaneLine_curve_abs(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_pts_vehicle curve_abs(::ros2_interface::msg::LaneLine::_curve_abs_type arg)
  {
    msg_.curve_abs = std::move(arg);
    return Init_LaneLine_pts_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_curve_image
{
public:
  explicit Init_LaneLine_curve_image(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_curve_abs curve_image(::ros2_interface::msg::LaneLine::_curve_image_type arg)
  {
    msg_.curve_image = std::move(arg);
    return Init_LaneLine_curve_abs(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_curve_vehicle
{
public:
  explicit Init_LaneLine_curve_vehicle(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_curve_image curve_vehicle(::ros2_interface::msg::LaneLine::_curve_vehicle_type arg)
  {
    msg_.curve_vehicle = std::move(arg);
    return Init_LaneLine_curve_image(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_pos_type
{
public:
  explicit Init_LaneLine_pos_type(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_curve_vehicle pos_type(::ros2_interface::msg::LaneLine::_pos_type_type arg)
  {
    msg_.pos_type = std::move(arg);
    return Init_LaneLine_curve_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_lane_color
{
public:
  explicit Init_LaneLine_lane_color(::ros2_interface::msg::LaneLine & msg)
  : msg_(msg)
  {}
  Init_LaneLine_pos_type lane_color(::ros2_interface::msg::LaneLine::_lane_color_type arg)
  {
    msg_.lane_color = std::move(arg);
    return Init_LaneLine_pos_type(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

class Init_LaneLine_lane_type
{
public:
  Init_LaneLine_lane_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneLine_lane_color lane_type(::ros2_interface::msg::LaneLine::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_LaneLine_lane_color(msg_);
  }

private:
  ::ros2_interface::msg::LaneLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LaneLine>()
{
  return ros2_interface::msg::builder::Init_LaneLine_lane_type();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__BUILDER_HPP_
