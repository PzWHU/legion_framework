# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/WheelInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelInfo(type):
    """Metaclass of message 'WheelInfo'."""

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
                'ros2_interface.msg.WheelInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel_info

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


class WheelInfo(metaclass=Metaclass_WheelInfo):
    """Message class 'WheelInfo'."""

    __slots__ = [
        '_header',
        '_moving_status',
        '_steer_driving_mode',
        '_steering_value',
        '_steering_torque_nm',
        '_steering_rate_dps',
        '_speed_mps',
        '_veh_spd_vld',
        '_gear',
        '_gear_vld',
        '_wheel_direction_rr',
        '_wheel_spd_rr',
        '_wheel_direction_rl',
        '_wheel_spd_rl',
        '_wheel_direction_fr',
        '_wheel_spd_fr',
        '_wheel_direction_fl',
        '_wheel_spd_fl',
        '_yaw_rate',
        '_wss_fl_edges_sum',
        '_wss_fr_edges_sum',
        '_wss_rl_edges_sum',
        '_wss_rr_edges_sum',
        '_wss_fl_edges_sum_vld',
        '_wss_fr_edges_sum_vld',
        '_wss_rl_edges_sum_vld',
        '_wss_rr_edges_sum_vld',
        '_veh_lat_accel',
        '_veh_lgt_accel',
        '_veh_lat_accel_vld',
        '_veh_lgt_accel_vld',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'moving_status': 'int32',
        'steer_driving_mode': 'int32',
        'steering_value': 'double',
        'steering_torque_nm': 'double',
        'steering_rate_dps': 'double',
        'speed_mps': 'double',
        'veh_spd_vld': 'boolean',
        'gear': 'int32',
        'gear_vld': 'boolean',
        'wheel_direction_rr': 'int32',
        'wheel_spd_rr': 'double',
        'wheel_direction_rl': 'int32',
        'wheel_spd_rl': 'double',
        'wheel_direction_fr': 'int32',
        'wheel_spd_fr': 'double',
        'wheel_direction_fl': 'int32',
        'wheel_spd_fl': 'double',
        'yaw_rate': 'double',
        'wss_fl_edges_sum': 'int32',
        'wss_fr_edges_sum': 'int32',
        'wss_rl_edges_sum': 'int32',
        'wss_rr_edges_sum': 'int32',
        'wss_fl_edges_sum_vld': 'boolean',
        'wss_fr_edges_sum_vld': 'boolean',
        'wss_rl_edges_sum_vld': 'boolean',
        'wss_rr_edges_sum_vld': 'boolean',
        'veh_lat_accel': 'double',
        'veh_lgt_accel': 'double',
        'veh_lat_accel_vld': 'boolean',
        'veh_lgt_accel_vld': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.moving_status = kwargs.get('moving_status', int())
        self.steer_driving_mode = kwargs.get('steer_driving_mode', int())
        self.steering_value = kwargs.get('steering_value', float())
        self.steering_torque_nm = kwargs.get('steering_torque_nm', float())
        self.steering_rate_dps = kwargs.get('steering_rate_dps', float())
        self.speed_mps = kwargs.get('speed_mps', float())
        self.veh_spd_vld = kwargs.get('veh_spd_vld', bool())
        self.gear = kwargs.get('gear', int())
        self.gear_vld = kwargs.get('gear_vld', bool())
        self.wheel_direction_rr = kwargs.get('wheel_direction_rr', int())
        self.wheel_spd_rr = kwargs.get('wheel_spd_rr', float())
        self.wheel_direction_rl = kwargs.get('wheel_direction_rl', int())
        self.wheel_spd_rl = kwargs.get('wheel_spd_rl', float())
        self.wheel_direction_fr = kwargs.get('wheel_direction_fr', int())
        self.wheel_spd_fr = kwargs.get('wheel_spd_fr', float())
        self.wheel_direction_fl = kwargs.get('wheel_direction_fl', int())
        self.wheel_spd_fl = kwargs.get('wheel_spd_fl', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.wss_fl_edges_sum = kwargs.get('wss_fl_edges_sum', int())
        self.wss_fr_edges_sum = kwargs.get('wss_fr_edges_sum', int())
        self.wss_rl_edges_sum = kwargs.get('wss_rl_edges_sum', int())
        self.wss_rr_edges_sum = kwargs.get('wss_rr_edges_sum', int())
        self.wss_fl_edges_sum_vld = kwargs.get('wss_fl_edges_sum_vld', bool())
        self.wss_fr_edges_sum_vld = kwargs.get('wss_fr_edges_sum_vld', bool())
        self.wss_rl_edges_sum_vld = kwargs.get('wss_rl_edges_sum_vld', bool())
        self.wss_rr_edges_sum_vld = kwargs.get('wss_rr_edges_sum_vld', bool())
        self.veh_lat_accel = kwargs.get('veh_lat_accel', float())
        self.veh_lgt_accel = kwargs.get('veh_lgt_accel', float())
        self.veh_lat_accel_vld = kwargs.get('veh_lat_accel_vld', bool())
        self.veh_lgt_accel_vld = kwargs.get('veh_lgt_accel_vld', bool())

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
        if self.steer_driving_mode != other.steer_driving_mode:
            return False
        if self.steering_value != other.steering_value:
            return False
        if self.steering_torque_nm != other.steering_torque_nm:
            return False
        if self.steering_rate_dps != other.steering_rate_dps:
            return False
        if self.speed_mps != other.speed_mps:
            return False
        if self.veh_spd_vld != other.veh_spd_vld:
            return False
        if self.gear != other.gear:
            return False
        if self.gear_vld != other.gear_vld:
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
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.wss_fl_edges_sum != other.wss_fl_edges_sum:
            return False
        if self.wss_fr_edges_sum != other.wss_fr_edges_sum:
            return False
        if self.wss_rl_edges_sum != other.wss_rl_edges_sum:
            return False
        if self.wss_rr_edges_sum != other.wss_rr_edges_sum:
            return False
        if self.wss_fl_edges_sum_vld != other.wss_fl_edges_sum_vld:
            return False
        if self.wss_fr_edges_sum_vld != other.wss_fr_edges_sum_vld:
            return False
        if self.wss_rl_edges_sum_vld != other.wss_rl_edges_sum_vld:
            return False
        if self.wss_rr_edges_sum_vld != other.wss_rr_edges_sum_vld:
            return False
        if self.veh_lat_accel != other.veh_lat_accel:
            return False
        if self.veh_lgt_accel != other.veh_lgt_accel:
            return False
        if self.veh_lat_accel_vld != other.veh_lat_accel_vld:
            return False
        if self.veh_lgt_accel_vld != other.veh_lgt_accel_vld:
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
    def steering_rate_dps(self):
        """Message field 'steering_rate_dps'."""
        return self._steering_rate_dps

    @steering_rate_dps.setter
    def steering_rate_dps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_rate_dps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_rate_dps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_rate_dps = value

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
    def veh_spd_vld(self):
        """Message field 'veh_spd_vld'."""
        return self._veh_spd_vld

    @veh_spd_vld.setter
    def veh_spd_vld(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'veh_spd_vld' field must be of type 'bool'"
        self._veh_spd_vld = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gear' field must be an integer in [-2147483648, 2147483647]"
        self._gear = value

    @builtins.property
    def gear_vld(self):
        """Message field 'gear_vld'."""
        return self._gear_vld

    @gear_vld.setter
    def gear_vld(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gear_vld' field must be of type 'bool'"
        self._gear_vld = value

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
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rate = value

    @builtins.property
    def wss_fl_edges_sum(self):
        """Message field 'wss_fl_edges_sum'."""
        return self._wss_fl_edges_sum

    @wss_fl_edges_sum.setter
    def wss_fl_edges_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wss_fl_edges_sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wss_fl_edges_sum' field must be an integer in [-2147483648, 2147483647]"
        self._wss_fl_edges_sum = value

    @builtins.property
    def wss_fr_edges_sum(self):
        """Message field 'wss_fr_edges_sum'."""
        return self._wss_fr_edges_sum

    @wss_fr_edges_sum.setter
    def wss_fr_edges_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wss_fr_edges_sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wss_fr_edges_sum' field must be an integer in [-2147483648, 2147483647]"
        self._wss_fr_edges_sum = value

    @builtins.property
    def wss_rl_edges_sum(self):
        """Message field 'wss_rl_edges_sum'."""
        return self._wss_rl_edges_sum

    @wss_rl_edges_sum.setter
    def wss_rl_edges_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wss_rl_edges_sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wss_rl_edges_sum' field must be an integer in [-2147483648, 2147483647]"
        self._wss_rl_edges_sum = value

    @builtins.property
    def wss_rr_edges_sum(self):
        """Message field 'wss_rr_edges_sum'."""
        return self._wss_rr_edges_sum

    @wss_rr_edges_sum.setter
    def wss_rr_edges_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wss_rr_edges_sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wss_rr_edges_sum' field must be an integer in [-2147483648, 2147483647]"
        self._wss_rr_edges_sum = value

    @builtins.property
    def wss_fl_edges_sum_vld(self):
        """Message field 'wss_fl_edges_sum_vld'."""
        return self._wss_fl_edges_sum_vld

    @wss_fl_edges_sum_vld.setter
    def wss_fl_edges_sum_vld(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wss_fl_edges_sum_vld' field must be of type 'bool'"
        self._wss_fl_edges_sum_vld = value

    @builtins.property
    def wss_fr_edges_sum_vld(self):
        """Message field 'wss_fr_edges_sum_vld'."""
        return self._wss_fr_edges_sum_vld

    @wss_fr_edges_sum_vld.setter
    def wss_fr_edges_sum_vld(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wss_fr_edges_sum_vld' field must be of type 'bool'"
        self._wss_fr_edges_sum_vld = value

    @builtins.property
    def wss_rl_edges_sum_vld(self):
        """Message field 'wss_rl_edges_sum_vld'."""
        return self._wss_rl_edges_sum_vld

    @wss_rl_edges_sum_vld.setter
    def wss_rl_edges_sum_vld(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wss_rl_edges_sum_vld' field must be of type 'bool'"
        self._wss_rl_edges_sum_vld = value

    @builtins.property
    def wss_rr_edges_sum_vld(self):
        """Message field 'wss_rr_edges_sum_vld'."""
        return self._wss_rr_edges_sum_vld

    @wss_rr_edges_sum_vld.setter
    def wss_rr_edges_sum_vld(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wss_rr_edges_sum_vld' field must be of type 'bool'"
        self._wss_rr_edges_sum_vld = value

    @builtins.property
    def veh_lat_accel(self):
        """Message field 'veh_lat_accel'."""
        return self._veh_lat_accel

    @veh_lat_accel.setter
    def veh_lat_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_lat_accel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'veh_lat_accel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._veh_lat_accel = value

    @builtins.property
    def veh_lgt_accel(self):
        """Message field 'veh_lgt_accel'."""
        return self._veh_lgt_accel

    @veh_lgt_accel.setter
    def veh_lgt_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_lgt_accel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'veh_lgt_accel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._veh_lgt_accel = value

    @builtins.property
    def veh_lat_accel_vld(self):
        """Message field 'veh_lat_accel_vld'."""
        return self._veh_lat_accel_vld

    @veh_lat_accel_vld.setter
    def veh_lat_accel_vld(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'veh_lat_accel_vld' field must be of type 'bool'"
        self._veh_lat_accel_vld = value

    @builtins.property
    def veh_lgt_accel_vld(self):
        """Message field 'veh_lgt_accel_vld'."""
        return self._veh_lgt_accel_vld

    @veh_lgt_accel_vld.setter
    def veh_lgt_accel_vld(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'veh_lgt_accel_vld' field must be of type 'bool'"
        self._veh_lgt_accel_vld = value
