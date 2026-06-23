# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/PredictionObstacles.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PredictionObstacles(type):
    """Metaclass of message 'PredictionObstacles'."""

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
                'ros2_interface.msg.PredictionObstacles')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__prediction_obstacles
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__prediction_obstacles
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__prediction_obstacles
            cls._TYPE_SUPPORT = module.type_support_msg__msg__prediction_obstacles
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__prediction_obstacles

            from ros2_interface.msg import PredictionObstacle
            if PredictionObstacle.__class__._TYPE_SUPPORT is None:
                PredictionObstacle.__class__.__import_type_support__()

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


class PredictionObstacles(metaclass=Metaclass_PredictionObstacles):
    """Message class 'PredictionObstacles'."""

    __slots__ = [
        '_header',
        '_prediction_obstacles',
        '_change_origin_flag',
        '_start_timestamp',
        '_end_timestamp',
        '_self_intent',
        '_scenario',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'prediction_obstacles': 'sequence<ros2_interface/PredictionObstacle>',
        'change_origin_flag': 'int32',
        'start_timestamp': 'double',
        'end_timestamp': 'double',
        'self_intent': 'int32',
        'scenario': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PredictionObstacle')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.prediction_obstacles = kwargs.get('prediction_obstacles', [])
        self.change_origin_flag = kwargs.get('change_origin_flag', int())
        self.start_timestamp = kwargs.get('start_timestamp', float())
        self.end_timestamp = kwargs.get('end_timestamp', float())
        self.self_intent = kwargs.get('self_intent', int())
        self.scenario = kwargs.get('scenario', int())

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
        if self.prediction_obstacles != other.prediction_obstacles:
            return False
        if self.change_origin_flag != other.change_origin_flag:
            return False
        if self.start_timestamp != other.start_timestamp:
            return False
        if self.end_timestamp != other.end_timestamp:
            return False
        if self.self_intent != other.self_intent:
            return False
        if self.scenario != other.scenario:
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
    def prediction_obstacles(self):
        """Message field 'prediction_obstacles'."""
        return self._prediction_obstacles

    @prediction_obstacles.setter
    def prediction_obstacles(self, value):
        if __debug__:
            from ros2_interface.msg import PredictionObstacle
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
                 all(isinstance(v, PredictionObstacle) for v in value) and
                 True), \
                "The 'prediction_obstacles' field must be a set or sequence and each value of type 'PredictionObstacle'"
        self._prediction_obstacles = value

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
    def start_timestamp(self):
        """Message field 'start_timestamp'."""
        return self._start_timestamp

    @start_timestamp.setter
    def start_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'start_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._start_timestamp = value

    @builtins.property
    def end_timestamp(self):
        """Message field 'end_timestamp'."""
        return self._end_timestamp

    @end_timestamp.setter
    def end_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'end_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._end_timestamp = value

    @builtins.property
    def self_intent(self):
        """Message field 'self_intent'."""
        return self._self_intent

    @self_intent.setter
    def self_intent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'self_intent' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'self_intent' field must be an integer in [-2147483648, 2147483647]"
        self._self_intent = value

    @builtins.property
    def scenario(self):
        """Message field 'scenario'."""
        return self._scenario

    @scenario.setter
    def scenario(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scenario' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'scenario' field must be an integer in [-2147483648, 2147483647]"
        self._scenario = value
