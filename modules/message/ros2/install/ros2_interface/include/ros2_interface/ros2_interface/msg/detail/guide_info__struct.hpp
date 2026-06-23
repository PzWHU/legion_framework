// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/GuideInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__STRUCT_HPP_

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
// Member 'current_road'
// Member 'next_road'
#include "ros2_interface/msg/detail/guide_road__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__GuideInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__GuideInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GuideInfo_
{
  using Type = GuideInfo_<ContainerAllocator>;

  explicit GuideInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    current_road(_init),
    next_road(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->next_dis = 0.0;
      this->round_status = 0;
      this->intersection_status = 0;
      this->roads_status = 0;
    }
  }

  explicit GuideInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current_road(_alloc, _init),
    next_road(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->next_dis = 0.0;
      this->round_status = 0;
      this->intersection_status = 0;
      this->roads_status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _next_dis_type =
    double;
  _next_dis_type next_dis;
  using _current_road_type =
    ros2_interface::msg::GuideRoad_<ContainerAllocator>;
  _current_road_type current_road;
  using _next_road_type =
    ros2_interface::msg::GuideRoad_<ContainerAllocator>;
  _next_road_type next_road;
  using _round_status_type =
    int8_t;
  _round_status_type round_status;
  using _intersection_status_type =
    int8_t;
  _intersection_status_type intersection_status;
  using _roads_status_type =
    int8_t;
  _roads_status_type roads_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__next_dis(
    const double & _arg)
  {
    this->next_dis = _arg;
    return *this;
  }
  Type & set__current_road(
    const ros2_interface::msg::GuideRoad_<ContainerAllocator> & _arg)
  {
    this->current_road = _arg;
    return *this;
  }
  Type & set__next_road(
    const ros2_interface::msg::GuideRoad_<ContainerAllocator> & _arg)
  {
    this->next_road = _arg;
    return *this;
  }
  Type & set__round_status(
    const int8_t & _arg)
  {
    this->round_status = _arg;
    return *this;
  }
  Type & set__intersection_status(
    const int8_t & _arg)
  {
    this->intersection_status = _arg;
    return *this;
  }
  Type & set__roads_status(
    const int8_t & _arg)
  {
    this->roads_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::GuideInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::GuideInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::GuideInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::GuideInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::GuideInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::GuideInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::GuideInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::GuideInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::GuideInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::GuideInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__GuideInfo
    std::shared_ptr<ros2_interface::msg::GuideInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__GuideInfo
    std::shared_ptr<ros2_interface::msg::GuideInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GuideInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->next_dis != other.next_dis) {
      return false;
    }
    if (this->current_road != other.current_road) {
      return false;
    }
    if (this->next_road != other.next_road) {
      return false;
    }
    if (this->round_status != other.round_status) {
      return false;
    }
    if (this->intersection_status != other.intersection_status) {
      return false;
    }
    if (this->roads_status != other.roads_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GuideInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GuideInfo_

// alias to use template instance with default allocator
using GuideInfo =
  ros2_interface::msg::GuideInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__STRUCT_HPP_
