#ifndef CANBUS_VEHICLE_PARAMETER_H_
#define CANBUS_VEHICLE_PARAMETER_H_


namespace legion
{
namespace drivers
{



/**
 * @class VehicleParameter
 * @brief VehicleParameter inherites legion::common::util::Facotory.
 */
class VehicleParameter
{
public:
    enum VehicleBrand
    {
        VehicleBrand_EV350 = 1,
        VehicleBrand_SharingVan = 2,
        VehicleBrand_Triring = 3,
        VehicleBrand_WmRota = 4,
        VehicleBrand_HQ = 5,
        VehicleBrand_LANTU =6,
        VehicleBrand_GW1 =7,
        VehicleBrand_sharingvan_3in1 = 8,
        VehicleBrand_patrol = 9,
    };
    VehicleBrand vehicle_brand_;
    double max_steer_angle_;//deg
    double min_steer_angle_rate_;//deg/s
    double max_steer_angle_rate_;//deg/s
};

}  // namespace drivers
}  // namespace legion

#endif
