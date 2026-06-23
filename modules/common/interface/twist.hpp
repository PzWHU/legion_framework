/**
 * @file    twist.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <iostream>
#include <stdint.h>

#include "modules/common/interface/header.hpp"
#include "modules/common/interface/point_3d.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class Twist {
 public:
  Twist() = default;
  ~Twist() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_linear(const legion::interface::Point3D& linear) {
    linear_ = linear;
    linear_ptr_ = &linear_;
  }

  inline const legion::interface::Point3D& linear() const { return linear_; }

  inline legion::interface::Point3D* mutable_linear() { return &linear_; }

  inline bool has_linear() { return (linear_ptr_ != nullptr); }

  inline void set_angular(const legion::interface::Point3D& angular) {
    angular_ = angular;
    angular_ptr_ = &angular_;
  }

  inline const legion::interface::Point3D& angular() const { return angular_; }

  inline legion::interface::Point3D* mutable_angular() { return &angular_; }

  inline bool has_angular() { return (angular_ptr_ != nullptr); }

  void operator=(const Twist& twist) { CopyFrom(twist); }

  void CopyFrom(const Twist& twist) {
    header_ = twist.header();
    linear_ = twist.linear();
    angular_ = twist.angular();
  }

 protected:
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //线速度 m/s
  legion::interface::Point3D linear_;
  legion::interface::Point3D* linear_ptr_ = nullptr;
  //角速度 deg/s
  legion::interface::Point3D angular_;
  legion::interface::Point3D* angular_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion
