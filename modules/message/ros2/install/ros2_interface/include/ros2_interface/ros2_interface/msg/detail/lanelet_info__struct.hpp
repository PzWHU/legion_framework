// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/LaneletInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__LaneletInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__LaneletInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneletInfo_
{
  using Type = LaneletInfo_<ContainerAllocator>;

  explicit LaneletInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanelet_id = 0l;
      this->length = 0.0;
    }
  }

  explicit LaneletInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanelet_id = 0l;
      this->length = 0.0;
    }
  }

  // field types and members
  using _lanelet_id_type =
    int32_t;
  _lanelet_id_type lanelet_id;
  using _length_type =
    double;
  _length_type length;

  // setters for named parameter idiom
  Type & set__lanelet_id(
    const int32_t & _arg)
  {
    this->lanelet_id = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::LaneletInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::LaneletInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneletInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneletInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneletInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneletInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneletInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneletInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneletInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneletInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__LaneletInfo
    std::shared_ptr<ros2_interface::msg::LaneletInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__LaneletInfo
    std::shared_ptr<ros2_interface::msg::LaneletInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneletInfo_ & other) const
  {
    if (this->lanelet_id != other.lanelet_id) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneletInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneletInfo_

// alias to use template instance with default allocator
using LaneletInfo =
  ros2_interface::msg::LaneletInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__STRUCT_HPP_
