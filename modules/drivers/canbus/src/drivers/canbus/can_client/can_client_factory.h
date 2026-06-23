/**
 * @file    can_client_factory.h
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you athena
 */
/**
 * @file
 * @brief Defines the CanClientFactory class.
 */

#ifndef DRIVERS_CANBUS_CAN_CLIENT_CAN_CLIENT_FACTORY_H_
#define DRIVERS_CANBUS_CAN_CLIENT_CAN_CLIENT_FACTORY_H_

#include <memory>
#include <unordered_map>

//#include "modules/common/macro.h"
#include "modules/common/util/factory.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/can_client.h"
// #include "modules/drivers/canbus/src/common/factory.h"
#include "modules/drivers/canbus/src/drivers/canbus/common/can_card_parameter.h"

/**
 * @namespace legion::driver::drivers
 * @brief legion::driver::drivers
 */
namespace legion
{
namespace driver
{
namespace drivers
{
using namespace legion::common::util;
using namespace legion::driver::drivers;
/**
 * @class CanClientFactory
 * @brief CanClientFactory inherites legion::common::util::Facotory.
 */
class CanClientFactory: public Factory <CANCardParameter::CANCardBrand,CanClient>
{
public:
    /**
     * @brief Register the CAN clients of all brands. This function call the
     *        Function legion::common::util::Factory::Register() for all of the
     *        CAN clients.
     */
    void RegisterCanClients();

    /**
     * @brief Create a pointer to a specified brand of CAN client. The brand is
     *        set in the parameter.
     * @param parameter The parameter to create the CAN client.
     * @return A pointer to the created CAN client.
     */
    std::unique_ptr<CanClient> CreateCANClient(const CANCardParameter &parameter);
private:
    DECLARE_SINGLETON(CanClientFactory);
};

}  // namespace radar
} // namespace drivers
}  // namespace legion

#endif  // MODULES_DRIVERS_CANBUS_CAN_CLIENT_CAN_CLIENT_FACTORY_H_
