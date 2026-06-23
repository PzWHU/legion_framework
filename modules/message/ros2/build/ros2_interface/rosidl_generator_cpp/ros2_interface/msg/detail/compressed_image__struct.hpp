// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_HPP_

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
# define DEPRECATED__ros2_interface__msg__CompressedImage __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__CompressedImage __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CompressedImage_
{
  using Type = CompressedImage_<ContainerAllocator>;

  explicit CompressedImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->format = "";
      this->measurement_time = 0.0;
      this->frame_type = 0ul;
    }
  }

  explicit CompressedImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    frame_id(_alloc),
    format(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->format = "";
      this->measurement_time = 0.0;
      this->frame_type = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _format_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _format_type format;
  using _data_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _data_type data;
  using _measurement_time_type =
    double;
  _measurement_time_type measurement_time;
  using _frame_type_type =
    uint32_t;
  _frame_type_type frame_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__format(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->format = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__measurement_time(
    const double & _arg)
  {
    this->measurement_time = _arg;
    return *this;
  }
  Type & set__frame_type(
    const uint32_t & _arg)
  {
    this->frame_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::CompressedImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::CompressedImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::CompressedImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::CompressedImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::CompressedImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::CompressedImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::CompressedImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::CompressedImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::CompressedImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::CompressedImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__CompressedImage
    std::shared_ptr<ros2_interface::msg::CompressedImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__CompressedImage
    std::shared_ptr<ros2_interface::msg::CompressedImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompressedImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->format != other.format) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->measurement_time != other.measurement_time) {
      return false;
    }
    if (this->frame_type != other.frame_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompressedImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompressedImage_

// alias to use template instance with default allocator
using CompressedImage =
  ros2_interface::msg::CompressedImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_HPP_
