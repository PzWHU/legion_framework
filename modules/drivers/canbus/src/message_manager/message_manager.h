/**
 * @file    message_manager.h
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include "modules/common/interface/faults.hpp"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/vehicle.hpp"
#include "modules/common/interface/wheel_info.hpp"
#include "modules/common/interface/vehicle_task.hpp"
#include "modules/common/interface/control_command.hpp"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion {
namespace drivers {
template <typename T>
class MessageManager {
 public:
  MessageManager() = default;
  virtual ~MessageManager() = default;

  virtual void Init(T* t) = 0;
  virtual void PublishWheelInfo(legion::interface::WheelInfo msg) = 0;
  virtual void PublishChassis(legion::interface::Chassis msg) = 0;
  virtual void PublishVehicle(legion::interface::Vehicle msg) = 0;
  virtual void PublishFaults(legion::interface::Faults msg) = 0;
};
}  // namespace drivers
}  // namespace legion
