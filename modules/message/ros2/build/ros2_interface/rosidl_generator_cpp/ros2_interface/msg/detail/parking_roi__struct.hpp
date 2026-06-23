// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ParkingRoi.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__STRUCT_HPP_

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
// Member 'obstacles_vec'
#include "ros2_interface/msg/detail/point2d_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ParkingRoi __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ParkingRoi __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParkingRoi_
{
  using Type = ParkingRoi_<ContainerAllocator>;

  explicit ParkingRoi_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ParkingRoi_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _obstacles_vec_type =
    std::vector<ros2_interface::msg::Point2dList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2dList_<ContainerAllocator>>>;
  _obstacles_vec_type obstacles_vec;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__obstacles_vec(
    const std::vector<ros2_interface::msg::Point2dList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2dList_<ContainerAllocator>>> & _arg)
  {
    this->obstacles_vec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ParkingRoi_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ParkingRoi_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ParkingRoi_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ParkingRoi_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ParkingRoi_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ParkingRoi_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ParkingRoi_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ParkingRoi_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ParkingRoi_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ParkingRoi_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ParkingRoi
    std::shared_ptr<ros2_interface::msg::ParkingRoi_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ParkingRoi
    std::shared_ptr<ros2_interface::msg::ParkingRoi_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingRoi_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->obstacles_vec != other.obstacles_vec) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingRoi_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingRoi_

// alias to use template instance with default allocator
using ParkingRoi =
  ros2_interface::msg::ParkingRoi_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__STRUCT_HPP_
