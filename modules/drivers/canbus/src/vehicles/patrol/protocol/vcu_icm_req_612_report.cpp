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

#include "vcu_icm_req_612_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Vcuicmreq612report::Vcuicmreq612report() {}
const int32_t Vcuicmreq612report::ID = 0x612;

void Vcuicmreq612report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->vcu_icm_req_612_report_.vcu_icm_req_msg1_= vcu_icm_req_msg1(bytes, length);
  chassis->vcu_icm_req_612_report_.vcu_icm_req_msg2_= vcu_icm_req_msg2(bytes, length);
  chassis->vcu_icm_req_612_report_.vcu_icm_req_msg3_= vcu_icm_req_msg3(bytes, length);
  chassis->vcu_icm_req_612_report_.vcu_icm_req_msg4_= vcu_icm_req_msg4(bytes, length);
  chassis->vcu_icm_req_612_report_.vcu_icm_req_msg5_= vcu_icm_req_msg5(bytes, length);
}

// config detail: {'bit': 0, 'description': 'ICM_Req1', 'is_signed_var': False, 'len': 8, 'name': 'vcu_icm_req_msg1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuicmreq612report::vcu_icm_req_msg1(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 8, 'description': 'ICM_Req2', 'is_signed_var': False, 'len': 8, 'name': 'vcu_icm_req_msg2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuicmreq612report::vcu_icm_req_msg2(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 16, 'description': 'ICM_Req3', 'is_signed_var': False, 'len': 8, 'name': 'vcu_icm_req_msg3', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuicmreq612report::vcu_icm_req_msg3(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 24, 'description': 'ICM_Req4', 'is_signed_var': False, 'len': 8, 'name': 'vcu_icm_req_msg4', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuicmreq612report::vcu_icm_req_msg4(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 32, 'description': 'ICM Req5', 'is_signed_var': True, 'len': 32, 'name': 'vcu_icm_req_msg5', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-2147483648|2147483647]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuicmreq612report::vcu_icm_req_msg5(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 6);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  Byte t2(bytes + 5);
  t = t2.get_byte(0, 8);
  x <<= 8;
  x |= t;

  Byte t3(bytes + 4);
  t = t3.get_byte(0, 8);
  x <<= 8;
  x |= t;

  x <<= 32;
  x >>= 32;

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion
