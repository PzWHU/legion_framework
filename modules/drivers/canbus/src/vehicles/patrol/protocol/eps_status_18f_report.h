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

class Epsstatus18freport : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Epsstatus18freport();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 15, 'is_signed_var': True, 'len': 16, 'name': 'EPS_StrAngle_Act', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[-720|720]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long eps_strangle_act(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 55, 'is_signed_var': True, 'len': 8, 'name': 'EPS_Temperature', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[-128|127]', 'physical_unit': 'degree', 'precision': 1.0, 'type': 'long long'}
  long long eps_temperature(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 31, 'description': '(mA)', 'is_signed_var': True, 'len': 16, 'name': 'EPS_Motor_Current', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[-32768|32767]', 'physical_unit': 'mA', 'precision': 1.0, 'type': 'long long'}
  long long eps_motor_current(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'EPS_Fault', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool eps_fault(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'EPS_Calibration_Status', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool eps_calibration_status(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'EPS_Work_Mode', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool eps_work_mode(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion


