# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/NaviInfoMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NaviInfoMsg(type):
    """Metaclass of message 'NaviInfoMsg'."""

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
                'ros2_interface.msg.NaviInfoMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navi_info_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navi_info_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navi_info_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navi_info_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navi_info_msg

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


class NaviInfoMsg(metaclass=Metaclass_NaviInfoMsg):
    """Message class 'NaviInfoMsg'."""

    __slots__ = [
        '_header',
        '_lane_type',
        '_lane_count',
        '_lane_index',
        '_lane_target',
        '_road_speed',
        '_turning_speed',
        '_turning_deriction',
        '_distance_to_cross',
        '_traffic_light_stop',
        '_crossing_behavior',
        '_distance_to_stop',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lane_type': 'uint32',
        'lane_count': 'uint32',
        'lane_index': 'uint32',
        'lane_target': 'uint32',
        'road_speed': 'float',
        'turning_speed': 'float',
        'turning_deriction': 'float',
        'distance_to_cross': 'float',
        'traffic_light_stop': 'boolean',
        'crossing_behavior': 'uint32',
        'distance_to_stop': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lane_type = kwargs.get('lane_type', int())
        self.lane_count = kwargs.get('lane_count', int())
        self.lane_index = kwargs.get('lane_index', int())
        self.lane_target = kwargs.get('lane_target', int())
        self.road_speed = kwargs.get('road_speed', float())
        self.turning_speed = kwargs.get('turning_speed', float())
        self.turning_deriction = kwargs.get('turning_deriction', float())
        self.distance_to_cross = kwargs.get('distance_to_cross', float())
        self.traffic_light_stop = kwargs.get('traffic_light_stop', bool())
        self.crossing_behavior = kwargs.get('crossing_behavior', int())
        self.distance_to_stop = kwargs.get('distance_to_stop', float())

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
        if self.lane_type != other.lane_type:
            return False
        if self.lane_count != other.lane_count:
            return False
        if self.lane_index != other.lane_index:
            return False
        if self.lane_target != other.lane_target:
            return False
        if self.road_speed != other.road_speed:
            return False
        if self.turning_speed != other.turning_speed:
            return False
        if self.turning_deriction != other.turning_deriction:
            return False
        if self.distance_to_cross != other.distance_to_cross:
            return False
        if self.traffic_light_stop != other.traffic_light_stop:
            return False
        if self.crossing_behavior != other.crossing_behavior:
            return False
        if self.distance_to_stop != other.distance_to_stop:
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
    def lane_type(self):
        """Message field 'lane_type'."""
        return self._lane_type

    @lane_type.setter
    def lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_type' field must be an unsigned integer in [0, 4294967295]"
        self._lane_type = value

    @builtins.property
    def lane_count(self):
        """Message field 'lane_count'."""
        return self._lane_count

    @lane_count.setter
    def lane_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_count' field must be an unsigned integer in [0, 4294967295]"
        self._lane_count = value

    @builtins.property
    def lane_index(self):
        """Message field 'lane_index'."""
        return self._lane_index

    @lane_index.setter
    def lane_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_index' field must be an unsigned integer in [0, 4294967295]"
        self._lane_index = value

    @builtins.property
    def lane_target(self):
        """Message field 'lane_target'."""
        return self._lane_target

    @lane_target.setter
    def lane_target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_target' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_target' field must be an unsigned integer in [0, 4294967295]"
        self._lane_target = value

    @builtins.property
    def road_speed(self):
        """Message field 'road_speed'."""
        return self._road_speed

    @road_speed.setter
    def road_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'road_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'road_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._road_speed = value

    @builtins.property
    def turning_speed(self):
        """Message field 'turning_speed'."""
        return self._turning_speed

    @turning_speed.setter
    def turning_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turning_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turning_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turning_speed = value

    @builtins.property
    def turning_deriction(self):
        """Message field 'turning_deriction'."""
        return self._turning_deriction

    @turning_deriction.setter
    def turning_deriction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turning_deriction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turning_deriction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turning_deriction = value

    @builtins.property
    def distance_to_cross(self):
        """Message field 'distance_to_cross'."""
        return self._distance_to_cross

    @distance_to_cross.setter
    def distance_to_cross(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_cross' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_cross' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_cross = value

    @builtins.property
    def traffic_light_stop(self):
        """Message field 'traffic_light_stop'."""
        return self._traffic_light_stop

    @traffic_light_stop.setter
    def traffic_light_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'traffic_light_stop' field must be of type 'bool'"
        self._traffic_light_stop = value

    @builtins.property
    def crossing_behavior(self):
        """Message field 'crossing_behavior'."""
        return self._crossing_behavior

    @crossing_behavior.setter
    def crossing_behavior(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crossing_behavior' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'crossing_behavior' field must be an unsigned integer in [0, 4294967295]"
        self._crossing_behavior = value

    @builtins.property
    def distance_to_stop(self):
        """Message field 'distance_to_stop'."""
        return self._distance_to_stop

    @distance_to_stop.setter
    def distance_to_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_stop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_stop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_stop = value
