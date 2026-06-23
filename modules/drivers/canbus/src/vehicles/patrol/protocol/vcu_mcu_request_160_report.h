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

class Vcumcurequest160report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Vcumcurequest160report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 3, 'is_signed_var': False, 'len': 1, 'name': 'MCU_Clamping_Brake_Req', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool mcu_clamping_brake_req(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 16, 'name': 'MCU_Speed_Req', 'offset': -7000.0, 'order': 'intel', 'physical_range': '[-7000|7000]', 'physical_unit': 'RPM', 'precision': 1.0, 'type': 'long long'}
  long long mcu_speed_req(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 16, 'name': 'MCU_Torque_Req', 'offset': -1000.0, 'order': 'intel', 'physical_range': '[-1000|1000]', 'physical_unit': 'Nm', 'precision': 0.1, 'type': 'double'}
  double mcu_torque_req(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 2, 'name': 'MCU_DriveMode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long mcu_drivemode(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'MCU_VCU_Motor_Request_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool mcu_vcu_motor_request_valid(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion


