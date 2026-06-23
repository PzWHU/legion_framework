
#include "modules/drivers/canbus/src/vehicles/vehicle_controller.h"

#include "modules/common/logging/logging.h"

namespace legion
{
namespace drivers
{
using legion::common::Logging;
using legion::common::Status;

DrivingMode VehicleController::driving_mode()
{
    std::lock_guard<std::mutex> lock(mode_mutex_);
    return driving_mode_;
}

void VehicleController::set_driving_mode(
    const DrivingMode &driving_mode)
{
    std::lock_guard<std::mutex> lock(mode_mutex_);
    driving_mode_ = driving_mode;
}

bool VehicleController::ChassisEmergencyMode()
{
    std::lock_guard<std::mutex> lock(emergency_mode_mutex_);
    return is_chassis_emergency_mode;
}

void VehicleController::SetChassisEmergencyMode(bool mode)
{
    std::lock_guard<std::mutex> lock(emergency_mode_mutex_);
    is_chassis_emergency_mode = mode;
}

int32_t VehicleController::GetSpecialMode()
{
    return special_mode_;
}

Status::ErrorCode VehicleController::SetDrivingMode(const DrivingMode &driving_mode)
{
    if (driving_mode_ == DrivingMode::EMERGENCY_MODE)
    {
        AINFO << "Can't set vehicle to EMERGENCY_MODE driving mode.";
        return Status::ErrorCode::CANBUS_ERROR;
    }

    // if current mode is same as previous, no need to set.
    if (driving_mode_ == driving_mode)
    {
        return Status::ErrorCode::OK;
    }

    set_driving_mode(driving_mode);
    switch (driving_mode)
    {
    case DrivingMode::COMPLETE_AUTO_DRIVE:
    {
        if (EnableAutoMode() != Status::ErrorCode::OK)
        {
            AERROR << "Fail to EnableAutoMode.";
            return Status::ErrorCode::CANBUS_ERROR;
        }
        break;
    }
    case DrivingMode::COMPLETE_MANUAL:
    {
        if (DisableAutoMode() != Status::ErrorCode::OK)
        {
            AERROR << "Fail to DisableAutoMode.";
            return Status::ErrorCode::CANBUS_ERROR;
        }
        break;
    }
    case DrivingMode::AUTO_STEER_ONLY:
    {
        if (EnableSteeringOnlyMode() != Status::ErrorCode::OK)
        {
            AERROR << "Fail to EnableSpeedOnlyMode.";
            return Status::ErrorCode::CANBUS_ERROR;
        }
        break;
    }
    case DrivingMode::AUTO_SPEED_ONLY:
    {
        if (EnableSpeedOnlyMode() != Status::ErrorCode::OK)
        {
            AERROR << "Fail to EnableSpeedOnlyMode";
            return Status::ErrorCode::CANBUS_ERROR;
        }
        break;
    }
    case DrivingMode::TELEOP_DRIVE:
    {
        if (EnableTeleopMode() != Status::ErrorCode::OK)
        {
            AERROR << "Fail to EnableTeleopMode";
            return Status::ErrorCode::CANBUS_ERROR;
        }
        break;
    }
    default:
        break;
    }
    return Status::ErrorCode::OK;
}

Status::ErrorCode VehicleController::Update(const ControlCommand &command)
{
    if (!is_initialized_)
    {
        AERROR << "Controller not initialized.";
        return Status::ErrorCode::CANBUS_ERROR;
    }
    ControlCommand control_command = command;
    DrivingMode driving_mode;

    if(control_command.steer_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
        control_command.accel_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
        control_command.brake_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE)
    {
        driving_mode = DrivingMode::COMPLETE_AUTO_DRIVE;
    }
    else if(control_command.steer_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
            control_command.accel_driving_mode() == DrivingMode::COMPLETE_MANUAL &&
            control_command.brake_driving_mode() == DrivingMode::COMPLETE_MANUAL )
    {
        driving_mode = DrivingMode::AUTO_STEER_ONLY;
    }
    else if(control_command.steer_driving_mode() == DrivingMode::COMPLETE_MANUAL &&
            control_command.accel_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE   &&
            control_command.brake_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE)
    {
        driving_mode = DrivingMode::AUTO_SPEED_ONLY;
    }
    else if(control_command.steer_driving_mode() == DrivingMode::COMPLETE_MANUAL &&
            control_command.accel_driving_mode() == DrivingMode::COMPLETE_MANUAL       &&
            control_command.brake_driving_mode() == DrivingMode::COMPLETE_MANUAL )
    {
        driving_mode = DrivingMode::COMPLETE_MANUAL;
    }
    else if(control_command.steer_driving_mode() == DrivingMode::TELEOP_DRIVE &&
            control_command.accel_driving_mode() == DrivingMode::TELEOP_DRIVE &&
            control_command.brake_driving_mode() == DrivingMode::TELEOP_DRIVE)
    {
        driving_mode = DrivingMode::TELEOP_DRIVE;
    }

    SetDrivingMode(driving_mode);
    if (driving_mode == DrivingMode::COMPLETE_AUTO_DRIVE || driving_mode == DrivingMode::AUTO_SPEED_ONLY ||driving_mode == DrivingMode::TELEOP_DRIVE)
    {
        Throttle(control_command);
        Brake(control_command.brake_value());
        SetEpbBreak(control_command);
        Gear(control_command);
        Steer(control_command.front_steering_target());
    }

    SetBcmSignal(control_command);

    return Status::ErrorCode::OK;
}

Status::ErrorCode VehicleController::Update_task(const VehicleTask &task)
{
    if (!is_initialized_)
    {
        AERROR << "Controller not initialized.";
        return Status::ErrorCode::CANBUS_ERROR;
    }
    // SetTaskSignal(task);
    return Status::ErrorCode::OK;
}

}  // namespace drivers
}  // namespace legion
