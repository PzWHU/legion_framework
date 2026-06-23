// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/JunctionInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stop_line'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__JunctionInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__JunctionInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JunctionInfo_
{
  using Type = JunctionInfo_<ContainerAllocator>;

  explicit JunctionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->light_flag = 0l;
      this->light_color = 0l;
      this->light_remain_time = 0.0;
      this->distance_to_stop = 0.0;
      this->direction_flag = 0l;
      this->direction = 0l;
      this->distance_to_junction = 0.0;
    }
  }

  explicit JunctionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->light_flag = 0l;
      this->light_color = 0l;
      this->light_remain_time = 0.0;
      this->distance_to_stop = 0.0;
      this->direction_flag = 0l;
      this->direction = 0l;
      this->distance_to_junction = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _light_flag_type =
    int32_t;
  _light_flag_type light_flag;
  using _light_color_type =
    int32_t;
  _light_color_type light_color;
  using _light_remain_time_type =
    double;
  _light_remain_time_type light_remain_time;
  using _distance_to_stop_type =
    double;
  _distance_to_stop_type distance_to_stop;
  using _direction_flag_type =
    int32_t;
  _direction_flag_type direction_flag;
  using _direction_type =
    int32_t;
  _direction_type direction;
  using _distance_to_junction_type =
    double;
  _distance_to_junction_type distance_to_junction;
  using _stop_line_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _stop_line_type stop_line;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__light_flag(
    const int32_t & _arg)
  {
    this->light_flag = _arg;
    return *this;
  }
  Type & set__light_color(
    const int32_t & _arg)
  {
    this->light_color = _arg;
    return *this;
  }
  Type & set__light_remain_time(
    const double & _arg)
  {
    this->light_remain_time = _arg;
    return *this;
  }
  Type & set__distance_to_stop(
    const double & _arg)
  {
    this->distance_to_stop = _arg;
    return *this;
  }
  Type & set__direction_flag(
    const int32_t & _arg)
  {
    this->direction_flag = _arg;
    return *this;
  }
  Type & set__direction(
    const int32_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__distance_to_junction(
    const double & _arg)
  {
    this->distance_to_junction = _arg;
    return *this;
  }
  Type & set__stop_line(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->stop_line = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::JunctionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::JunctionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::JunctionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::JunctionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::JunctionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::JunctionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::JunctionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::JunctionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::JunctionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::JunctionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__JunctionInfo
    std::shared_ptr<ros2_interface::msg::JunctionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__JunctionInfo
    std::shared_ptr<ros2_interface::msg::JunctionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JunctionInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->light_flag != other.light_flag) {
      return false;
    }
    if (this->light_color != other.light_color) {
      return false;
    }
    if (this->light_remain_time != other.light_remain_time) {
      return false;
    }
    if (this->distance_to_stop != other.distance_to_stop) {
      return false;
    }
    if (this->direction_flag != other.direction_flag) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->distance_to_junction != other.distance_to_junction) {
      return false;
    }
    if (this->stop_line != other.stop_line) {
      return false;
    }
    return true;
  }
  bool operator!=(const JunctionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JunctionInfo_

// alias to use template instance with default allocator
using JunctionInfo =
  ros2_interface::msg::JunctionInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__STRUCT_HPP_
