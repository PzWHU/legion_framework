# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/TrafficLight.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'light_lanes'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficLight(type):
    """Metaclass of message 'TrafficLight'."""

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
                'ros2_interface.msg.TrafficLight')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_light
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_light
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_light
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_light
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_light

            from ros2_interface.msg import ImageRect
            if ImageRect.__class__._TYPE_SUPPORT is None:
                ImageRect.__class__.__import_type_support__()

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

            from ros2_interface.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficLight(metaclass=Metaclass_TrafficLight):
    """Message class 'TrafficLight'."""

    __slots__ = [
        '_color',
        '_id',
        '_type',
        '_confidence',
        '_light_rect',
        '_position',
        '_distance',
        '_light_lanes',
        '_tracking_time',
        '_blink',
        '_blinking_time',
        '_remaining_time',
        '_create_time',
    ]

    _fields_and_field_types = {
        'color': 'int32',
        'id': 'uint32',
        'type': 'int32',
        'confidence': 'double',
        'light_rect': 'ros2_interface/ImageRect',
        'position': 'ros2_interface/Point3D',
        'distance': 'double',
        'light_lanes': 'sequence<int32>',
        'tracking_time': 'double',
        'blink': 'boolean',
        'blinking_time': 'double',
        'remaining_time': 'double',
        'create_time': 'ros2_interface/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'ImageRect'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color = kwargs.get('color', int())
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.confidence = kwargs.get('confidence', float())
        from ros2_interface.msg import ImageRect
        self.light_rect = kwargs.get('light_rect', ImageRect())
        from ros2_interface.msg import Point3D
        self.position = kwargs.get('position', Point3D())
        self.distance = kwargs.get('distance', float())
        self.light_lanes = array.array('i', kwargs.get('light_lanes', []))
        self.tracking_time = kwargs.get('tracking_time', float())
        self.blink = kwargs.get('blink', bool())
        self.blinking_time = kwargs.get('blinking_time', float())
        self.remaining_time = kwargs.get('remaining_time', float())
        from ros2_interface.msg import Time
        self.create_time = kwargs.get('create_time', Time())

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
        if self.color != other.color:
            return False
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.confidence != other.confidence:
            return False
        if self.light_rect != other.light_rect:
            return False
        if self.position != other.position:
            return False
        if self.distance != other.distance:
            return False
        if self.light_lanes != other.light_lanes:
            return False
        if self.tracking_time != other.tracking_time:
            return False
        if self.blink != other.blink:
            return False
        if self.blinking_time != other.blinking_time:
            return False
        if self.remaining_time != other.remaining_time:
            return False
        if self.create_time != other.create_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'color' field must be an integer in [-2147483648, 2147483647]"
        self._color = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def light_rect(self):
        """Message field 'light_rect'."""
        return self._light_rect

    @light_rect.setter
    def light_rect(self, value):
        if __debug__:
            from ros2_interface.msg import ImageRect
            assert \
                isinstance(value, ImageRect), \
                "The 'light_rect' field must be a sub message of type 'ImageRect'"
        self._light_rect = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'position' field must be a sub message of type 'Point3D'"
        self._position = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

    @builtins.property
    def light_lanes(self):
        """Message field 'light_lanes'."""
        return self._light_lanes

    @light_lanes.setter
    def light_lanes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'light_lanes' array.array() must have the type code of 'i'"
            self._light_lanes = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'light_lanes' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._light_lanes = array.array('i', value)

    @builtins.property
    def tracking_time(self):
        """Message field 'tracking_time'."""
        return self._tracking_time

    @tracking_time.setter
    def tracking_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tracking_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tracking_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tracking_time = value

    @builtins.property
    def blink(self):
        """Message field 'blink'."""
        return self._blink

    @blink.setter
    def blink(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'blink' field must be of type 'bool'"
        self._blink = value

    @builtins.property
    def blinking_time(self):
        """Message field 'blinking_time'."""
        return self._blinking_time

    @blinking_time.setter
    def blinking_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'blinking_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'blinking_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._blinking_time = value

    @builtins.property
    def remaining_time(self):
        """Message field 'remaining_time'."""
        return self._remaining_time

    @remaining_time.setter
    def remaining_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remaining_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remaining_time = value

    @builtins.property
    def create_time(self):
        """Message field 'create_time'."""
        return self._create_time

    @create_time.setter
    def create_time(self, value):
        if __debug__:
            from ros2_interface.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'create_time' field must be a sub message of type 'Time'"
        self._create_time = value
