// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Point2dList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT2D_LIST__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POINT2D_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point2d_list'
#include "ros2_interface/msg/detail/point2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Point2dList __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Point2dList __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Point2dList_
{
  using Type = Point2dList_<ContainerAllocator>;

  explicit Point2dList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Point2dList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _point2d_list_type =
    std::vector<ros2_interface::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2D_<ContainerAllocator>>>;
  _point2d_list_type point2d_list;

  // setters for named parameter idiom
  Type & set__point2d_list(
    const std::vector<ros2_interface::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2D_<ContainerAllocator>>> & _arg)
  {
    this->point2d_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Point2dList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Point2dList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Point2dList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Point2dList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Point2dList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Point2dList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Point2dList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Point2dList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Point2dList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Point2dList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Point2dList
    std::shared_ptr<ros2_interface::msg::Point2dList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Point2dList
    std::shared_ptr<ros2_interface::msg::Point2dList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Point2dList_ & other) const
  {
    if (this->point2d_list != other.point2d_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const Point2dList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Point2dList_

// alias to use template instance with default allocator
using Point2dList =
  ros2_interface::msg::Point2dList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT2D_LIST__STRUCT_HPP_
