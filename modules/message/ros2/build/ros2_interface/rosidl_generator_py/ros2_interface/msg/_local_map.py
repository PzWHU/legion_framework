# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/LocalMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalMap(type):
    """Metaclass of message 'LocalMap'."""

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
                'ros2_interface.msg.LocalMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__local_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__local_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__local_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__local_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__local_map

            from ros2_interface.msg import LaneInfoExtend
            if LaneInfoExtend.__class__._TYPE_SUPPORT is None:
                LaneInfoExtend.__class__.__import_type_support__()

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


class LocalMap(metaclass=Metaclass_LocalMap):
    """Message class 'LocalMap'."""

    __slots__ = [
        '_header',
        '_seq',
        '_ego_point',
        '_range',
        '_lane_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'seq': 'int32',
        'ego_point': 'ros2_interface/Point3D',
        'range': 'double',
        'lane_list': 'sequence<ros2_interface/LaneInfoExtend>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneInfoExtend')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.seq = kwargs.get('seq', int())
        from ros2_interface.msg import Point3D
        self.ego_point = kwargs.get('ego_point', Point3D())
        self.range = kwargs.get('range', float())
        self.lane_list = kwargs.get('lane_list', [])

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
        if self.seq != other.seq:
            return False
        if self.ego_point != other.ego_point:
            return False
        if self.range != other.range:
            return False
        if self.lane_list != other.lane_list:
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
    def seq(self):
        """Message field 'seq'."""
        return self._seq

    @seq.setter
    def seq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seq' field must be an integer in [-2147483648, 2147483647]"
        self._seq = value

    @builtins.property
    def ego_point(self):
        """Message field 'ego_point'."""
        return self._ego_point

    @ego_point.setter
    def ego_point(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'ego_point' field must be a sub message of type 'Point3D'"
        self._ego_point = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'range' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._range = value

    @builtins.property
    def lane_list(self):
        """Message field 'lane_list'."""
        return self._lane_list

    @lane_list.setter
    def lane_list(self, value):
        if __debug__:
            from ros2_interface.msg import LaneInfoExtend
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
                 all(isinstance(v, LaneInfoExtend) for v in value) and
                 True), \
                "The 'lane_list' field must be a set or sequence and each value of type 'LaneInfoExtend'"
        self._lane_list = value
