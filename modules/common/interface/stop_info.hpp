/**
 * @file    stop_info.hpp
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
#include "modules/common/interface/stop_point.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class StopInfo {
 public:
  StopInfo() {
    stop_points_mutex_ = std::make_shared<std::mutex>();

    clear_stop_points();
  }
  ~StopInfo() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_stop_points(
      std::vector<legion::interface::StopPoint>* stop_points) {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    stop_points_.assign(stop_points->begin(), stop_points->end());
  }

  inline void set_stop_points(
      const std::vector<legion::interface::StopPoint>& stop_points) {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    stop_points_ = stop_points;
  }

  inline void set_stop_points(const uint32_t index,
                              legion::interface::StopPoint& stop_points) {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    stop_points_[index] = stop_points;
  }

  inline void add_stop_points(const legion::interface::StopPoint& stop_points) {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    stop_points_.emplace_back(stop_points);
  }

  inline const legion::interface::StopPoint& stop_points(uint32_t index) const {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    return stop_points_[index];
  }

  inline std::vector<legion::interface::StopPoint>* mutable_stop_points() {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    return &stop_points_;
  }

  inline void stop_points(
      std::vector<legion::interface::StopPoint>& stop_points) const {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    stop_points.assign(stop_points_.begin(), stop_points_.end());
  }

  inline const std::vector<legion::interface::StopPoint>& stop_points() const {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    return stop_points_;
  }

  inline uint32_t stop_points_size() const {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    return stop_points_.size();
  }

  inline void clear_stop_points() {
    std::lock_guard<std::mutex> lock(*stop_points_mutex_);
    stop_points_.clear();
    stop_points_.shrink_to_fit();
  }

  inline bool has_stop_points() { return (stop_points_size() != 0); }

  void operator=(const StopInfo& stop_info) { CopyFrom(stop_info); }

  void CopyFrom(const StopInfo& stop_info) {
    header_ = stop_info.header();
    stop_points_ = stop_info.stop_points();
  }

 protected:
  std::shared_ptr<std::mutex> stop_points_mutex_;
  // timestamp is included in header
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //停车点列表
  std::vector<legion::interface::StopPoint> stop_points_;
};
}  // namespace interface
}  // namespace legion
