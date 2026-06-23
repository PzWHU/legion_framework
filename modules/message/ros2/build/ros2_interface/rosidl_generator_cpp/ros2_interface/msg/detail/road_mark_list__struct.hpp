// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RoadMarkList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__STRUCT_HPP_

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
// Member 'roadmarks'
#include "ros2_interface/msg/detail/road_mark__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RoadMarkList __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RoadMarkList __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadMarkList_
{
  using Type = RoadMarkList_<ContainerAllocator>;

  explicit RoadMarkList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RoadMarkList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _roadmarks_type =
    std::vector<ros2_interface::msg::RoadMark_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::RoadMark_<ContainerAllocator>>>;
  _roadmarks_type roadmarks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__roadmarks(
    const std::vector<ros2_interface::msg::RoadMark_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::RoadMark_<ContainerAllocator>>> & _arg)
  {
    this->roadmarks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RoadMarkList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RoadMarkList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RoadMarkList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RoadMarkList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RoadMarkList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RoadMarkList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RoadMarkList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RoadMarkList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RoadMarkList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RoadMarkList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RoadMarkList
    std::shared_ptr<ros2_interface::msg::RoadMarkList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RoadMarkList
    std::shared_ptr<ros2_interface::msg::RoadMarkList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadMarkList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->roadmarks != other.roadmarks) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadMarkList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadMarkList_

// alias to use template instance with default allocator
using RoadMarkList =
  ros2_interface::msg::RoadMarkList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__STRUCT_HPP_
