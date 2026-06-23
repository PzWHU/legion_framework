# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/GlobalRouteMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GlobalRouteMsg(type):
    """Metaclass of message 'GlobalRouteMsg'."""

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
                'ros2_interface.msg.GlobalRouteMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__global_route_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__global_route_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__global_route_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__global_route_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__global_route_msg

            from ros2_interface.msg import LaneletInfo
            if LaneletInfo.__class__._TYPE_SUPPORT is None:
                LaneletInfo.__class__.__import_type_support__()

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


class GlobalRouteMsg(metaclass=Metaclass_GlobalRouteMsg):
    """Message class 'GlobalRouteMsg'."""

    __slots__ = [
        '_header',
        '_route',
        '_current_lanelet',
        '_total_mileage',
        '_cur_mileage',
        '_cur_slice',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'route': 'sequence<ros2_interface/LaneletInfo>',
        'current_lanelet': 'ros2_interface/LaneletInfo',
        'total_mileage': 'double',
        'cur_mileage': 'double',
        'cur_slice': 'sequence<ros2_interface/LaneletInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneletInfo')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneletInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneletInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.route = kwargs.get('route', [])
        from ros2_interface.msg import LaneletInfo
        self.current_lanelet = kwargs.get('current_lanelet', LaneletInfo())
        self.total_mileage = kwargs.get('total_mileage', float())
        self.cur_mileage = kwargs.get('cur_mileage', float())
        self.cur_slice = kwargs.get('cur_slice', [])

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
        if self.route != other.route:
            return False
        if self.current_lanelet != other.current_lanelet:
            return False
        if self.total_mileage != other.total_mileage:
            return False
        if self.cur_mileage != other.cur_mileage:
            return False
        if self.cur_slice != other.cur_slice:
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
    def route(self):
        """Message field 'route'."""
        return self._route

    @route.setter
    def route(self, value):
        if __debug__:
            from ros2_interface.msg import LaneletInfo
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
                 all(isinstance(v, LaneletInfo) for v in value) and
                 True), \
                "The 'route' field must be a set or sequence and each value of type 'LaneletInfo'"
        self._route = value

    @builtins.property
    def current_lanelet(self):
        """Message field 'current_lanelet'."""
        return self._current_lanelet

    @current_lanelet.setter
    def current_lanelet(self, value):
        if __debug__:
            from ros2_interface.msg import LaneletInfo
            assert \
                isinstance(value, LaneletInfo), \
                "The 'current_lanelet' field must be a sub message of type 'LaneletInfo'"
        self._current_lanelet = value

    @builtins.property
    def total_mileage(self):
        """Message field 'total_mileage'."""
        return self._total_mileage

    @total_mileage.setter
    def total_mileage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_mileage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_mileage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_mileage = value

    @builtins.property
    def cur_mileage(self):
        """Message field 'cur_mileage'."""
        return self._cur_mileage

    @cur_mileage.setter
    def cur_mileage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cur_mileage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_mileage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_mileage = value

    @builtins.property
    def cur_slice(self):
        """Message field 'cur_slice'."""
        return self._cur_slice

    @cur_slice.setter
    def cur_slice(self, value):
        if __debug__:
            from ros2_interface.msg import LaneletInfo
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
                 all(isinstance(v, LaneletInfo) for v in value) and
                 True), \
                "The 'cur_slice' field must be a set or sequence and each value of type 'LaneletInfo'"
        self._cur_slice = value
