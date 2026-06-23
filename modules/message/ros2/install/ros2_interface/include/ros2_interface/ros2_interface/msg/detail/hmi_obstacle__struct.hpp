// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/HMIObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center_pos_vehicle'
// Member 'center_pos_abs'
// Member 'points'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__HMIObstacle __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__HMIObstacle __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HMIObstacle_
{
  using Type = HMIObstacle_<ContainerAllocator>;

  explicit HMIObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center_pos_vehicle(_init),
    center_pos_abs(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->theta_vehicle = 0.0;
      this->theta_abs = 0.0;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->type = 0l;
      this->confidence = 0.0;
      this->confidence_type = 0l;
      this->sub_type = 0l;
      this->cipv_flag = 0;
      this->fusion_type = 0l;
    }
  }

  explicit HMIObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center_pos_vehicle(_alloc, _init),
    center_pos_abs(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->theta_vehicle = 0.0;
      this->theta_abs = 0.0;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->type = 0l;
      this->confidence = 0.0;
      this->confidence_type = 0l;
      this->sub_type = 0l;
      this->cipv_flag = 0;
      this->fusion_type = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _center_pos_vehicle_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _center_pos_vehicle_type center_pos_vehicle;
  using _center_pos_abs_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _center_pos_abs_type center_pos_abs;
  using _theta_vehicle_type =
    double;
  _theta_vehicle_type theta_vehicle;
  using _theta_abs_type =
    double;
  _theta_abs_type theta_abs;
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;
  using _height_type =
    double;
  _height_type height;
  using _type_type =
    int32_t;
  _type_type type;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _confidence_type_type =
    int32_t;
  _confidence_type_type confidence_type;
  using _sub_type_type =
    int32_t;
  _sub_type_type sub_type;
  using _points_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _points_type points;
  using _cipv_flag_type =
    uint8_t;
  _cipv_flag_type cipv_flag;
  using _fusion_type_type =
    int32_t;
  _fusion_type_type fusion_type;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__center_pos_vehicle(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->center_pos_vehicle = _arg;
    return *this;
  }
  Type & set__center_pos_abs(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->center_pos_abs = _arg;
    return *this;
  }
  Type & set__theta_vehicle(
    const double & _arg)
  {
    this->theta_vehicle = _arg;
    return *this;
  }
  Type & set__theta_abs(
    const double & _arg)
  {
    this->theta_abs = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__confidence_type(
    const int32_t & _arg)
  {
    this->confidence_type = _arg;
    return *this;
  }
  Type & set__sub_type(
    const int32_t & _arg)
  {
    this->sub_type = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__cipv_flag(
    const uint8_t & _arg)
  {
    this->cipv_flag = _arg;
    return *this;
  }
  Type & set__fusion_type(
    const int32_t & _arg)
  {
    this->fusion_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::HMIObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::HMIObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__HMIObstacle
    std::shared_ptr<ros2_interface::msg::HMIObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__HMIObstacle
    std::shared_ptr<ros2_interface::msg::HMIObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HMIObstacle_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->center_pos_vehicle != other.center_pos_vehicle) {
      return false;
    }
    if (this->center_pos_abs != other.center_pos_abs) {
      return false;
    }
    if (this->theta_vehicle != other.theta_vehicle) {
      return false;
    }
    if (this->theta_abs != other.theta_abs) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->confidence_type != other.confidence_type) {
      return false;
    }
    if (this->sub_type != other.sub_type) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->cipv_flag != other.cipv_flag) {
      return false;
    }
    if (this->fusion_type != other.fusion_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const HMIObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HMIObstacle_

// alias to use template instance with default allocator
using HMIObstacle =
  ros2_interface::msg::HMIObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__STRUCT_HPP_
