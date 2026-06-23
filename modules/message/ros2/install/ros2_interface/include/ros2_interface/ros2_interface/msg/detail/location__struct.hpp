// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOCATION__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LOCATION__STRUCT_HPP_

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
// Member 'position'
#include "ros2_interface/msg/detail/point_llh__struct.hpp"
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'position_std_dev'
// Member 'orientation_std_dev'
// Member 'linear_velocity_std_dev'
// Member 'linear_acceleration_std_dev'
// Member 'angular_velocity_std_dev'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"
// Member 'utm_position'
// Member 'utm_position_next'
#include "ros2_interface/msg/detail/point_enu__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Location __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Location __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Location_
{
  using Type = Location_<ContainerAllocator>;

  explicit Location_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    linear_velocity(_init),
    linear_acceleration(_init),
    angular_velocity(_init),
    utm_position(_init),
    utm_position_next(_init),
    position_std_dev(_init),
    orientation_std_dev(_init),
    linear_velocity_std_dev(_init),
    linear_acceleration_std_dev(_init),
    angular_velocity_std_dev(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0;
      this->roll = 0.0;
      this->heading = 0.0;
      this->rtk_flag = 0l;
      this->odom_type = 0l;
      this->auxiliary_type = 0l;
      this->location_valid_flag = 0l;
      this->origin_lat = 0.0;
      this->origin_lon = 0.0;
      this->change_origin_flag = 0l;
    }
  }

  explicit Location_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    linear_velocity(_alloc, _init),
    linear_acceleration(_alloc, _init),
    angular_velocity(_alloc, _init),
    utm_position(_alloc, _init),
    utm_position_next(_alloc, _init),
    position_std_dev(_alloc, _init),
    orientation_std_dev(_alloc, _init),
    linear_velocity_std_dev(_alloc, _init),
    linear_acceleration_std_dev(_alloc, _init),
    angular_velocity_std_dev(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0;
      this->roll = 0.0;
      this->heading = 0.0;
      this->rtk_flag = 0l;
      this->odom_type = 0l;
      this->auxiliary_type = 0l;
      this->location_valid_flag = 0l;
      this->origin_lat = 0.0;
      this->origin_lon = 0.0;
      this->change_origin_flag = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    ros2_interface::msg::PointLLH_<ContainerAllocator>;
  _position_type position;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _heading_type =
    double;
  _heading_type heading;
  using _linear_velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _linear_acceleration_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _angular_velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _rtk_flag_type =
    int32_t;
  _rtk_flag_type rtk_flag;
  using _odom_type_type =
    int32_t;
  _odom_type_type odom_type;
  using _auxiliary_type_type =
    int32_t;
  _auxiliary_type_type auxiliary_type;
  using _location_valid_flag_type =
    int32_t;
  _location_valid_flag_type location_valid_flag;
  using _origin_lat_type =
    double;
  _origin_lat_type origin_lat;
  using _origin_lon_type =
    double;
  _origin_lon_type origin_lon;
  using _utm_position_type =
    ros2_interface::msg::PointENU_<ContainerAllocator>;
  _utm_position_type utm_position;
  using _change_origin_flag_type =
    int32_t;
  _change_origin_flag_type change_origin_flag;
  using _utm_position_next_type =
    ros2_interface::msg::PointENU_<ContainerAllocator>;
  _utm_position_next_type utm_position_next;
  using _position_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _position_std_dev_type position_std_dev;
  using _orientation_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _orientation_std_dev_type orientation_std_dev;
  using _linear_velocity_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _linear_velocity_std_dev_type linear_velocity_std_dev;
  using _linear_acceleration_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _linear_acceleration_std_dev_type linear_acceleration_std_dev;
  using _angular_velocity_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _angular_velocity_std_dev_type angular_velocity_std_dev;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const ros2_interface::msg::PointLLH_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__rtk_flag(
    const int32_t & _arg)
  {
    this->rtk_flag = _arg;
    return *this;
  }
  Type & set__odom_type(
    const int32_t & _arg)
  {
    this->odom_type = _arg;
    return *this;
  }
  Type & set__auxiliary_type(
    const int32_t & _arg)
  {
    this->auxiliary_type = _arg;
    return *this;
  }
  Type & set__location_valid_flag(
    const int32_t & _arg)
  {
    this->location_valid_flag = _arg;
    return *this;
  }
  Type & set__origin_lat(
    const double & _arg)
  {
    this->origin_lat = _arg;
    return *this;
  }
  Type & set__origin_lon(
    const double & _arg)
  {
    this->origin_lon = _arg;
    return *this;
  }
  Type & set__utm_position(
    const ros2_interface::msg::PointENU_<ContainerAllocator> & _arg)
  {
    this->utm_position = _arg;
    return *this;
  }
  Type & set__change_origin_flag(
    const int32_t & _arg)
  {
    this->change_origin_flag = _arg;
    return *this;
  }
  Type & set__utm_position_next(
    const ros2_interface::msg::PointENU_<ContainerAllocator> & _arg)
  {
    this->utm_position_next = _arg;
    return *this;
  }
  Type & set__position_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->position_std_dev = _arg;
    return *this;
  }
  Type & set__orientation_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->orientation_std_dev = _arg;
    return *this;
  }
  Type & set__linear_velocity_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->linear_velocity_std_dev = _arg;
    return *this;
  }
  Type & set__linear_acceleration_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration_std_dev = _arg;
    return *this;
  }
  Type & set__angular_velocity_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->angular_velocity_std_dev = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Location_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Location_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Location_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Location_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Location_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Location_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Location_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Location_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Location_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Location_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Location
    std::shared_ptr<ros2_interface::msg::Location_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Location
    std::shared_ptr<ros2_interface::msg::Location_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Location_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->rtk_flag != other.rtk_flag) {
      return false;
    }
    if (this->odom_type != other.odom_type) {
      return false;
    }
    if (this->auxiliary_type != other.auxiliary_type) {
      return false;
    }
    if (this->location_valid_flag != other.location_valid_flag) {
      return false;
    }
    if (this->origin_lat != other.origin_lat) {
      return false;
    }
    if (this->origin_lon != other.origin_lon) {
      return false;
    }
    if (this->utm_position != other.utm_position) {
      return false;
    }
    if (this->change_origin_flag != other.change_origin_flag) {
      return false;
    }
    if (this->utm_position_next != other.utm_position_next) {
      return false;
    }
    if (this->position_std_dev != other.position_std_dev) {
      return false;
    }
    if (this->orientation_std_dev != other.orientation_std_dev) {
      return false;
    }
    if (this->linear_velocity_std_dev != other.linear_velocity_std_dev) {
      return false;
    }
    if (this->linear_acceleration_std_dev != other.linear_acceleration_std_dev) {
      return false;
    }
    if (this->angular_velocity_std_dev != other.angular_velocity_std_dev) {
      return false;
    }
    return true;
  }
  bool operator!=(const Location_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Location_

// alias to use template instance with default allocator
using Location =
  ros2_interface::msg::Location_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOCATION__STRUCT_HPP_
