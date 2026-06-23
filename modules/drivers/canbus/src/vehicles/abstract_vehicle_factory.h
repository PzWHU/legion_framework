
#ifndef CANBUS_VEHICLE_ABSTRACT_VEHICLE_FACTORY_H_
#define CANBUS_VEHICLE_ABSTRACT_VEHICLE_FACTORY_H_

#include <memory>

#include "modules/drivers/canbus/src/vehicles/vehicle_controller.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/can_message_manager.h"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */
namespace legion
{
namespace drivers
{

/**
 * @class AbstractVehicleFactory
 *
 * @brief this class is the abstract factory following the AbstractFactory
 * design pattern. It can create VehicleController and MessageManager based on
 * a given VehicleParameter.
 */
class AbstractVehicleFactory
{
public:
    /**
     * @brief destructor
     */
    virtual ~AbstractVehicleFactory() = default;

    /**
     * @brief the interface of creating a VehicleController class
     * @returns a unique pointer that points to the created VehicleController
     * object.
     */
    virtual std::unique_ptr<VehicleController> CreateVehicleController() = 0;

    /**
     * @brief the interface of creating a MessageManager class
     * @returns a unique pointer that points to the created MessageManager object.
     */
    virtual std::unique_ptr<CanMessageManager<::legion::drivers::ChassisDetail>>CreateMessageManager() = 0;

    /**
     * @brief set VehicleParameter.
     */
    void SetVehicleParameter(const VehicleParameter &vehicle_paramter);

private:
    VehicleParameter vehicle_parameter_;
};

}  // namespace drivers
}  // namespace legion

#endif  // MODULES_CANBUS_VEHICLE_ABSTRACT_VEHICLE_FACTORY_H_
