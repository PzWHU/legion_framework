# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/SotifMonitorResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SotifMonitorResult(type):
    """Metaclass of message 'SotifMonitorResult'."""

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
                'ros2_interface.msg.SotifMonitorResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sotif_monitor_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sotif_monitor_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sotif_monitor_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sotif_monitor_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sotif_monitor_result

            from ros2_interface.msg import Grid
            if Grid.__class__._TYPE_SUPPORT is None:
                Grid.__class__.__import_type_support__()

            from ros2_interface.msg import Region
            if Region.__class__._TYPE_SUPPORT is None:
                Region.__class__.__import_type_support__()

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


class SotifMonitorResult(metaclass=Metaclass_SotifMonitorResult):
    """Message class 'SotifMonitorResult'."""

    __slots__ = [
        '_header',
        '_region_value',
        '_grid_map',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'region_value': 'sequence<ros2_interface/Region>',
        'grid_map': 'sequence<ros2_interface/Grid>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Region')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Grid')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.region_value = kwargs.get('region_value', [])
        self.grid_map = kwargs.get('grid_map', [])

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
        if self.region_value != other.region_value:
            return False
        if self.grid_map != other.grid_map:
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
    def region_value(self):
        """Message field 'region_value'."""
        return self._region_value

    @region_value.setter
    def region_value(self, value):
        if __debug__:
            from ros2_interface.msg import Region
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
                 all(isinstance(v, Region) for v in value) and
                 True), \
                "The 'region_value' field must be a set or sequence and each value of type 'Region'"
        self._region_value = value

    @builtins.property
    def grid_map(self):
        """Message field 'grid_map'."""
        return self._grid_map

    @grid_map.setter
    def grid_map(self, value):
        if __debug__:
            from ros2_interface.msg import Grid
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
                 all(isinstance(v, Grid) for v in value) and
                 True), \
                "The 'grid_map' field must be a set or sequence and each value of type 'Grid'"
        self._grid_map = value
