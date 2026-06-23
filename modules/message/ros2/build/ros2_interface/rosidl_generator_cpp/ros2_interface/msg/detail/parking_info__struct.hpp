// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__STRUCT_HPP_

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
// Member 'parking_stoppers'
#include "ros2_interface/msg/detail/parking_stopper__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ParkingInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ParkingInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParkingInfo_
{
  using Type = ParkingInfo_<ContainerAllocator>;

  explicit ParkingInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->confidence = 0.0;
      this->theta = 0.0;
      this->width = 0.0;
      this->length = 0.0;
      this->yaw_offset = 0.0;
      this->sensor_id = 0l;
      this->is_lane_width_valid = false;
      this->lane_width = 0.0;
      this->parking_direction_type = 0l;
      this->left_occupied_status = 0l;
      this->right_occupied_status = 0l;
      this->parking_source_type = 0l;
    }
  }

  explicit ParkingInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->confidence = 0.0;
      this->theta = 0.0;
      this->width = 0.0;
      this->length = 0.0;
      this->yaw_offset = 0.0;
      this->sensor_id = 0l;
      this->is_lane_width_valid = false;
      this->lane_width = 0.0;
      this->parking_direction_type = 0l;
      this->left_occupied_status = 0l;
      this->right_occupied_status = 0l;
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
  using _confidence_type =
    double;
  _confidence_type confidence;
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
  using _yaw_offset_type =
    double;
  _yaw_offset_type yaw_offset;
  using _polygon_type =
    ros2_interface::msg::Polygon3D_<ContainerAllocator>;
  _polygon_type polygon;
  using _sensor_id_type =
    int32_t;
  _sensor_id_type sensor_id;
  using _is_lane_width_valid_type =
    bool;
  _is_lane_width_valid_type is_lane_width_valid;
  using _lane_width_type =
    double;
  _lane_width_type lane_width;
  using _parking_stoppers_type =
    std::vector<ros2_interface::msg::ParkingStopper_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::ParkingStopper_<ContainerAllocator>>>;
  _parking_stoppers_type parking_stoppers;
  using _parking_direction_type_type =
    int32_t;
  _parking_direction_type_type parking_direction_type;
  using _left_occupied_status_type =
    int32_t;
  _left_occupied_status_type left_occupied_status;
  using _right_occupied_status_type =
    int32_t;
  _right_occupied_status_type right_occupied_status;
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
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
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
  Type & set__yaw_offset(
    const double & _arg)
  {
    this->yaw_offset = _arg;
    return *this;
  }
  Type & set__polygon(
    const ros2_interface::msg::Polygon3D_<ContainerAllocator> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const int32_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__is_lane_width_valid(
    const bool & _arg)
  {
    this->is_lane_width_valid = _arg;
    return *this;
  }
  Type & set__lane_width(
    const double & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__parking_stoppers(
    const std::vector<ros2_interface::msg::ParkingStopper_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::ParkingStopper_<ContainerAllocator>>> & _arg)
  {
    this->parking_stoppers = _arg;
    return *this;
  }
  Type & set__parking_direction_type(
    const int32_t & _arg)
  {
    this->parking_direction_type = _arg;
    return *this;
  }
  Type & set__left_occupied_status(
    const int32_t & _arg)
  {
    this->left_occupied_status = _arg;
    return *this;
  }
  Type & set__right_occupied_status(
    const int32_t & _arg)
  {
    this->right_occupied_status = _arg;
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
    ros2_interface::msg::ParkingInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ParkingInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ParkingInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ParkingInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ParkingInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ParkingInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ParkingInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ParkingInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ParkingInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ParkingInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ParkingInfo
    std::shared_ptr<ros2_interface::msg::ParkingInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ParkingInfo
    std::shared_ptr<ros2_interface::msg::ParkingInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingInfo_ & other) const
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
    if (this->confidence != other.confidence) {
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
    if (this->yaw_offset != other.yaw_offset) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->is_lane_width_valid != other.is_lane_width_valid) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->parking_stoppers != other.parking_stoppers) {
      return false;
    }
    if (this->parking_direction_type != other.parking_direction_type) {
      return false;
    }
    if (this->left_occupied_status != other.left_occupied_status) {
      return false;
    }
    if (this->right_occupied_status != other.right_occupied_status) {
      return false;
    }
    if (this->parking_source_type != other.parking_source_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingInfo_

// alias to use template instance with default allocator
using ParkingInfo =
  ros2_interface::msg::ParkingInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__STRUCT_HPP_
