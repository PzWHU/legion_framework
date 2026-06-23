# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/ParkingOutInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParkingOutInfo(type):
    """Metaclass of message 'ParkingOutInfo'."""

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
                'ros2_interface.msg.ParkingOutInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parking_out_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parking_out_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parking_out_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parking_out_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parking_out_info

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


class ParkingOutInfo(metaclass=Metaclass_ParkingOutInfo):
    """Message class 'ParkingOutInfo'."""

    __slots__ = [
        '_header',
        '_parking_out_id',
        '_parking_direction_type',
        '_is_parking_out_enable',
        '_parking_out_point',
        '_theta',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'parking_out_id': 'int32',
        'parking_direction_type': 'int32',
        'is_parking_out_enable': 'boolean',
        'parking_out_point': 'ros2_interface/Point3D',
        'theta': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.parking_out_id = kwargs.get('parking_out_id', int())
        self.parking_direction_type = kwargs.get('parking_direction_type', int())
        self.is_parking_out_enable = kwargs.get('is_parking_out_enable', bool())
        from ros2_interface.msg import Point3D
        self.parking_out_point = kwargs.get('parking_out_point', Point3D())
        self.theta = kwargs.get('theta', float())

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
        if self.parking_out_id != other.parking_out_id:
            return False
        if self.parking_direction_type != other.parking_direction_type:
            return False
        if self.is_parking_out_enable != other.is_parking_out_enable:
            return False
        if self.parking_out_point != other.parking_out_point:
            return False
        if self.theta != other.theta:
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
    def parking_out_id(self):
        """Message field 'parking_out_id'."""
        return self._parking_out_id

    @parking_out_id.setter
    def parking_out_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_out_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_out_id' field must be an integer in [-2147483648, 2147483647]"
        self._parking_out_id = value

    @builtins.property
    def parking_direction_type(self):
        """Message field 'parking_direction_type'."""
        return self._parking_direction_type

    @parking_direction_type.setter
    def parking_direction_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_direction_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_direction_type' field must be an integer in [-2147483648, 2147483647]"
        self._parking_direction_type = value

    @builtins.property
    def is_parking_out_enable(self):
        """Message field 'is_parking_out_enable'."""
        return self._is_parking_out_enable

    @is_parking_out_enable.setter
    def is_parking_out_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_parking_out_enable' field must be of type 'bool'"
        self._is_parking_out_enable = value

    @builtins.property
    def parking_out_point(self):
        """Message field 'parking_out_point'."""
        return self._parking_out_point

    @parking_out_point.setter
    def parking_out_point(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'parking_out_point' field must be a sub message of type 'Point3D'"
        self._parking_out_point = value

    @builtins.property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta = value
