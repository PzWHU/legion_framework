// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/CommandRespond.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__CommandRespond __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__CommandRespond __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommandRespond_
{
  using Type = CommandRespond_<ContainerAllocator>;

  explicit CommandRespond_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->self_id = 0;
      this->respond_id = 0;
      this->status = 0;
      this->fail_code = 0l;
    }
  }

  explicit CommandRespond_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->self_id = 0;
      this->respond_id = 0;
      this->status = 0;
      this->fail_code = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _self_id_type =
    int8_t;
  _self_id_type self_id;
  using _respond_id_type =
    int8_t;
  _respond_id_type respond_id;
  using _status_type =
    int8_t;
  _status_type status;
  using _fail_code_type =
    int32_t;
  _fail_code_type fail_code;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__self_id(
    const int8_t & _arg)
  {
    this->self_id = _arg;
    return *this;
  }
  Type & set__respond_id(
    const int8_t & _arg)
  {
    this->respond_id = _arg;
    return *this;
  }
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__fail_code(
    const int32_t & _arg)
  {
    this->fail_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::CommandRespond_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::CommandRespond_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::CommandRespond_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::CommandRespond_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::CommandRespond_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::CommandRespond_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::CommandRespond_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::CommandRespond_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::CommandRespond_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::CommandRespond_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__CommandRespond
    std::shared_ptr<ros2_interface::msg::CommandRespond_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__CommandRespond
    std::shared_ptr<ros2_interface::msg::CommandRespond_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommandRespond_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->self_id != other.self_id) {
      return false;
    }
    if (this->respond_id != other.respond_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->fail_code != other.fail_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommandRespond_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommandRespond_

// alias to use template instance with default allocator
using CommandRespond =
  ros2_interface::msg::CommandRespond_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__STRUCT_HPP_
