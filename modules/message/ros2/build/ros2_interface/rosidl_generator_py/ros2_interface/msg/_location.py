# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Location.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Location(type):
    """Metaclass of message 'Location'."""

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
                'ros2_interface.msg.Location')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__location
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__location
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__location
            cls._TYPE_SUPPORT = module.type_support_msg__msg__location
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__location

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

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


class Location(metaclass=Metaclass_Location):
    """Message class 'Location'."""

    __slots__ = [
        '_header',
        '_position',
        '_pitch',
        '_roll',
        '_heading',
        '_linear_velocity',
        '_linear_acceleration',
        '_angular_velocity',
        '_rtk_flag',
        '_odom_type',
        '_auxiliary_type',
        '_location_valid_flag',
        '_origin_lat',
        '_origin_lon',
        '_utm_position',
        '_change_origin_flag',
        '_utm_position_next',
        '_position_std_dev',
        '_orientation_std_dev',
        '_linear_velocity_std_dev',
        '_linear_acceleration_std_dev',
        '_angular_velocity_std_dev',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'position': 'ros2_interface/PointLLH',
        'pitch': 'double',
        'roll': 'double',
        'heading': 'double',
        'linear_velocity': 'ros2_interface/Point3D',
        'linear_acceleration': 'ros2_interface/Point3D',
        'angular_velocity': 'ros2_interface/Point3D',
        'rtk_flag': 'int32',
        'odom_type': 'int32',
        'auxiliary_type': 'int32',
        'location_valid_flag': 'int32',
        'origin_lat': 'double',
        'origin_lon': 'double',
        'utm_position': 'ros2_interface/PointENU',
        'change_origin_flag': 'int32',
        'utm_position_next': 'ros2_interface/PointENU',
        'position_std_dev': 'ros2_interface/Point3D',
        'orientation_std_dev': 'ros2_interface/Point3D',
        'linear_velocity_std_dev': 'ros2_interface/Point3D',
        'linear_acceleration_std_dev': 'ros2_interface/Point3D',
        'angular_velocity_std_dev': 'ros2_interface/Point3D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PointLLH'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PointENU'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PointENU'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ros2_interface.msg import PointLLH
        self.position = kwargs.get('position', PointLLH())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.heading = kwargs.get('heading', float())
        from ros2_interface.msg import Point3D
        self.linear_velocity = kwargs.get('linear_velocity', Point3D())
        from ros2_interface.msg import Point3D
        self.linear_acceleration = kwargs.get('linear_acceleration', Point3D())
        from ros2_interface.msg import Point3D
        self.angular_velocity = kwargs.get('angular_velocity', Point3D())
        self.rtk_flag = kwargs.get('rtk_flag', int())
        self.odom_type = kwargs.get('odom_type', int())
        self.auxiliary_type = kwargs.get('auxiliary_type', int())
        self.location_valid_flag = kwargs.get('location_valid_flag', int())
        self.origin_lat = kwargs.get('origin_lat', float())
        self.origin_lon = kwargs.get('origin_lon', float())
        from ros2_interface.msg import PointENU
        self.utm_position = kwargs.get('utm_position', PointENU())
        self.change_origin_flag = kwargs.get('change_origin_flag', int())
        from ros2_interface.msg import PointENU
        self.utm_position_next = kwargs.get('utm_position_next', PointENU())
        from ros2_interface.msg import Point3D
        self.position_std_dev = kwargs.get('position_std_dev', Point3D())
        from ros2_interface.msg import Point3D
        self.orientation_std_dev = kwargs.get('orientation_std_dev', Point3D())
        from ros2_interface.msg import Point3D
        self.linear_velocity_std_dev = kwargs.get('linear_velocity_std_dev', Point3D())
        from ros2_interface.msg import Point3D
        self.linear_acceleration_std_dev = kwargs.get('linear_acceleration_std_dev', Point3D())
        from ros2_interface.msg import Point3D
        self.angular_velocity_std_dev = kwargs.get('angular_velocity_std_dev', Point3D())

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
        if self.position != other.position:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.heading != other.heading:
            return False
        if self.linear_velocity != other.linear_velocity:
            return False
        if self.linear_acceleration != other.linear_acceleration:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.rtk_flag != other.rtk_flag:
            return False
        if self.odom_type != other.odom_type:
            return False
        if self.auxiliary_type != other.auxiliary_type:
            return False
        if self.location_valid_flag != other.location_valid_flag:
            return False
        if self.origin_lat != other.origin_lat:
            return False
        if self.origin_lon != other.origin_lon:
            return False
        if self.utm_position != other.utm_position:
            return False
        if self.change_origin_flag != other.change_origin_flag:
            return False
        if self.utm_position_next != other.utm_position_next:
            return False
        if self.position_std_dev != other.position_std_dev:
            return False
        if self.orientation_std_dev != other.orientation_std_dev:
            return False
        if self.linear_velocity_std_dev != other.linear_velocity_std_dev:
            return False
        if self.linear_acceleration_std_dev != other.linear_acceleration_std_dev:
            return False
        if self.angular_velocity_std_dev != other.angular_velocity_std_dev:
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
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_acceleration' field must be a sub message of type 'Point3D'"
        self._linear_acceleration = value

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
    def odom_type(self):
        """Message field 'odom_type'."""
        return self._odom_type

    @odom_type.setter
    def odom_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'odom_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'odom_type' field must be an integer in [-2147483648, 2147483647]"
        self._odom_type = value

    @builtins.property
    def auxiliary_type(self):
        """Message field 'auxiliary_type'."""
        return self._auxiliary_type

    @auxiliary_type.setter
    def auxiliary_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auxiliary_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'auxiliary_type' field must be an integer in [-2147483648, 2147483647]"
        self._auxiliary_type = value

    @builtins.property
    def location_valid_flag(self):
        """Message field 'location_valid_flag'."""
        return self._location_valid_flag

    @location_valid_flag.setter
    def location_valid_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'location_valid_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'location_valid_flag' field must be an integer in [-2147483648, 2147483647]"
        self._location_valid_flag = value

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
    def change_origin_flag(self):
        """Message field 'change_origin_flag'."""
        return self._change_origin_flag

    @change_origin_flag.setter
    def change_origin_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'change_origin_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'change_origin_flag' field must be an integer in [-2147483648, 2147483647]"
        self._change_origin_flag = value

    @builtins.property
    def utm_position_next(self):
        """Message field 'utm_position_next'."""
        return self._utm_position_next

    @utm_position_next.setter
    def utm_position_next(self, value):
        if __debug__:
            from ros2_interface.msg import PointENU
            assert \
                isinstance(value, PointENU), \
                "The 'utm_position_next' field must be a sub message of type 'PointENU'"
        self._utm_position_next = value

    @builtins.property
    def position_std_dev(self):
        """Message field 'position_std_dev'."""
        return self._position_std_dev

    @position_std_dev.setter
    def position_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'position_std_dev' field must be a sub message of type 'Point3D'"
        self._position_std_dev = value

    @builtins.property
    def orientation_std_dev(self):
        """Message field 'orientation_std_dev'."""
        return self._orientation_std_dev

    @orientation_std_dev.setter
    def orientation_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'orientation_std_dev' field must be a sub message of type 'Point3D'"
        self._orientation_std_dev = value

    @builtins.property
    def linear_velocity_std_dev(self):
        """Message field 'linear_velocity_std_dev'."""
        return self._linear_velocity_std_dev

    @linear_velocity_std_dev.setter
    def linear_velocity_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_velocity_std_dev' field must be a sub message of type 'Point3D'"
        self._linear_velocity_std_dev = value

    @builtins.property
    def linear_acceleration_std_dev(self):
        """Message field 'linear_acceleration_std_dev'."""
        return self._linear_acceleration_std_dev

    @linear_acceleration_std_dev.setter
    def linear_acceleration_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_acceleration_std_dev' field must be a sub message of type 'Point3D'"
        self._linear_acceleration_std_dev = value

    @builtins.property
    def angular_velocity_std_dev(self):
        """Message field 'angular_velocity_std_dev'."""
        return self._angular_velocity_std_dev

    @angular_velocity_std_dev.setter
    def angular_velocity_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'angular_velocity_std_dev' field must be a sub message of type 'Point3D'"
        self._angular_velocity_std_dev = value
