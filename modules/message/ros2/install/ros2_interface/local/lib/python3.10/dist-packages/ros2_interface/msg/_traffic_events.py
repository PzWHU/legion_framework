# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/TrafficEvents.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficEvents(type):
    """Metaclass of message 'TrafficEvents'."""

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
                'ros2_interface.msg.TrafficEvents')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_events
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_events
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_events
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_events
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_events

            from ros2_interface.msg import JunctionInfo
            if JunctionInfo.__class__._TYPE_SUPPORT is None:
                JunctionInfo.__class__.__import_type_support__()

            from ros2_interface.msg import LimitSpeedInfo
            if LimitSpeedInfo.__class__._TYPE_SUPPORT is None:
                LimitSpeedInfo.__class__.__import_type_support__()

            from ros2_interface.msg import RouteFusionInfo
            if RouteFusionInfo.__class__._TYPE_SUPPORT is None:
                RouteFusionInfo.__class__.__import_type_support__()

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


class TrafficEvents(metaclass=Metaclass_TrafficEvents):
    """Message class 'TrafficEvents'."""

    __slots__ = [
        '_header',
        '_route_fusion_info',
        '_junction_info',
        '_limit_speed_info',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'route_fusion_info': 'ros2_interface/RouteFusionInfo',
        'junction_info': 'ros2_interface/JunctionInfo',
        'limit_speed_info': 'ros2_interface/LimitSpeedInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'RouteFusionInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'JunctionInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LimitSpeedInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ros2_interface.msg import RouteFusionInfo
        self.route_fusion_info = kwargs.get('route_fusion_info', RouteFusionInfo())
        from ros2_interface.msg import JunctionInfo
        self.junction_info = kwargs.get('junction_info', JunctionInfo())
        from ros2_interface.msg import LimitSpeedInfo
        self.limit_speed_info = kwargs.get('limit_speed_info', LimitSpeedInfo())

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
        if self.route_fusion_info != other.route_fusion_info:
            return False
        if self.junction_info != other.junction_info:
            return False
        if self.limit_speed_info != other.limit_speed_info:
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
    def route_fusion_info(self):
        """Message field 'route_fusion_info'."""
        return self._route_fusion_info

    @route_fusion_info.setter
    def route_fusion_info(self, value):
        if __debug__:
            from ros2_interface.msg import RouteFusionInfo
            assert \
                isinstance(value, RouteFusionInfo), \
                "The 'route_fusion_info' field must be a sub message of type 'RouteFusionInfo'"
        self._route_fusion_info = value

    @builtins.property
    def junction_info(self):
        """Message field 'junction_info'."""
        return self._junction_info

    @junction_info.setter
    def junction_info(self, value):
        if __debug__:
            from ros2_interface.msg import JunctionInfo
            assert \
                isinstance(value, JunctionInfo), \
                "The 'junction_info' field must be a sub message of type 'JunctionInfo'"
        self._junction_info = value

    @builtins.property
    def limit_speed_info(self):
        """Message field 'limit_speed_info'."""
        return self._limit_speed_info

    @limit_speed_info.setter
    def limit_speed_info(self, value):
        if __debug__:
            from ros2_interface.msg import LimitSpeedInfo
            assert \
                isinstance(value, LimitSpeedInfo), \
                "The 'limit_speed_info' field must be a sub message of type 'LimitSpeedInfo'"
        self._limit_speed_info = value
