# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/TrajectoryPointInPrediction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryPointInPrediction(type):
    """Metaclass of message 'TrajectoryPointInPrediction'."""

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
                'ros2_interface.msg.TrajectoryPointInPrediction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_point_in_prediction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_point_in_prediction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_point_in_prediction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_point_in_prediction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_point_in_prediction

            from ros2_interface.msg import PathPoint
            if PathPoint.__class__._TYPE_SUPPORT is None:
                PathPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryPointInPrediction(metaclass=Metaclass_TrajectoryPointInPrediction):
    """Message class 'TrajectoryPointInPrediction'."""

    __slots__ = [
        '_path_point',
        '_v',
        '_a',
        '_relative_time',
    ]

    _fields_and_field_types = {
        'path_point': 'ros2_interface/PathPoint',
        'v': 'double',
        'a': 'double',
        'relative_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PathPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ros2_interface.msg import PathPoint
        self.path_point = kwargs.get('path_point', PathPoint())
        self.v = kwargs.get('v', float())
        self.a = kwargs.get('a', float())
        self.relative_time = kwargs.get('relative_time', float())

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
        if self.path_point != other.path_point:
            return False
        if self.v != other.v:
            return False
        if self.a != other.a:
            return False
        if self.relative_time != other.relative_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path_point(self):
        """Message field 'path_point'."""
        return self._path_point

    @path_point.setter
    def path_point(self, value):
        if __debug__:
            from ros2_interface.msg import PathPoint
            assert \
                isinstance(value, PathPoint), \
                "The 'path_point' field must be a sub message of type 'PathPoint'"
        self._path_point = value

    @builtins.property
    def v(self):
        """Message field 'v'."""
        return self._v

    @v.setter
    def v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v = value

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a = value

    @builtins.property
    def relative_time(self):
        """Message field 'relative_time'."""
        return self._relative_time

    @relative_time.setter
    def relative_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'relative_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'relative_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._relative_time = value
