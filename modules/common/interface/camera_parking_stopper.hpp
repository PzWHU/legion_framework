/**
 * @file    camera_parking_stopper.hpp
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
#include "modules/common/interface/b_box_2d.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class CameraParkingStopper {
 public:
  CameraParkingStopper() = default;
  ~CameraParkingStopper() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_bbox2d(const legion::interface::BBox2D& bbox2d) {
    bbox2d_ = bbox2d;
    bbox2d_ptr_ = &bbox2d_;
  }

  inline const legion::interface::BBox2D& bbox2d() const { return bbox2d_; }

  inline legion::interface::BBox2D* mutable_bbox2d() { return &bbox2d_; }

  inline bool has_bbox2d() { return (bbox2d_ptr_ != nullptr); }

  void operator=(const CameraParkingStopper& camera_parking_stopper) {
    CopyFrom(camera_parking_stopper);
  }

  void CopyFrom(const CameraParkingStopper& camera_parking_stopper) {
    header_ = camera_parking_stopper.header();
    bbox2d_ = camera_parking_stopper.bbox2d();
  }

 protected:
  // timestamp is  included in header
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //限位器图像框
  legion::interface::BBox2D bbox2d_;
  legion::interface::BBox2D* bbox2d_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion
