// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RSSInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/rss_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RSSInfo_acc_lat_right_range_maximum
{
public:
  explicit Init_RSSInfo_acc_lat_right_range_maximum(::ros2_interface::msg::RSSInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RSSInfo acc_lat_right_range_maximum(::ros2_interface::msg::RSSInfo::_acc_lat_right_range_maximum_type arg)
  {
    msg_.acc_lat_right_range_maximum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

class Init_RSSInfo_acc_lat_right_range_minimum
{
public:
  explicit Init_RSSInfo_acc_lat_right_range_minimum(::ros2_interface::msg::RSSInfo & msg)
  : msg_(msg)
  {}
  Init_RSSInfo_acc_lat_right_range_maximum acc_lat_right_range_minimum(::ros2_interface::msg::RSSInfo::_acc_lat_right_range_minimum_type arg)
  {
    msg_.acc_lat_right_range_minimum = std::move(arg);
    return Init_RSSInfo_acc_lat_right_range_maximum(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

class Init_RSSInfo_acc_lat_left_range_maximum
{
public:
  explicit Init_RSSInfo_acc_lat_left_range_maximum(::ros2_interface::msg::RSSInfo & msg)
  : msg_(msg)
  {}
  Init_RSSInfo_acc_lat_right_range_minimum acc_lat_left_range_maximum(::ros2_interface::msg::RSSInfo::_acc_lat_left_range_maximum_type arg)
  {
    msg_.acc_lat_left_range_maximum = std::move(arg);
    return Init_RSSInfo_acc_lat_right_range_minimum(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

class Init_RSSInfo_acc_lat_left_range_minimum
{
public:
  explicit Init_RSSInfo_acc_lat_left_range_minimum(::ros2_interface::msg::RSSInfo & msg)
  : msg_(msg)
  {}
  Init_RSSInfo_acc_lat_left_range_maximum acc_lat_left_range_minimum(::ros2_interface::msg::RSSInfo::_acc_lat_left_range_minimum_type arg)
  {
    msg_.acc_lat_left_range_minimum = std::move(arg);
    return Init_RSSInfo_acc_lat_left_range_maximum(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

class Init_RSSInfo_acc_lon_range_maximum
{
public:
  explicit Init_RSSInfo_acc_lon_range_maximum(::ros2_interface::msg::RSSInfo & msg)
  : msg_(msg)
  {}
  Init_RSSInfo_acc_lat_left_range_minimum acc_lon_range_maximum(::ros2_interface::msg::RSSInfo::_acc_lon_range_maximum_type arg)
  {
    msg_.acc_lon_range_maximum = std::move(arg);
    return Init_RSSInfo_acc_lat_left_range_minimum(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

class Init_RSSInfo_acc_lon_range_minimum
{
public:
  explicit Init_RSSInfo_acc_lon_range_minimum(::ros2_interface::msg::RSSInfo & msg)
  : msg_(msg)
  {}
  Init_RSSInfo_acc_lon_range_maximum acc_lon_range_minimum(::ros2_interface::msg::RSSInfo::_acc_lon_range_minimum_type arg)
  {
    msg_.acc_lon_range_minimum = std::move(arg);
    return Init_RSSInfo_acc_lon_range_maximum(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

class Init_RSSInfo_rss_safe_dist_lon
{
public:
  explicit Init_RSSInfo_rss_safe_dist_lon(::ros2_interface::msg::RSSInfo & msg)
  : msg_(msg)
  {}
  Init_RSSInfo_acc_lon_range_minimum rss_safe_dist_lon(::ros2_interface::msg::RSSInfo::_rss_safe_dist_lon_type arg)
  {
    msg_.rss_safe_dist_lon = std::move(arg);
    return Init_RSSInfo_acc_lon_range_minimum(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

class Init_RSSInfo_cur_dist_lon
{
public:
  explicit Init_RSSInfo_cur_dist_lon(::ros2_interface::msg::RSSInfo & msg)
  : msg_(msg)
  {}
  Init_RSSInfo_rss_safe_dist_lon cur_dist_lon(::ros2_interface::msg::RSSInfo::_cur_dist_lon_type arg)
  {
    msg_.cur_dist_lon = std::move(arg);
    return Init_RSSInfo_rss_safe_dist_lon(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

class Init_RSSInfo_is_rss_safe
{
public:
  Init_RSSInfo_is_rss_safe()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RSSInfo_cur_dist_lon is_rss_safe(::ros2_interface::msg::RSSInfo::_is_rss_safe_type arg)
  {
    msg_.is_rss_safe = std::move(arg);
    return Init_RSSInfo_cur_dist_lon(msg_);
  }

private:
  ::ros2_interface::msg::RSSInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RSSInfo>()
{
  return ros2_interface::msg::builder::Init_RSSInfo_is_rss_safe();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__BUILDER_HPP_
