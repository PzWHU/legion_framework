/**
 * @file    traffic_events.hpp
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
#include "modules/common/interface/junction_info.hpp"
#include "modules/common/interface/limit_speed_info.hpp"
#include "modules/common/interface/route_fusion_info.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class TrafficEvents {
 public:
  TrafficEvents() = default;
  ~TrafficEvents() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_route_fusion_info(
      const legion::interface::RouteFusionInfo& route_fusion_info) {
    route_fusion_info_ = route_fusion_info;
    route_fusion_info_ptr_ = &route_fusion_info_;
  }

  inline const legion::interface::RouteFusionInfo& route_fusion_info() const {
    return route_fusion_info_;
  }

  inline legion::interface::RouteFusionInfo* mutable_route_fusion_info() {
    return &route_fusion_info_;
  }

  inline bool has_route_fusion_info() {
    return (route_fusion_info_ptr_ != nullptr);
  }

  inline void set_junction_info(
      const legion::interface::JunctionInfo& junction_info) {
    junction_info_ = junction_info;
    junction_info_ptr_ = &junction_info_;
  }

  inline const legion::interface::JunctionInfo& junction_info() const {
    return junction_info_;
  }

  inline legion::interface::JunctionInfo* mutable_junction_info() {
    return &junction_info_;
  }

  inline bool has_junction_info() { return (junction_info_ptr_ != nullptr); }

  inline void set_limit_speed_info(
      const legion::interface::LimitSpeedInfo& limit_speed_info) {
    limit_speed_info_ = limit_speed_info;
    limit_speed_info_ptr_ = &limit_speed_info_;
  }

  inline const legion::interface::LimitSpeedInfo& limit_speed_info() const {
    return limit_speed_info_;
  }

  inline legion::interface::LimitSpeedInfo* mutable_limit_speed_info() {
    return &limit_speed_info_;
  }

  inline bool has_limit_speed_info() {
    return (limit_speed_info_ptr_ != nullptr);
  }

  void operator=(const TrafficEvents& traffic_events) {
    CopyFrom(traffic_events);
  }

  void CopyFrom(const TrafficEvents& traffic_events) {
    header_ = traffic_events.header();
    route_fusion_info_ = traffic_events.route_fusion_info();
    junction_info_ = traffic_events.junction_info();
    limit_speed_info_ = traffic_events.limit_speed_info();
  }

 protected:
  // timestamp is included in header
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //地图融合信息
  legion::interface::RouteFusionInfo route_fusion_info_;
  legion::interface::RouteFusionInfo* route_fusion_info_ptr_ = nullptr;
  //路口信息
  legion::interface::JunctionInfo junction_info_;
  legion::interface::JunctionInfo* junction_info_ptr_ = nullptr;
  //限速消息
  legion::interface::LimitSpeedInfo limit_speed_info_;
  legion::interface::LimitSpeedInfo* limit_speed_info_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion
