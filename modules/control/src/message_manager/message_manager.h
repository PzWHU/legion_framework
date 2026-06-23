/**
 * @file    message_manager.h
 * @author  zdhy
 * @date    2022-05-06
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include "modules/common/interface/faults.hpp"
#include "modules/common/interface/events.hpp"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/location.hpp"
#include "modules/common/interface/planning_cmd.hpp"
#include "modules/common/interface/adc_trajectory.hpp"
#include "modules/common/interface/control_command.hpp"
#include "modules/common/interface/control_analysis.hpp"
#include "modules/common/interface/obu_cmd_msg.hpp"

/**
 * @namespace legion::control
 * @brief legion::control
 */

namespace legion {
namespace control {
using namespace legion::common;
template <typename T> class MessageManager {
public:
  MessageManager() = default;
  virtual ~MessageManager() = default;

  virtual void Init(T* t) = 0;
  virtual void PublishControlCommand(legion::interface::ControlCommand msg) = 0;
  virtual void
  PublishControlAnalysis(legion::interface::ControlAnalysis msg) = 0;
  virtual void PublishFaults(legion::interface::Faults msg) = 0;
  virtual void PublishEvents(legion::interface::Events msg) = 0;
  virtual bool Activate() = 0;
  virtual bool DeActivate() = 0;
};
} // namespace control
} // namespace legion
