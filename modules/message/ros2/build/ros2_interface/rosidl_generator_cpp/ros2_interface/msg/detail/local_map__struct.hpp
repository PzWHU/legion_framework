// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/LocalMap.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__STRUCT_HPP_

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
// Member 'ego_point'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"
// Member 'lane_list'
#include "ros2_interface/msg/detail/lane_info_extend__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__LocalMap __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__LocalMap __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalMap_
{
  using Type = LocalMap_<ContainerAllocator>;

  explicit LocalMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ego_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0l;
      this->range = 0.0;
    }
  }

  explicit LocalMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ego_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0l;
      this->range = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _seq_type =
    int32_t;
  _seq_type seq;
  using _ego_point_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _ego_point_type ego_point;
  using _range_type =
    double;
  _range_type range;
  using _lane_list_type =
    std::vector<ros2_interface::msg::LaneInfoExtend_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneInfoExtend_<ContainerAllocator>>>;
  _lane_list_type lane_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__seq(
    const int32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__ego_point(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->ego_point = _arg;
    return *this;
  }
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__lane_list(
    const std::vector<ros2_interface::msg::LaneInfoExtend_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneInfoExtend_<ContainerAllocator>>> & _arg)
  {
    this->lane_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::LocalMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::LocalMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::LocalMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::LocalMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LocalMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LocalMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LocalMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LocalMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::LocalMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::LocalMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__LocalMap
    std::shared_ptr<ros2_interface::msg::LocalMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__LocalMap
    std::shared_ptr<ros2_interface::msg::LocalMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalMap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->ego_point != other.ego_point) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->lane_list != other.lane_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalMap_

// alias to use template instance with default allocator
using LocalMap =
  ros2_interface::msg::LocalMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__STRUCT_HPP_
