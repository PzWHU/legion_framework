// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/HMIParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__STRUCT_HPP_

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
// Member 'center_point_of_parking'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"
// Member 'polygon'
#include "ros2_interface/msg/detail/polygon3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__HMIParkingInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__HMIParkingInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HMIParkingInfo_
{
  using Type = HMIParkingInfo_<ContainerAllocator>;

  explicit HMIParkingInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    center_point_of_parking(_init),
    polygon(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parking_space_id = 0l;
      this->parking_type = 0l;
      this->parking_status = 0l;
      this->theta = 0.0;
      this->width = 0.0;
      this->length = 0.0;
      this->is_custom_parking = false;
      this->parking_source_type = 0l;
    }
  }

  explicit HMIParkingInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    center_point_of_parking(_alloc, _init),
    polygon(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parking_space_id = 0l;
      this->parking_type = 0l;
      this->parking_status = 0l;
      this->theta = 0.0;
      this->width = 0.0;
      this->length = 0.0;
      this->is_custom_parking = false;
      this->parking_source_type = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _parking_space_id_type =
    int32_t;
  _parking_space_id_type parking_space_id;
  using _parking_type_type =
    int32_t;
  _parking_type_type parking_type;
  using _parking_status_type =
    int32_t;
  _parking_status_type parking_status;
  using _center_point_of_parking_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _center_point_of_parking_type center_point_of_parking;
  using _theta_type =
    double;
  _theta_type theta;
  using _width_type =
    double;
  _width_type width;
  using _length_type =
    double;
  _length_type length;
  using _is_custom_parking_type =
    bool;
  _is_custom_parking_type is_custom_parking;
  using _polygon_type =
    ros2_interface::msg::Polygon3D_<ContainerAllocator>;
  _polygon_type polygon;
  using _parking_source_type_type =
    int32_t;
  _parking_source_type_type parking_source_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__parking_space_id(
    const int32_t & _arg)
  {
    this->parking_space_id = _arg;
    return *this;
  }
  Type & set__parking_type(
    const int32_t & _arg)
  {
    this->parking_type = _arg;
    return *this;
  }
  Type & set__parking_status(
    const int32_t & _arg)
  {
    this->parking_status = _arg;
    return *this;
  }
  Type & set__center_point_of_parking(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->center_point_of_parking = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__is_custom_parking(
    const bool & _arg)
  {
    this->is_custom_parking = _arg;
    return *this;
  }
  Type & set__polygon(
    const ros2_interface::msg::Polygon3D_<ContainerAllocator> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }
  Type & set__parking_source_type(
    const int32_t & _arg)
  {
    this->parking_source_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::HMIParkingInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::HMIParkingInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIParkingInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIParkingInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIParkingInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIParkingInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIParkingInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIParkingInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIParkingInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIParkingInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__HMIParkingInfo
    std::shared_ptr<ros2_interface::msg::HMIParkingInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__HMIParkingInfo
    std::shared_ptr<ros2_interface::msg::HMIParkingInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HMIParkingInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->parking_space_id != other.parking_space_id) {
      return false;
    }
    if (this->parking_type != other.parking_type) {
      return false;
    }
    if (this->parking_status != other.parking_status) {
      return false;
    }
    if (this->center_point_of_parking != other.center_point_of_parking) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->is_custom_parking != other.is_custom_parking) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    if (this->parking_source_type != other.parking_source_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const HMIParkingInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HMIParkingInfo_

// alias to use template instance with default allocator
using HMIParkingInfo =
  ros2_interface::msg::HMIParkingInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__STRUCT_HPP_
