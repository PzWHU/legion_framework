/**
 * @file    parking_roi.hpp
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
#include "modules/common/interface/point_2d_list.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class ParkingRoi {
 public:
  ParkingRoi() {
    obstacles_vec_mutex_ = std::make_shared<std::mutex>();

    clear_obstacles_vec();
  }
  ~ParkingRoi() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_obstacles_vec(
      std::vector<legion::interface::Point2dList>* obstacles_vec) {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    obstacles_vec_.assign(obstacles_vec->begin(), obstacles_vec->end());
  }

  inline void set_obstacles_vec(
      const std::vector<legion::interface::Point2dList>& obstacles_vec) {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    obstacles_vec_ = obstacles_vec;
  }

  inline void set_obstacles_vec(const uint32_t index,
                                legion::interface::Point2dList& obstacles_vec) {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    obstacles_vec_[index] = obstacles_vec;
  }

  inline void add_obstacles_vec(
      const legion::interface::Point2dList& obstacles_vec) {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    obstacles_vec_.emplace_back(obstacles_vec);
  }

  inline const legion::interface::Point2dList& obstacles_vec(
      uint32_t index) const {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    return obstacles_vec_[index];
  }

  inline std::vector<legion::interface::Point2dList>* mutable_obstacles_vec() {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    return &obstacles_vec_;
  }

  inline void obstacles_vec(
      std::vector<legion::interface::Point2dList>& obstacles_vec) const {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    obstacles_vec.assign(obstacles_vec_.begin(), obstacles_vec_.end());
  }

  inline const std::vector<legion::interface::Point2dList>& obstacles_vec()
      const {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    return obstacles_vec_;
  }

  inline uint32_t obstacles_vec_size() const {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    return obstacles_vec_.size();
  }

  inline void clear_obstacles_vec() {
    std::lock_guard<std::mutex> lock(*obstacles_vec_mutex_);
    obstacles_vec_.clear();
    obstacles_vec_.shrink_to_fit();
  }

  inline bool has_obstacles_vec() { return (obstacles_vec_size() != 0); }

  void operator=(const ParkingRoi& parking_roi) { CopyFrom(parking_roi); }

  void CopyFrom(const ParkingRoi& parking_roi) {
    header_ = parking_roi.header();
    obstacles_vec_ = parking_roi.obstacles_vec();
  }

 protected:
  std::shared_ptr<std::mutex> obstacles_vec_mutex_;
  //消息头
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //泊车可行驶区域可视化
  std::vector<legion::interface::Point2dList> obstacles_vec_;
};
}  // namespace interface
}  // namespace legion
