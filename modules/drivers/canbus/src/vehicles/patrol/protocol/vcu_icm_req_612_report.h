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

class Vcuicmreq612report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Vcuicmreq612report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 32, 'description': 'ICM Req5', 'is_signed_var': True, 'len': 32, 'name': 'VCU_ICM_Req_msg5', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-2147483648|2147483647]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_icm_req_msg5(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 24, 'description': 'ICM_Req4', 'is_signed_var': False, 'len': 8, 'name': 'VCU_ICM_Req_msg4', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_icm_req_msg4(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'description': 'ICM_Req3', 'is_signed_var': False, 'len': 8, 'name': 'VCU_ICM_Req_msg3', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_icm_req_msg3(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 8, 'description': 'ICM_Req2', 'is_signed_var': False, 'len': 8, 'name': 'VCU_ICM_Req_msg2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_icm_req_msg2(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': 'ICM_Req1', 'is_signed_var': False, 'len': 8, 'name': 'VCU_ICM_Req_msg1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_icm_req_msg1(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion


