/**
 * @file    message_manager.h
 * @author  zdhy
 * @date    2022-05-06
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once
#include "modules/common/enum/enum.h"

#include "modules/common/interface/faults.hpp"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/location.hpp"
#include "modules/common/interface/odometry.hpp"
#include "modules/common/interface/stop_info.hpp"
#include "modules/common/interface/polygon_2d.hpp"
#include "modules/common/interface/obu_cmd_msg.hpp"
#include "modules/common/interface/parking_info.hpp"
#include "modules/common/interface/traffic_events.hpp"
#include "modules/common/interface/routing_request.hpp"
#include "modules/common/interface/routing_response.hpp"
#include "modules/common/interface/global_route_msg.hpp"
#include "modules/common/interface/traffic_light_msg.hpp"
#include "modules/common/interface/guide_info.hpp"
#include "modules/common/interface/lane_list.hpp"
#include "modules/common/interface/navi_info_msg.hpp"
/**
 * @namespace legion::routing
 * @brief legion::routing
 */

namespace legion {
namespace routing {
using namespace legion::common;
template <typename T> class MessageManager {
public:
  MessageManager() = default;
  virtual ~MessageManager() = default;

  virtual void Init(T* t) = 0;
  virtual void PublishRoutingResponse(legion::interface::RoutingResponse msg) = 0;
  virtual void PublishParkingInfo(legion::interface::ParkingInfo msg) = 0;
  virtual void PublishStopInfo(legion::interface::StopInfo msg) = 0;
  virtual void PublishGlobalRouteMsg(legion::interface::GlobalRouteMsg msg) = 0;
  virtual void PublishFaults(legion::interface::Faults msg) = 0;
  virtual void PublishPolygon2D(legion::interface::Polygon2D msg) = 0;
  virtual void PublishTrafficEventsOutput(legion::interface::TrafficEvents msg) = 0;
  virtual void PublishGuideInfo(legion::interface::GuideInfo msg) = 0;
  virtual void PublishLaneList(legion::interface::LaneList msg) = 0;
  virtual void PublishNaviInfoMsg(legion::interface::NaviInfoMsg msg) = 0;
  // virtual void PublishTrafficLightMsgOutput(legion::interface::TrafficLightMsg msg) = 0;

  virtual bool Activate() = 0;
  virtual bool DeActivate() = 0;
};
} // namespace routing
} // namespace legion
