

#ifndef MODULES_CANBUS_VEHICLE_VEHICLE_FACTORY_H_
#define MODULES_CANBUS_VEHICLE_VEHICLE_FACTORY_H_

#include <memory>

// #include "modules/drivers/canbus/src/common/factory.h"
#include "modules/common/util/factory.h"
#include "modules/drivers/canbus/src/vehicles/vehicle_parameter.h"
#include "modules/drivers/canbus/src/vehicles/abstract_vehicle_factory.h"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */
namespace legion
{
    namespace drivers
    {
        using namespace legion::common::util;
        /**
         * @class VehicleFactory
         *
         * @brief This class is a factory class that will generate different
         * vehicle factories based on the vehicle brand.
         */
        class VehicleFactory: public Factory<VehicleParameter::VehicleBrand,AbstractVehicleFactory>
        {
        public:
            /**
            * @brief register supported vehicle factories.
            */
            void RegisterVehicleFactory();

            /**
             * @brief Creates an AbstractVehicleFactory object based on vehicle_parameter
             * @param vehicle_parameter is defined in vehicle_parameter.proto
             */
            std::unique_ptr<AbstractVehicleFactory> CreateVehicle(const VehicleParameter &vehicle_parameter);
        };

    }  // namespace drivers
}  // namespace legion

#endif  // MODULES_CANBUS_VEHICLE_VEHICLE_FACTORY_H_
