# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/PredictionObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PredictionObstacle(type):
    """Metaclass of message 'PredictionObstacle'."""

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
                'ros2_interface.msg.PredictionObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__prediction_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__prediction_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__prediction_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__prediction_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__prediction_obstacle

            from ros2_interface.msg import ObstacleIntent
            if ObstacleIntent.__class__._TYPE_SUPPORT is None:
                ObstacleIntent.__class__.__import_type_support__()

            from ros2_interface.msg import ObstacleInteractiveTag
            if ObstacleInteractiveTag.__class__._TYPE_SUPPORT is None:
                ObstacleInteractiveTag.__class__.__import_type_support__()

            from ros2_interface.msg import ObstaclePriority
            if ObstaclePriority.__class__._TYPE_SUPPORT is None:
                ObstaclePriority.__class__.__import_type_support__()

            from ros2_interface.msg import PerceptionObstacle
            if PerceptionObstacle.__class__._TYPE_SUPPORT is None:
                PerceptionObstacle.__class__.__import_type_support__()

            from ros2_interface.msg import TrajectoryInPrediction
            if TrajectoryInPrediction.__class__._TYPE_SUPPORT is None:
                TrajectoryInPrediction.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PredictionObstacle(metaclass=Metaclass_PredictionObstacle):
    """Message class 'PredictionObstacle'."""

    __slots__ = [
        '_perception_obstacle',
        '_timestamp',
        '_predicted_period',
        '_trajectory',
        '_intent',
        '_priority',
        '_interactive_tag',
        '_is_static',
    ]

    _fields_and_field_types = {
        'perception_obstacle': 'ros2_interface/PerceptionObstacle',
        'timestamp': 'double',
        'predicted_period': 'double',
        'trajectory': 'sequence<ros2_interface/TrajectoryInPrediction>',
        'intent': 'ros2_interface/ObstacleIntent',
        'priority': 'ros2_interface/ObstaclePriority',
        'interactive_tag': 'ros2_interface/ObstacleInteractiveTag',
        'is_static': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PerceptionObstacle'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryInPrediction')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'ObstacleIntent'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'ObstaclePriority'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'ObstacleInteractiveTag'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ros2_interface.msg import PerceptionObstacle
        self.perception_obstacle = kwargs.get('perception_obstacle', PerceptionObstacle())
        self.timestamp = kwargs.get('timestamp', float())
        self.predicted_period = kwargs.get('predicted_period', float())
        self.trajectory = kwargs.get('trajectory', [])
        from ros2_interface.msg import ObstacleIntent
        self.intent = kwargs.get('intent', ObstacleIntent())
        from ros2_interface.msg import ObstaclePriority
        self.priority = kwargs.get('priority', ObstaclePriority())
        from ros2_interface.msg import ObstacleInteractiveTag
        self.interactive_tag = kwargs.get('interactive_tag', ObstacleInteractiveTag())
        self.is_static = kwargs.get('is_static', bool())

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
        if self.perception_obstacle != other.perception_obstacle:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.predicted_period != other.predicted_period:
            return False
        if self.trajectory != other.trajectory:
            return False
        if self.intent != other.intent:
            return False
        if self.priority != other.priority:
            return False
        if self.interactive_tag != other.interactive_tag:
            return False
        if self.is_static != other.is_static:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def perception_obstacle(self):
        """Message field 'perception_obstacle'."""
        return self._perception_obstacle

    @perception_obstacle.setter
    def perception_obstacle(self, value):
        if __debug__:
            from ros2_interface.msg import PerceptionObstacle
            assert \
                isinstance(value, PerceptionObstacle), \
                "The 'perception_obstacle' field must be a sub message of type 'PerceptionObstacle'"
        self._perception_obstacle = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def predicted_period(self):
        """Message field 'predicted_period'."""
        return self._predicted_period

    @predicted_period.setter
    def predicted_period(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'predicted_period' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'predicted_period' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._predicted_period = value

    @builtins.property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryInPrediction
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
                 all(isinstance(v, TrajectoryInPrediction) for v in value) and
                 True), \
                "The 'trajectory' field must be a set or sequence and each value of type 'TrajectoryInPrediction'"
        self._trajectory = value

    @builtins.property
    def intent(self):
        """Message field 'intent'."""
        return self._intent

    @intent.setter
    def intent(self, value):
        if __debug__:
            from ros2_interface.msg import ObstacleIntent
            assert \
                isinstance(value, ObstacleIntent), \
                "The 'intent' field must be a sub message of type 'ObstacleIntent'"
        self._intent = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            from ros2_interface.msg import ObstaclePriority
            assert \
                isinstance(value, ObstaclePriority), \
                "The 'priority' field must be a sub message of type 'ObstaclePriority'"
        self._priority = value

    @builtins.property
    def interactive_tag(self):
        """Message field 'interactive_tag'."""
        return self._interactive_tag

    @interactive_tag.setter
    def interactive_tag(self, value):
        if __debug__:
            from ros2_interface.msg import ObstacleInteractiveTag
            assert \
                isinstance(value, ObstacleInteractiveTag), \
                "The 'interactive_tag' field must be a sub message of type 'ObstacleInteractiveTag'"
        self._interactive_tag = value

    @builtins.property
    def is_static(self):
        """Message field 'is_static'."""
        return self._is_static

    @is_static.setter
    def is_static(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_static' field must be of type 'bool'"
        self._is_static = value
