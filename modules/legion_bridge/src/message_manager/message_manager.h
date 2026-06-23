/**
 * @file    message_manager.h
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include "modules/common/interface/events.hpp"
#include "modules/common/interface/faults.hpp"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/vehicle.hpp"
#include "modules/common/interface/obu_cmd_msg.hpp"
#include "modules/common/interface/vehicle_task.hpp"
#include "modules/common/interface/control_command.hpp"
#include "modules/common/interface/routing_request.hpp"

/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion {
namespace legion_bridge {
template <typename T>
class MessageManager {
 public:
  MessageManager() = default;
  virtual ~MessageManager() = default;

  virtual void Init(T* t) = 0;
  virtual void PublishRoutingRequest(legion::interface::RoutingRequest msg) = 0;
  virtual void PublishObuCmdMsg(legion::interface::ObuCmdMsg msg) = 0;
  virtual void PublishVehicleTask(legion::interface::VehicleTask msg) = 0;
  virtual void PublishControlCommandOutput(
      legion::interface::ControlCommand msg) = 0;
  virtual void PublishFaults(legion::interface::Faults msg) = 0;
};
}  // namespace legion_bridge
}  // namespace legion
