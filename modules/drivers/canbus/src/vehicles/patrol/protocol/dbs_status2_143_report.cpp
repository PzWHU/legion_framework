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

#include "dbs_status2_143_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Dbsstatus2143report::Dbsstatus2143report() {}
const int32_t Dbsstatus2143report::ID = 0x143;

void Dbsstatus2143report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->dbs_status2_143_report_.dbs_faultcode_= dbs_faultcode(bytes, length);
  chassis->dbs_status2_143_report_.dbs_waringcode_= dbs_waringcode(bytes, length);
  chassis->dbs_status2_143_report_.dbs_rollingcounter_= dbs_rollingcounter(bytes, length);
  chassis->dbs_status2_143_report_.dbs_checksum_= dbs_checksum(bytes, length);
}

// config detail: {'bit': 0, 'description': 'fault type', 'is_signed_var': False, 'len': 24, 'name': 'dbs_faultcode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|16777215]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus2143report::dbs_faultcode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 1);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  Byte t2(bytes + 0);
  t = t2.get_byte(0, 8);
  x <<= 8;
  x |= t;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 24, 'is_signed_var': False, 'len': 24, 'name': 'dbs_waringcode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|16777215]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus2143report::dbs_waringcode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 4);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  Byte t2(bytes + 3);
  t = t2.get_byte(0, 8);
  x <<= 8;
  x |= t;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'dbs_rollingcounter', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus2143report::dbs_rollingcounter(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(0, 4);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 56, 'description': 'Checksum', 'is_signed_var': False, 'len': 8, 'name': 'dbs_checksum', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus2143report::dbs_checksum(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
