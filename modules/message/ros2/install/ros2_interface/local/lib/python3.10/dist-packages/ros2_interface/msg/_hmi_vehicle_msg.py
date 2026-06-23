# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/HMIVehicleMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'chassis_error_code'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HMIVehicleMsg(type):
    """Metaclass of message 'HMIVehicleMsg'."""

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
                'ros2_interface.msg.HMIVehicleMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hmi_vehicle_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hmi_vehicle_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hmi_vehicle_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hmi_vehicle_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hmi_vehicle_msg

            from ros2_interface.msg import PointENU
            if PointENU.__class__._TYPE_SUPPORT is None:
                PointENU.__class__.__import_type_support__()

            from ros2_interface.msg import PointLLH
            if PointLLH.__class__._TYPE_SUPPORT is None:
                PointLLH.__class__.__import_type_support__()

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


class HMIVehicleMsg(metaclass=Metaclass_HMIVehicleMsg):
    """Message class 'HMIVehicleMsg'."""

    __slots__ = [
        '_header',
        '_driving_mode',
        '_gear_location',
        '_steering_value',
        '_accel_value',
        '_brake_value',
        '_speed_mps',
        '_position',
        '_utm_position',
        '_pitch',
        '_roll',
        '_heading',
        '_rtk_flag',
        '_origin_lat',
        '_origin_lon',
        '_current_ins_yaw',
        '_auto_safe',
        '_battery_power_percentage',
        '_charging_gun_status',
        '_chassis_error_code',
        '_brake_lamp_status',
        '_turn_lamp_status',
        '_mercator_position',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'driving_mode': 'int32',
        'gear_location': 'int32',
        'steering_value': 'double',
        'accel_value': 'double',
        'brake_value': 'double',
        'speed_mps': 'double',
        'position': 'ros2_interface/PointLLH',
        'utm_position': 'ros2_interface/PointENU',
        'pitch': 'double',
        'roll': 'double',
        'heading': 'double',
        'rtk_flag': 'int32',
        'origin_lat': 'double',
        'origin_lon': 'double',
        'current_ins_yaw': 'double',
        'auto_safe': 'int32',
        'battery_power_percentage': 'double',
        'charging_gun_status': 'int32',
        'chassis_error_code': 'sequence<int32>',
        'brake_lamp_status': 'int32',
        'turn_lamp_status': 'int32',
        'mercator_position': 'ros2_interface/PointENU',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PointLLH'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PointENU'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PointENU'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.driving_mode = kwargs.get('driving_mode', int())
        self.gear_location = kwargs.get('gear_location', int())
        self.steering_value = kwargs.get('steering_value', float())
        self.accel_value = kwargs.get('accel_value', float())
        self.brake_value = kwargs.get('brake_value', float())
        self.speed_mps = kwargs.get('speed_mps', float())
        from ros2_interface.msg import PointLLH
        self.position = kwargs.get('position', PointLLH())
        from ros2_interface.msg import PointENU
        self.utm_position = kwargs.get('utm_position', PointENU())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.heading = kwargs.get('heading', float())
        self.rtk_flag = kwargs.get('rtk_flag', int())
        self.origin_lat = kwargs.get('origin_lat', float())
        self.origin_lon = kwargs.get('origin_lon', float())
        self.current_ins_yaw = kwargs.get('current_ins_yaw', float())
        self.auto_safe = kwargs.get('auto_safe', int())
        self.battery_power_percentage = kwargs.get('battery_power_percentage', float())
        self.charging_gun_status = kwargs.get('charging_gun_status', int())
        self.chassis_error_code = array.array('i', kwargs.get('chassis_error_code', []))
        self.brake_lamp_status = kwargs.get('brake_lamp_status', int())
        self.turn_lamp_status = kwargs.get('turn_lamp_status', int())
        from ros2_interface.msg import PointENU
        self.mercator_position = kwargs.get('mercator_position', PointENU())

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
        if self.driving_mode != other.driving_mode:
            return False
        if self.gear_location != other.gear_location:
            return False
        if self.steering_value != other.steering_value:
            return False
        if self.accel_value != other.accel_value:
            return False
        if self.brake_value != other.brake_value:
            return False
        if self.speed_mps != other.speed_mps:
            return False
        if self.position != other.position:
            return False
        if self.utm_position != other.utm_position:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.heading != other.heading:
            return False
        if self.rtk_flag != other.rtk_flag:
            return False
        if self.origin_lat != other.origin_lat:
            return False
        if self.origin_lon != other.origin_lon:
            return False
        if self.current_ins_yaw != other.current_ins_yaw:
            return False
        if self.auto_safe != other.auto_safe:
            return False
        if self.battery_power_percentage != other.battery_power_percentage:
            return False
        if self.charging_gun_status != other.charging_gun_status:
            return False
        if self.chassis_error_code != other.chassis_error_code:
            return False
        if self.brake_lamp_status != other.brake_lamp_status:
            return False
        if self.turn_lamp_status != other.turn_lamp_status:
            return False
        if self.mercator_position != other.mercator_position:
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
    def steering_value(self):
        """Message field 'steering_value'."""
        return self._steering_value

    @steering_value.setter
    def steering_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_value = value

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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from ros2_interface.msg import PointLLH
            assert \
                isinstance(value, PointLLH), \
                "The 'position' field must be a sub message of type 'PointLLH'"
        self._position = value

    @builtins.property
    def utm_position(self):
        """Message field 'utm_position'."""
        return self._utm_position

    @utm_position.setter
    def utm_position(self, value):
        if __debug__:
            from ros2_interface.msg import PointENU
            assert \
                isinstance(value, PointENU), \
                "The 'utm_position' field must be a sub message of type 'PointENU'"
        self._utm_position = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading = value

    @builtins.property
    def rtk_flag(self):
        """Message field 'rtk_flag'."""
        return self._rtk_flag

    @rtk_flag.setter
    def rtk_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rtk_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rtk_flag' field must be an integer in [-2147483648, 2147483647]"
        self._rtk_flag = value

    @builtins.property
    def origin_lat(self):
        """Message field 'origin_lat'."""
        return self._origin_lat

    @origin_lat.setter
    def origin_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'origin_lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._origin_lat = value

    @builtins.property
    def origin_lon(self):
        """Message field 'origin_lon'."""
        return self._origin_lon

    @origin_lon.setter
    def origin_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'origin_lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._origin_lon = value

    @builtins.property
    def current_ins_yaw(self):
        """Message field 'current_ins_yaw'."""
        return self._current_ins_yaw

    @current_ins_yaw.setter
    def current_ins_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_ins_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_ins_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_ins_yaw = value

    @builtins.property
    def auto_safe(self):
        """Message field 'auto_safe'."""
        return self._auto_safe

    @auto_safe.setter
    def auto_safe(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_safe' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'auto_safe' field must be an integer in [-2147483648, 2147483647]"
        self._auto_safe = value

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
    def mercator_position(self):
        """Message field 'mercator_position'."""
        return self._mercator_position

    @mercator_position.setter
    def mercator_position(self, value):
        if __debug__:
            from ros2_interface.msg import PointENU
            assert \
                isinstance(value, PointENU), \
                "The 'mercator_position' field must be a sub message of type 'PointENU'"
        self._mercator_position = value
