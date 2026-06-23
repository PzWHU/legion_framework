# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/TrafficLightMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficLightMsg(type):
    """Metaclass of message 'TrafficLightMsg'."""

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
                'ros2_interface.msg.TrafficLightMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_light_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_light_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_light_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_light_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_light_msg

            from ros2_interface.msg import TrafficLight
            if TrafficLight.__class__._TYPE_SUPPORT is None:
                TrafficLight.__class__.__import_type_support__()

            from ros2_interface.msg import TrafficLightDebug
            if TrafficLightDebug.__class__._TYPE_SUPPORT is None:
                TrafficLightDebug.__class__.__import_type_support__()

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


class TrafficLightMsg(metaclass=Metaclass_TrafficLightMsg):
    """Message class 'TrafficLightMsg'."""

    __slots__ = [
        '_header',
        '_traffic_light',
        '_traffic_light_debug',
        '_contain_lights',
        '_camera_id',
        '_is_valid',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'traffic_light': 'sequence<ros2_interface/TrafficLight>',
        'traffic_light_debug': 'ros2_interface/TrafficLightDebug',
        'contain_lights': 'boolean',
        'camera_id': 'int32',
        'is_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrafficLight')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrafficLightDebug'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.traffic_light = kwargs.get('traffic_light', [])
        from ros2_interface.msg import TrafficLightDebug
        self.traffic_light_debug = kwargs.get('traffic_light_debug', TrafficLightDebug())
        self.contain_lights = kwargs.get('contain_lights', bool())
        self.camera_id = kwargs.get('camera_id', int())
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
        if self.traffic_light != other.traffic_light:
            return False
        if self.traffic_light_debug != other.traffic_light_debug:
            return False
        if self.contain_lights != other.contain_lights:
            return False
        if self.camera_id != other.camera_id:
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
    def traffic_light(self):
        """Message field 'traffic_light'."""
        return self._traffic_light

    @traffic_light.setter
    def traffic_light(self, value):
        if __debug__:
            from ros2_interface.msg import TrafficLight
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
                 all(isinstance(v, TrafficLight) for v in value) and
                 True), \
                "The 'traffic_light' field must be a set or sequence and each value of type 'TrafficLight'"
        self._traffic_light = value

    @builtins.property
    def traffic_light_debug(self):
        """Message field 'traffic_light_debug'."""
        return self._traffic_light_debug

    @traffic_light_debug.setter
    def traffic_light_debug(self, value):
        if __debug__:
            from ros2_interface.msg import TrafficLightDebug
            assert \
                isinstance(value, TrafficLightDebug), \
                "The 'traffic_light_debug' field must be a sub message of type 'TrafficLightDebug'"
        self._traffic_light_debug = value

    @builtins.property
    def contain_lights(self):
        """Message field 'contain_lights'."""
        return self._contain_lights

    @contain_lights.setter
    def contain_lights(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'contain_lights' field must be of type 'bool'"
        self._contain_lights = value

    @builtins.property
    def camera_id(self):
        """Message field 'camera_id'."""
        return self._camera_id

    @camera_id.setter
    def camera_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'camera_id' field must be an integer in [-2147483648, 2147483647]"
        self._camera_id = value

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
