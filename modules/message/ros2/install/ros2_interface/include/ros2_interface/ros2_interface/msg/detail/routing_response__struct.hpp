// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RoutingResponse.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__STRUCT_HPP_

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
// Member 'lane_list'
#include "ros2_interface/msg/detail/lane_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RoutingResponse __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RoutingResponse __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoutingResponse_
{
  using Type = RoutingResponse_<ContainerAllocator>;

  explicit RoutingResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_status = 0l;
      this->replan_flag = 0l;
      this->route_reason = 0l;
    }
  }

  explicit RoutingResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_status = 0l;
      this->replan_flag = 0l;
      this->route_reason = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _plan_status_type =
    int32_t;
  _plan_status_type plan_status;
  using _replan_flag_type =
    int32_t;
  _replan_flag_type replan_flag;
  using _route_reason_type =
    int32_t;
  _route_reason_type route_reason;
  using _lane_list_type =
    std::vector<ros2_interface::msg::LaneInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneInfo_<ContainerAllocator>>>;
  _lane_list_type lane_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__plan_status(
    const int32_t & _arg)
  {
    this->plan_status = _arg;
    return *this;
  }
  Type & set__replan_flag(
    const int32_t & _arg)
  {
    this->replan_flag = _arg;
    return *this;
  }
  Type & set__route_reason(
    const int32_t & _arg)
  {
    this->route_reason = _arg;
    return *this;
  }
  Type & set__lane_list(
    const std::vector<ros2_interface::msg::LaneInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneInfo_<ContainerAllocator>>> & _arg)
  {
    this->lane_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RoutingResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RoutingResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RoutingResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RoutingResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RoutingResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RoutingResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RoutingResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RoutingResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RoutingResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RoutingResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RoutingResponse
    std::shared_ptr<ros2_interface::msg::RoutingResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RoutingResponse
    std::shared_ptr<ros2_interface::msg::RoutingResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoutingResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->plan_status != other.plan_status) {
      return false;
    }
    if (this->replan_flag != other.replan_flag) {
      return false;
    }
    if (this->route_reason != other.route_reason) {
      return false;
    }
    if (this->lane_list != other.lane_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoutingResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoutingResponse_

// alias to use template instance with default allocator
using RoutingResponse =
  ros2_interface::msg::RoutingResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__STRUCT_HPP_
