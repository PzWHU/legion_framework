// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO_LIST__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO_LIST__STRUCT_HPP_

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
// Member 'parking_info'
#include "ros2_interface/msg/detail/parking_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ParkingInfoList __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ParkingInfoList __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParkingInfoList_
{
  using Type = ParkingInfoList_<ContainerAllocator>;

  explicit ParkingInfoList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->is_valid = false;
      this->parking_out_enable = false;
      this->parking_out_direction = 0l;
      this->parking_out_id = 0l;
    }
  }

  explicit ParkingInfoList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->is_valid = false;
      this->parking_out_enable = false;
      this->parking_out_direction = 0l;
      this->parking_out_id = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _parking_info_type =
    std::vector<ros2_interface::msg::ParkingInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::ParkingInfo_<ContainerAllocator>>>;
  _parking_info_type parking_info;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _parking_out_enable_type =
    bool;
  _parking_out_enable_type parking_out_enable;
  using _parking_out_direction_type =
    int32_t;
  _parking_out_direction_type parking_out_direction;
  using _parking_out_id_type =
    int32_t;
  _parking_out_id_type parking_out_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__parking_info(
    const std::vector<ros2_interface::msg::ParkingInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::ParkingInfo_<ContainerAllocator>>> & _arg)
  {
    this->parking_info = _arg;
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
  Type & set__parking_out_enable(
    const bool & _arg)
  {
    this->parking_out_enable = _arg;
    return *this;
  }
  Type & set__parking_out_direction(
    const int32_t & _arg)
  {
    this->parking_out_direction = _arg;
    return *this;
  }
  Type & set__parking_out_id(
    const int32_t & _arg)
  {
    this->parking_out_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ParkingInfoList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ParkingInfoList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ParkingInfoList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ParkingInfoList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ParkingInfoList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ParkingInfoList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ParkingInfoList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ParkingInfoList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ParkingInfoList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ParkingInfoList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ParkingInfoList
    std::shared_ptr<ros2_interface::msg::ParkingInfoList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ParkingInfoList
    std::shared_ptr<ros2_interface::msg::ParkingInfoList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingInfoList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->parking_info != other.parking_info) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->parking_out_enable != other.parking_out_enable) {
      return false;
    }
    if (this->parking_out_direction != other.parking_out_direction) {
      return false;
    }
    if (this->parking_out_id != other.parking_out_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingInfoList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingInfoList_

// alias to use template instance with default allocator
using ParkingInfoList =
  ros2_interface::msg::ParkingInfoList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO_LIST__STRUCT_HPP_
