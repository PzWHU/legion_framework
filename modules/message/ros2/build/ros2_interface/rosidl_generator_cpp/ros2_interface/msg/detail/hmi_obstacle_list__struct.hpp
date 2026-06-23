// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/HMIObstacleList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE_LIST__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE_LIST__STRUCT_HPP_

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
// Member 'obstacle'
#include "ros2_interface/msg/detail/hmi_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__HMIObstacleList __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__HMIObstacleList __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HMIObstacleList_
{
  using Type = HMIObstacleList_<ContainerAllocator>;

  explicit HMIObstacleList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0l;
      this->error_code = 0l;
      this->is_valid = false;
      this->change_origin_flag = 0l;
    }
  }

  explicit HMIObstacleList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0l;
      this->error_code = 0l;
      this->is_valid = false;
      this->change_origin_flag = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_id_type =
    int32_t;
  _sensor_id_type sensor_id;
  using _obstacle_type =
    std::vector<ros2_interface::msg::HMIObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::HMIObstacle_<ContainerAllocator>>>;
  _obstacle_type obstacle;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _change_origin_flag_type =
    int32_t;
  _change_origin_flag_type change_origin_flag;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const int32_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__obstacle(
    const std::vector<ros2_interface::msg::HMIObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::HMIObstacle_<ContainerAllocator>>> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__change_origin_flag(
    const int32_t & _arg)
  {
    this->change_origin_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::HMIObstacleList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::HMIObstacleList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIObstacleList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIObstacleList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIObstacleList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIObstacleList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIObstacleList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIObstacleList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIObstacleList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIObstacleList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__HMIObstacleList
    std::shared_ptr<ros2_interface::msg::HMIObstacleList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__HMIObstacleList
    std::shared_ptr<ros2_interface::msg::HMIObstacleList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HMIObstacleList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->change_origin_flag != other.change_origin_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const HMIObstacleList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HMIObstacleList_

// alias to use template instance with default allocator
using HMIObstacleList =
  ros2_interface::msg::HMIObstacleList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE_LIST__STRUCT_HPP_
