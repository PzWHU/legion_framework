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

#pragma once


#include "canbus/can_comm/protocol_data.h"
#include "../../chassis_detail/chassis_detail.h"

namespace legion {
namespace drivers {
namespace patrol {

class Dbsstatus2143report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Dbsstatus2143report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 56, 'description': 'Checksum', 'is_signed_var': False, 'len': 8, 'name': 'DBS_CheckSum', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long dbs_checksum(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'DBS_RollingCounter', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long dbs_rollingcounter(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 24, 'name': 'DBS_WaringCode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|16777215]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long dbs_waringcode(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': 'fault type', 'is_signed_var': False, 'len': 24, 'name': 'DBS_FaultCode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|16777215]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long dbs_faultcode(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion


