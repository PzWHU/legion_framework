# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Ins.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ins(type):
    """Metaclass of message 'Ins'."""

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
                'ros2_interface.msg.Ins')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

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


class Ins(metaclass=Metaclass_Ins):
    """Message class 'Ins'."""

    __slots__ = [
        '_header',
        '_is_valid',
        '_latitude',
        '_longitude',
        '_elevation',
        '_utm_position',
        '_utm_zone_mumber',
        '_utm_zone_char',
        '_attitude',
        '_linear_velocity',
        '_sd_position',
        '_sd_attitude',
        '_sd_velocity',
        '_cep68',
        '_cep95',
        '_second',
        '_sat_use_num',
        '_sat_in_view_num',
        '_solution_status',
        '_position_type',
        '_p_dop',
        '_h_dop',
        '_v_dop',
        '_attitude_dual',
        '_sd_angle_dual',
        '_base_line_length_dual',
        '_solution_status_dual',
        '_position_type_dual',
        '_solution_source_dual',
        '_aoc',
        '_rtk_baseline',
        '_angular_velocity',
        '_acceleration',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'is_valid': 'boolean',
        'latitude': 'double',
        'longitude': 'double',
        'elevation': 'double',
        'utm_position': 'ros2_interface/Point3D',
        'utm_zone_mumber': 'int32',
        'utm_zone_char': 'uint8',
        'attitude': 'ros2_interface/Point3D',
        'linear_velocity': 'ros2_interface/Point3D',
        'sd_position': 'ros2_interface/Point3D',
        'sd_attitude': 'ros2_interface/Point3D',
        'sd_velocity': 'ros2_interface/Point3D',
        'cep68': 'double',
        'cep95': 'double',
        'second': 'double',
        'sat_use_num': 'int32',
        'sat_in_view_num': 'int32',
        'solution_status': 'uint16',
        'position_type': 'uint16',
        'p_dop': 'double',
        'h_dop': 'double',
        'v_dop': 'double',
        'attitude_dual': 'ros2_interface/Point3D',
        'sd_angle_dual': 'ros2_interface/Point3D',
        'base_line_length_dual': 'double',
        'solution_status_dual': 'int32',
        'position_type_dual': 'int32',
        'solution_source_dual': 'int32',
        'aoc': 'uint32',
        'rtk_baseline': 'uint32',
        'angular_velocity': 'ros2_interface/Point3D',
        'acceleration': 'ros2_interface/Point3D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.is_valid = kwargs.get('is_valid', bool())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.elevation = kwargs.get('elevation', float())
        from ros2_interface.msg import Point3D
        self.utm_position = kwargs.get('utm_position', Point3D())
        self.utm_zone_mumber = kwargs.get('utm_zone_mumber', int())
        self.utm_zone_char = kwargs.get('utm_zone_char', int())
        from ros2_interface.msg import Point3D
        self.attitude = kwargs.get('attitude', Point3D())
        from ros2_interface.msg import Point3D
        self.linear_velocity = kwargs.get('linear_velocity', Point3D())
        from ros2_interface.msg import Point3D
        self.sd_position = kwargs.get('sd_position', Point3D())
        from ros2_interface.msg import Point3D
        self.sd_attitude = kwargs.get('sd_attitude', Point3D())
        from ros2_interface.msg import Point3D
        self.sd_velocity = kwargs.get('sd_velocity', Point3D())
        self.cep68 = kwargs.get('cep68', float())
        self.cep95 = kwargs.get('cep95', float())
        self.second = kwargs.get('second', float())
        self.sat_use_num = kwargs.get('sat_use_num', int())
        self.sat_in_view_num = kwargs.get('sat_in_view_num', int())
        self.solution_status = kwargs.get('solution_status', int())
        self.position_type = kwargs.get('position_type', int())
        self.p_dop = kwargs.get('p_dop', float())
        self.h_dop = kwargs.get('h_dop', float())
        self.v_dop = kwargs.get('v_dop', float())
        from ros2_interface.msg import Point3D
        self.attitude_dual = kwargs.get('attitude_dual', Point3D())
        from ros2_interface.msg import Point3D
        self.sd_angle_dual = kwargs.get('sd_angle_dual', Point3D())
        self.base_line_length_dual = kwargs.get('base_line_length_dual', float())
        self.solution_status_dual = kwargs.get('solution_status_dual', int())
        self.position_type_dual = kwargs.get('position_type_dual', int())
        self.solution_source_dual = kwargs.get('solution_source_dual', int())
        self.aoc = kwargs.get('aoc', int())
        self.rtk_baseline = kwargs.get('rtk_baseline', int())
        from ros2_interface.msg import Point3D
        self.angular_velocity = kwargs.get('angular_velocity', Point3D())
        from ros2_interface.msg import Point3D
        self.acceleration = kwargs.get('acceleration', Point3D())

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
        if self.is_valid != other.is_valid:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.elevation != other.elevation:
            return False
        if self.utm_position != other.utm_position:
            return False
        if self.utm_zone_mumber != other.utm_zone_mumber:
            return False
        if self.utm_zone_char != other.utm_zone_char:
            return False
        if self.attitude != other.attitude:
            return False
        if self.linear_velocity != other.linear_velocity:
            return False
        if self.sd_position != other.sd_position:
            return False
        if self.sd_attitude != other.sd_attitude:
            return False
        if self.sd_velocity != other.sd_velocity:
            return False
        if self.cep68 != other.cep68:
            return False
        if self.cep95 != other.cep95:
            return False
        if self.second != other.second:
            return False
        if self.sat_use_num != other.sat_use_num:
            return False
        if self.sat_in_view_num != other.sat_in_view_num:
            return False
        if self.solution_status != other.solution_status:
            return False
        if self.position_type != other.position_type:
            return False
        if self.p_dop != other.p_dop:
            return False
        if self.h_dop != other.h_dop:
            return False
        if self.v_dop != other.v_dop:
            return False
        if self.attitude_dual != other.attitude_dual:
            return False
        if self.sd_angle_dual != other.sd_angle_dual:
            return False
        if self.base_line_length_dual != other.base_line_length_dual:
            return False
        if self.solution_status_dual != other.solution_status_dual:
            return False
        if self.position_type_dual != other.position_type_dual:
            return False
        if self.solution_source_dual != other.solution_source_dual:
            return False
        if self.aoc != other.aoc:
            return False
        if self.rtk_baseline != other.rtk_baseline:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.acceleration != other.acceleration:
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
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid' field must be of type 'bool'"
        self._is_valid = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elevation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elevation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elevation = value

    @builtins.property
    def utm_position(self):
        """Message field 'utm_position'."""
        return self._utm_position

    @utm_position.setter
    def utm_position(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'utm_position' field must be a sub message of type 'Point3D'"
        self._utm_position = value

    @builtins.property
    def utm_zone_mumber(self):
        """Message field 'utm_zone_mumber'."""
        return self._utm_zone_mumber

    @utm_zone_mumber.setter
    def utm_zone_mumber(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utm_zone_mumber' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'utm_zone_mumber' field must be an integer in [-2147483648, 2147483647]"
        self._utm_zone_mumber = value

    @builtins.property
    def utm_zone_char(self):
        """Message field 'utm_zone_char'."""
        return self._utm_zone_char

    @utm_zone_char.setter
    def utm_zone_char(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utm_zone_char' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'utm_zone_char' field must be an unsigned integer in [0, 255]"
        self._utm_zone_char = value

    @builtins.property
    def attitude(self):
        """Message field 'attitude'."""
        return self._attitude

    @attitude.setter
    def attitude(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'attitude' field must be a sub message of type 'Point3D'"
        self._attitude = value

    @builtins.property
    def linear_velocity(self):
        """Message field 'linear_velocity'."""
        return self._linear_velocity

    @linear_velocity.setter
    def linear_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_velocity' field must be a sub message of type 'Point3D'"
        self._linear_velocity = value

    @builtins.property
    def sd_position(self):
        """Message field 'sd_position'."""
        return self._sd_position

    @sd_position.setter
    def sd_position(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'sd_position' field must be a sub message of type 'Point3D'"
        self._sd_position = value

    @builtins.property
    def sd_attitude(self):
        """Message field 'sd_attitude'."""
        return self._sd_attitude

    @sd_attitude.setter
    def sd_attitude(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'sd_attitude' field must be a sub message of type 'Point3D'"
        self._sd_attitude = value

    @builtins.property
    def sd_velocity(self):
        """Message field 'sd_velocity'."""
        return self._sd_velocity

    @sd_velocity.setter
    def sd_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'sd_velocity' field must be a sub message of type 'Point3D'"
        self._sd_velocity = value

    @builtins.property
    def cep68(self):
        """Message field 'cep68'."""
        return self._cep68

    @cep68.setter
    def cep68(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cep68' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cep68' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cep68 = value

    @builtins.property
    def cep95(self):
        """Message field 'cep95'."""
        return self._cep95

    @cep95.setter
    def cep95(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cep95' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cep95' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cep95 = value

    @builtins.property
    def second(self):
        """Message field 'second'."""
        return self._second

    @second.setter
    def second(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'second' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'second' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._second = value

    @builtins.property
    def sat_use_num(self):
        """Message field 'sat_use_num'."""
        return self._sat_use_num

    @sat_use_num.setter
    def sat_use_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sat_use_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sat_use_num' field must be an integer in [-2147483648, 2147483647]"
        self._sat_use_num = value

    @builtins.property
    def sat_in_view_num(self):
        """Message field 'sat_in_view_num'."""
        return self._sat_in_view_num

    @sat_in_view_num.setter
    def sat_in_view_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sat_in_view_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sat_in_view_num' field must be an integer in [-2147483648, 2147483647]"
        self._sat_in_view_num = value

    @builtins.property
    def solution_status(self):
        """Message field 'solution_status'."""
        return self._solution_status

    @solution_status.setter
    def solution_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'solution_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'solution_status' field must be an unsigned integer in [0, 65535]"
        self._solution_status = value

    @builtins.property
    def position_type(self):
        """Message field 'position_type'."""
        return self._position_type

    @position_type.setter
    def position_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'position_type' field must be an unsigned integer in [0, 65535]"
        self._position_type = value

    @builtins.property
    def p_dop(self):
        """Message field 'p_dop'."""
        return self._p_dop

    @p_dop.setter
    def p_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_dop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p_dop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p_dop = value

    @builtins.property
    def h_dop(self):
        """Message field 'h_dop'."""
        return self._h_dop

    @h_dop.setter
    def h_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h_dop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'h_dop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._h_dop = value

    @builtins.property
    def v_dop(self):
        """Message field 'v_dop'."""
        return self._v_dop

    @v_dop.setter
    def v_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_dop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_dop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_dop = value

    @builtins.property
    def attitude_dual(self):
        """Message field 'attitude_dual'."""
        return self._attitude_dual

    @attitude_dual.setter
    def attitude_dual(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'attitude_dual' field must be a sub message of type 'Point3D'"
        self._attitude_dual = value

    @builtins.property
    def sd_angle_dual(self):
        """Message field 'sd_angle_dual'."""
        return self._sd_angle_dual

    @sd_angle_dual.setter
    def sd_angle_dual(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'sd_angle_dual' field must be a sub message of type 'Point3D'"
        self._sd_angle_dual = value

    @builtins.property
    def base_line_length_dual(self):
        """Message field 'base_line_length_dual'."""
        return self._base_line_length_dual

    @base_line_length_dual.setter
    def base_line_length_dual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_line_length_dual' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'base_line_length_dual' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._base_line_length_dual = value

    @builtins.property
    def solution_status_dual(self):
        """Message field 'solution_status_dual'."""
        return self._solution_status_dual

    @solution_status_dual.setter
    def solution_status_dual(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'solution_status_dual' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'solution_status_dual' field must be an integer in [-2147483648, 2147483647]"
        self._solution_status_dual = value

    @builtins.property
    def position_type_dual(self):
        """Message field 'position_type_dual'."""
        return self._position_type_dual

    @position_type_dual.setter
    def position_type_dual(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_type_dual' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position_type_dual' field must be an integer in [-2147483648, 2147483647]"
        self._position_type_dual = value

    @builtins.property
    def solution_source_dual(self):
        """Message field 'solution_source_dual'."""
        return self._solution_source_dual

    @solution_source_dual.setter
    def solution_source_dual(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'solution_source_dual' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'solution_source_dual' field must be an integer in [-2147483648, 2147483647]"
        self._solution_source_dual = value

    @builtins.property
    def aoc(self):
        """Message field 'aoc'."""
        return self._aoc

    @aoc.setter
    def aoc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aoc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aoc' field must be an unsigned integer in [0, 4294967295]"
        self._aoc = value

    @builtins.property
    def rtk_baseline(self):
        """Message field 'rtk_baseline'."""
        return self._rtk_baseline

    @rtk_baseline.setter
    def rtk_baseline(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rtk_baseline' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rtk_baseline' field must be an unsigned integer in [0, 4294967295]"
        self._rtk_baseline = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'angular_velocity' field must be a sub message of type 'Point3D'"
        self._angular_velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'acceleration' field must be a sub message of type 'Point3D'"
        self._acceleration = value
