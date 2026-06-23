// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/EndPoints.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__END_POINTS__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__END_POINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start'
// Member 'end'
#include "ros2_interface/msg/detail/point2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__EndPoints __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__EndPoints __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EndPoints_
{
  using Type = EndPoints_<ContainerAllocator>;

  explicit EndPoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    end(_init)
  {
    (void)_init;
  }

  explicit EndPoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    end(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _start_type start;
  using _end_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _end_type end;

  // setters for named parameter idiom
  Type & set__start(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::EndPoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::EndPoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::EndPoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::EndPoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::EndPoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::EndPoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::EndPoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::EndPoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::EndPoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::EndPoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__EndPoints
    std::shared_ptr<ros2_interface::msg::EndPoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__EndPoints
    std::shared_ptr<ros2_interface::msg::EndPoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EndPoints_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    return true;
  }
  bool operator!=(const EndPoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EndPoints_

// alias to use template instance with default allocator
using EndPoints =
  ros2_interface::msg::EndPoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__END_POINTS__STRUCT_HPP_
