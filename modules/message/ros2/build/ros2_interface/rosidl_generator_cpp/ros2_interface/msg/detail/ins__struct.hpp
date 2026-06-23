// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Ins.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__INS__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__INS__STRUCT_HPP_

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
// Member 'utm_position'
// Member 'attitude'
// Member 'linear_velocity'
// Member 'sd_position'
// Member 'sd_attitude'
// Member 'sd_velocity'
// Member 'attitude_dual'
// Member 'sd_angle_dual'
// Member 'angular_velocity'
// Member 'acceleration'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Ins __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Ins __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ins_
{
  using Type = Ins_<ContainerAllocator>;

  explicit Ins_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    utm_position(_init),
    attitude(_init),
    linear_velocity(_init),
    sd_position(_init),
    sd_attitude(_init),
    sd_velocity(_init),
    attitude_dual(_init),
    sd_angle_dual(_init),
    angular_velocity(_init),
    acceleration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->elevation = 0.0;
      this->utm_zone_mumber = 0l;
      this->utm_zone_char = 0;
      this->cep68 = 0.0;
      this->cep95 = 0.0;
      this->second = 0.0;
      this->sat_use_num = 0l;
      this->sat_in_view_num = 0l;
      this->solution_status = 0;
      this->position_type = 0;
      this->p_dop = 0.0;
      this->h_dop = 0.0;
      this->v_dop = 0.0;
      this->base_line_length_dual = 0.0;
      this->solution_status_dual = 0l;
      this->position_type_dual = 0l;
      this->solution_source_dual = 0l;
      this->aoc = 0ul;
      this->rtk_baseline = 0ul;
    }
  }

  explicit Ins_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    utm_position(_alloc, _init),
    attitude(_alloc, _init),
    linear_velocity(_alloc, _init),
    sd_position(_alloc, _init),
    sd_attitude(_alloc, _init),
    sd_velocity(_alloc, _init),
    attitude_dual(_alloc, _init),
    sd_angle_dual(_alloc, _init),
    angular_velocity(_alloc, _init),
    acceleration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->elevation = 0.0;
      this->utm_zone_mumber = 0l;
      this->utm_zone_char = 0;
      this->cep68 = 0.0;
      this->cep95 = 0.0;
      this->second = 0.0;
      this->sat_use_num = 0l;
      this->sat_in_view_num = 0l;
      this->solution_status = 0;
      this->position_type = 0;
      this->p_dop = 0.0;
      this->h_dop = 0.0;
      this->v_dop = 0.0;
      this->base_line_length_dual = 0.0;
      this->solution_status_dual = 0l;
      this->position_type_dual = 0l;
      this->solution_source_dual = 0l;
      this->aoc = 0ul;
      this->rtk_baseline = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _elevation_type =
    double;
  _elevation_type elevation;
  using _utm_position_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _utm_position_type utm_position;
  using _utm_zone_mumber_type =
    int32_t;
  _utm_zone_mumber_type utm_zone_mumber;
  using _utm_zone_char_type =
    uint8_t;
  _utm_zone_char_type utm_zone_char;
  using _attitude_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _attitude_type attitude;
  using _linear_velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _sd_position_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _sd_position_type sd_position;
  using _sd_attitude_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _sd_attitude_type sd_attitude;
  using _sd_velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _sd_velocity_type sd_velocity;
  using _cep68_type =
    double;
  _cep68_type cep68;
  using _cep95_type =
    double;
  _cep95_type cep95;
  using _second_type =
    double;
  _second_type second;
  using _sat_use_num_type =
    int32_t;
  _sat_use_num_type sat_use_num;
  using _sat_in_view_num_type =
    int32_t;
  _sat_in_view_num_type sat_in_view_num;
  using _solution_status_type =
    uint16_t;
  _solution_status_type solution_status;
  using _position_type_type =
    uint16_t;
  _position_type_type position_type;
  using _p_dop_type =
    double;
  _p_dop_type p_dop;
  using _h_dop_type =
    double;
  _h_dop_type h_dop;
  using _v_dop_type =
    double;
  _v_dop_type v_dop;
  using _attitude_dual_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _attitude_dual_type attitude_dual;
  using _sd_angle_dual_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _sd_angle_dual_type sd_angle_dual;
  using _base_line_length_dual_type =
    double;
  _base_line_length_dual_type base_line_length_dual;
  using _solution_status_dual_type =
    int32_t;
  _solution_status_dual_type solution_status_dual;
  using _position_type_dual_type =
    int32_t;
  _position_type_dual_type position_type_dual;
  using _solution_source_dual_type =
    int32_t;
  _solution_source_dual_type solution_source_dual;
  using _aoc_type =
    uint32_t;
  _aoc_type aoc;
  using _rtk_baseline_type =
    uint32_t;
  _rtk_baseline_type rtk_baseline;
  using _angular_velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _acceleration_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__elevation(
    const double & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__utm_position(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->utm_position = _arg;
    return *this;
  }
  Type & set__utm_zone_mumber(
    const int32_t & _arg)
  {
    this->utm_zone_mumber = _arg;
    return *this;
  }
  Type & set__utm_zone_char(
    const uint8_t & _arg)
  {
    this->utm_zone_char = _arg;
    return *this;
  }
  Type & set__attitude(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->attitude = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__sd_position(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->sd_position = _arg;
    return *this;
  }
  Type & set__sd_attitude(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->sd_attitude = _arg;
    return *this;
  }
  Type & set__sd_velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->sd_velocity = _arg;
    return *this;
  }
  Type & set__cep68(
    const double & _arg)
  {
    this->cep68 = _arg;
    return *this;
  }
  Type & set__cep95(
    const double & _arg)
  {
    this->cep95 = _arg;
    return *this;
  }
  Type & set__second(
    const double & _arg)
  {
    this->second = _arg;
    return *this;
  }
  Type & set__sat_use_num(
    const int32_t & _arg)
  {
    this->sat_use_num = _arg;
    return *this;
  }
  Type & set__sat_in_view_num(
    const int32_t & _arg)
  {
    this->sat_in_view_num = _arg;
    return *this;
  }
  Type & set__solution_status(
    const uint16_t & _arg)
  {
    this->solution_status = _arg;
    return *this;
  }
  Type & set__position_type(
    const uint16_t & _arg)
  {
    this->position_type = _arg;
    return *this;
  }
  Type & set__p_dop(
    const double & _arg)
  {
    this->p_dop = _arg;
    return *this;
  }
  Type & set__h_dop(
    const double & _arg)
  {
    this->h_dop = _arg;
    return *this;
  }
  Type & set__v_dop(
    const double & _arg)
  {
    this->v_dop = _arg;
    return *this;
  }
  Type & set__attitude_dual(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->attitude_dual = _arg;
    return *this;
  }
  Type & set__sd_angle_dual(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->sd_angle_dual = _arg;
    return *this;
  }
  Type & set__base_line_length_dual(
    const double & _arg)
  {
    this->base_line_length_dual = _arg;
    return *this;
  }
  Type & set__solution_status_dual(
    const int32_t & _arg)
  {
    this->solution_status_dual = _arg;
    return *this;
  }
  Type & set__position_type_dual(
    const int32_t & _arg)
  {
    this->position_type_dual = _arg;
    return *this;
  }
  Type & set__solution_source_dual(
    const int32_t & _arg)
  {
    this->solution_source_dual = _arg;
    return *this;
  }
  Type & set__aoc(
    const uint32_t & _arg)
  {
    this->aoc = _arg;
    return *this;
  }
  Type & set__rtk_baseline(
    const uint32_t & _arg)
  {
    this->rtk_baseline = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Ins_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Ins_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Ins_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Ins_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Ins_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Ins_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Ins_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Ins_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Ins_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Ins_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Ins
    std::shared_ptr<ros2_interface::msg::Ins_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Ins
    std::shared_ptr<ros2_interface::msg::Ins_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ins_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->utm_position != other.utm_position) {
      return false;
    }
    if (this->utm_zone_mumber != other.utm_zone_mumber) {
      return false;
    }
    if (this->utm_zone_char != other.utm_zone_char) {
      return false;
    }
    if (this->attitude != other.attitude) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->sd_position != other.sd_position) {
      return false;
    }
    if (this->sd_attitude != other.sd_attitude) {
      return false;
    }
    if (this->sd_velocity != other.sd_velocity) {
      return false;
    }
    if (this->cep68 != other.cep68) {
      return false;
    }
    if (this->cep95 != other.cep95) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    if (this->sat_use_num != other.sat_use_num) {
      return false;
    }
    if (this->sat_in_view_num != other.sat_in_view_num) {
      return false;
    }
    if (this->solution_status != other.solution_status) {
      return false;
    }
    if (this->position_type != other.position_type) {
      return false;
    }
    if (this->p_dop != other.p_dop) {
      return false;
    }
    if (this->h_dop != other.h_dop) {
      return false;
    }
    if (this->v_dop != other.v_dop) {
      return false;
    }
    if (this->attitude_dual != other.attitude_dual) {
      return false;
    }
    if (this->sd_angle_dual != other.sd_angle_dual) {
      return false;
    }
    if (this->base_line_length_dual != other.base_line_length_dual) {
      return false;
    }
    if (this->solution_status_dual != other.solution_status_dual) {
      return false;
    }
    if (this->position_type_dual != other.position_type_dual) {
      return false;
    }
    if (this->solution_source_dual != other.solution_source_dual) {
      return false;
    }
    if (this->aoc != other.aoc) {
      return false;
    }
    if (this->rtk_baseline != other.rtk_baseline) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ins_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ins_

// alias to use template instance with default allocator
using Ins =
  ros2_interface::msg::Ins_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__INS__STRUCT_HPP_
