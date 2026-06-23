// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/SotifMonitorResult.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__STRUCT_HPP_

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
// Member 'region_value'
#include "ros2_interface/msg/detail/region__struct.hpp"
// Member 'grid_map'
#include "ros2_interface/msg/detail/grid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__SotifMonitorResult __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__SotifMonitorResult __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SotifMonitorResult_
{
  using Type = SotifMonitorResult_<ContainerAllocator>;

  explicit SotifMonitorResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit SotifMonitorResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _region_value_type =
    std::vector<ros2_interface::msg::Region_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Region_<ContainerAllocator>>>;
  _region_value_type region_value;
  using _grid_map_type =
    std::vector<ros2_interface::msg::Grid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Grid_<ContainerAllocator>>>;
  _grid_map_type grid_map;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__region_value(
    const std::vector<ros2_interface::msg::Region_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Region_<ContainerAllocator>>> & _arg)
  {
    this->region_value = _arg;
    return *this;
  }
  Type & set__grid_map(
    const std::vector<ros2_interface::msg::Grid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Grid_<ContainerAllocator>>> & _arg)
  {
    this->grid_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::SotifMonitorResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::SotifMonitorResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::SotifMonitorResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::SotifMonitorResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::SotifMonitorResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::SotifMonitorResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::SotifMonitorResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::SotifMonitorResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::SotifMonitorResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::SotifMonitorResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__SotifMonitorResult
    std::shared_ptr<ros2_interface::msg::SotifMonitorResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__SotifMonitorResult
    std::shared_ptr<ros2_interface::msg::SotifMonitorResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SotifMonitorResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->region_value != other.region_value) {
      return false;
    }
    if (this->grid_map != other.grid_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const SotifMonitorResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SotifMonitorResult_

// alias to use template instance with default allocator
using SotifMonitorResult =
  ros2_interface::msg::SotifMonitorResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__STRUCT_HPP_
