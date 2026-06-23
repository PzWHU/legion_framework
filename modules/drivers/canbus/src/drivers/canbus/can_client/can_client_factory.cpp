/**
 * @file    can_client_factory.cpp
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2018-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you apollo
 */
#include <iostream>
#include "modules/common/logging/logging.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/can_client_factory.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/socket/socket_can_client_raw.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/mdc_can/mdc_can.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/gateway/socket_can_client_gateway.h"

namespace legion
{
    namespace driver
    {
        namespace drivers
        {
            using namespace legion::common;

            CanClientFactory::CanClientFactory() {}

            void CanClientFactory::RegisterCanClients()
            {
                AINFO << "CanClientFactory::RegisterCanClients";
            #if SOCKET_CAN_ENABLE
                // Register(CANCardParameter::SOCKET_CAN_RAW,
                //          []() -> CanClient* { return new can::SocketCanClientRaw(); });
                Register(CANCardParameter::SOCKET_CAN_GATEWAY,[]() -> CanClient * { return new can::SocketCanClientGateway(); });
            #endif

            #if MDC_CAN_ENABLE
                Register(CANCardParameter::MDC_CAN,[]() -> CanClient* { return new can::MdcCan(); });
            #endif
            }

            std::unique_ptr<CanClient> CanClientFactory::CreateCANClient(const CANCardParameter& parameter)
            {
                auto factory = CreateObject(parameter.can_card_brand_);
                if (!factory)
                {
                    AERROR << "Failed to create CAN client with parameter: ";
                }
                else if (!factory->Init(parameter))
                {
                    AERROR << "Failed to initialize CAN card with parameter: ";
                }
                return factory;
            }

        }  // namespace drivers
    }  // namespace driver
}  // namespace legion
