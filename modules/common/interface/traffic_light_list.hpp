/**
 * @file    traffic_light_list.hpp
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
#include "modules/common/interface/traffic_light.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class TrafficLightList {
 public:
  TrafficLightList() {
    traffic_light_mutex_ = std::make_shared<std::mutex>();

    clear_traffic_light();
    source_ = 0;
    camera_status_ = 0;
    is_valid_ = false;
  }
  ~TrafficLightList() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_traffic_light(
      std::vector<legion::interface::TrafficLight>* traffic_light) {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    traffic_light_.assign(traffic_light->begin(), traffic_light->end());
  }

  inline void set_traffic_light(
      const std::vector<legion::interface::TrafficLight>& traffic_light) {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    traffic_light_ = traffic_light;
  }

  inline void set_traffic_light(
      const uint32_t index, legion::interface::TrafficLight& traffic_light) {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    traffic_light_[index] = traffic_light;
  }

  inline void add_traffic_light(
      const legion::interface::TrafficLight& traffic_light) {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    traffic_light_.emplace_back(traffic_light);
  }

  inline const legion::interface::TrafficLight& traffic_light(
      uint32_t index) const {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    return traffic_light_[index];
  }

  inline std::vector<legion::interface::TrafficLight>* mutable_traffic_light() {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    return &traffic_light_;
  }

  inline void traffic_light(
      std::vector<legion::interface::TrafficLight>& traffic_light) const {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    traffic_light.assign(traffic_light_.begin(), traffic_light_.end());
  }

  inline const std::vector<legion::interface::TrafficLight>& traffic_light()
      const {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    return traffic_light_;
  }

  inline uint32_t traffic_light_size() const {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    return traffic_light_.size();
  }

  inline void clear_traffic_light() {
    std::lock_guard<std::mutex> lock(*traffic_light_mutex_);
    traffic_light_.clear();
    traffic_light_.shrink_to_fit();
  }

  inline bool has_traffic_light() { return (traffic_light_size() != 0); }

  inline void set_source(const uint8_t& source) {
    source_ = source;
    source_ptr_ = &source_;
  }

  inline const uint8_t& source() const { return source_; }

  inline uint8_t* mutable_source() { return &source_; }

  inline bool has_source() { return (source_ptr_ != nullptr); }

  inline void set_camera_status(const uint8_t& camera_status) {
    camera_status_ = camera_status;
    camera_status_ptr_ = &camera_status_;
  }

  inline const uint8_t& camera_status() const { return camera_status_; }

  inline uint8_t* mutable_camera_status() { return &camera_status_; }

  inline bool has_camera_status() { return (camera_status_ptr_ != nullptr); }

  inline void set_is_valid(const bool& is_valid) {
    is_valid_ = is_valid;
    is_valid_ptr_ = &is_valid_;
  }

  inline const bool& is_valid() const { return is_valid_; }

  inline bool* mutable_is_valid() { return &is_valid_; }

  inline bool has_is_valid() { return (is_valid_ptr_ != nullptr); }

  void operator=(const TrafficLightList& traffic_light_list) {
    CopyFrom(traffic_light_list);
  }

  void CopyFrom(const TrafficLightList& traffic_light_list) {
    header_ = traffic_light_list.header();
    traffic_light_ = traffic_light_list.traffic_light();
    source_ = traffic_light_list.source();
    camera_status_ = traffic_light_list.camera_status();
    is_valid_ = traffic_light_list.is_valid();
  }

 protected:
  std::shared_ptr<std::mutex> traffic_light_mutex_;
  //消息头
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //检出的交通灯数组
  std::vector<legion::interface::TrafficLight> traffic_light_;
  //数据来源：摄像头=0；V2X=1
  uint8_t source_;
  uint8_t* source_ptr_ = nullptr;
  //传感器状态：NORMAL=0；ABNORMAL=1；
  uint8_t camera_status_;
  uint8_t* camera_status_ptr_ = nullptr;
  //数据是否合法
  bool is_valid_;
  bool* is_valid_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion
