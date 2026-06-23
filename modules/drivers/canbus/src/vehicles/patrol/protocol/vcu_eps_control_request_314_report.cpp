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

#include "vcu_eps_control_request_314_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Vcuepscontrolrequest314report::Vcuepscontrolrequest314report() {}
const int32_t Vcuepscontrolrequest314report::ID = 0x314;

void Vcuepscontrolrequest314report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->vcu_eps_control_request_314_report_.vcu_eps_calibration_req_= vcu_eps_calibration_req(bytes, length);
  chassis->vcu_eps_control_request_314_report_.vcu_eps_ctrlenable_= vcu_eps_ctrlenable(bytes, length);
  chassis->vcu_eps_control_request_314_report_.vcu_eps_strangle_req_= vcu_eps_strangle_req(bytes, length);
}

// config detail: {'bit': 2, 'description': 'Calibrate the control bit, 0 is invalid, 1 sets the current position to the median', 'is_signed_var': False, 'len': 1, 'name': 'vcu_eps_calibration_req', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuepscontrolrequest314report::vcu_eps_calibration_req(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(2, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 0, 'description': 'EPS enabled,1on,0off', 'is_signed_var': False, 'len': 1, 'name': 'vcu_eps_ctrlenable', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuepscontrolrequest314report::vcu_eps_ctrlenable(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 15, 'description': 'steering angle', 'is_signed_var': True, 'len': 16, 'name': 'vcu_eps_strangle_req', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[-720|720]', 'physical_unit': 'deg', 'precision': 1.0, 'type': 'long long'}
long long Vcuepscontrolrequest314report::vcu_eps_strangle_req(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 2);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  x <<= 48;
  x >>= 48;

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
