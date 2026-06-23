# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/VehicleParam.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleParam(type):
    """Metaclass of message 'VehicleParam'."""

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
                'ros2_interface.msg.VehicleParam')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_param
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_param
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_param
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_param
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_param

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleParam(metaclass=Metaclass_VehicleParam):
    """Message class 'VehicleParam'."""

    __slots__ = [
        '_brand',
        '_steer_mode',
        '_length',
        '_width',
        '_height',
        '_mass_fl',
        '_mass_fr',
        '_mass_rl',
        '_mass_rr',
        '_wheel_radius',
        '_wheelbase',
        '_front_edge_to_center',
        '_back_edge_to_center',
        '_lf',
        '_lr',
        '_cf',
        '_cr',
        '_steer_ratio',
        '_rolling_coefficient',
        '_air_density',
        '_air_damping_coefficient',
        '_max_front_steer_angle',
        '_min_front_steer_angle',
        '_max_rear_steer_angle',
        '_min_rear_steer_angle',
        '_speed_limit',
        '_max_brake_value',
        '_min_brake_value',
        '_max_accel_value',
        '_min_accel_value',
        '_speed_deadzone',
        '_standstill_acceleration',
        '_max_front_steer_angle_rate',
        '_max_rear_steer_angle_rate',
        '_max_abs_speed_when_stopped',
        '_max_abs_speed_when_stopped_duration',
        '_brake_value_when_gear_transitioning',
        '_accel_deadzone',
        '_brake_deadzone',
        '_acceleration_in_idle',
        '_deceleration_in_idle',
        '_max_acceleration_jerk',
        '_max_acceleration',
        '_max_deceleration',
        '_min_turning_radius',
    ]

    _fields_and_field_types = {
        'brand': 'string',
        'steer_mode': 'int32',
        'length': 'double',
        'width': 'double',
        'height': 'double',
        'mass_fl': 'double',
        'mass_fr': 'double',
        'mass_rl': 'double',
        'mass_rr': 'double',
        'wheel_radius': 'double',
        'wheelbase': 'double',
        'front_edge_to_center': 'double',
        'back_edge_to_center': 'double',
        'lf': 'double',
        'lr': 'double',
        'cf': 'double',
        'cr': 'double',
        'steer_ratio': 'double',
        'rolling_coefficient': 'double',
        'air_density': 'double',
        'air_damping_coefficient': 'double',
        'max_front_steer_angle': 'double',
        'min_front_steer_angle': 'double',
        'max_rear_steer_angle': 'double',
        'min_rear_steer_angle': 'double',
        'speed_limit': 'double',
        'max_brake_value': 'double',
        'min_brake_value': 'double',
        'max_accel_value': 'double',
        'min_accel_value': 'double',
        'speed_deadzone': 'double',
        'standstill_acceleration': 'double',
        'max_front_steer_angle_rate': 'double',
        'max_rear_steer_angle_rate': 'double',
        'max_abs_speed_when_stopped': 'double',
        'max_abs_speed_when_stopped_duration': 'double',
        'brake_value_when_gear_transitioning': 'double',
        'accel_deadzone': 'double',
        'brake_deadzone': 'double',
        'acceleration_in_idle': 'double',
        'deceleration_in_idle': 'double',
        'max_acceleration_jerk': 'double',
        'max_acceleration': 'double',
        'max_deceleration': 'double',
        'min_turning_radius': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brand = kwargs.get('brand', str())
        self.steer_mode = kwargs.get('steer_mode', int())
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.height = kwargs.get('height', float())
        self.mass_fl = kwargs.get('mass_fl', float())
        self.mass_fr = kwargs.get('mass_fr', float())
        self.mass_rl = kwargs.get('mass_rl', float())
        self.mass_rr = kwargs.get('mass_rr', float())
        self.wheel_radius = kwargs.get('wheel_radius', float())
        self.wheelbase = kwargs.get('wheelbase', float())
        self.front_edge_to_center = kwargs.get('front_edge_to_center', float())
        self.back_edge_to_center = kwargs.get('back_edge_to_center', float())
        self.lf = kwargs.get('lf', float())
        self.lr = kwargs.get('lr', float())
        self.cf = kwargs.get('cf', float())
        self.cr = kwargs.get('cr', float())
        self.steer_ratio = kwargs.get('steer_ratio', float())
        self.rolling_coefficient = kwargs.get('rolling_coefficient', float())
        self.air_density = kwargs.get('air_density', float())
        self.air_damping_coefficient = kwargs.get('air_damping_coefficient', float())
        self.max_front_steer_angle = kwargs.get('max_front_steer_angle', float())
        self.min_front_steer_angle = kwargs.get('min_front_steer_angle', float())
        self.max_rear_steer_angle = kwargs.get('max_rear_steer_angle', float())
        self.min_rear_steer_angle = kwargs.get('min_rear_steer_angle', float())
        self.speed_limit = kwargs.get('speed_limit', float())
        self.max_brake_value = kwargs.get('max_brake_value', float())
        self.min_brake_value = kwargs.get('min_brake_value', float())
        self.max_accel_value = kwargs.get('max_accel_value', float())
        self.min_accel_value = kwargs.get('min_accel_value', float())
        self.speed_deadzone = kwargs.get('speed_deadzone', float())
        self.standstill_acceleration = kwargs.get('standstill_acceleration', float())
        self.max_front_steer_angle_rate = kwargs.get('max_front_steer_angle_rate', float())
        self.max_rear_steer_angle_rate = kwargs.get('max_rear_steer_angle_rate', float())
        self.max_abs_speed_when_stopped = kwargs.get('max_abs_speed_when_stopped', float())
        self.max_abs_speed_when_stopped_duration = kwargs.get('max_abs_speed_when_stopped_duration', float())
        self.brake_value_when_gear_transitioning = kwargs.get('brake_value_when_gear_transitioning', float())
        self.accel_deadzone = kwargs.get('accel_deadzone', float())
        self.brake_deadzone = kwargs.get('brake_deadzone', float())
        self.acceleration_in_idle = kwargs.get('acceleration_in_idle', float())
        self.deceleration_in_idle = kwargs.get('deceleration_in_idle', float())
        self.max_acceleration_jerk = kwargs.get('max_acceleration_jerk', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())
        self.max_deceleration = kwargs.get('max_deceleration', float())
        self.min_turning_radius = kwargs.get('min_turning_radius', float())

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
        if self.brand != other.brand:
            return False
        if self.steer_mode != other.steer_mode:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.mass_fl != other.mass_fl:
            return False
        if self.mass_fr != other.mass_fr:
            return False
        if self.mass_rl != other.mass_rl:
            return False
        if self.mass_rr != other.mass_rr:
            return False
        if self.wheel_radius != other.wheel_radius:
            return False
        if self.wheelbase != other.wheelbase:
            return False
        if self.front_edge_to_center != other.front_edge_to_center:
            return False
        if self.back_edge_to_center != other.back_edge_to_center:
            return False
        if self.lf != other.lf:
            return False
        if self.lr != other.lr:
            return False
        if self.cf != other.cf:
            return False
        if self.cr != other.cr:
            return False
        if self.steer_ratio != other.steer_ratio:
            return False
        if self.rolling_coefficient != other.rolling_coefficient:
            return False
        if self.air_density != other.air_density:
            return False
        if self.air_damping_coefficient != other.air_damping_coefficient:
            return False
        if self.max_front_steer_angle != other.max_front_steer_angle:
            return False
        if self.min_front_steer_angle != other.min_front_steer_angle:
            return False
        if self.max_rear_steer_angle != other.max_rear_steer_angle:
            return False
        if self.min_rear_steer_angle != other.min_rear_steer_angle:
            return False
        if self.speed_limit != other.speed_limit:
            return False
        if self.max_brake_value != other.max_brake_value:
            return False
        if self.min_brake_value != other.min_brake_value:
            return False
        if self.max_accel_value != other.max_accel_value:
            return False
        if self.min_accel_value != other.min_accel_value:
            return False
        if self.speed_deadzone != other.speed_deadzone:
            return False
        if self.standstill_acceleration != other.standstill_acceleration:
            return False
        if self.max_front_steer_angle_rate != other.max_front_steer_angle_rate:
            return False
        if self.max_rear_steer_angle_rate != other.max_rear_steer_angle_rate:
            return False
        if self.max_abs_speed_when_stopped != other.max_abs_speed_when_stopped:
            return False
        if self.max_abs_speed_when_stopped_duration != other.max_abs_speed_when_stopped_duration:
            return False
        if self.brake_value_when_gear_transitioning != other.brake_value_when_gear_transitioning:
            return False
        if self.accel_deadzone != other.accel_deadzone:
            return False
        if self.brake_deadzone != other.brake_deadzone:
            return False
        if self.acceleration_in_idle != other.acceleration_in_idle:
            return False
        if self.deceleration_in_idle != other.deceleration_in_idle:
            return False
        if self.max_acceleration_jerk != other.max_acceleration_jerk:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.max_deceleration != other.max_deceleration:
            return False
        if self.min_turning_radius != other.min_turning_radius:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brand(self):
        """Message field 'brand'."""
        return self._brand

    @brand.setter
    def brand(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'brand' field must be of type 'str'"
        self._brand = value

    @builtins.property
    def steer_mode(self):
        """Message field 'steer_mode'."""
        return self._steer_mode

    @steer_mode.setter
    def steer_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'steer_mode' field must be an integer in [-2147483648, 2147483647]"
        self._steer_mode = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height = value

    @builtins.property
    def mass_fl(self):
        """Message field 'mass_fl'."""
        return self._mass_fl

    @mass_fl.setter
    def mass_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mass_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mass_fl = value

    @builtins.property
    def mass_fr(self):
        """Message field 'mass_fr'."""
        return self._mass_fr

    @mass_fr.setter
    def mass_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mass_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mass_fr = value

    @builtins.property
    def mass_rl(self):
        """Message field 'mass_rl'."""
        return self._mass_rl

    @mass_rl.setter
    def mass_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mass_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mass_rl = value

    @builtins.property
    def mass_rr(self):
        """Message field 'mass_rr'."""
        return self._mass_rr

    @mass_rr.setter
    def mass_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mass_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mass_rr = value

    @builtins.property
    def wheel_radius(self):
        """Message field 'wheel_radius'."""
        return self._wheel_radius

    @wheel_radius.setter
    def wheel_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_radius = value

    @builtins.property
    def wheelbase(self):
        """Message field 'wheelbase'."""
        return self._wheelbase

    @wheelbase.setter
    def wheelbase(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheelbase' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheelbase' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheelbase = value

    @builtins.property
    def front_edge_to_center(self):
        """Message field 'front_edge_to_center'."""
        return self._front_edge_to_center

    @front_edge_to_center.setter
    def front_edge_to_center(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_edge_to_center' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_edge_to_center' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_edge_to_center = value

    @builtins.property
    def back_edge_to_center(self):
        """Message field 'back_edge_to_center'."""
        return self._back_edge_to_center

    @back_edge_to_center.setter
    def back_edge_to_center(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'back_edge_to_center' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'back_edge_to_center' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._back_edge_to_center = value

    @builtins.property
    def lf(self):
        """Message field 'lf'."""
        return self._lf

    @lf.setter
    def lf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lf = value

    @builtins.property
    def lr(self):
        """Message field 'lr'."""
        return self._lr

    @lr.setter
    def lr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lr = value

    @builtins.property
    def cf(self):
        """Message field 'cf'."""
        return self._cf

    @cf.setter
    def cf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cf = value

    @builtins.property
    def cr(self):
        """Message field 'cr'."""
        return self._cr

    @cr.setter
    def cr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cr = value

    @builtins.property
    def steer_ratio(self):
        """Message field 'steer_ratio'."""
        return self._steer_ratio

    @steer_ratio.setter
    def steer_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steer_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steer_ratio = value

    @builtins.property
    def rolling_coefficient(self):
        """Message field 'rolling_coefficient'."""
        return self._rolling_coefficient

    @rolling_coefficient.setter
    def rolling_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rolling_coefficient' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rolling_coefficient' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rolling_coefficient = value

    @builtins.property
    def air_density(self):
        """Message field 'air_density'."""
        return self._air_density

    @air_density.setter
    def air_density(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'air_density' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'air_density' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._air_density = value

    @builtins.property
    def air_damping_coefficient(self):
        """Message field 'air_damping_coefficient'."""
        return self._air_damping_coefficient

    @air_damping_coefficient.setter
    def air_damping_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'air_damping_coefficient' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'air_damping_coefficient' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._air_damping_coefficient = value

    @builtins.property
    def max_front_steer_angle(self):
        """Message field 'max_front_steer_angle'."""
        return self._max_front_steer_angle

    @max_front_steer_angle.setter
    def max_front_steer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_front_steer_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_front_steer_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_front_steer_angle = value

    @builtins.property
    def min_front_steer_angle(self):
        """Message field 'min_front_steer_angle'."""
        return self._min_front_steer_angle

    @min_front_steer_angle.setter
    def min_front_steer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_front_steer_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_front_steer_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_front_steer_angle = value

    @builtins.property
    def max_rear_steer_angle(self):
        """Message field 'max_rear_steer_angle'."""
        return self._max_rear_steer_angle

    @max_rear_steer_angle.setter
    def max_rear_steer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_rear_steer_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_rear_steer_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_rear_steer_angle = value

    @builtins.property
    def min_rear_steer_angle(self):
        """Message field 'min_rear_steer_angle'."""
        return self._min_rear_steer_angle

    @min_rear_steer_angle.setter
    def min_rear_steer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_rear_steer_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_rear_steer_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_rear_steer_angle = value

    @builtins.property
    def speed_limit(self):
        """Message field 'speed_limit'."""
        return self._speed_limit

    @speed_limit.setter
    def speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_limit = value

    @builtins.property
    def max_brake_value(self):
        """Message field 'max_brake_value'."""
        return self._max_brake_value

    @max_brake_value.setter
    def max_brake_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_brake_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_brake_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_brake_value = value

    @builtins.property
    def min_brake_value(self):
        """Message field 'min_brake_value'."""
        return self._min_brake_value

    @min_brake_value.setter
    def min_brake_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_brake_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_brake_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_brake_value = value

    @builtins.property
    def max_accel_value(self):
        """Message field 'max_accel_value'."""
        return self._max_accel_value

    @max_accel_value.setter
    def max_accel_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_accel_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_accel_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_accel_value = value

    @builtins.property
    def min_accel_value(self):
        """Message field 'min_accel_value'."""
        return self._min_accel_value

    @min_accel_value.setter
    def min_accel_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_accel_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_accel_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_accel_value = value

    @builtins.property
    def speed_deadzone(self):
        """Message field 'speed_deadzone'."""
        return self._speed_deadzone

    @speed_deadzone.setter
    def speed_deadzone(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_deadzone' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_deadzone' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_deadzone = value

    @builtins.property
    def standstill_acceleration(self):
        """Message field 'standstill_acceleration'."""
        return self._standstill_acceleration

    @standstill_acceleration.setter
    def standstill_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'standstill_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'standstill_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._standstill_acceleration = value

    @builtins.property
    def max_front_steer_angle_rate(self):
        """Message field 'max_front_steer_angle_rate'."""
        return self._max_front_steer_angle_rate

    @max_front_steer_angle_rate.setter
    def max_front_steer_angle_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_front_steer_angle_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_front_steer_angle_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_front_steer_angle_rate = value

    @builtins.property
    def max_rear_steer_angle_rate(self):
        """Message field 'max_rear_steer_angle_rate'."""
        return self._max_rear_steer_angle_rate

    @max_rear_steer_angle_rate.setter
    def max_rear_steer_angle_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_rear_steer_angle_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_rear_steer_angle_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_rear_steer_angle_rate = value

    @builtins.property
    def max_abs_speed_when_stopped(self):
        """Message field 'max_abs_speed_when_stopped'."""
        return self._max_abs_speed_when_stopped

    @max_abs_speed_when_stopped.setter
    def max_abs_speed_when_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_abs_speed_when_stopped' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_abs_speed_when_stopped' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_abs_speed_when_stopped = value

    @builtins.property
    def max_abs_speed_when_stopped_duration(self):
        """Message field 'max_abs_speed_when_stopped_duration'."""
        return self._max_abs_speed_when_stopped_duration

    @max_abs_speed_when_stopped_duration.setter
    def max_abs_speed_when_stopped_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_abs_speed_when_stopped_duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_abs_speed_when_stopped_duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_abs_speed_when_stopped_duration = value

    @builtins.property
    def brake_value_when_gear_transitioning(self):
        """Message field 'brake_value_when_gear_transitioning'."""
        return self._brake_value_when_gear_transitioning

    @brake_value_when_gear_transitioning.setter
    def brake_value_when_gear_transitioning(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_value_when_gear_transitioning' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_value_when_gear_transitioning' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_value_when_gear_transitioning = value

    @builtins.property
    def accel_deadzone(self):
        """Message field 'accel_deadzone'."""
        return self._accel_deadzone

    @accel_deadzone.setter
    def accel_deadzone(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_deadzone' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel_deadzone' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel_deadzone = value

    @builtins.property
    def brake_deadzone(self):
        """Message field 'brake_deadzone'."""
        return self._brake_deadzone

    @brake_deadzone.setter
    def brake_deadzone(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_deadzone' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_deadzone' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_deadzone = value

    @builtins.property
    def acceleration_in_idle(self):
        """Message field 'acceleration_in_idle'."""
        return self._acceleration_in_idle

    @acceleration_in_idle.setter
    def acceleration_in_idle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_in_idle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration_in_idle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration_in_idle = value

    @builtins.property
    def deceleration_in_idle(self):
        """Message field 'deceleration_in_idle'."""
        return self._deceleration_in_idle

    @deceleration_in_idle.setter
    def deceleration_in_idle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deceleration_in_idle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deceleration_in_idle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deceleration_in_idle = value

    @builtins.property
    def max_acceleration_jerk(self):
        """Message field 'max_acceleration_jerk'."""
        return self._max_acceleration_jerk

    @max_acceleration_jerk.setter
    def max_acceleration_jerk(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_acceleration_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_acceleration_jerk = value

    @builtins.property
    def max_acceleration(self):
        """Message field 'max_acceleration'."""
        return self._max_acceleration

    @max_acceleration.setter
    def max_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_acceleration = value

    @builtins.property
    def max_deceleration(self):
        """Message field 'max_deceleration'."""
        return self._max_deceleration

    @max_deceleration.setter
    def max_deceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_deceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_deceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_deceleration = value

    @builtins.property
    def min_turning_radius(self):
        """Message field 'min_turning_radius'."""
        return self._min_turning_radius

    @min_turning_radius.setter
    def min_turning_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_turning_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_turning_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_turning_radius = value
