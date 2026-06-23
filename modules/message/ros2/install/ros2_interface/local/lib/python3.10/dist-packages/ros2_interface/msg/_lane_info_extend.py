# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/LaneInfoExtend.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'predecessor_ids'
# Member 'successor_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneInfoExtend(type):
    """Metaclass of message 'LaneInfoExtend'."""

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
                'ros2_interface.msg.LaneInfoExtend')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_info_extend
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_info_extend
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_info_extend
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_info_extend
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_info_extend

            from ros2_interface.msg import LanePoint
            if LanePoint.__class__._TYPE_SUPPORT is None:
                LanePoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneInfoExtend(metaclass=Metaclass_LaneInfoExtend):
    """Message class 'LaneInfoExtend'."""

    __slots__ = [
        '_priority',
        '_global_id',
        '_predecessor_ids',
        '_successor_ids',
        '_left_neighbor_id',
        '_right_neighbor_id',
        '_type',
        '_lane_points',
    ]

    _fields_and_field_types = {
        'priority': 'int8',
        'global_id': 'int64',
        'predecessor_ids': 'sequence<int64>',
        'successor_ids': 'sequence<int64>',
        'left_neighbor_id': 'int64',
        'right_neighbor_id': 'int64',
        'type': 'int8',
        'lane_points': 'sequence<ros2_interface/LanePoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LanePoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.priority = kwargs.get('priority', int())
        self.global_id = kwargs.get('global_id', int())
        self.predecessor_ids = array.array('q', kwargs.get('predecessor_ids', []))
        self.successor_ids = array.array('q', kwargs.get('successor_ids', []))
        self.left_neighbor_id = kwargs.get('left_neighbor_id', int())
        self.right_neighbor_id = kwargs.get('right_neighbor_id', int())
        self.type = kwargs.get('type', int())
        self.lane_points = kwargs.get('lane_points', [])

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
        if self.priority != other.priority:
            return False
        if self.global_id != other.global_id:
            return False
        if self.predecessor_ids != other.predecessor_ids:
            return False
        if self.successor_ids != other.successor_ids:
            return False
        if self.left_neighbor_id != other.left_neighbor_id:
            return False
        if self.right_neighbor_id != other.right_neighbor_id:
            return False
        if self.type != other.type:
            return False
        if self.lane_points != other.lane_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'priority' field must be an integer in [-128, 127]"
        self._priority = value

    @builtins.property
    def global_id(self):
        """Message field 'global_id'."""
        return self._global_id

    @global_id.setter
    def global_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'global_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'global_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._global_id = value

    @builtins.property
    def predecessor_ids(self):
        """Message field 'predecessor_ids'."""
        return self._predecessor_ids

    @predecessor_ids.setter
    def predecessor_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'predecessor_ids' array.array() must have the type code of 'q'"
            self._predecessor_ids = value
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'predecessor_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._predecessor_ids = array.array('q', value)

    @builtins.property
    def successor_ids(self):
        """Message field 'successor_ids'."""
        return self._successor_ids

    @successor_ids.setter
    def successor_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'successor_ids' array.array() must have the type code of 'q'"
            self._successor_ids = value
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'successor_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._successor_ids = array.array('q', value)

    @builtins.property
    def left_neighbor_id(self):
        """Message field 'left_neighbor_id'."""
        return self._left_neighbor_id

    @left_neighbor_id.setter
    def left_neighbor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_neighbor_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'left_neighbor_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._left_neighbor_id = value

    @builtins.property
    def right_neighbor_id(self):
        """Message field 'right_neighbor_id'."""
        return self._right_neighbor_id

    @right_neighbor_id.setter
    def right_neighbor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_neighbor_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'right_neighbor_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._right_neighbor_id = value

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
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value

    @builtins.property
    def lane_points(self):
        """Message field 'lane_points'."""
        return self._lane_points

    @lane_points.setter
    def lane_points(self, value):
        if __debug__:
            from ros2_interface.msg import LanePoint
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
                 all(isinstance(v, LanePoint) for v in value) and
                 True), \
                "The 'lane_points' field must be a set or sequence and each value of type 'LanePoint'"
        self._lane_points = value
