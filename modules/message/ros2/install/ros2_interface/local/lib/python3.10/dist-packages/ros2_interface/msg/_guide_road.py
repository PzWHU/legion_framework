# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/GuideRoad.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GuideRoad(type):
    """Metaclass of message 'GuideRoad'."""

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
                'ros2_interface.msg.GuideRoad')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__guide_road
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__guide_road
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__guide_road
            cls._TYPE_SUPPORT = module.type_support_msg__msg__guide_road
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__guide_road

            from ros2_interface.msg import CurvatureInfo
            if CurvatureInfo.__class__._TYPE_SUPPORT is None:
                CurvatureInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GuideRoad(metaclass=Metaclass_GuideRoad):
    """Message class 'GuideRoad'."""

    __slots__ = [
        '_road_id',
        '_road_type',
        '_turn_type',
        '_avg_curvature',
        '_curvature_size',
        '_curvature',
    ]

    _fields_and_field_types = {
        'road_id': 'int64',
        'road_type': 'int8',
        'turn_type': 'int8',
        'avg_curvature': 'double',
        'curvature_size': 'int32',
        'curvature': 'sequence<ros2_interface/CurvatureInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'CurvatureInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.road_id = kwargs.get('road_id', int())
        self.road_type = kwargs.get('road_type', int())
        self.turn_type = kwargs.get('turn_type', int())
        self.avg_curvature = kwargs.get('avg_curvature', float())
        self.curvature_size = kwargs.get('curvature_size', int())
        self.curvature = kwargs.get('curvature', [])

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
        if self.road_id != other.road_id:
            return False
        if self.road_type != other.road_type:
            return False
        if self.turn_type != other.turn_type:
            return False
        if self.avg_curvature != other.avg_curvature:
            return False
        if self.curvature_size != other.curvature_size:
            return False
        if self.curvature != other.curvature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def road_id(self):
        """Message field 'road_id'."""
        return self._road_id

    @road_id.setter
    def road_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'road_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._road_id = value

    @builtins.property
    def road_type(self):
        """Message field 'road_type'."""
        return self._road_type

    @road_type.setter
    def road_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'road_type' field must be an integer in [-128, 127]"
        self._road_type = value

    @builtins.property
    def turn_type(self):
        """Message field 'turn_type'."""
        return self._turn_type

    @turn_type.setter
    def turn_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'turn_type' field must be an integer in [-128, 127]"
        self._turn_type = value

    @builtins.property
    def avg_curvature(self):
        """Message field 'avg_curvature'."""
        return self._avg_curvature

    @avg_curvature.setter
    def avg_curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'avg_curvature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'avg_curvature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._avg_curvature = value

    @builtins.property
    def curvature_size(self):
        """Message field 'curvature_size'."""
        return self._curvature_size

    @curvature_size.setter
    def curvature_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curvature_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'curvature_size' field must be an integer in [-2147483648, 2147483647]"
        self._curvature_size = value

    @builtins.property
    def curvature(self):
        """Message field 'curvature'."""
        return self._curvature

    @curvature.setter
    def curvature(self, value):
        if __debug__:
            from ros2_interface.msg import CurvatureInfo
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
                 all(isinstance(v, CurvatureInfo) for v in value) and
                 True), \
                "The 'curvature' field must be a set or sequence and each value of type 'CurvatureInfo'"
        self._curvature = value
