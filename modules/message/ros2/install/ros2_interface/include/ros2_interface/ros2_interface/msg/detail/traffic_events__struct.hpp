// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TrafficEvents.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__STRUCT_HPP_

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
// Member 'route_fusion_info'
#include "ros2_interface/msg/detail/route_fusion_info__struct.hpp"
// Member 'junction_info'
#include "ros2_interface/msg/detail/junction_info__struct.hpp"
// Member 'limit_speed_info'
#include "ros2_interface/msg/detail/limit_speed_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TrafficEvents __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TrafficEvents __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficEvents_
{
  using Type = TrafficEvents_<ContainerAllocator>;

  explicit TrafficEvents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    route_fusion_info(_init),
    junction_info(_init),
    limit_speed_info(_init)
  {
    (void)_init;
  }

  explicit TrafficEvents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    route_fusion_info(_alloc, _init),
    junction_info(_alloc, _init),
    limit_speed_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _route_fusion_info_type =
    ros2_interface::msg::RouteFusionInfo_<ContainerAllocator>;
  _route_fusion_info_type route_fusion_info;
  using _junction_info_type =
    ros2_interface::msg::JunctionInfo_<ContainerAllocator>;
  _junction_info_type junction_info;
  using _limit_speed_info_type =
    ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator>;
  _limit_speed_info_type limit_speed_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__route_fusion_info(
    const ros2_interface::msg::RouteFusionInfo_<ContainerAllocator> & _arg)
  {
    this->route_fusion_info = _arg;
    return *this;
  }
  Type & set__junction_info(
    const ros2_interface::msg::JunctionInfo_<ContainerAllocator> & _arg)
  {
    this->junction_info = _arg;
    return *this;
  }
  Type & set__limit_speed_info(
    const ros2_interface::msg::LimitSpeedInfo_<ContainerAllocator> & _arg)
  {
    this->limit_speed_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TrafficEvents_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TrafficEvents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TrafficEvents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TrafficEvents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrafficEvents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrafficEvents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrafficEvents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrafficEvents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TrafficEvents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TrafficEvents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TrafficEvents
    std::shared_ptr<ros2_interface::msg::TrafficEvents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TrafficEvents
    std::shared_ptr<ros2_interface::msg::TrafficEvents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficEvents_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->route_fusion_info != other.route_fusion_info) {
      return false;
    }
    if (this->junction_info != other.junction_info) {
      return false;
    }
    if (this->limit_speed_info != other.limit_speed_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficEvents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficEvents_

// alias to use template instance with default allocator
using TrafficEvents =
  ros2_interface::msg::TrafficEvents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__STRUCT_HPP_
