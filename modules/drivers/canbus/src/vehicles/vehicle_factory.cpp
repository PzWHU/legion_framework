
#include "modules/drivers/canbus/src/vehicles/vehicle_factory.h"
#include "modules/drivers/canbus/src/vehicles/patrol/patrol_vehicle_factory.h"



namespace legion
{
    namespace drivers
    {

        void VehicleFactory::RegisterVehicleFactory()
        {
            Register(VehicleParameter::VehicleBrand::VehicleBrand_patrol,[]() -> AbstractVehicleFactory * { return new PatrolVehicleFactory(); });
        }

        std::unique_ptr<AbstractVehicleFactory> VehicleFactory::CreateVehicle(const VehicleParameter &vehicle_parameter)
        {
            auto abstract_factory = CreateObject(vehicle_parameter.vehicle_brand_);
            if (!abstract_factory)
            {
                AERROR << "failed to create vehicle factory with ";
            }
            else
            {
                abstract_factory->SetVehicleParameter(vehicle_parameter);
            }
            return abstract_factory;
        }

    }  // namespace drivers
}  // namespace legion
