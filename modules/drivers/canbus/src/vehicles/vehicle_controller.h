
#ifndef CANBUS_VEHICLE_CONTROLLER_H_
#define CANBUS_VEHICLE_CONTROLLER_H_

#include <unordered_map>
#include "modules/drivers/canbus/src/vehicles/vehicle_parameter.h"
#include "modules/common/interface/control_command.hpp"
#include "modules/common/interface/vehicle_task.hpp"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/vehicle.hpp"
#include "modules/common/interface/wheel_info.hpp"
#include "modules/common/interface/location.hpp"
#include "modules/drivers/canbus/src/vehicles/chassis_detail/chassis_detail.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/can_sender.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/can_message_manager.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/protocol_data.h"
#include "modules/common/enum/enum.h"
#include "modules/common/status/status.h"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */
namespace legion
{
    namespace drivers
    {
        using namespace legion::common;
        using ::legion::driver::drivers::CanSender;
        using namespace legion::interface;
        using ::legion::driver::drivers::CanMessageManager;

        enum ECU_TYPE
        {
            VCU_INTERRUPT = 0,
            GEAR_INTERRUPT = 1,
            ESC_INTERRUPT = 2,
            EPS_INTERRUPT = 3,
            EPB_INTERRUPT = 4,
        };
        /**
         * @class VehicleController
         *
         * @brief This is the interface class of vehicle controller. It defines pure
         * virtual functions, and also some implemented common functions.
         */
        class VehicleController
        {
        public:
            virtual ~VehicleController() = default;
            virtual int64_t GetTimeStamp(ECU_TYPE type) = 0;
            /**
             * @brief initialize the vehicle controller.
             * @param can_sender a pointer to canbus sender.
             * @param message_manager a pointer to the message_manager.
             * @return error_code
             */
            virtual legion::common::Status::ErrorCode Init(const VehicleParameter &params,
                                                           CanSender<::legion::drivers::ChassisDetail> *const can_sender,
                                                           CanMessageManager<::legion::drivers::ChassisDetail>*const message_manager, 
                                                           const double max_stop_time_threshold) = 0;

            /**
             * @brief start the vehicle controller.
             * @return true if successfully started.
             */
            virtual bool Start() = 0;

            /**
             * @brief stop the vehicle controller.
             */
            virtual void Stop() = 0;

            /**
             * @brief calculate and return the chassis.
             * @returns a copy of chassis. Use copy here to avoid multi-thread issues.
             */
            virtual Chassis chassis() = 0;

            virtual Vehicle GetVehicle() = 0;

            /**
             * @brief update the vehicle controller.
             * @param command the control command
             * @return error_code
             */
            virtual Status::ErrorCode Update(const ControlCommand &command);

            virtual Status::ErrorCode Update_task(const VehicleTask &task);

            /**
             * @brief set vehicle to appointed driving mode.
             * @param driving mode to be appointed.
             * @return error_code
             */
            virtual Status::ErrorCode SetDrivingMode(const DrivingMode &driving_mode);

            virtual void SetEmergency() = 0;
            virtual void SetEmergencyDisable() = 0;

            virtual int32_t GetSpecialMode();

            // virtual void SetLocalization(const legion::interface::LocalizationMsg &localization) = 0;   //可选项

            // virtual void SetShakeInfoToHmi(int8_t shake_info_state) = 0;

            // TODO转向使能控制
            virtual void SteerDrivingModeSet(int state) = 0;

        private:
            /*
             * @brief main logical function for operation the car enter or exit the auto
             * driving
             */
            virtual void Emergency() = 0;

            virtual legion::common::Status::ErrorCode EnableAutoMode() = 0;
            virtual legion::common::Status::ErrorCode DisableAutoMode() = 0;
            virtual legion::common::Status::ErrorCode EnableSteeringOnlyMode() = 0;
            virtual legion::common::Status::ErrorCode EnableSpeedOnlyMode() = 0;
            virtual legion::common::Status::ErrorCode EnableTeleopMode() = 0;

            /*
             * @brief NEUTRAL, REVERSE, DRIVE
             */
            virtual void Gear(const ControlCommand &command) = 0;

            /*
             * @brief detail function for auto driving brake with new acceleration
             * acceleration:0.00~99.99, unit:%
             */
            virtual void Brake(double pedal) = 0;

            /*
             * @brief drive with old acceleration gas:0.00~99.99 unit:%
             */
            virtual void Throttle(const ControlCommand &command) = 0;

            /*
             * @brief steering with old angle speed angle:-99.99~0.00~99.99, unit:%,
             * left:+, right:-
             */
            virtual void Steer(double angle) = 0;

            /*
             * @brief set Electrical Park Brake
             */
            virtual void SetEpbBreak(const ControlCommand &command) = 0;
            virtual void SetBcmSignal(const ControlCommand &command) = 0;
            // virtual void SetTaskSignal(const VehicleTask &task_command) = 0;

        protected:
            virtual DrivingMode driving_mode();
            virtual void set_driving_mode(const DrivingMode &driving_mode);
            // virtual void SetSpecialMode(Chassis::SpecalMode special_mode);
            virtual void SetChassisEmergencyMode(bool mode);
            virtual bool ChassisEmergencyMode();

        protected:
            drivers::VehicleParameter params_;
            // common::VehicleParam vehicle_params_;
            CanSender<::legion::drivers::ChassisDetail> *can_sender_ = nullptr;
            CanMessageManager<::legion::drivers::ChassisDetail> *message_manager_ = nullptr;
            bool is_initialized_ = false; // own by derviative concrete controller
            DrivingMode driving_mode_ = DrivingMode::COMPLETE_MANUAL;
            bool is_reset_ = false;           // reset command from control command
            std::mutex mode_mutex_;           // only use in this base class
            std::mutex emergency_mode_mutex_; // only use in this base class
            bool is_steer_takeover_to_complete_maual = true;
            bool is_speed_takeover_to_complete_maual = false;
            int32_t special_mode_;
            bool is_chassis_emergency_mode = false;
        };

    } // namespace drivers
} // namespace legion

#endif // MODULES_CANBUS_VEHICLE_CONTROLLER_H_
