// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TrafficLightDebug.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cropbox'
// Member 'box'
// Member 'crop_roi'
// Member 'projected_roi'
// Member 'rectified_roi'
// Member 'debug_roi'
#include "ros2_interface/msg/detail/traffic_light_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TrafficLightDebug __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TrafficLightDebug __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLightDebug_
{
  using Type = TrafficLightDebug_<ContainerAllocator>;

  explicit TrafficLightDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cropbox(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal_num = 0l;
      this->valid_pos = 0l;
      this->ts_diff_pos = 0.0;
      this->ts_diff_sys = 0.0;
      this->project_error = 0l;
      this->distance_to_stop_line = 0.0;
      this->camera_id = 0l;
    }
  }

  explicit TrafficLightDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cropbox(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal_num = 0l;
      this->valid_pos = 0l;
      this->ts_diff_pos = 0.0;
      this->ts_diff_sys = 0.0;
      this->project_error = 0l;
      this->distance_to_stop_line = 0.0;
      this->camera_id = 0l;
    }
  }

  // field types and members
  using _cropbox_type =
    ros2_interface::msg::TrafficLightBox_<ContainerAllocator>;
  _cropbox_type cropbox;
  using _box_type =
    std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>>;
  _box_type box;
  using _signal_num_type =
    int32_t;
  _signal_num_type signal_num;
  using _valid_pos_type =
    int32_t;
  _valid_pos_type valid_pos;
  using _ts_diff_pos_type =
    double;
  _ts_diff_pos_type ts_diff_pos;
  using _ts_diff_sys_type =
    double;
  _ts_diff_sys_type ts_diff_sys;
  using _project_error_type =
    int32_t;
  _project_error_type project_error;
  using _distance_to_stop_line_type =
    double;
  _distance_to_stop_line_type distance_to_stop_line;
  using _camera_id_type =
    int32_t;
  _camera_id_type camera_id;
  using _crop_roi_type =
    std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>>;
  _crop_roi_type crop_roi;
  using _projected_roi_type =
    std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>>;
  _projected_roi_type projected_roi;
  using _rectified_roi_type =
    std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>>;
  _rectified_roi_type rectified_roi;
  using _debug_roi_type =
    std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>>;
  _debug_roi_type debug_roi;

  // setters for named parameter idiom
  Type & set__cropbox(
    const ros2_interface::msg::TrafficLightBox_<ContainerAllocator> & _arg)
  {
    this->cropbox = _arg;
    return *this;
  }
  Type & set__box(
    const std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>> & _arg)
  {
    this->box = _arg;
    return *this;
  }
  Type & set__signal_num(
    const int32_t & _arg)
  {
    this->signal_num = _arg;
    return *this;
  }
  Type & set__valid_pos(
    const int32_t & _arg)
  {
    this->valid_pos = _arg;
    return *this;
  }
  Type & set__ts_diff_pos(
    const double & _arg)
  {
    this->ts_diff_pos = _arg;
    return *this;
  }
  Type & set__ts_diff_sys(
    const double & _arg)
  {
    this->ts_diff_sys = _arg;
    return *this;
  }
  Type & set__project_error(
    const int32_t & _arg)
  {
    this->project_error = _arg;
    return *this;
  }
  Type & set__distance_to_stop_line(
    const double & _arg)
  {
    this->distance_to_stop_line = _arg;
    return *this;
  }
  Type & set__camera_id(
    const int32_t & _arg)
  {
    this->camera_id = _arg;
    return *this;
  }
  Type & set__crop_roi(
    const std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>> & _arg)
  {
    this->crop_roi = _arg;
    return *this;
  }
  Type & set__projected_roi(
    const std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>> & _arg)
  {
    this->projected_roi = _arg;
    return *this;
  }
  Type & set__rectified_roi(
    const std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>> & _arg)
  {
    this->rectified_roi = _arg;
    return *this;
  }
  Type & set__debug_roi(
    const std::vector<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLightBox_<ContainerAllocator>>> & _arg)
  {
    this->debug_roi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TrafficLightDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TrafficLightDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TrafficLightDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TrafficLightDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrafficLightDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrafficLightDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrafficLightDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrafficLightDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TrafficLightDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TrafficLightDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TrafficLightDebug
    std::shared_ptr<ros2_interface::msg::TrafficLightDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TrafficLightDebug
    std::shared_ptr<ros2_interface::msg::TrafficLightDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLightDebug_ & other) const
  {
    if (this->cropbox != other.cropbox) {
      return false;
    }
    if (this->box != other.box) {
      return false;
    }
    if (this->signal_num != other.signal_num) {
      return false;
    }
    if (this->valid_pos != other.valid_pos) {
      return false;
    }
    if (this->ts_diff_pos != other.ts_diff_pos) {
      return false;
    }
    if (this->ts_diff_sys != other.ts_diff_sys) {
      return false;
    }
    if (this->project_error != other.project_error) {
      return false;
    }
    if (this->distance_to_stop_line != other.distance_to_stop_line) {
      return false;
    }
    if (this->camera_id != other.camera_id) {
      return false;
    }
    if (this->crop_roi != other.crop_roi) {
      return false;
    }
    if (this->projected_roi != other.projected_roi) {
      return false;
    }
    if (this->rectified_roi != other.rectified_roi) {
      return false;
    }
    if (this->debug_roi != other.debug_roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLightDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLightDebug_

// alias to use template instance with default allocator
using TrafficLightDebug =
  ros2_interface::msg::TrafficLightDebug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__STRUCT_HPP_
