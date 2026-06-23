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

#include "parallel_control_accelerate_514_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Parallelcontrolaccelerate514report::Parallelcontrolaccelerate514report() {}
const int32_t Parallelcontrolaccelerate514report::ID = 0x514;

void Parallelcontrolaccelerate514report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->parallel_control_accelerate_514_report_.parallel_accelerate_valid_= parallel_accelerate_valid(bytes, length);
  chassis->parallel_control_accelerate_514_report_.parallel_accelerate_work_mode_= parallel_accelerate_work_mode(bytes, length);
  chassis->parallel_control_accelerate_514_report_.parallel_accelerate_gear_= parallel_accelerate_gear(bytes, length);
  chassis->parallel_control_accelerate_514_report_.parallel_driving_torque_control_= parallel_driving_torque_control(bytes, length);
  chassis->parallel_control_accelerate_514_report_.parallel_driving_speed_control_= parallel_driving_speed_control(bytes, length);
  chassis->parallel_control_accelerate_514_report_.parallel_acc_de_= parallel_acc_de(bytes, length);
  chassis->parallel_control_accelerate_514_report_.parallel_accelerate_msgcntr_= parallel_accelerate_msgcntr(bytes, length);
}

// config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'PARALLEL_ACCELERATE_VALID_INVALID', 1: 'PARALLEL_ACCELERATE_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'parallel_accelerate_valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'enum'}
Parallel_control_accelerate_514_report::Parallel_accelerate_validType Parallelcontrolaccelerate514report::parallel_accelerate_valid(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 4);

  Parallel_control_accelerate_514_report::Parallel_accelerate_validType ret =  static_cast<Parallel_control_accelerate_514_report::Parallel_accelerate_validType>(x);
  return ret;
}

// config detail: {'bit': 16, 'description': '0: torque control, 1:speed control, 2 acc control', 'enum': {0: 'PARALLEL_ACCELERATE_WORK_MODE_TORQUE_CONTROL', 1: 'PARALLEL_ACCELERATE_WORK_MODE_SPEED_CONTROL', 2: 'PARALLEL_ACCELERATE_WORK_MODE_ACC_CONTROL'}, 'is_signed_var': False, 'len': 8, 'name': 'parallel_accelerate_work_mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'enum'}
Parallel_control_accelerate_514_report::Parallel_accelerate_work_modeType Parallelcontrolaccelerate514report::parallel_accelerate_work_mode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 8);

  Parallel_control_accelerate_514_report::Parallel_accelerate_work_modeType ret =  static_cast<Parallel_control_accelerate_514_report::Parallel_accelerate_work_modeType>(x);
  return ret;
}

// config detail: {'bit': 24, 'description': '0:P,1:D,2:N,3:R', 'enum': {0: 'PARALLEL_ACCELERATE_GEAR_P', 1: 'PARALLEL_ACCELERATE_GEAR_D', 2: 'PARALLEL_ACCELERATE_GEAR_N', 3: 'PARALLEL_ACCELERATE_GEAR_R'}, 'is_signed_var': False, 'len': 8, 'name': 'parallel_accelerate_gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'enum'}
Parallel_control_accelerate_514_report::Parallel_accelerate_gearType Parallelcontrolaccelerate514report::parallel_accelerate_gear(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  Parallel_control_accelerate_514_report::Parallel_accelerate_gearType ret =  static_cast<Parallel_control_accelerate_514_report::Parallel_accelerate_gearType>(x);
  return ret;
}

// config detail: {'bit': 40, 'description': 'throttleCtl(0~100%)', 'is_signed_var': False, 'len': 8, 'name': 'parallel_driving_torque_control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
long long Parallelcontrolaccelerate514report::parallel_driving_torque_control(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 48, 'description': 'speedCtl(km/h)', 'is_signed_var': False, 'len': 16, 'name': 'parallel_driving_speed_control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|20]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
double Parallelcontrolaccelerate514report::parallel_driving_speed_control(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 6);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 32, 'description': 'Parallel driving -5~5m/ss acceleration request', 'is_signed_var': False, 'len': 8, 'name': 'parallel_acc_de', 'offset': -5.0, 'order': 'intel', 'physical_range': '[-5|5]', 'physical_unit': 'm/ss', 'precision': 0.1, 'type': 'double'}
double Parallelcontrolaccelerate514report::parallel_acc_de(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int64_t x = t0.get_byte(0, 8);

  double ret = x * 0.100000 + -5.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'parallel_accelerate_msgcntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Parallelcontrolaccelerate514report::parallel_accelerate_msgcntr(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(4, 4);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
