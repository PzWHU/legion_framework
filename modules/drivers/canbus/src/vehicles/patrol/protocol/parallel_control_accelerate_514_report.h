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


#include "canbus/can_comm/protocol_data.h"
#include "../../chassis_detail/chassis_detail.h"

namespace legion {
namespace drivers {
namespace patrol {

class Parallelcontrolaccelerate514report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Parallelcontrolaccelerate514report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'Parallel_Accelerate_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long parallel_accelerate_msgcntr(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 32, 'description': 'Parallel driving -5~5m/ss acceleration request', 'is_signed_var': False, 'len': 8, 'name': 'Parallel_Acc_De', 'offset': -5.0, 'order': 'intel', 'physical_range': '[-5|5]', 'physical_unit': 'm/ss', 'precision': 0.1, 'type': 'double'}
  double parallel_acc_de(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 48, 'description': 'speedCtl(km/h)', 'is_signed_var': False, 'len': 16, 'name': 'Parallel_driving_Speed_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|20]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
  double parallel_driving_speed_control(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 40, 'description': 'throttleCtl(0~100%)', 'is_signed_var': False, 'len': 8, 'name': 'Parallel_driving_Torque_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
  long long parallel_driving_torque_control(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 24, 'description': '0:P,1:D,2:N,3:R', 'enum': {0: 'PARALLEL_ACCELERATE_GEAR_P', 1: 'PARALLEL_ACCELERATE_GEAR_D', 2: 'PARALLEL_ACCELERATE_GEAR_N', 3: 'PARALLEL_ACCELERATE_GEAR_R'}, 'is_signed_var': False, 'len': 8, 'name': 'Parallel_Accelerate_Gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_accelerate_514_report::Parallel_accelerate_gearType parallel_accelerate_gear(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'description': '0: torque control, 1:speed control, 2 acc control', 'enum': {0: 'PARALLEL_ACCELERATE_WORK_MODE_TORQUE_CONTROL', 1: 'PARALLEL_ACCELERATE_WORK_MODE_SPEED_CONTROL', 2: 'PARALLEL_ACCELERATE_WORK_MODE_ACC_CONTROL'}, 'is_signed_var': False, 'len': 8, 'name': 'Parallel_Accelerate_Work_Mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_accelerate_514_report::Parallel_accelerate_work_modeType parallel_accelerate_work_mode(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'PARALLEL_ACCELERATE_VALID_INVALID', 1: 'PARALLEL_ACCELERATE_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'Parallel_Accelerate_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_accelerate_514_report::Parallel_accelerate_validType parallel_accelerate_valid(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion


