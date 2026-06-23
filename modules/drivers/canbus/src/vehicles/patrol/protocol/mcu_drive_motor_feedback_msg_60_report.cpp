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

#include "mcu_drive_motor_feedback_msg_60_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Mcudrivemotorfeedbackmsg60report::Mcudrivemotorfeedbackmsg60report() {}
const int32_t Mcudrivemotorfeedbackmsg60report::ID = 0x60;

void Mcudrivemotorfeedbackmsg60report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->mcu_drive_motor_feedback_msg_60_report_.motor_udc_= motor_udc(bytes, length);
  chassis->mcu_drive_motor_feedback_msg_60_report_.motor_idc_= motor_idc(bytes, length);
  chassis->mcu_drive_motor_feedback_msg_60_report_.motor_controltemp_= motor_controltemp(bytes, length);
  chassis->mcu_drive_motor_feedback_msg_60_report_.mcu_motor_error_grade_= mcu_motor_error_grade(bytes, length);
  chassis->mcu_drive_motor_feedback_msg_60_report_.clamping_brake_status_= clamping_brake_status(bytes, length);
}

// config detail: {'bit': 0, 'is_signed_var': False, 'len': 16, 'name': 'motor_udc', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|6553.5]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
double Mcudrivemotorfeedbackmsg60report::motor_udc(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 0);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 16, 'is_signed_var': False, 'len': 16, 'name': 'motor_idc', 'offset': -1000.0, 'order': 'intel', 'physical_range': '[-1000|5553.5]', 'physical_unit': 'A', 'precision': 0.1, 'type': 'double'}
double Mcudrivemotorfeedbackmsg60report::motor_idc(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 2);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000 + -1000.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'motor_controltemp', 'offset': -50.0, 'order': 'intel', 'physical_range': '[-50|205]', 'physical_unit': 'degree', 'precision': 1.0, 'type': 'long long'}
long long Mcudrivemotorfeedbackmsg60report::motor_controltemp(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x + -50.000000;
  return ret;
}

// config detail: {'bit': 41, 'is_signed_var': False, 'len': 2, 'name': 'mcu_motor_error_grade', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Mcudrivemotorfeedbackmsg60report::mcu_motor_error_grade(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(1, 2);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 47, 'description': 'Locked status:0off,1on', 'is_signed_var': False, 'len': 1, 'name': 'clamping_brake_status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Mcudrivemotorfeedbackmsg60report::clamping_brake_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(7, 1);

  bool ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
