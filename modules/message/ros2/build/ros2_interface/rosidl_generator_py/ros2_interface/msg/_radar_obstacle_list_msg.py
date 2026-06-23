# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/RadarObstacleListMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarObstacleListMsg(type):
    """Metaclass of message 'RadarObstacleListMsg'."""

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
                'ros2_interface.msg.RadarObstacleListMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_obstacle_list_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_obstacle_list_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_obstacle_list_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_obstacle_list_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_obstacle_list_msg

            from ros2_interface.msg import RadarObstacle
            if RadarObstacle.__class__._TYPE_SUPPORT is None:
                RadarObstacle.__class__.__import_type_support__()

            from ros2_interface.msg import RadarState
            if RadarState.__class__._TYPE_SUPPORT is None:
                RadarState.__class__.__import_type_support__()

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


class RadarObstacleListMsg(metaclass=Metaclass_RadarObstacleListMsg):
    """Message class 'RadarObstacleListMsg'."""

    __slots__ = [
        '_header',
        '_radar_obstacle',
        '_sensor_id',
        '_radar_state',
        '_is_valid',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'radar_obstacle': 'sequence<ros2_interface/RadarObstacle>',
        'sensor_id': 'uint8',
        'radar_state': 'ros2_interface/RadarState',
        'is_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'RadarObstacle')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'RadarState'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.radar_obstacle = kwargs.get('radar_obstacle', [])
        self.sensor_id = kwargs.get('sensor_id', int())
        from ros2_interface.msg import RadarState
        self.radar_state = kwargs.get('radar_state', RadarState())
        self.is_valid = kwargs.get('is_valid', bool())

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
        if self.radar_obstacle != other.radar_obstacle:
            return False
        if self.sensor_id != other.sensor_id:
            return False
        if self.radar_state != other.radar_state:
            return False
        if self.is_valid != other.is_valid:
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
    def radar_obstacle(self):
        """Message field 'radar_obstacle'."""
        return self._radar_obstacle

    @radar_obstacle.setter
    def radar_obstacle(self, value):
        if __debug__:
            from ros2_interface.msg import RadarObstacle
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
                 all(isinstance(v, RadarObstacle) for v in value) and
                 True), \
                "The 'radar_obstacle' field must be a set or sequence and each value of type 'RadarObstacle'"
        self._radar_obstacle = value

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_id' field must be an unsigned integer in [0, 255]"
        self._sensor_id = value

    @builtins.property
    def radar_state(self):
        """Message field 'radar_state'."""
        return self._radar_state

    @radar_state.setter
    def radar_state(self, value):
        if __debug__:
            from ros2_interface.msg import RadarState
            assert \
                isinstance(value, RadarState), \
                "The 'radar_state' field must be a sub message of type 'RadarState'"
        self._radar_state = value

    @builtins.property
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid' field must be of type 'bool'"
        self._is_valid = value
