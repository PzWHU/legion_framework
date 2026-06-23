// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_

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
// Member 'point'
#include "ros2_interface/msg/detail/point_xyzirt__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__PointCloud __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PointCloud __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloud_
{
  using Type = PointCloud_<ContainerAllocator>;

  explicit PointCloud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->is_dense = false;
      this->measurement_time = 0.0;
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  explicit PointCloud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->is_dense = false;
      this->measurement_time = 0.0;
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _is_dense_type =
    bool;
  _is_dense_type is_dense;
  using _point_type =
    std::vector<ros2_interface::msg::PointXYZIRT_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::PointXYZIRT_<ContainerAllocator>>>;
  _point_type point;
  using _measurement_time_type =
    double;
  _measurement_time_type measurement_time;
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;

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
  Type & set__is_dense(
    const bool & _arg)
  {
    this->is_dense = _arg;
    return *this;
  }
  Type & set__point(
    const std::vector<ros2_interface::msg::PointXYZIRT_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::PointXYZIRT_<ContainerAllocator>>> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__measurement_time(
    const double & _arg)
  {
    this->measurement_time = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PointCloud_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PointCloud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PointCloud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PointCloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PointCloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PointCloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PointCloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PointCloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PointCloud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PointCloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PointCloud
    std::shared_ptr<ros2_interface::msg::PointCloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PointCloud
    std::shared_ptr<ros2_interface::msg::PointCloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloud_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->is_dense != other.is_dense) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    if (this->measurement_time != other.measurement_time) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloud_

// alias to use template instance with default allocator
using PointCloud =
  ros2_interface::msg::PointCloud_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_
