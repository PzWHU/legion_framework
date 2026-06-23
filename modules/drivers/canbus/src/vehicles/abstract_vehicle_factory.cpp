
#include "modules/drivers/canbus/src/vehicles/abstract_vehicle_factory.h"

namespace legion
{
    namespace drivers
    {

        void AbstractVehicleFactory::SetVehicleParameter(const VehicleParameter &vehicle_parameter)
        {
            vehicle_parameter_ = vehicle_parameter;
        }

    }  // namespace drivers
}  // namespace legion
