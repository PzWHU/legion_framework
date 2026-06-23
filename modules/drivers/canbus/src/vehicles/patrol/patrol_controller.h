/******************************************************************************
 * Copyright 2018 The legion Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#pragma once


#include <memory>
#include <thread>

#include "vehicles/vehicle_controller.h"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/vehicle.hpp"
#include "vehicles/vehicle_parameter.h"
#include "modules/common/enum/enum.h"
#include "modules/common/status/status.h"
#include "modules/common/interface/control_command.hpp"

#include "protocol/ad_control_accelerate_504_control.h"
#include "protocol/ad_control_body_506_control.h"
#include "protocol/ad_control_brake_503_control.h"
#include "protocol/ad_control_flag_501_control.h"
#include "protocol/ad_control_steering_502_control.h"

namespace legion {
namespace drivers {
namespace patrol {

class PatrolController final : public VehicleController {
 public:

  explicit PatrolController() {};

  virtual ~PatrolController();

  ::legion::common::Status::ErrorCode Init(const VehicleParameter& params,
                                           CanSender<::legion::drivers::ChassisDetail> *const can_sender,
                                           CanMessageManager<::legion::drivers::ChassisDetail> *const message_manager,
                                           const double max_stop_time_threshold) override;

  bool Start() override;

  /**
   * @brief stop the vehicle controller.
   */
  void Stop() override;

  /**
   * @brief calculate and return the chassis.
   * @returns a copy of chassis. Use copy here to avoid multi-thread issues.
   */
  Chassis chassis() override;

  Vehicle GetVehicle() override;

  void SteerDrivingModeSet(int state) override;

 private:
  // main logical function for operation the car enter or exit the auto driving
    void Emergency() override;
  ::legion::common::Status::ErrorCode EnableAutoMode() override;
  ::legion::common::Status::ErrorCode DisableAutoMode() override;
  ::legion::common::Status::ErrorCode EnableSteeringOnlyMode() override;
  ::legion::common::Status::ErrorCode EnableSpeedOnlyMode() override;
  ::legion::common::Status::ErrorCode EnableTeleopMode() override;

  // NEUTRAL, REVERSE, DRIVE
  void Gear(const ControlCommand &control_command) override;

  void Brake(double acceleration) override;

  void Throttle(const ControlCommand &command) override;

  void Steer(double angle) override;

  // set Electrical Park Brake
  void SetEpbBreak(const ::legion::drivers::ControlCommand& command) override;
  void SetBcmSignal(const ::legion::drivers::ControlCommand& command) override;
  void SetEmergency() override;
  void SetEmergencyDisable() override;
  void ResetProtocol();
  bool CheckChassisError();
  int64_t GetTimeStamp(ECU_TYPE type);

 private:
  void SecurityDogThreadFunc();
  virtual bool CheckResponse(const int32_t flags, bool need_wait);
  void set_chassis_error_mask(const int32_t mask);
  int32_t chassis_error_mask();
  Chassis::ErrorCode chassis_error_code();
  void set_chassis_error_code(const Chassis::ErrorCode& error_code);

 private:
  // control protocol
  Adcontrolaccelerate504control* ad_control_accelerate_504_control_ = nullptr;
  Adcontrolbody506control* ad_control_body_506_control_ = nullptr;
  Adcontrolbrake503control* ad_control_brake_503_control_ = nullptr;
  Adcontrolflag501control* ad_control_flag_501_control_ = nullptr;
  Adcontrolsteering502control* ad_control_steering_502_control_ = nullptr;

  Chassis chassis_;
  Vehicle vehicle_;
  ChassisDetail chassis_detail_;
  std::unique_ptr<std::thread> thread_;
  bool is_chassis_error_ = false;

  std::mutex chassis_error_code_mutex_;
  Chassis::ErrorCode chassis_error_code_ = Chassis::ErrorCode::NO_ERROR;

  std::mutex chassis_mask_mutex_;
  int32_t chassis_error_mask_ = 0;
  bool is_stopped_;
  bool is_stopped_first_hit_;
  int64_t last_time_vehicle_is_stopped_or_not_;

  double max_stop_time_threshold_;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion
