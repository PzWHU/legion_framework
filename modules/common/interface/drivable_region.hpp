/**
 * @file    drivable_region.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <mutex>
#include <vector>
#include <memory>
#include <iostream>
#include <stdint.h>

#include "modules/common/interface/header.hpp"
#include "modules/common/interface/polygon_3d.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class DrivableRegion {
 public:
  DrivableRegion() {
    drivable_region_mutex_ = std::make_shared<std::mutex>();

    clear_drivable_region();
  }
  ~DrivableRegion() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_drivable_region(
      std::vector<legion::interface::Polygon3D>* drivable_region) {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    drivable_region_.assign(drivable_region->begin(), drivable_region->end());
  }

  inline void set_drivable_region(
      const std::vector<legion::interface::Polygon3D>& drivable_region) {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    drivable_region_ = drivable_region;
  }

  inline void set_drivable_region(
      const uint32_t index, legion::interface::Polygon3D& drivable_region) {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    drivable_region_[index] = drivable_region;
  }

  inline void add_drivable_region(
      const legion::interface::Polygon3D& drivable_region) {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    drivable_region_.emplace_back(drivable_region);
  }

  inline const legion::interface::Polygon3D& drivable_region(
      uint32_t index) const {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    return drivable_region_[index];
  }

  inline std::vector<legion::interface::Polygon3D>* mutable_drivable_region() {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    return &drivable_region_;
  }

  inline void drivable_region(
      std::vector<legion::interface::Polygon3D>& drivable_region) const {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    drivable_region.assign(drivable_region_.begin(), drivable_region_.end());
  }

  inline const std::vector<legion::interface::Polygon3D>& drivable_region()
      const {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    return drivable_region_;
  }

  inline uint32_t drivable_region_size() const {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    return drivable_region_.size();
  }

  inline void clear_drivable_region() {
    std::lock_guard<std::mutex> lock(*drivable_region_mutex_);
    drivable_region_.clear();
    drivable_region_.shrink_to_fit();
  }

  inline bool has_drivable_region() { return (drivable_region_size() != 0); }

  void operator=(const DrivableRegion& drivable_region) {
    CopyFrom(drivable_region);
  }

  void CopyFrom(const DrivableRegion& drivable_region) {
    header_ = drivable_region.header();
    drivable_region_ = drivable_region.drivable_region();
  }

 protected:
  std::shared_ptr<std::mutex> drivable_region_mutex_;
  // timestamp is included in header
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //可行驶区域
  std::vector<legion::interface::Polygon3D> drivable_region_;
};
}  // namespace interface
}  // namespace legion
