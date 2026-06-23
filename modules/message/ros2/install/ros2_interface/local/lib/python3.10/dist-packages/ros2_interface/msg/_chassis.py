# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Chassis.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'chassis_error_code'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Chassis(type):
    """Metaclass of message 'Chassis'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_interface.msg.Chassis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__chassis
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__chassis
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__chassis
            cls._TYPE_SUPPORT = module.type_support_msg__msg__chassis
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__chassis

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Chassis(metaclass=Metaclass_Chassis):
    """Message class 'Chassis'."""

    __slots__ = [
        '_header',
        '_moving_status',
        '_driving_mode',
        '_steer_driving_mode',
        '_steering_status',
        '_front_steering_value',
        '_rear_steering_value',
        '_steering_torque_nm',
        '_front_steering_rate_dps',
        '_rear_steering_rate_dps',
        '_accel_driving_mode',
        '_accel_status',
        '_accel_value',
        '_brake_driving_mode',
        '_brake_status',
        '_brake_value',
        '_backup_brake_driving_mode',
        '_backup_brake_status',
        '_backup_brake_value',
        '_epb_driving_mode',
        '_epb_status',
        '_epb_level',
        '_engine_status',
        '_engine_rpm',
        '_engine_torque',
        '_speed_mps',
        '_odometer_m',
        '_fuel_range_m',
        '_gear_driving_mode',
        '_gear_status',
        '_gear_location',
        '_driver_seat_belt',
        '_high_beam_status',
        '_low_beam_status',
        '_horn_status',
        '_turn_lamp_status',
        '_front_wiper_status',
        '_rear_wiper_status',
        '_position_lamp_status',
        '_front_fog_lamp_status',
        '_rear_fog_lamp_status',
        '_brake_lamp_status',
        '_alarm_lamp_status',
        '_lf_door_status',
        '_rf_door_status',
        '_lr_door_status',
        '_rr_door_status',
        '_rearview_mirror_status',
        '_trunk_status',
        '_engine_bay_door_status',
        '_wheel_direction_rr',
        '_wheel_spd_rr',
        '_wheel_direction_rl',
        '_wheel_spd_rl',
        '_wheel_direction_fr',
        '_wheel_spd_fr',
        '_wheel_direction_fl',
        '_wheel_spd_fl',
        '_is_tire_pressure_ok',
        '_is_tire_pressure_lf_valid',
        '_tire_pressure_lf',
        '_is_tire_pressure_rf_valid',
        '_tire_pressure_rf',
        '_is_tire_pressure_lr_valid',
        '_tire_pressure_lr',
        '_is_tire_pressure_rr_valid',
        '_tire_pressure_rr',
        '_battery_power_percentage',
        '_air_bag_status',
        '_charging_gun_status',
        '_vehicle_power_status',
        '_chassis_error_code',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'moving_status': 'int32',
        'driving_mode': 'int32',
        'steer_driving_mode': 'int32',
        'steering_status': 'int32',
        'front_steering_value': 'double',
        'rear_steering_value': 'double',
        'steering_torque_nm': 'double',
        'front_steering_rate_dps': 'double',
        'rear_steering_rate_dps': 'double',
        'accel_driving_mode': 'int32',
        'accel_status': 'int32',
        'accel_value': 'double',
        'brake_driving_mode': 'int32',
        'brake_status': 'int32',
        'brake_value': 'double',
        'backup_brake_driving_mode': 'int32',
        'backup_brake_status': 'int32',
        'backup_brake_value': 'double',
        'epb_driving_mode': 'int32',
        'epb_status': 'int32',
        'epb_level': 'int32',
        'engine_status': 'int32',
        'engine_rpm': 'double',
        'engine_torque': 'double',
        'speed_mps': 'double',
        'odometer_m': 'double',
        'fuel_range_m': 'int32',
        'gear_driving_mode': 'int32',
        'gear_status': 'int32',
        'gear_location': 'int32',
        'driver_seat_belt': 'int32',
        'high_beam_status': 'int32',
        'low_beam_status': 'int32',
        'horn_status': 'int32',
        'turn_lamp_status': 'int32',
        'front_wiper_status': 'int32',
        'rear_wiper_status': 'int32',
        'position_lamp_status': 'int32',
        'front_fog_lamp_status': 'int32',
        'rear_fog_lamp_status': 'int32',
        'brake_lamp_status': 'int32',
        'alarm_lamp_status': 'int32',
        'lf_door_status': 'int32',
        'rf_door_status': 'int32',
        'lr_door_status': 'int32',
        'rr_door_status': 'int32',
        'rearview_mirror_status': 'int32',
        'trunk_status': 'int32',
        'engine_bay_door_status': 'int32',
        'wheel_direction_rr': 'int32',
        'wheel_spd_rr': 'double',
        'wheel_direction_rl': 'int32',
        'wheel_spd_rl': 'double',
        'wheel_direction_fr': 'int32',
        'wheel_spd_fr': 'double',
        'wheel_direction_fl': 'int32',
        'wheel_spd_fl': 'double',
        'is_tire_pressure_ok': 'int32',
        'is_tire_pressure_lf_valid': 'int32',
        'tire_pressure_lf': 'double',
        'is_tire_pressure_rf_valid': 'int32',
        'tire_pressure_rf': 'double',
        'is_tire_pressure_lr_valid': 'int32',
        'tire_pressure_lr': 'double',
        'is_tire_pressure_rr_valid': 'int32',
        'tire_pressure_rr': 'double',
        'battery_power_percentage': 'double',
        'air_bag_status': 'int32',
        'charging_gun_status': 'int32',
        'vehicle_power_status': 'int32',
        'chassis_error_code': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.moving_status = kwargs.get('moving_status', int())
        self.driving_mode = kwargs.get('driving_mode', int())
        self.steer_driving_mode = kwargs.get('steer_driving_mode', int())
        self.steering_status = kwargs.get('steering_status', int())
        self.front_steering_value = kwargs.get('front_steering_value', float())
        self.rear_steering_value = kwargs.get('rear_steering_value', float())
        self.steering_torque_nm = kwargs.get('steering_torque_nm', float())
        self.front_steering_rate_dps = kwargs.get('front_steering_rate_dps', float())
        self.rear_steering_rate_dps = kwargs.get('rear_steering_rate_dps', float())
        self.accel_driving_mode = kwargs.get('accel_driving_mode', int())
        self.accel_status = kwargs.get('accel_status', int())
        self.accel_value = kwargs.get('accel_value', float())
        self.brake_driving_mode = kwargs.get('brake_driving_mode', int())
        self.brake_status = kwargs.get('brake_status', int())
        self.brake_value = kwargs.get('brake_value', float())
        self.backup_brake_driving_mode = kwargs.get('backup_brake_driving_mode', int())
        self.backup_brake_status = kwargs.get('backup_brake_status', int())
        self.backup_brake_value = kwargs.get('backup_brake_value', float())
        self.epb_driving_mode = kwargs.get('epb_driving_mode', int())
        self.epb_status = kwargs.get('epb_status', int())
        self.epb_level = kwargs.get('epb_level', int())
        self.engine_status = kwargs.get('engine_status', int())
        self.engine_rpm = kwargs.get('engine_rpm', float())
        self.engine_torque = kwargs.get('engine_torque', float())
        self.speed_mps = kwargs.get('speed_mps', float())
        self.odometer_m = kwargs.get('odometer_m', float())
        self.fuel_range_m = kwargs.get('fuel_range_m', int())
        self.gear_driving_mode = kwargs.get('gear_driving_mode', int())
        self.gear_status = kwargs.get('gear_status', int())
        self.gear_location = kwargs.get('gear_location', int())
        self.driver_seat_belt = kwargs.get('driver_seat_belt', int())
        self.high_beam_status = kwargs.get('high_beam_status', int())
        self.low_beam_status = kwargs.get('low_beam_status', int())
        self.horn_status = kwargs.get('horn_status', int())
        self.turn_lamp_status = kwargs.get('turn_lamp_status', int())
        self.front_wiper_status = kwargs.get('front_wiper_status', int())
        self.rear_wiper_status = kwargs.get('rear_wiper_status', int())
        self.position_lamp_status = kwargs.get('position_lamp_status', int())
        self.front_fog_lamp_status = kwargs.get('front_fog_lamp_status', int())
        self.rear_fog_lamp_status = kwargs.get('rear_fog_lamp_status', int())
        self.brake_lamp_status = kwargs.get('brake_lamp_status', int())
        self.alarm_lamp_status = kwargs.get('alarm_lamp_status', int())
        self.lf_door_status = kwargs.get('lf_door_status', int())
        self.rf_door_status = kwargs.get('rf_door_status', int())
        self.lr_door_status = kwargs.get('lr_door_status', int())
        self.rr_door_status = kwargs.get('rr_door_status', int())
        self.rearview_mirror_status = kwargs.get('rearview_mirror_status', int())
        self.trunk_status = kwargs.get('trunk_status', int())
        self.engine_bay_door_status = kwargs.get('engine_bay_door_status', int())
        self.wheel_direction_rr = kwargs.get('wheel_direction_rr', int())
        self.wheel_spd_rr = kwargs.get('wheel_spd_rr', float())
        self.wheel_direction_rl = kwargs.get('wheel_direction_rl', int())
        self.wheel_spd_rl = kwargs.get('wheel_spd_rl', float())
        self.wheel_direction_fr = kwargs.get('wheel_direction_fr', int())
        self.wheel_spd_fr = kwargs.get('wheel_spd_fr', float())
        self.wheel_direction_fl = kwargs.get('wheel_direction_fl', int())
        self.wheel_spd_fl = kwargs.get('wheel_spd_fl', float())
        self.is_tire_pressure_ok = kwargs.get('is_tire_pressure_ok', int())
        self.is_tire_pressure_lf_valid = kwargs.get('is_tire_pressure_lf_valid', int())
        self.tire_pressure_lf = kwargs.get('tire_pressure_lf', float())
        self.is_tire_pressure_rf_valid = kwargs.get('is_tire_pressure_rf_valid', int())
        self.tire_pressure_rf = kwargs.get('tire_pressure_rf', float())
        self.is_tire_pressure_lr_valid = kwargs.get('is_tire_pressure_lr_valid', int())
        self.tire_pressure_lr = kwargs.get('tire_pressure_lr', float())
        self.is_tire_pressure_rr_valid = kwargs.get('is_tire_pressure_rr_valid', int())
        self.tire_pressure_rr = kwargs.get('tire_pressure_rr', float())
        self.battery_power_percentage = kwargs.get('battery_power_percentage', float())
        self.air_bag_status = kwargs.get('air_bag_status', int())
        self.charging_gun_status = kwargs.get('charging_gun_status', int())
        self.vehicle_power_status = kwargs.get('vehicle_power_status', int())
        self.chassis_error_code = array.array('i', kwargs.get('chassis_error_code', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.moving_status != other.moving_status:
            return False
        if self.driving_mode != other.driving_mode:
            return False
        if self.steer_driving_mode != other.steer_driving_mode:
            return False
        if self.steering_status != other.steering_status:
            return False
        if self.front_steering_value != other.front_steering_value:
            return False
        if self.rear_steering_value != other.rear_steering_value:
            return False
        if self.steering_torque_nm != other.steering_torque_nm:
            return False
        if self.front_steering_rate_dps != other.front_steering_rate_dps:
            return False
        if self.rear_steering_rate_dps != other.rear_steering_rate_dps:
            return False
        if self.accel_driving_mode != other.accel_driving_mode:
            return False
        if self.accel_status != other.accel_status:
            return False
        if self.accel_value != other.accel_value:
            return False
        if self.brake_driving_mode != other.brake_driving_mode:
            return False
        if self.brake_status != other.brake_status:
            return False
        if self.brake_value != other.brake_value:
            return False
        if self.backup_brake_driving_mode != other.backup_brake_driving_mode:
            return False
        if self.backup_brake_status != other.backup_brake_status:
            return False
        if self.backup_brake_value != other.backup_brake_value:
            return False
        if self.epb_driving_mode != other.epb_driving_mode:
            return False
        if self.epb_status != other.epb_status:
            return False
        if self.epb_level != other.epb_level:
            return False
        if self.engine_status != other.engine_status:
            return False
        if self.engine_rpm != other.engine_rpm:
            return False
        if self.engine_torque != other.engine_torque:
            return False
        if self.speed_mps != other.speed_mps:
            return False
        if self.odometer_m != other.odometer_m:
            return False
        if self.fuel_range_m != other.fuel_range_m:
            return False
        if self.gear_driving_mode != other.gear_driving_mode:
            return False
        if self.gear_status != other.gear_status:
            return False
        if self.gear_location != other.gear_location:
            return False
        if self.driver_seat_belt != other.driver_seat_belt:
            return False
        if self.high_beam_status != other.high_beam_status:
            return False
        if self.low_beam_status != other.low_beam_status:
            return False
        if self.horn_status != other.horn_status:
            return False
        if self.turn_lamp_status != other.turn_lamp_status:
            return False
        if self.front_wiper_status != other.front_wiper_status:
            return False
        if self.rear_wiper_status != other.rear_wiper_status:
            return False
        if self.position_lamp_status != other.position_lamp_status:
            return False
        if self.front_fog_lamp_status != other.front_fog_lamp_status:
            return False
        if self.rear_fog_lamp_status != other.rear_fog_lamp_status:
            return False
        if self.brake_lamp_status != other.brake_lamp_status:
            return False
        if self.alarm_lamp_status != other.alarm_lamp_status:
            return False
        if self.lf_door_status != other.lf_door_status:
            return False
        if self.rf_door_status != other.rf_door_status:
            return False
        if self.lr_door_status != other.lr_door_status:
            return False
        if self.rr_door_status != other.rr_door_status:
            return False
        if self.rearview_mirror_status != other.rearview_mirror_status:
            return False
        if self.trunk_status != other.trunk_status:
            return False
        if self.engine_bay_door_status != other.engine_bay_door_status:
            return False
        if self.wheel_direction_rr != other.wheel_direction_rr:
            return False
        if self.wheel_spd_rr != other.wheel_spd_rr:
            return False
        if self.wheel_direction_rl != other.wheel_direction_rl:
            return False
        if self.wheel_spd_rl != other.wheel_spd_rl:
            return False
        if self.wheel_direction_fr != other.wheel_direction_fr:
            return False
        if self.wheel_spd_fr != other.wheel_spd_fr:
            return False
        if self.wheel_direction_fl != other.wheel_direction_fl:
            return False
        if self.wheel_spd_fl != other.wheel_spd_fl:
            return False
        if self.is_tire_pressure_ok != other.is_tire_pressure_ok:
            return False
        if self.is_tire_pressure_lf_valid != other.is_tire_pressure_lf_valid:
            return False
        if self.tire_pressure_lf != other.tire_pressure_lf:
            return False
        if self.is_tire_pressure_rf_valid != other.is_tire_pressure_rf_valid:
            return False
        if self.tire_pressure_rf != other.tire_pressure_rf:
            return False
        if self.is_tire_pressure_lr_valid != other.is_tire_pressure_lr_valid:
            return False
        if self.tire_pressure_lr != other.tire_pressure_lr:
            return False
        if self.is_tire_pressure_rr_valid != other.is_tire_pressure_rr_valid:
            return False
        if self.tire_pressure_rr != other.tire_pressure_rr:
            return False
        if self.battery_power_percentage != other.battery_power_percentage:
            return False
        if self.air_bag_status != other.air_bag_status:
            return False
        if self.charging_gun_status != other.charging_gun_status:
            return False
        if self.vehicle_power_status != other.vehicle_power_status:
            return False
        if self.chassis_error_code != other.chassis_error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def moving_status(self):
        """Message field 'moving_status'."""
        return self._moving_status

    @moving_status.setter
    def moving_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'moving_status' field must be an integer in [-2147483648, 2147483647]"
        self._moving_status = value

    @builtins.property
    def driving_mode(self):
        """Message field 'driving_mode'."""
        return self._driving_mode

    @driving_mode.setter
    def driving_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driving_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'driving_mode' field must be an integer in [-2147483648, 2147483647]"
        self._driving_mode = value

    @builtins.property
    def steer_driving_mode(self):
        """Message field 'steer_driving_mode'."""
        return self._steer_driving_mode

    @steer_driving_mode.setter
    def steer_driving_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_driving_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'steer_driving_mode' field must be an integer in [-2147483648, 2147483647]"
        self._steer_driving_mode = value

    @builtins.property
    def steering_status(self):
        """Message field 'steering_status'."""
        return self._steering_status

    @steering_status.setter
    def steering_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'steering_status' field must be an integer in [-2147483648, 2147483647]"
        self._steering_status = value

    @builtins.property
    def front_steering_value(self):
        """Message field 'front_steering_value'."""
        return self._front_steering_value

    @front_steering_value.setter
    def front_steering_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steering_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steering_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steering_value = value

    @builtins.property
    def rear_steering_value(self):
        """Message field 'rear_steering_value'."""
        return self._rear_steering_value

    @rear_steering_value.setter
    def rear_steering_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steering_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steering_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steering_value = value

    @builtins.property
    def steering_torque_nm(self):
        """Message field 'steering_torque_nm'."""
        return self._steering_torque_nm

    @steering_torque_nm.setter
    def steering_torque_nm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_torque_nm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_torque_nm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_torque_nm = value

    @builtins.property
    def front_steering_rate_dps(self):
        """Message field 'front_steering_rate_dps'."""
        return self._front_steering_rate_dps

    @front_steering_rate_dps.setter
    def front_steering_rate_dps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steering_rate_dps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steering_rate_dps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steering_rate_dps = value

    @builtins.property
    def rear_steering_rate_dps(self):
        """Message field 'rear_steering_rate_dps'."""
        return self._rear_steering_rate_dps

    @rear_steering_rate_dps.setter
    def rear_steering_rate_dps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steering_rate_dps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steering_rate_dps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steering_rate_dps = value

    @builtins.property
    def accel_driving_mode(self):
        """Message field 'accel_driving_mode'."""
        return self._accel_driving_mode

    @accel_driving_mode.setter
    def accel_driving_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accel_driving_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'accel_driving_mode' field must be an integer in [-2147483648, 2147483647]"
        self._accel_driving_mode = value

    @builtins.property
    def accel_status(self):
        """Message field 'accel_status'."""
        return self._accel_status

    @accel_status.setter
    def accel_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accel_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'accel_status' field must be an integer in [-2147483648, 2147483647]"
        self._accel_status = value

    @builtins.property
    def accel_value(self):
        """Message field 'accel_value'."""
        return self._accel_value

    @accel_value.setter
    def accel_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel_value = value

    @builtins.property
    def brake_driving_mode(self):
        """Message field 'brake_driving_mode'."""
        return self._brake_driving_mode

    @brake_driving_mode.setter
    def brake_driving_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_driving_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brake_driving_mode' field must be an integer in [-2147483648, 2147483647]"
        self._brake_driving_mode = value

    @builtins.property
    def brake_status(self):
        """Message field 'brake_status'."""
        return self._brake_status

    @brake_status.setter
    def brake_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brake_status' field must be an integer in [-2147483648, 2147483647]"
        self._brake_status = value

    @builtins.property
    def brake_value(self):
        """Message field 'brake_value'."""
        return self._brake_value

    @brake_value.setter
    def brake_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_value = value

    @builtins.property
    def backup_brake_driving_mode(self):
        """Message field 'backup_brake_driving_mode'."""
        return self._backup_brake_driving_mode

    @backup_brake_driving_mode.setter
    def backup_brake_driving_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'backup_brake_driving_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'backup_brake_driving_mode' field must be an integer in [-2147483648, 2147483647]"
        self._backup_brake_driving_mode = value

    @builtins.property
    def backup_brake_status(self):
        """Message field 'backup_brake_status'."""
        return self._backup_brake_status

    @backup_brake_status.setter
    def backup_brake_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'backup_brake_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'backup_brake_status' field must be an integer in [-2147483648, 2147483647]"
        self._backup_brake_status = value

    @builtins.property
    def backup_brake_value(self):
        """Message field 'backup_brake_value'."""
        return self._backup_brake_value

    @backup_brake_value.setter
    def backup_brake_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'backup_brake_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'backup_brake_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._backup_brake_value = value

    @builtins.property
    def epb_driving_mode(self):
        """Message field 'epb_driving_mode'."""
        return self._epb_driving_mode

    @epb_driving_mode.setter
    def epb_driving_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_driving_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'epb_driving_mode' field must be an integer in [-2147483648, 2147483647]"
        self._epb_driving_mode = value

    @builtins.property
    def epb_status(self):
        """Message field 'epb_status'."""
        return self._epb_status

    @epb_status.setter
    def epb_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'epb_status' field must be an integer in [-2147483648, 2147483647]"
        self._epb_status = value

    @builtins.property
    def epb_level(self):
        """Message field 'epb_level'."""
        return self._epb_level

    @epb_level.setter
    def epb_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_level' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'epb_level' field must be an integer in [-2147483648, 2147483647]"
        self._epb_level = value

    @builtins.property
    def engine_status(self):
        """Message field 'engine_status'."""
        return self._engine_status

    @engine_status.setter
    def engine_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'engine_status' field must be an integer in [-2147483648, 2147483647]"
        self._engine_status = value

    @builtins.property
    def engine_rpm(self):
        """Message field 'engine_rpm'."""
        return self._engine_rpm

    @engine_rpm.setter
    def engine_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_rpm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'engine_rpm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._engine_rpm = value

    @builtins.property
    def engine_torque(self):
        """Message field 'engine_torque'."""
        return self._engine_torque

    @engine_torque.setter
    def engine_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_torque' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'engine_torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._engine_torque = value

    @builtins.property
    def speed_mps(self):
        """Message field 'speed_mps'."""
        return self._speed_mps

    @speed_mps.setter
    def speed_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_mps = value

    @builtins.property
    def odometer_m(self):
        """Message field 'odometer_m'."""
        return self._odometer_m

    @odometer_m.setter
    def odometer_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odometer_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'odometer_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._odometer_m = value

    @builtins.property
    def fuel_range_m(self):
        """Message field 'fuel_range_m'."""
        return self._fuel_range_m

    @fuel_range_m.setter
    def fuel_range_m(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fuel_range_m' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fuel_range_m' field must be an integer in [-2147483648, 2147483647]"
        self._fuel_range_m = value

    @builtins.property
    def gear_driving_mode(self):
        """Message field 'gear_driving_mode'."""
        return self._gear_driving_mode

    @gear_driving_mode.setter
    def gear_driving_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_driving_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gear_driving_mode' field must be an integer in [-2147483648, 2147483647]"
        self._gear_driving_mode = value

    @builtins.property
    def gear_status(self):
        """Message field 'gear_status'."""
        return self._gear_status

    @gear_status.setter
    def gear_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gear_status' field must be an integer in [-2147483648, 2147483647]"
        self._gear_status = value

    @builtins.property
    def gear_location(self):
        """Message field 'gear_location'."""
        return self._gear_location

    @gear_location.setter
    def gear_location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_location' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gear_location' field must be an integer in [-2147483648, 2147483647]"
        self._gear_location = value

    @builtins.property
    def driver_seat_belt(self):
        """Message field 'driver_seat_belt'."""
        return self._driver_seat_belt

    @driver_seat_belt.setter
    def driver_seat_belt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driver_seat_belt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'driver_seat_belt' field must be an integer in [-2147483648, 2147483647]"
        self._driver_seat_belt = value

    @builtins.property
    def high_beam_status(self):
        """Message field 'high_beam_status'."""
        return self._high_beam_status

    @high_beam_status.setter
    def high_beam_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'high_beam_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'high_beam_status' field must be an integer in [-2147483648, 2147483647]"
        self._high_beam_status = value

    @builtins.property
    def low_beam_status(self):
        """Message field 'low_beam_status'."""
        return self._low_beam_status

    @low_beam_status.setter
    def low_beam_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'low_beam_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'low_beam_status' field must be an integer in [-2147483648, 2147483647]"
        self._low_beam_status = value

    @builtins.property
    def horn_status(self):
        """Message field 'horn_status'."""
        return self._horn_status

    @horn_status.setter
    def horn_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'horn_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'horn_status' field must be an integer in [-2147483648, 2147483647]"
        self._horn_status = value

    @builtins.property
    def turn_lamp_status(self):
        """Message field 'turn_lamp_status'."""
        return self._turn_lamp_status

    @turn_lamp_status.setter
    def turn_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'turn_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._turn_lamp_status = value

    @builtins.property
    def front_wiper_status(self):
        """Message field 'front_wiper_status'."""
        return self._front_wiper_status

    @front_wiper_status.setter
    def front_wiper_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_wiper_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_wiper_status' field must be an integer in [-2147483648, 2147483647]"
        self._front_wiper_status = value

    @builtins.property
    def rear_wiper_status(self):
        """Message field 'rear_wiper_status'."""
        return self._rear_wiper_status

    @rear_wiper_status.setter
    def rear_wiper_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_wiper_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_wiper_status' field must be an integer in [-2147483648, 2147483647]"
        self._rear_wiper_status = value

    @builtins.property
    def position_lamp_status(self):
        """Message field 'position_lamp_status'."""
        return self._position_lamp_status

    @position_lamp_status.setter
    def position_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._position_lamp_status = value

    @builtins.property
    def front_fog_lamp_status(self):
        """Message field 'front_fog_lamp_status'."""
        return self._front_fog_lamp_status

    @front_fog_lamp_status.setter
    def front_fog_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_fog_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_fog_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._front_fog_lamp_status = value

    @builtins.property
    def rear_fog_lamp_status(self):
        """Message field 'rear_fog_lamp_status'."""
        return self._rear_fog_lamp_status

    @rear_fog_lamp_status.setter
    def rear_fog_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_fog_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_fog_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._rear_fog_lamp_status = value

    @builtins.property
    def brake_lamp_status(self):
        """Message field 'brake_lamp_status'."""
        return self._brake_lamp_status

    @brake_lamp_status.setter
    def brake_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brake_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._brake_lamp_status = value

    @builtins.property
    def alarm_lamp_status(self):
        """Message field 'alarm_lamp_status'."""
        return self._alarm_lamp_status

    @alarm_lamp_status.setter
    def alarm_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'alarm_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._alarm_lamp_status = value

    @builtins.property
    def lf_door_status(self):
        """Message field 'lf_door_status'."""
        return self._lf_door_status

    @lf_door_status.setter
    def lf_door_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lf_door_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lf_door_status' field must be an integer in [-2147483648, 2147483647]"
        self._lf_door_status = value

    @builtins.property
    def rf_door_status(self):
        """Message field 'rf_door_status'."""
        return self._rf_door_status

    @rf_door_status.setter
    def rf_door_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rf_door_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rf_door_status' field must be an integer in [-2147483648, 2147483647]"
        self._rf_door_status = value

    @builtins.property
    def lr_door_status(self):
        """Message field 'lr_door_status'."""
        return self._lr_door_status

    @lr_door_status.setter
    def lr_door_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lr_door_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lr_door_status' field must be an integer in [-2147483648, 2147483647]"
        self._lr_door_status = value

    @builtins.property
    def rr_door_status(self):
        """Message field 'rr_door_status'."""
        return self._rr_door_status

    @rr_door_status.setter
    def rr_door_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rr_door_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rr_door_status' field must be an integer in [-2147483648, 2147483647]"
        self._rr_door_status = value

    @builtins.property
    def rearview_mirror_status(self):
        """Message field 'rearview_mirror_status'."""
        return self._rearview_mirror_status

    @rearview_mirror_status.setter
    def rearview_mirror_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rearview_mirror_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rearview_mirror_status' field must be an integer in [-2147483648, 2147483647]"
        self._rearview_mirror_status = value

    @builtins.property
    def trunk_status(self):
        """Message field 'trunk_status'."""
        return self._trunk_status

    @trunk_status.setter
    def trunk_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trunk_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trunk_status' field must be an integer in [-2147483648, 2147483647]"
        self._trunk_status = value

    @builtins.property
    def engine_bay_door_status(self):
        """Message field 'engine_bay_door_status'."""
        return self._engine_bay_door_status

    @engine_bay_door_status.setter
    def engine_bay_door_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_bay_door_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'engine_bay_door_status' field must be an integer in [-2147483648, 2147483647]"
        self._engine_bay_door_status = value

    @builtins.property
    def wheel_direction_rr(self):
        """Message field 'wheel_direction_rr'."""
        return self._wheel_direction_rr

    @wheel_direction_rr.setter
    def wheel_direction_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheel_direction_rr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wheel_direction_rr' field must be an integer in [-2147483648, 2147483647]"
        self._wheel_direction_rr = value

    @builtins.property
    def wheel_spd_rr(self):
        """Message field 'wheel_spd_rr'."""
        return self._wheel_spd_rr

    @wheel_spd_rr.setter
    def wheel_spd_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_spd_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_spd_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_spd_rr = value

    @builtins.property
    def wheel_direction_rl(self):
        """Message field 'wheel_direction_rl'."""
        return self._wheel_direction_rl

    @wheel_direction_rl.setter
    def wheel_direction_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheel_direction_rl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wheel_direction_rl' field must be an integer in [-2147483648, 2147483647]"
        self._wheel_direction_rl = value

    @builtins.property
    def wheel_spd_rl(self):
        """Message field 'wheel_spd_rl'."""
        return self._wheel_spd_rl

    @wheel_spd_rl.setter
    def wheel_spd_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_spd_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_spd_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_spd_rl = value

    @builtins.property
    def wheel_direction_fr(self):
        """Message field 'wheel_direction_fr'."""
        return self._wheel_direction_fr

    @wheel_direction_fr.setter
    def wheel_direction_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheel_direction_fr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wheel_direction_fr' field must be an integer in [-2147483648, 2147483647]"
        self._wheel_direction_fr = value

    @builtins.property
    def wheel_spd_fr(self):
        """Message field 'wheel_spd_fr'."""
        return self._wheel_spd_fr

    @wheel_spd_fr.setter
    def wheel_spd_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_spd_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_spd_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_spd_fr = value

    @builtins.property
    def wheel_direction_fl(self):
        """Message field 'wheel_direction_fl'."""
        return self._wheel_direction_fl

    @wheel_direction_fl.setter
    def wheel_direction_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheel_direction_fl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wheel_direction_fl' field must be an integer in [-2147483648, 2147483647]"
        self._wheel_direction_fl = value

    @builtins.property
    def wheel_spd_fl(self):
        """Message field 'wheel_spd_fl'."""
        return self._wheel_spd_fl

    @wheel_spd_fl.setter
    def wheel_spd_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_spd_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_spd_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_spd_fl = value

    @builtins.property
    def is_tire_pressure_ok(self):
        """Message field 'is_tire_pressure_ok'."""
        return self._is_tire_pressure_ok

    @is_tire_pressure_ok.setter
    def is_tire_pressure_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_tire_pressure_ok' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'is_tire_pressure_ok' field must be an integer in [-2147483648, 2147483647]"
        self._is_tire_pressure_ok = value

    @builtins.property
    def is_tire_pressure_lf_valid(self):
        """Message field 'is_tire_pressure_lf_valid'."""
        return self._is_tire_pressure_lf_valid

    @is_tire_pressure_lf_valid.setter
    def is_tire_pressure_lf_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_tire_pressure_lf_valid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'is_tire_pressure_lf_valid' field must be an integer in [-2147483648, 2147483647]"
        self._is_tire_pressure_lf_valid = value

    @builtins.property
    def tire_pressure_lf(self):
        """Message field 'tire_pressure_lf'."""
        return self._tire_pressure_lf

    @tire_pressure_lf.setter
    def tire_pressure_lf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tire_pressure_lf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tire_pressure_lf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tire_pressure_lf = value

    @builtins.property
    def is_tire_pressure_rf_valid(self):
        """Message field 'is_tire_pressure_rf_valid'."""
        return self._is_tire_pressure_rf_valid

    @is_tire_pressure_rf_valid.setter
    def is_tire_pressure_rf_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_tire_pressure_rf_valid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'is_tire_pressure_rf_valid' field must be an integer in [-2147483648, 2147483647]"
        self._is_tire_pressure_rf_valid = value

    @builtins.property
    def tire_pressure_rf(self):
        """Message field 'tire_pressure_rf'."""
        return self._tire_pressure_rf

    @tire_pressure_rf.setter
    def tire_pressure_rf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tire_pressure_rf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tire_pressure_rf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tire_pressure_rf = value

    @builtins.property
    def is_tire_pressure_lr_valid(self):
        """Message field 'is_tire_pressure_lr_valid'."""
        return self._is_tire_pressure_lr_valid

    @is_tire_pressure_lr_valid.setter
    def is_tire_pressure_lr_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_tire_pressure_lr_valid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'is_tire_pressure_lr_valid' field must be an integer in [-2147483648, 2147483647]"
        self._is_tire_pressure_lr_valid = value

    @builtins.property
    def tire_pressure_lr(self):
        """Message field 'tire_pressure_lr'."""
        return self._tire_pressure_lr

    @tire_pressure_lr.setter
    def tire_pressure_lr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tire_pressure_lr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tire_pressure_lr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tire_pressure_lr = value

    @builtins.property
    def is_tire_pressure_rr_valid(self):
        """Message field 'is_tire_pressure_rr_valid'."""
        return self._is_tire_pressure_rr_valid

    @is_tire_pressure_rr_valid.setter
    def is_tire_pressure_rr_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_tire_pressure_rr_valid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'is_tire_pressure_rr_valid' field must be an integer in [-2147483648, 2147483647]"
        self._is_tire_pressure_rr_valid = value

    @builtins.property
    def tire_pressure_rr(self):
        """Message field 'tire_pressure_rr'."""
        return self._tire_pressure_rr

    @tire_pressure_rr.setter
    def tire_pressure_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tire_pressure_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tire_pressure_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tire_pressure_rr = value

    @builtins.property
    def battery_power_percentage(self):
        """Message field 'battery_power_percentage'."""
        return self._battery_power_percentage

    @battery_power_percentage.setter
    def battery_power_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_power_percentage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_power_percentage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_power_percentage = value

    @builtins.property
    def air_bag_status(self):
        """Message field 'air_bag_status'."""
        return self._air_bag_status

    @air_bag_status.setter
    def air_bag_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'air_bag_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'air_bag_status' field must be an integer in [-2147483648, 2147483647]"
        self._air_bag_status = value

    @builtins.property
    def charging_gun_status(self):
        """Message field 'charging_gun_status'."""
        return self._charging_gun_status

    @charging_gun_status.setter
    def charging_gun_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charging_gun_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'charging_gun_status' field must be an integer in [-2147483648, 2147483647]"
        self._charging_gun_status = value

    @builtins.property
    def vehicle_power_status(self):
        """Message field 'vehicle_power_status'."""
        return self._vehicle_power_status

    @vehicle_power_status.setter
    def vehicle_power_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_power_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vehicle_power_status' field must be an integer in [-2147483648, 2147483647]"
        self._vehicle_power_status = value

    @builtins.property
    def chassis_error_code(self):
        """Message field 'chassis_error_code'."""
        return self._chassis_error_code

    @chassis_error_code.setter
    def chassis_error_code(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'chassis_error_code' array.array() must have the type code of 'i'"
            self._chassis_error_code = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'chassis_error_code' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._chassis_error_code = array.array('i', value)
