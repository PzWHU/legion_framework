// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/LaneLine.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'curve_vehicle'
// Member 'curve_image'
// Member 'curve_abs'
#include "ros2_interface/msg/detail/lane_line_cubic_curve__struct.hpp"
// Member 'pts_vehicle'
// Member 'pts_abs'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"
// Member 'pts_image'
// Member 'pts_key'
#include "ros2_interface/msg/detail/point2_d__struct.hpp"
// Member 'image_end_point'
#include "ros2_interface/msg/detail/end_points__struct.hpp"
// Member 'create_time'
#include "ros2_interface/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__LaneLine __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__LaneLine __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneLine_
{
  using Type = LaneLine_<ContainerAllocator>;

  explicit LaneLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : curve_vehicle(_init),
    curve_image(_init),
    curve_abs(_init),
    image_end_point(_init),
    create_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_type = 0l;
      this->lane_color = 0l;
      this->pos_type = 0l;
      this->hd_lane_id = 0;
      this->confidence = 0.0;
      this->lane_quality = 0l;
      this->fused_lane_type = 0l;
      this->lane_coordinate_type = 0l;
      this->use_type = 0l;
    }
  }

  explicit LaneLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : curve_vehicle(_alloc, _init),
    curve_image(_alloc, _init),
    curve_abs(_alloc, _init),
    image_end_point(_alloc, _init),
    create_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_type = 0l;
      this->lane_color = 0l;
      this->pos_type = 0l;
      this->hd_lane_id = 0;
      this->confidence = 0.0;
      this->lane_quality = 0l;
      this->fused_lane_type = 0l;
      this->lane_coordinate_type = 0l;
      this->use_type = 0l;
    }
  }

  // field types and members
  using _lane_type_type =
    int32_t;
  _lane_type_type lane_type;
  using _lane_color_type =
    int32_t;
  _lane_color_type lane_color;
  using _pos_type_type =
    int32_t;
  _pos_type_type pos_type;
  using _curve_vehicle_type =
    ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>;
  _curve_vehicle_type curve_vehicle;
  using _curve_image_type =
    ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>;
  _curve_image_type curve_image;
  using _curve_abs_type =
    ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>;
  _curve_abs_type curve_abs;
  using _pts_vehicle_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _pts_vehicle_type pts_vehicle;
  using _pts_image_type =
    std::vector<ros2_interface::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2D_<ContainerAllocator>>>;
  _pts_image_type pts_image;
  using _pts_abs_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _pts_abs_type pts_abs;
  using _image_end_point_type =
    ros2_interface::msg::EndPoints_<ContainerAllocator>;
  _image_end_point_type image_end_point;
  using _pts_key_type =
    std::vector<ros2_interface::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2D_<ContainerAllocator>>>;
  _pts_key_type pts_key;
  using _hd_lane_id_type =
    uint8_t;
  _hd_lane_id_type hd_lane_id;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _lane_quality_type =
    int32_t;
  _lane_quality_type lane_quality;
  using _fused_lane_type_type =
    int32_t;
  _fused_lane_type_type fused_lane_type;
  using _homography_mat_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _homography_mat_type homography_mat;
  using _homography_mat_inv_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _homography_mat_inv_type homography_mat_inv;
  using _lane_coordinate_type_type =
    int32_t;
  _lane_coordinate_type_type lane_coordinate_type;
  using _use_type_type =
    int32_t;
  _use_type_type use_type;
  using _create_time_type =
    ros2_interface::msg::Time_<ContainerAllocator>;
  _create_time_type create_time;

  // setters for named parameter idiom
  Type & set__lane_type(
    const int32_t & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__lane_color(
    const int32_t & _arg)
  {
    this->lane_color = _arg;
    return *this;
  }
  Type & set__pos_type(
    const int32_t & _arg)
  {
    this->pos_type = _arg;
    return *this;
  }
  Type & set__curve_vehicle(
    const ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> & _arg)
  {
    this->curve_vehicle = _arg;
    return *this;
  }
  Type & set__curve_image(
    const ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> & _arg)
  {
    this->curve_image = _arg;
    return *this;
  }
  Type & set__curve_abs(
    const ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> & _arg)
  {
    this->curve_abs = _arg;
    return *this;
  }
  Type & set__pts_vehicle(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->pts_vehicle = _arg;
    return *this;
  }
  Type & set__pts_image(
    const std::vector<ros2_interface::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2D_<ContainerAllocator>>> & _arg)
  {
    this->pts_image = _arg;
    return *this;
  }
  Type & set__pts_abs(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->pts_abs = _arg;
    return *this;
  }
  Type & set__image_end_point(
    const ros2_interface::msg::EndPoints_<ContainerAllocator> & _arg)
  {
    this->image_end_point = _arg;
    return *this;
  }
  Type & set__pts_key(
    const std::vector<ros2_interface::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2D_<ContainerAllocator>>> & _arg)
  {
    this->pts_key = _arg;
    return *this;
  }
  Type & set__hd_lane_id(
    const uint8_t & _arg)
  {
    this->hd_lane_id = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__lane_quality(
    const int32_t & _arg)
  {
    this->lane_quality = _arg;
    return *this;
  }
  Type & set__fused_lane_type(
    const int32_t & _arg)
  {
    this->fused_lane_type = _arg;
    return *this;
  }
  Type & set__homography_mat(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->homography_mat = _arg;
    return *this;
  }
  Type & set__homography_mat_inv(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->homography_mat_inv = _arg;
    return *this;
  }
  Type & set__lane_coordinate_type(
    const int32_t & _arg)
  {
    this->lane_coordinate_type = _arg;
    return *this;
  }
  Type & set__use_type(
    const int32_t & _arg)
  {
    this->use_type = _arg;
    return *this;
  }
  Type & set__create_time(
    const ros2_interface::msg::Time_<ContainerAllocator> & _arg)
  {
    this->create_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::LaneLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::LaneLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__LaneLine
    std::shared_ptr<ros2_interface::msg::LaneLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__LaneLine
    std::shared_ptr<ros2_interface::msg::LaneLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneLine_ & other) const
  {
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->lane_color != other.lane_color) {
      return false;
    }
    if (this->pos_type != other.pos_type) {
      return false;
    }
    if (this->curve_vehicle != other.curve_vehicle) {
      return false;
    }
    if (this->curve_image != other.curve_image) {
      return false;
    }
    if (this->curve_abs != other.curve_abs) {
      return false;
    }
    if (this->pts_vehicle != other.pts_vehicle) {
      return false;
    }
    if (this->pts_image != other.pts_image) {
      return false;
    }
    if (this->pts_abs != other.pts_abs) {
      return false;
    }
    if (this->image_end_point != other.image_end_point) {
      return false;
    }
    if (this->pts_key != other.pts_key) {
      return false;
    }
    if (this->hd_lane_id != other.hd_lane_id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->lane_quality != other.lane_quality) {
      return false;
    }
    if (this->fused_lane_type != other.fused_lane_type) {
      return false;
    }
    if (this->homography_mat != other.homography_mat) {
      return false;
    }
    if (this->homography_mat_inv != other.homography_mat_inv) {
      return false;
    }
    if (this->lane_coordinate_type != other.lane_coordinate_type) {
      return false;
    }
    if (this->use_type != other.use_type) {
      return false;
    }
    if (this->create_time != other.create_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneLine_

// alias to use template instance with default allocator
using LaneLine =
  ros2_interface::msg::LaneLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__STRUCT_HPP_
