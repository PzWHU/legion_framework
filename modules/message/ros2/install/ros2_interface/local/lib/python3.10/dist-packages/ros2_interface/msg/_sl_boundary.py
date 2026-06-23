# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/SLBoundary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SLBoundary(type):
    """Metaclass of message 'SLBoundary'."""

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
                'ros2_interface.msg.SLBoundary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sl_boundary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sl_boundary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sl_boundary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sl_boundary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sl_boundary

            from ros2_interface.msg import SLPoint
            if SLPoint.__class__._TYPE_SUPPORT is None:
                SLPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SLBoundary(metaclass=Metaclass_SLBoundary):
    """Message class 'SLBoundary'."""

    __slots__ = [
        '_start_s',
        '_end_s',
        '_start_l',
        '_end_l',
        '_boundary_point',
    ]

    _fields_and_field_types = {
        'start_s': 'double',
        'end_s': 'double',
        'start_l': 'double',
        'end_l': 'double',
        'boundary_point': 'sequence<ros2_interface/SLPoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'SLPoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_s = kwargs.get('start_s', float())
        self.end_s = kwargs.get('end_s', float())
        self.start_l = kwargs.get('start_l', float())
        self.end_l = kwargs.get('end_l', float())
        self.boundary_point = kwargs.get('boundary_point', [])

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
        if self.start_s != other.start_s:
            return False
        if self.end_s != other.end_s:
            return False
        if self.start_l != other.start_l:
            return False
        if self.end_l != other.end_l:
            return False
        if self.boundary_point != other.boundary_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_s(self):
        """Message field 'start_s'."""
        return self._start_s

    @start_s.setter
    def start_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'start_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._start_s = value

    @builtins.property
    def end_s(self):
        """Message field 'end_s'."""
        return self._end_s

    @end_s.setter
    def end_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'end_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._end_s = value

    @builtins.property
    def start_l(self):
        """Message field 'start_l'."""
        return self._start_l

    @start_l.setter
    def start_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'start_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._start_l = value

    @builtins.property
    def end_l(self):
        """Message field 'end_l'."""
        return self._end_l

    @end_l.setter
    def end_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'end_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._end_l = value

    @builtins.property
    def boundary_point(self):
        """Message field 'boundary_point'."""
        return self._boundary_point

    @boundary_point.setter
    def boundary_point(self, value):
        if __debug__:
            from ros2_interface.msg import SLPoint
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
                 all(isinstance(v, SLPoint) for v in value) and
                 True), \
                "The 'boundary_point' field must be a set or sequence and each value of type 'SLPoint'"
        self._boundary_point = value
