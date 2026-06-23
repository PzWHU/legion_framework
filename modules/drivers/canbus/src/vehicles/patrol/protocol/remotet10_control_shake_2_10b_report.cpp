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

#include "remotet10_control_shake_2_10b_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Remotet10controlshake210breport::Remotet10controlshake210breport() {}
const int32_t Remotet10controlshake210breport::ID = 0x10B;

void Remotet10controlshake210breport::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->remotet10_control_shake_2_10b_report_.remote_x2_lateral_control_= remote_x2_lateral_control(bytes, length);
  chassis->remotet10_control_shake_2_10b_report_.remote_y1_longitudinal_control_= remote_y1_longitudinal_control(bytes, length);
}

// config detail: {'bit': 0, 'is_signed_var': True, 'len': 16, 'name': 'remote_x2_lateral_control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-450|450]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Remotet10controlshake210breport::remote_x2_lateral_control(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 0);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  x <<= 48;
  x >>= 48;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 32, 'is_signed_var': True, 'len': 16, 'name': 'remote_y1_longitudinal_control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-450|450]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Remotet10controlshake210breport::remote_y1_longitudinal_control(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
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
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
