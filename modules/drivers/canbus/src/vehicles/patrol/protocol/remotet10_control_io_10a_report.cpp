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

#include "remotet10_control_io_10a_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Remotet10controlio10areport::Remotet10controlio10areport() {}
const int32_t Remotet10controlio10areport::ID = 0x10A;

void Remotet10controlio10areport::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->remotet10_control_io_10a_report_.remote_e_gear_= remote_e_gear(bytes, length);
  chassis->remotet10_control_io_10a_report_.remote_c_speed_torque_= remote_c_speed_torque(bytes, length);
  chassis->remotet10_control_io_10a_report_.remote_a_mode_switch_= remote_a_mode_switch(bytes, length);
  chassis->remotet10_control_io_10a_report_.remote_b_motor_holding_brake_= remote_b_motor_holding_brake(bytes, length);
  chassis->remotet10_control_io_10a_report_.remote_d_headlight_= remote_d_headlight(bytes, length);
  chassis->remotet10_control_io_10a_report_.remote_f_horn_= remote_f_horn(bytes, length);
}

// config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'remote_e_gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Remotet10controlio10areport::remote_e_gear(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'remote_c_speed_torque', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Remotet10controlio10areport::remote_c_speed_torque(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'remote_a_mode_switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Remotet10controlio10areport::remote_a_mode_switch(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'remote_b_motor_holding_brake', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Remotet10controlio10areport::remote_b_motor_holding_brake(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 40, 'is_signed_var': False, 'len': 8, 'name': 'remote_d_headlight', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Remotet10controlio10areport::remote_d_headlight(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'remote_f_horn', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Remotet10controlio10areport::remote_f_horn(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
