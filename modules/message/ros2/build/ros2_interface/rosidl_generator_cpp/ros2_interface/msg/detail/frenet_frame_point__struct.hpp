// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/FrenetFramePoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__FrenetFramePoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__FrenetFramePoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrenetFramePoint_
{
  using Type = FrenetFramePoint_<ContainerAllocator>;

  explicit FrenetFramePoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->l = 0.0;
      this->dl = 0.0;
      this->ddl = 0.0;
    }
  }

  explicit FrenetFramePoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->l = 0.0;
      this->dl = 0.0;
      this->ddl = 0.0;
    }
  }

  // field types and members
  using _s_type =
    double;
  _s_type s;
  using _l_type =
    double;
  _l_type l;
  using _dl_type =
    double;
  _dl_type dl;
  using _ddl_type =
    double;
  _ddl_type ddl;

  // setters for named parameter idiom
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__l(
    const double & _arg)
  {
    this->l = _arg;
    return *this;
  }
  Type & set__dl(
    const double & _arg)
  {
    this->dl = _arg;
    return *this;
  }
  Type & set__ddl(
    const double & _arg)
  {
    this->ddl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::FrenetFramePoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::FrenetFramePoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::FrenetFramePoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::FrenetFramePoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::FrenetFramePoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::FrenetFramePoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::FrenetFramePoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::FrenetFramePoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::FrenetFramePoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::FrenetFramePoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__FrenetFramePoint
    std::shared_ptr<ros2_interface::msg::FrenetFramePoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__FrenetFramePoint
    std::shared_ptr<ros2_interface::msg::FrenetFramePoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrenetFramePoint_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    if (this->l != other.l) {
      return false;
    }
    if (this->dl != other.dl) {
      return false;
    }
    if (this->ddl != other.ddl) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrenetFramePoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrenetFramePoint_

// alias to use template instance with default allocator
using FrenetFramePoint =
  ros2_interface::msg::FrenetFramePoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__STRUCT_HPP_
