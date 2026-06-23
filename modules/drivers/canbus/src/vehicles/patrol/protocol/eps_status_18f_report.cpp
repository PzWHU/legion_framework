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

#include "eps_status_18f_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Epsstatus18freport::Epsstatus18freport() {}
const int32_t Epsstatus18freport::ID = 0x18F;

void Epsstatus18freport::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->eps_status_18f_report_.eps_work_mode_= eps_work_mode(bytes, length);
  chassis->eps_status_18f_report_.eps_calibration_status_= eps_calibration_status(bytes, length);
  chassis->eps_status_18f_report_.eps_fault_= eps_fault(bytes, length);
  chassis->eps_status_18f_report_.eps_motor_current_= eps_motor_current(bytes, length);
  chassis->eps_status_18f_report_.eps_temperature_= eps_temperature(bytes, length);
  chassis->eps_status_18f_report_.eps_strangle_act_= eps_strangle_act(bytes, length);
}

// config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'eps_work_mode', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Epsstatus18freport::eps_work_mode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'eps_calibration_status', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Epsstatus18freport::eps_calibration_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(2, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'eps_fault', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Epsstatus18freport::eps_fault(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(1, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 31, 'description': '(mA)', 'is_signed_var': True, 'len': 16, 'name': 'eps_motor_current', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[-32768|32767]', 'physical_unit': 'mA', 'precision': 1.0, 'type': 'long long'}
long long Epsstatus18freport::eps_motor_current(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 4);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  x <<= 48;
  x >>= 48;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 55, 'is_signed_var': True, 'len': 8, 'name': 'eps_temperature', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[-128|127]', 'physical_unit': 'degree', 'precision': 1.0, 'type': 'long long'}
long long Epsstatus18freport::eps_temperature(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(0, 8);

  x <<= 56;
  x >>= 56;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 15, 'is_signed_var': True, 'len': 16, 'name': 'eps_strangle_act', 'offset': 0.0, 'order': 'motorola', 'physical_range': '[-720|720]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Epsstatus18freport::eps_strangle_act(const std::uint8_t* bytes, int32_t length) const {
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
