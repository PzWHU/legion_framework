// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RouteFusionInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RouteFusionInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RouteFusionInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteFusionInfo_
{
  using Type = RouteFusionInfo_<ContainerAllocator>;

  explicit RouteFusionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fusion_flag = 0l;
      this->fusion_reason = "";
    }
  }

  explicit RouteFusionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fusion_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fusion_flag = 0l;
      this->fusion_reason = "";
    }
  }

  // field types and members
  using _fusion_flag_type =
    int32_t;
  _fusion_flag_type fusion_flag;
  using _fusion_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fusion_reason_type fusion_reason;

  // setters for named parameter idiom
  Type & set__fusion_flag(
    const int32_t & _arg)
  {
    this->fusion_flag = _arg;
    return *this;
  }
  Type & set__fusion_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fusion_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RouteFusionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RouteFusionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RouteFusionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RouteFusionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RouteFusionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RouteFusionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RouteFusionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RouteFusionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RouteFusionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RouteFusionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RouteFusionInfo
    std::shared_ptr<ros2_interface::msg::RouteFusionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RouteFusionInfo
    std::shared_ptr<ros2_interface::msg::RouteFusionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteFusionInfo_ & other) const
  {
    if (this->fusion_flag != other.fusion_flag) {
      return false;
    }
    if (this->fusion_reason != other.fusion_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const RouteFusionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteFusionInfo_

// alias to use template instance with default allocator
using RouteFusionInfo =
  ros2_interface::msg::RouteFusionInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__STRUCT_HPP_
