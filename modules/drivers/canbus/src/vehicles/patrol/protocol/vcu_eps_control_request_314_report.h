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

class Vcuepscontrolrequest314report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Vcuepscontrolrequest314report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 15, 'description': 'steering angle', 'is_signed_var': True, 'len': 16, 'name': 'VCU_EPS_StrAngle_Req', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[-720|720]', 'physical_unit': 'deg', 'precision': 1.0, 'type': 'long long'}
  long long vcu_eps_strangle_req(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': 'EPS enabled,1on,0off', 'is_signed_var': False, 'len': 1, 'name': 'VCU_EPS_CtrlEnable', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool vcu_eps_ctrlenable(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 2, 'description': 'Calibrate the control bit, 0 is invalid, 1 sets the current position to the median', 'is_signed_var': False, 'len': 1, 'name': 'VCU_EPS_Calibration_Req', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool vcu_eps_calibration_req(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion


