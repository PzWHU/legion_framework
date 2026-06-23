// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/LimitSpeedInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__LimitSpeedInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__LimitSpeedInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LimitSpeedInfo_
{
  using Type = LimitSpeedInfo_<ContainerAllocator>;

  explicit LimitSpeedInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->limitspeed_valid_flag = 0l;
      this->limit_speed = 0.0;
      this->limit_distance = 0.0;
    }
  }

  explicit LimitSpeedInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->limitspeed_valid_flag = 0l;
      this->limit_speed = 0.0;
      this->limit_distance = 0.0;
    }
  }

  // field types and members
  using _limitspeed_valid_flag_type =
    int32_t;
  _limitspeed_valid_flag_type limitspeed_valid_flag;
  using _limit_speed_type =
    double;
  _limit_speed_type limit_speed;
  using _limit_distance_type =
    double;
  _limit_distance_type limit_distance;

  // setters for named parameter idiom
  Type & set__limitspeed_valid_flag(
    const int32_t & _arg)
  {
    this->limitspeed_valid_flag = _arg;
    return *this;
  }
  Type & set__limit_speed(
    const double & _arg)
  {
    this->limit_speed = _arg;
    return *this;
  }
  Type & set__limit_distance(
    const double & _arg)
  {
    this->limit_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__LimitSpeedInfo
    std::shared_ptr<ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__LimitSpeedInfo
    std::shared_ptr<ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LimitSpeedInfo_ & other) const
  {
    if (this->limitspeed_valid_flag != other.limitspeed_valid_flag) {
      return false;
    }
    if (this->limit_speed != other.limit_speed) {
      return false;
    }
    if (this->limit_distance != other.limit_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const LimitSpeedInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LimitSpeedInfo_

// alias to use template instance with default allocator
using LimitSpeedInfo =
  ros2_interface::msg::LimitSpeedInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__STRUCT_HPP_
