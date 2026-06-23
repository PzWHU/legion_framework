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

#include "parallel_control_flag_511_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Parallelcontrolflag511report::Parallelcontrolflag511report() {}
const int32_t Parallelcontrolflag511report::ID = 0x511;

void Parallelcontrolflag511report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->parallel_control_flag_511_report_.parallel_control_request_flag_= parallel_control_request_flag(bytes, length);
  chassis->parallel_control_flag_511_report_.parallel_flag_msgcntr_= parallel_flag_msgcntr(bytes, length);
}

// config detail: {'bit': 0, 'description': '0:invalid,1:valid.', 'enum': {0: 'PARALLEL_CONTROL_REQUEST_FLAG_INVALUE', 1: 'PARALLEL_CONTROL_REQUEST_FLAG_VALUE'}, 'is_signed_var': False, 'len': 4, 'name': 'parallel_control_request_flag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
Parallel_control_flag_511_report::Parallel_control_request_flagType Parallelcontrolflag511report::parallel_control_request_flag(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 4);

  Parallel_control_flag_511_report::Parallel_control_request_flagType ret =  static_cast<Parallel_control_flag_511_report::Parallel_control_request_flagType>(x);
  return ret;
}

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'parallel_flag_msgcntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Parallelcontrolflag511report::parallel_flag_msgcntr(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(4, 4);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
