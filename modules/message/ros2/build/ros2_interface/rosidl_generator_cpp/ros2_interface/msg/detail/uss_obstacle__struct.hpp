// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/UssObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__UssObstacle __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__UssObstacle __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UssObstacle_
{
  using Type = UssObstacle_<ContainerAllocator>;

  explicit UssObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uss_obstacle_region = 0l;
      this->mx = 0.0;
      this->my = 0.0;
    }
  }

  explicit UssObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uss_obstacle_region = 0l;
      this->mx = 0.0;
      this->my = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _uss_obstacle_region_type =
    int32_t;
  _uss_obstacle_region_type uss_obstacle_region;
  using _mx_type =
    double;
  _mx_type mx;
  using _my_type =
    double;
  _my_type my;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__uss_obstacle_region(
    const int32_t & _arg)
  {
    this->uss_obstacle_region = _arg;
    return *this;
  }
  Type & set__mx(
    const double & _arg)
  {
    this->mx = _arg;
    return *this;
  }
  Type & set__my(
    const double & _arg)
  {
    this->my = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::UssObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::UssObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::UssObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::UssObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::UssObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::UssObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::UssObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::UssObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::UssObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::UssObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__UssObstacle
    std::shared_ptr<ros2_interface::msg::UssObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__UssObstacle
    std::shared_ptr<ros2_interface::msg::UssObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UssObstacle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->uss_obstacle_region != other.uss_obstacle_region) {
      return false;
    }
    if (this->mx != other.mx) {
      return false;
    }
    if (this->my != other.my) {
      return false;
    }
    return true;
  }
  bool operator!=(const UssObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UssObstacle_

// alias to use template instance with default allocator
using UssObstacle =
  ros2_interface::msg::UssObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__STRUCT_HPP_
