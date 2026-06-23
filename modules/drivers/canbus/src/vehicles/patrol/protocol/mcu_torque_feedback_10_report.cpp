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

#include "mcu_torque_feedback_10_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Mcutorquefeedback10report::Mcutorquefeedback10report() {}
const int32_t Mcutorquefeedback10report::ID = 0x10;

void Mcutorquefeedback10report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->mcu_torque_feedback_10_report_.mcu_shift_= mcu_shift(bytes, length);
  chassis->mcu_torque_feedback_10_report_.mcu_speed_= mcu_speed(bytes, length);
  chassis->mcu_torque_feedback_10_report_.mcu_torque_= mcu_torque(bytes, length);
  chassis->mcu_torque_feedback_10_report_.mcu_current_= mcu_current(bytes, length);
  chassis->mcu_torque_feedback_10_report_.mcu_motortemp_= mcu_motortemp(bytes, length);
  chassis->mcu_torque_feedback_10_report_.mcu_errorcode_= mcu_errorcode(bytes, length);
}

// config detail: {'bit': 0, 'is_signed_var': False, 'len': 2, 'name': 'mcu_shift', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Mcutorquefeedback10report::mcu_shift(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 2);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 2, 'is_signed_var': False, 'len': 18, 'name': 'mcu_speed', 'offset': -100000.0, 'order': 'intel', 'physical_range': '[-100000|162143]', 'physical_unit': 'rpm', 'precision': 1.0, 'type': 'long long'}
long long Mcutorquefeedback10report::mcu_speed(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 4);

  Byte t1(bytes + 1);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  Byte t2(bytes + 0);
  t = t2.get_byte(2, 6);
  x <<= 6;
  x |= t;

  long long ret = x + -100000.000000;
  return ret;
}

// config detail: {'bit': 20, 'is_signed_var': False, 'len': 16, 'name': 'mcu_torque', 'offset': -1000.0, 'order': 'intel', 'physical_range': '[-1000|5553.5]', 'physical_unit': 'Nm', 'precision': 0.1, 'type': 'double'}
double Mcutorquefeedback10report::mcu_torque(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int64_t x = t0.get_byte(0, 4);

  Byte t1(bytes + 3);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  Byte t2(bytes + 2);
  t = t2.get_byte(4, 4);
  x <<= 4;
  x |= t;

  double ret = x * 0.100000 + -1000.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 36, 'is_signed_var': False, 'len': 12, 'name': 'mcu_current', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1000]', 'physical_unit': 'A', 'precision': 1.0, 'type': 'long long'}
long long Mcutorquefeedback10report::mcu_current(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 4);
  int64_t t = t1.get_byte(4, 4);
  x <<= 4;
  x |= t;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 48, 'is_signed_var': False, 'len': 8, 'name': 'mcu_motortemp', 'offset': -50.0, 'order': 'intel', 'physical_range': '[-50|205]', 'physical_unit': 'degree', 'precision': 1.0, 'type': 'long long'}
long long Mcutorquefeedback10report::mcu_motortemp(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x + -50.000000;
  return ret;
}

// config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'mcu_errorcode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Mcutorquefeedback10report::mcu_errorcode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
