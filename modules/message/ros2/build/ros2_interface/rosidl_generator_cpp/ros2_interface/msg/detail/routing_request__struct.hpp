// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RoutingRequest.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__STRUCT_HPP_

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
// Member 'key_point_list'
#include "ros2_interface/msg/detail/key_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RoutingRequest __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RoutingRequest __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoutingRequest_
{
  using Type = RoutingRequest_<ContainerAllocator>;

  explicit RoutingRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_source = "";
      this->request_type = 0;
      this->num_of_kp = 0;
    }
  }

  explicit RoutingRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    request_source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_source = "";
      this->request_type = 0;
      this->num_of_kp = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _request_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_source_type request_source;
  using _request_type_type =
    int8_t;
  _request_type_type request_type;
  using _num_of_kp_type =
    int16_t;
  _num_of_kp_type num_of_kp;
  using _key_point_list_type =
    std::vector<ros2_interface::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::KeyPoint_<ContainerAllocator>>>;
  _key_point_list_type key_point_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__request_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_source = _arg;
    return *this;
  }
  Type & set__request_type(
    const int8_t & _arg)
  {
    this->request_type = _arg;
    return *this;
  }
  Type & set__num_of_kp(
    const int16_t & _arg)
  {
    this->num_of_kp = _arg;
    return *this;
  }
  Type & set__key_point_list(
    const std::vector<ros2_interface::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::KeyPoint_<ContainerAllocator>>> & _arg)
  {
    this->key_point_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RoutingRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RoutingRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RoutingRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RoutingRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RoutingRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RoutingRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RoutingRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RoutingRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RoutingRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RoutingRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RoutingRequest
    std::shared_ptr<ros2_interface::msg::RoutingRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RoutingRequest
    std::shared_ptr<ros2_interface::msg::RoutingRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoutingRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->request_source != other.request_source) {
      return false;
    }
    if (this->request_type != other.request_type) {
      return false;
    }
    if (this->num_of_kp != other.num_of_kp) {
      return false;
    }
    if (this->key_point_list != other.key_point_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoutingRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoutingRequest_

// alias to use template instance with default allocator
using RoutingRequest =
  ros2_interface::msg::RoutingRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__STRUCT_HPP_
