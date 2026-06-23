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

#include "parallel_control_steering_512_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Parallelcontrolsteering512report::Parallelcontrolsteering512report() {}
const int32_t Parallelcontrolsteering512report::ID = 0x512;

void Parallelcontrolsteering512report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->parallel_control_steering_512_report_.parallel_steering_angle_cmd_= parallel_steering_angle_cmd(bytes, length);
  chassis->parallel_control_steering_512_report_.parallel_steering_valid_= parallel_steering_valid(bytes, length);
  chassis->parallel_control_steering_512_report_.parallel_steering_msgcntr_= parallel_steering_msgcntr(bytes, length);
}

// config detail: {'bit': 32, 'description': '(-30~30)degree', 'is_signed_var': False, 'len': 16, 'name': 'parallel_steering_angle_cmd', 'offset': -30.0, 'order': 'intel', 'physical_range': '[-30|30]', 'physical_unit': 'deg', 'precision': 0.1, 'type': 'double'}
double Parallelcontrolsteering512report::parallel_steering_angle_cmd(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 4);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000 + -30.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 0, 'enum': {0: 'PARALLEL_STEERING_VALID_INVALID', 1: 'PARALLEL_STEERING_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'parallel_steering_valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
Parallel_control_steering_512_report::Parallel_steering_validType Parallelcontrolsteering512report::parallel_steering_valid(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 4);

  Parallel_control_steering_512_report::Parallel_steering_validType ret =  static_cast<Parallel_control_steering_512_report::Parallel_steering_validType>(x);
  return ret;
}

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'parallel_steering_msgcntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Parallelcontrolsteering512report::parallel_steering_msgcntr(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(4, 4);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
