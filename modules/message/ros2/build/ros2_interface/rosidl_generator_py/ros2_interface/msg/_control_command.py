# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/ControlCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlCommand(type):
    """Metaclass of message 'ControlCommand'."""

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
                'ros2_interface.msg.ControlCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_command

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


class ControlCommand(metaclass=Metaclass_ControlCommand):
    """Message class 'ControlCommand'."""

    __slots__ = [
        '_header',
        '_steer_driving_mode',
        '_front_steering_target',
        '_rear_steering_target',
        '_front_steering_rate',
        '_rear_steering_rate',
        '_accel_driving_mode',
        '_accel_value',
        '_brake_driving_mode',
        '_brake_value',
        '_backup_brake_driving_mode',
        '_backup_brake_value',
        '_epb_driving_mode',
        '_epb_level',
        '_gear_driving_mode',
        '_emergency_brake_enable',
        '_gear_location',
        '_speed',
        '_acceleration',
        '_turn_lamp_ctrl',
        '_high_beam_ctrl',
        '_low_beam_ctrl',
        '_horn_ctrl',
        '_front_wiper_ctrl',
        '_rear_wiper_ctrl',
        '_position_lamp_ctrl',
        '_front_fog_lamp_ctrl',
        '_rear_fog_lamp_ctrl',
        '_brake_lamp_ctrl',
        '_alarm_lamp_ctrl',
        '_lf_door_ctrl',
        '_rf_door_ctrl',
        '_lr_door_ctrl',
        '_rr_door_ctrl',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'steer_driving_mode': 'int32',
        'front_steering_target': 'double',
        'rear_steering_target': 'double',
        'front_steering_rate': 'double',
        'rear_steering_rate': 'double',
        'accel_driving_mode': 'int32',
        'accel_value': 'double',
        'brake_driving_mode': 'int32',
        'brake_value': 'double',
        'backup_brake_driving_mode': 'int32',
        'backup_brake_value': 'double',
        'epb_driving_mode': 'int32',
        'epb_level': 'int32',
        'gear_driving_mode': 'int32',
        'emergency_brake_enable': 'int8',
        'gear_location': 'int32',
        'speed': 'double',
        'acceleration': 'double',
        'turn_lamp_ctrl': 'int32',
        'high_beam_ctrl': 'int32',
        'low_beam_ctrl': 'int32',
        'horn_ctrl': 'int32',
        'front_wiper_ctrl': 'int32',
        'rear_wiper_ctrl': 'int32',
        'position_lamp_ctrl': 'int32',
        'front_fog_lamp_ctrl': 'int32',
        'rear_fog_lamp_ctrl': 'int32',
        'brake_lamp_ctrl': 'int32',
        'alarm_lamp_ctrl': 'int32',
        'lf_door_ctrl': 'int32',
        'rf_door_ctrl': 'int32',
        'lr_door_ctrl': 'int32',
        'rr_door_ctrl': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.steer_driving_mode = kwargs.get('steer_driving_mode', int())
        self.front_steering_target = kwargs.get('front_steering_target', float())
        self.rear_steering_target = kwargs.get('rear_steering_target', float())
        self.front_steering_rate = kwargs.get('front_steering_rate', float())
        self.rear_steering_rate = kwargs.get('rear_steering_rate', float())
        self.accel_driving_mode = kwargs.get('accel_driving_mode', int())
        self.accel_value = kwargs.get('accel_value', float())
        self.brake_driving_mode = kwargs.get('brake_driving_mode', int())
        self.brake_value = kwargs.get('brake_value', float())
        self.backup_brake_driving_mode = kwargs.get('backup_brake_driving_mode', int())
        self.backup_brake_value = kwargs.get('backup_brake_value', float())
        self.epb_driving_mode = kwargs.get('epb_driving_mode', int())
        self.epb_level = kwargs.get('epb_level', int())
        self.gear_driving_mode = kwargs.get('gear_driving_mode', int())
        self.emergency_brake_enable = kwargs.get('emergency_brake_enable', int())
        self.gear_location = kwargs.get('gear_location', int())
        self.speed = kwargs.get('speed', float())
        self.acceleration = kwargs.get('acceleration', float())
        self.turn_lamp_ctrl = kwargs.get('turn_lamp_ctrl', int())
        self.high_beam_ctrl = kwargs.get('high_beam_ctrl', int())
        self.low_beam_ctrl = kwargs.get('low_beam_ctrl', int())
        self.horn_ctrl = kwargs.get('horn_ctrl', int())
        self.front_wiper_ctrl = kwargs.get('front_wiper_ctrl', int())
        self.rear_wiper_ctrl = kwargs.get('rear_wiper_ctrl', int())
        self.position_lamp_ctrl = kwargs.get('position_lamp_ctrl', int())
        self.front_fog_lamp_ctrl = kwargs.get('front_fog_lamp_ctrl', int())
        self.rear_fog_lamp_ctrl = kwargs.get('rear_fog_lamp_ctrl', int())
        self.brake_lamp_ctrl = kwargs.get('brake_lamp_ctrl', int())
        self.alarm_lamp_ctrl = kwargs.get('alarm_lamp_ctrl', int())
        self.lf_door_ctrl = kwargs.get('lf_door_ctrl', int())
        self.rf_door_ctrl = kwargs.get('rf_door_ctrl', int())
        self.lr_door_ctrl = kwargs.get('lr_door_ctrl', int())
        self.rr_door_ctrl = kwargs.get('rr_door_ctrl', int())

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
        if self.steer_driving_mode != other.steer_driving_mode:
            return False
        if self.front_steering_target != other.front_steering_target:
            return False
        if self.rear_steering_target != other.rear_steering_target:
            return False
        if self.front_steering_rate != other.front_steering_rate:
            return False
        if self.rear_steering_rate != other.rear_steering_rate:
            return False
        if self.accel_driving_mode != other.accel_driving_mode:
            return False
        if self.accel_value != other.accel_value:
            return False
        if self.brake_driving_mode != other.brake_driving_mode:
            return False
        if self.brake_value != other.brake_value:
            return False
        if self.backup_brake_driving_mode != other.backup_brake_driving_mode:
            return False
        if self.backup_brake_value != other.backup_brake_value:
            return False
        if self.epb_driving_mode != other.epb_driving_mode:
            return False
        if self.epb_level != other.epb_level:
            return False
        if self.gear_driving_mode != other.gear_driving_mode:
            return False
        if self.emergency_brake_enable != other.emergency_brake_enable:
            return False
        if self.gear_location != other.gear_location:
            return False
        if self.speed != other.speed:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.turn_lamp_ctrl != other.turn_lamp_ctrl:
            return False
        if self.high_beam_ctrl != other.high_beam_ctrl:
            return False
        if self.low_beam_ctrl != other.low_beam_ctrl:
            return False
        if self.horn_ctrl != other.horn_ctrl:
            return False
        if self.front_wiper_ctrl != other.front_wiper_ctrl:
            return False
        if self.rear_wiper_ctrl != other.rear_wiper_ctrl:
            return False
        if self.position_lamp_ctrl != other.position_lamp_ctrl:
            return False
        if self.front_fog_lamp_ctrl != other.front_fog_lamp_ctrl:
            return False
        if self.rear_fog_lamp_ctrl != other.rear_fog_lamp_ctrl:
            return False
        if self.brake_lamp_ctrl != other.brake_lamp_ctrl:
            return False
        if self.alarm_lamp_ctrl != other.alarm_lamp_ctrl:
            return False
        if self.lf_door_ctrl != other.lf_door_ctrl:
            return False
        if self.rf_door_ctrl != other.rf_door_ctrl:
            return False
        if self.lr_door_ctrl != other.lr_door_ctrl:
            return False
        if self.rr_door_ctrl != other.rr_door_ctrl:
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
    def front_steering_target(self):
        """Message field 'front_steering_target'."""
        return self._front_steering_target

    @front_steering_target.setter
    def front_steering_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steering_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steering_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steering_target = value

    @builtins.property
    def rear_steering_target(self):
        """Message field 'rear_steering_target'."""
        return self._rear_steering_target

    @rear_steering_target.setter
    def rear_steering_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steering_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steering_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steering_target = value

    @builtins.property
    def front_steering_rate(self):
        """Message field 'front_steering_rate'."""
        return self._front_steering_rate

    @front_steering_rate.setter
    def front_steering_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steering_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steering_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steering_rate = value

    @builtins.property
    def rear_steering_rate(self):
        """Message field 'rear_steering_rate'."""
        return self._rear_steering_rate

    @rear_steering_rate.setter
    def rear_steering_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steering_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steering_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steering_rate = value

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
    def emergency_brake_enable(self):
        """Message field 'emergency_brake_enable'."""
        return self._emergency_brake_enable

    @emergency_brake_enable.setter
    def emergency_brake_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emergency_brake_enable' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'emergency_brake_enable' field must be an integer in [-128, 127]"
        self._emergency_brake_enable = value

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
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration = value

    @builtins.property
    def turn_lamp_ctrl(self):
        """Message field 'turn_lamp_ctrl'."""
        return self._turn_lamp_ctrl

    @turn_lamp_ctrl.setter
    def turn_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'turn_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._turn_lamp_ctrl = value

    @builtins.property
    def high_beam_ctrl(self):
        """Message field 'high_beam_ctrl'."""
        return self._high_beam_ctrl

    @high_beam_ctrl.setter
    def high_beam_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'high_beam_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'high_beam_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._high_beam_ctrl = value

    @builtins.property
    def low_beam_ctrl(self):
        """Message field 'low_beam_ctrl'."""
        return self._low_beam_ctrl

    @low_beam_ctrl.setter
    def low_beam_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'low_beam_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'low_beam_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._low_beam_ctrl = value

    @builtins.property
    def horn_ctrl(self):
        """Message field 'horn_ctrl'."""
        return self._horn_ctrl

    @horn_ctrl.setter
    def horn_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'horn_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'horn_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._horn_ctrl = value

    @builtins.property
    def front_wiper_ctrl(self):
        """Message field 'front_wiper_ctrl'."""
        return self._front_wiper_ctrl

    @front_wiper_ctrl.setter
    def front_wiper_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_wiper_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_wiper_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._front_wiper_ctrl = value

    @builtins.property
    def rear_wiper_ctrl(self):
        """Message field 'rear_wiper_ctrl'."""
        return self._rear_wiper_ctrl

    @rear_wiper_ctrl.setter
    def rear_wiper_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_wiper_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_wiper_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._rear_wiper_ctrl = value

    @builtins.property
    def position_lamp_ctrl(self):
        """Message field 'position_lamp_ctrl'."""
        return self._position_lamp_ctrl

    @position_lamp_ctrl.setter
    def position_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._position_lamp_ctrl = value

    @builtins.property
    def front_fog_lamp_ctrl(self):
        """Message field 'front_fog_lamp_ctrl'."""
        return self._front_fog_lamp_ctrl

    @front_fog_lamp_ctrl.setter
    def front_fog_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_fog_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_fog_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._front_fog_lamp_ctrl = value

    @builtins.property
    def rear_fog_lamp_ctrl(self):
        """Message field 'rear_fog_lamp_ctrl'."""
        return self._rear_fog_lamp_ctrl

    @rear_fog_lamp_ctrl.setter
    def rear_fog_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_fog_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_fog_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._rear_fog_lamp_ctrl = value

    @builtins.property
    def brake_lamp_ctrl(self):
        """Message field 'brake_lamp_ctrl'."""
        return self._brake_lamp_ctrl

    @brake_lamp_ctrl.setter
    def brake_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brake_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._brake_lamp_ctrl = value

    @builtins.property
    def alarm_lamp_ctrl(self):
        """Message field 'alarm_lamp_ctrl'."""
        return self._alarm_lamp_ctrl

    @alarm_lamp_ctrl.setter
    def alarm_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'alarm_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._alarm_lamp_ctrl = value

    @builtins.property
    def lf_door_ctrl(self):
        """Message field 'lf_door_ctrl'."""
        return self._lf_door_ctrl

    @lf_door_ctrl.setter
    def lf_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lf_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lf_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._lf_door_ctrl = value

    @builtins.property
    def rf_door_ctrl(self):
        """Message field 'rf_door_ctrl'."""
        return self._rf_door_ctrl

    @rf_door_ctrl.setter
    def rf_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rf_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rf_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._rf_door_ctrl = value

    @builtins.property
    def lr_door_ctrl(self):
        """Message field 'lr_door_ctrl'."""
        return self._lr_door_ctrl

    @lr_door_ctrl.setter
    def lr_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lr_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lr_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._lr_door_ctrl = value

    @builtins.property
    def rr_door_ctrl(self):
        """Message field 'rr_door_ctrl'."""
        return self._rr_door_ctrl

    @rr_door_ctrl.setter
    def rr_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rr_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rr_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._rr_door_ctrl = value
