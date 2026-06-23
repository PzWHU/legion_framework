// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RSSInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RSSInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RSSInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RSSInfo_
{
  using Type = RSSInfo_<ContainerAllocator>;

  explicit RSSInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_rss_safe = false;
      this->cur_dist_lon = 0.0;
      this->rss_safe_dist_lon = 0.0;
      this->acc_lon_range_minimum = 0.0;
      this->acc_lon_range_maximum = 0.0;
      this->acc_lat_left_range_minimum = 0.0;
      this->acc_lat_left_range_maximum = 0.0;
      this->acc_lat_right_range_minimum = 0.0;
      this->acc_lat_right_range_maximum = 0.0;
    }
  }

  explicit RSSInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_rss_safe = false;
      this->cur_dist_lon = 0.0;
      this->rss_safe_dist_lon = 0.0;
      this->acc_lon_range_minimum = 0.0;
      this->acc_lon_range_maximum = 0.0;
      this->acc_lat_left_range_minimum = 0.0;
      this->acc_lat_left_range_maximum = 0.0;
      this->acc_lat_right_range_minimum = 0.0;
      this->acc_lat_right_range_maximum = 0.0;
    }
  }

  // field types and members
  using _is_rss_safe_type =
    bool;
  _is_rss_safe_type is_rss_safe;
  using _cur_dist_lon_type =
    double;
  _cur_dist_lon_type cur_dist_lon;
  using _rss_safe_dist_lon_type =
    double;
  _rss_safe_dist_lon_type rss_safe_dist_lon;
  using _acc_lon_range_minimum_type =
    double;
  _acc_lon_range_minimum_type acc_lon_range_minimum;
  using _acc_lon_range_maximum_type =
    double;
  _acc_lon_range_maximum_type acc_lon_range_maximum;
  using _acc_lat_left_range_minimum_type =
    double;
  _acc_lat_left_range_minimum_type acc_lat_left_range_minimum;
  using _acc_lat_left_range_maximum_type =
    double;
  _acc_lat_left_range_maximum_type acc_lat_left_range_maximum;
  using _acc_lat_right_range_minimum_type =
    double;
  _acc_lat_right_range_minimum_type acc_lat_right_range_minimum;
  using _acc_lat_right_range_maximum_type =
    double;
  _acc_lat_right_range_maximum_type acc_lat_right_range_maximum;

  // setters for named parameter idiom
  Type & set__is_rss_safe(
    const bool & _arg)
  {
    this->is_rss_safe = _arg;
    return *this;
  }
  Type & set__cur_dist_lon(
    const double & _arg)
  {
    this->cur_dist_lon = _arg;
    return *this;
  }
  Type & set__rss_safe_dist_lon(
    const double & _arg)
  {
    this->rss_safe_dist_lon = _arg;
    return *this;
  }
  Type & set__acc_lon_range_minimum(
    const double & _arg)
  {
    this->acc_lon_range_minimum = _arg;
    return *this;
  }
  Type & set__acc_lon_range_maximum(
    const double & _arg)
  {
    this->acc_lon_range_maximum = _arg;
    return *this;
  }
  Type & set__acc_lat_left_range_minimum(
    const double & _arg)
  {
    this->acc_lat_left_range_minimum = _arg;
    return *this;
  }
  Type & set__acc_lat_left_range_maximum(
    const double & _arg)
  {
    this->acc_lat_left_range_maximum = _arg;
    return *this;
  }
  Type & set__acc_lat_right_range_minimum(
    const double & _arg)
  {
    this->acc_lat_right_range_minimum = _arg;
    return *this;
  }
  Type & set__acc_lat_right_range_maximum(
    const double & _arg)
  {
    this->acc_lat_right_range_maximum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RSSInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RSSInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RSSInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RSSInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RSSInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RSSInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RSSInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RSSInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RSSInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RSSInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RSSInfo
    std::shared_ptr<ros2_interface::msg::RSSInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RSSInfo
    std::shared_ptr<ros2_interface::msg::RSSInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RSSInfo_ & other) const
  {
    if (this->is_rss_safe != other.is_rss_safe) {
      return false;
    }
    if (this->cur_dist_lon != other.cur_dist_lon) {
      return false;
    }
    if (this->rss_safe_dist_lon != other.rss_safe_dist_lon) {
      return false;
    }
    if (this->acc_lon_range_minimum != other.acc_lon_range_minimum) {
      return false;
    }
    if (this->acc_lon_range_maximum != other.acc_lon_range_maximum) {
      return false;
    }
    if (this->acc_lat_left_range_minimum != other.acc_lat_left_range_minimum) {
      return false;
    }
    if (this->acc_lat_left_range_maximum != other.acc_lat_left_range_maximum) {
      return false;
    }
    if (this->acc_lat_right_range_minimum != other.acc_lat_right_range_minimum) {
      return false;
    }
    if (this->acc_lat_right_range_maximum != other.acc_lat_right_range_maximum) {
      return false;
    }
    return true;
  }
  bool operator!=(const RSSInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RSSInfo_

// alias to use template instance with default allocator
using RSSInfo =
  ros2_interface::msg::RSSInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__STRUCT_HPP_
