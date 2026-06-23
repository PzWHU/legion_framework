# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/JunctionInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JunctionInfo(type):
    """Metaclass of message 'JunctionInfo'."""

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
                'ros2_interface.msg.JunctionInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__junction_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__junction_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__junction_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__junction_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__junction_info

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JunctionInfo(metaclass=Metaclass_JunctionInfo):
    """Message class 'JunctionInfo'."""

    __slots__ = [
        '_id',
        '_light_flag',
        '_light_color',
        '_light_remain_time',
        '_distance_to_stop',
        '_direction_flag',
        '_direction',
        '_distance_to_junction',
        '_stop_line',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'light_flag': 'int32',
        'light_color': 'int32',
        'light_remain_time': 'double',
        'distance_to_stop': 'double',
        'direction_flag': 'int32',
        'direction': 'int32',
        'distance_to_junction': 'double',
        'stop_line': 'sequence<ros2_interface/Point3D>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.light_flag = kwargs.get('light_flag', int())
        self.light_color = kwargs.get('light_color', int())
        self.light_remain_time = kwargs.get('light_remain_time', float())
        self.distance_to_stop = kwargs.get('distance_to_stop', float())
        self.direction_flag = kwargs.get('direction_flag', int())
        self.direction = kwargs.get('direction', int())
        self.distance_to_junction = kwargs.get('distance_to_junction', float())
        self.stop_line = kwargs.get('stop_line', [])

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
        if self.id != other.id:
            return False
        if self.light_flag != other.light_flag:
            return False
        if self.light_color != other.light_color:
            return False
        if self.light_remain_time != other.light_remain_time:
            return False
        if self.distance_to_stop != other.distance_to_stop:
            return False
        if self.direction_flag != other.direction_flag:
            return False
        if self.direction != other.direction:
            return False
        if self.distance_to_junction != other.distance_to_junction:
            return False
        if self.stop_line != other.stop_line:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def light_flag(self):
        """Message field 'light_flag'."""
        return self._light_flag

    @light_flag.setter
    def light_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'light_flag' field must be an integer in [-2147483648, 2147483647]"
        self._light_flag = value

    @builtins.property
    def light_color(self):
        """Message field 'light_color'."""
        return self._light_color

    @light_color.setter
    def light_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_color' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'light_color' field must be an integer in [-2147483648, 2147483647]"
        self._light_color = value

    @builtins.property
    def light_remain_time(self):
        """Message field 'light_remain_time'."""
        return self._light_remain_time

    @light_remain_time.setter
    def light_remain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'light_remain_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'light_remain_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._light_remain_time = value

    @builtins.property
    def distance_to_stop(self):
        """Message field 'distance_to_stop'."""
        return self._distance_to_stop

    @distance_to_stop.setter
    def distance_to_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_stop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_to_stop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_to_stop = value

    @builtins.property
    def direction_flag(self):
        """Message field 'direction_flag'."""
        return self._direction_flag

    @direction_flag.setter
    def direction_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'direction_flag' field must be an integer in [-2147483648, 2147483647]"
        self._direction_flag = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'direction' field must be an integer in [-2147483648, 2147483647]"
        self._direction = value

    @builtins.property
    def distance_to_junction(self):
        """Message field 'distance_to_junction'."""
        return self._distance_to_junction

    @distance_to_junction.setter
    def distance_to_junction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_junction' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_to_junction' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_to_junction = value

    @builtins.property
    def stop_line(self):
        """Message field 'stop_line'."""
        return self._stop_line

    @stop_line.setter
    def stop_line(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
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
                 all(isinstance(v, Point3D) for v in value) and
                 True), \
                "The 'stop_line' field must be a set or sequence and each value of type 'Point3D'"
        self._stop_line = value
