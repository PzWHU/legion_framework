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

#include "parallel_control_brake_513_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Parallelcontrolbrake513report::Parallelcontrolbrake513report() {}
const int32_t Parallelcontrolbrake513report::ID = 0x513;

void Parallelcontrolbrake513report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->parallel_control_brake_513_report_.parallel_dbs_valid_= parallel_dbs_valid(bytes, length);
  chassis->parallel_control_brake_513_report_.parallel_brakepressure_cmd_= parallel_brakepressure_cmd(bytes, length);
  chassis->parallel_control_brake_513_report_.parallel_dbs_msgcntr_= parallel_dbs_msgcntr(bytes, length);
}

// config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'PARALLEL_DBS_VALID_INVALID', 1: 'PARALLEL_DBS_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'parallel_dbs_valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'enum'}
Parallel_control_brake_513_report::Parallel_dbs_validType Parallelcontrolbrake513report::parallel_dbs_valid(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 4);

  Parallel_control_brake_513_report::Parallel_dbs_validType ret =  static_cast<Parallel_control_brake_513_report::Parallel_dbs_validType>(x);
  return ret;
}

// config detail: {'bit': 8, 'description': 'brake pedal(0~100%)', 'is_signed_var': False, 'len': 8, 'name': 'parallel_brakepressure_cmd', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
long long Parallelcontrolbrake513report::parallel_brakepressure_cmd(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'parallel_dbs_msgcntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Parallelcontrolbrake513report::parallel_dbs_msgcntr(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(4, 4);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
