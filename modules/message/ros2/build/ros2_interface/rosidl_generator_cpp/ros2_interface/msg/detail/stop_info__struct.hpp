// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/StopInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__STRUCT_HPP_

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
// Member 'stop_points'
#include "ros2_interface/msg/detail/stop_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__StopInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__StopInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopInfo_
{
  using Type = StopInfo_<ContainerAllocator>;

  explicit StopInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit StopInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stop_points_type =
    std::vector<ros2_interface::msg::StopPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::StopPoint_<ContainerAllocator>>>;
  _stop_points_type stop_points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stop_points(
    const std::vector<ros2_interface::msg::StopPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::StopPoint_<ContainerAllocator>>> & _arg)
  {
    this->stop_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::StopInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::StopInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::StopInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::StopInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::StopInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::StopInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::StopInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::StopInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::StopInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::StopInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__StopInfo
    std::shared_ptr<ros2_interface::msg::StopInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__StopInfo
    std::shared_ptr<ros2_interface::msg::StopInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stop_points != other.stop_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopInfo_

// alias to use template instance with default allocator
using StopInfo =
  ros2_interface::msg::StopInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__STRUCT_HPP_
