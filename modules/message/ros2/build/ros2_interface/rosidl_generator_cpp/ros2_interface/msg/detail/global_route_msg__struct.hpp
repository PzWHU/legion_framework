// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/GlobalRouteMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__STRUCT_HPP_

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
// Member 'route'
// Member 'current_lanelet'
// Member 'cur_slice'
#include "ros2_interface/msg/detail/lanelet_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__GlobalRouteMsg __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__GlobalRouteMsg __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalRouteMsg_
{
  using Type = GlobalRouteMsg_<ContainerAllocator>;

  explicit GlobalRouteMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    current_lanelet(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_mileage = 0.0;
      this->cur_mileage = 0.0;
    }
  }

  explicit GlobalRouteMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current_lanelet(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_mileage = 0.0;
      this->cur_mileage = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _route_type =
    std::vector<ros2_interface::msg::LaneletInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneletInfo_<ContainerAllocator>>>;
  _route_type route;
  using _current_lanelet_type =
    ros2_interface::msg::LaneletInfo_<ContainerAllocator>;
  _current_lanelet_type current_lanelet;
  using _total_mileage_type =
    double;
  _total_mileage_type total_mileage;
  using _cur_mileage_type =
    double;
  _cur_mileage_type cur_mileage;
  using _cur_slice_type =
    std::vector<ros2_interface::msg::LaneletInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneletInfo_<ContainerAllocator>>>;
  _cur_slice_type cur_slice;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__route(
    const std::vector<ros2_interface::msg::LaneletInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneletInfo_<ContainerAllocator>>> & _arg)
  {
    this->route = _arg;
    return *this;
  }
  Type & set__current_lanelet(
    const ros2_interface::msg::LaneletInfo_<ContainerAllocator> & _arg)
  {
    this->current_lanelet = _arg;
    return *this;
  }
  Type & set__total_mileage(
    const double & _arg)
  {
    this->total_mileage = _arg;
    return *this;
  }
  Type & set__cur_mileage(
    const double & _arg)
  {
    this->cur_mileage = _arg;
    return *this;
  }
  Type & set__cur_slice(
    const std::vector<ros2_interface::msg::LaneletInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneletInfo_<ContainerAllocator>>> & _arg)
  {
    this->cur_slice = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__GlobalRouteMsg
    std::shared_ptr<ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__GlobalRouteMsg
    std::shared_ptr<ros2_interface::msg::GlobalRouteMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalRouteMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->route != other.route) {
      return false;
    }
    if (this->current_lanelet != other.current_lanelet) {
      return false;
    }
    if (this->total_mileage != other.total_mileage) {
      return false;
    }
    if (this->cur_mileage != other.cur_mileage) {
      return false;
    }
    if (this->cur_slice != other.cur_slice) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalRouteMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalRouteMsg_

// alias to use template instance with default allocator
using GlobalRouteMsg =
  ros2_interface::msg::GlobalRouteMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__STRUCT_HPP_
