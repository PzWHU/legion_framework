/**
 * @file    radar_obstacle_list.hpp
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
#include "modules/common/interface/radar_obstacle.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class RadarObstacleList {
 public:
  RadarObstacleList() {
    radar_obstacle_mutex_ = std::make_shared<std::mutex>();

    clear_radar_obstacle();
  }
  ~RadarObstacleList() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_radar_obstacle(
      std::vector<legion::interface::RadarObstacle>* radar_obstacle) {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    radar_obstacle_.assign(radar_obstacle->begin(), radar_obstacle->end());
  }

  inline void set_radar_obstacle(
      const std::vector<legion::interface::RadarObstacle>& radar_obstacle) {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    radar_obstacle_ = radar_obstacle;
  }

  inline void set_radar_obstacle(
      const uint32_t index, legion::interface::RadarObstacle& radar_obstacle) {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    radar_obstacle_[index] = radar_obstacle;
  }

  inline void add_radar_obstacle(
      const legion::interface::RadarObstacle& radar_obstacle) {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    radar_obstacle_.emplace_back(radar_obstacle);
  }

  inline const legion::interface::RadarObstacle& radar_obstacle(
      uint32_t index) const {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    return radar_obstacle_[index];
  }

  inline std::vector<legion::interface::RadarObstacle>*
  mutable_radar_obstacle() {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    return &radar_obstacle_;
  }

  inline void radar_obstacle(
      std::vector<legion::interface::RadarObstacle>& radar_obstacle) const {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    radar_obstacle.assign(radar_obstacle_.begin(), radar_obstacle_.end());
  }

  inline const std::vector<legion::interface::RadarObstacle>& radar_obstacle()
      const {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    return radar_obstacle_;
  }

  inline uint32_t radar_obstacle_size() const {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    return radar_obstacle_.size();
  }

  inline void clear_radar_obstacle() {
    std::lock_guard<std::mutex> lock(*radar_obstacle_mutex_);
    radar_obstacle_.clear();
    radar_obstacle_.shrink_to_fit();
  }

  inline bool has_radar_obstacle() { return (radar_obstacle_size() != 0); }

  void operator=(const RadarObstacleList& radar_obstacle_list) {
    CopyFrom(radar_obstacle_list);
  }

  void CopyFrom(const RadarObstacleList& radar_obstacle_list) {
    header_ = radar_obstacle_list.header();
    radar_obstacle_ = radar_obstacle_list.radar_obstacle();
  }

 protected:
  std::shared_ptr<std::mutex> radar_obstacle_mutex_;
  //消息头
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //毫米波雷达障碍物数组
  std::vector<legion::interface::RadarObstacle> radar_obstacle_;
};
}  // namespace interface
}  // namespace legion
