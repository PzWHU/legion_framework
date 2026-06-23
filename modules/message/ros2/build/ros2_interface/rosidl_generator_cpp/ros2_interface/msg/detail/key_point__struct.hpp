// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__KeyPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__KeyPoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyPoint_
{
  using Type = KeyPoint_<ContainerAllocator>;

  explicit KeyPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->ele = 0.0;
      this->heading = 0.0;
      this->name = "";
    }
  }

  explicit KeyPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->ele = 0.0;
      this->heading = 0.0;
      this->name = "";
    }
  }

  // field types and members
  using _id_type =
    int16_t;
  _id_type id;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _ele_type =
    double;
  _ele_type ele;
  using _heading_type =
    double;
  _heading_type heading;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__ele(
    const double & _arg)
  {
    this->ele = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::KeyPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::KeyPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::KeyPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::KeyPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::KeyPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::KeyPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::KeyPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::KeyPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::KeyPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::KeyPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__KeyPoint
    std::shared_ptr<ros2_interface::msg::KeyPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__KeyPoint
    std::shared_ptr<ros2_interface::msg::KeyPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyPoint_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->ele != other.ele) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyPoint_

// alias to use template instance with default allocator
using KeyPoint =
  ros2_interface::msg::KeyPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__STRUCT_HPP_
