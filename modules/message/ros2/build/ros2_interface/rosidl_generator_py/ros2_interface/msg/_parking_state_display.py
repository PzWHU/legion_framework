# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/ParkingStateDisplay.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParkingStateDisplay(type):
    """Metaclass of message 'ParkingStateDisplay'."""

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
                'ros2_interface.msg.ParkingStateDisplay')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parking_state_display
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parking_state_display
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parking_state_display
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parking_state_display
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parking_state_display

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


class ParkingStateDisplay(metaclass=Metaclass_ParkingStateDisplay):
    """Message class 'ParkingStateDisplay'."""

    __slots__ = [
        '_header',
        '_parking_type',
        '_moves_counter',
        '_remian_distance',
        '_display_info',
        '_distance_to_leader_obj',
        '_state',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'parking_type': 'int32',
        'moves_counter': 'int32',
        'remian_distance': 'double',
        'display_info': 'int32',
        'distance_to_leader_obj': 'double',
        'state': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.parking_type = kwargs.get('parking_type', int())
        self.moves_counter = kwargs.get('moves_counter', int())
        self.remian_distance = kwargs.get('remian_distance', float())
        self.display_info = kwargs.get('display_info', int())
        self.distance_to_leader_obj = kwargs.get('distance_to_leader_obj', float())
        self.state = kwargs.get('state', int())

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
        if self.parking_type != other.parking_type:
            return False
        if self.moves_counter != other.moves_counter:
            return False
        if self.remian_distance != other.remian_distance:
            return False
        if self.display_info != other.display_info:
            return False
        if self.distance_to_leader_obj != other.distance_to_leader_obj:
            return False
        if self.state != other.state:
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
    def parking_type(self):
        """Message field 'parking_type'."""
        return self._parking_type

    @parking_type.setter
    def parking_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_type' field must be an integer in [-2147483648, 2147483647]"
        self._parking_type = value

    @builtins.property
    def moves_counter(self):
        """Message field 'moves_counter'."""
        return self._moves_counter

    @moves_counter.setter
    def moves_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moves_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'moves_counter' field must be an integer in [-2147483648, 2147483647]"
        self._moves_counter = value

    @builtins.property
    def remian_distance(self):
        """Message field 'remian_distance'."""
        return self._remian_distance

    @remian_distance.setter
    def remian_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remian_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remian_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remian_distance = value

    @builtins.property
    def display_info(self):
        """Message field 'display_info'."""
        return self._display_info

    @display_info.setter
    def display_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'display_info' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'display_info' field must be an integer in [-2147483648, 2147483647]"
        self._display_info = value

    @builtins.property
    def distance_to_leader_obj(self):
        """Message field 'distance_to_leader_obj'."""
        return self._distance_to_leader_obj

    @distance_to_leader_obj.setter
    def distance_to_leader_obj(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_leader_obj' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_to_leader_obj' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_to_leader_obj = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state' field must be an integer in [-2147483648, 2147483647]"
        self._state = value
