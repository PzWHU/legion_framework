// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ObuCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__STRUCT_HPP_

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
// Member 'obu_cmd_list'
#include "ros2_interface/msg/detail/obu_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ObuCmdMsg __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ObuCmdMsg __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObuCmdMsg_
{
  using Type = ObuCmdMsg_<ContainerAllocator>;

  explicit ObuCmdMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->name = "";
    }
  }

  explicit ObuCmdMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    int32_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _obu_cmd_list_type =
    std::vector<ros2_interface::msg::ObuCmd_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::ObuCmd_<ContainerAllocator>>>;
  _obu_cmd_list_type obu_cmd_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__obu_cmd_list(
    const std::vector<ros2_interface::msg::ObuCmd_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::ObuCmd_<ContainerAllocator>>> & _arg)
  {
    this->obu_cmd_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ObuCmdMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ObuCmdMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ObuCmdMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ObuCmdMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ObuCmdMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ObuCmdMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ObuCmdMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ObuCmdMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ObuCmdMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ObuCmdMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ObuCmdMsg
    std::shared_ptr<ros2_interface::msg::ObuCmdMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ObuCmdMsg
    std::shared_ptr<ros2_interface::msg::ObuCmdMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObuCmdMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->obu_cmd_list != other.obu_cmd_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObuCmdMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObuCmdMsg_

// alias to use template instance with default allocator
using ObuCmdMsg =
  ros2_interface::msg::ObuCmdMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__STRUCT_HPP_
