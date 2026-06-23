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

class Remotet10controlio10areport : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Remotet10controlio10areport();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'Remote_F_Horn', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long remote_f_horn(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 8, 'name': 'Remote_D_HeadLight', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long remote_d_headlight(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'Remote_B_Motor_Holding_Brake', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long remote_b_motor_holding_brake(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'Remote_A_Mode_Switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long remote_a_mode_switch(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'Remote_C_Speed_Torque', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long remote_c_speed_torque(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'Remote_E_Gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long remote_e_gear(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion


