# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/TrajectoryLimitCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryLimitCommand(type):
    """Metaclass of message 'TrajectoryLimitCommand'."""

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
                'ros2_interface.msg.TrajectoryLimitCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_limit_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_limit_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_limit_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_limit_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_limit_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryLimitCommand(metaclass=Metaclass_TrajectoryLimitCommand):
    """Message class 'TrajectoryLimitCommand'."""

    __slots__ = [
        '_speed_limit_enable',
        '_speed_limit',
        '_kappa_limit_enable',
        '_kappa_limit',
    ]

    _fields_and_field_types = {
        'speed_limit_enable': 'boolean',
        'speed_limit': 'double',
        'kappa_limit_enable': 'boolean',
        'kappa_limit': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed_limit_enable = kwargs.get('speed_limit_enable', bool())
        self.speed_limit = kwargs.get('speed_limit', float())
        self.kappa_limit_enable = kwargs.get('kappa_limit_enable', bool())
        self.kappa_limit = kwargs.get('kappa_limit', float())

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
        if self.speed_limit_enable != other.speed_limit_enable:
            return False
        if self.speed_limit != other.speed_limit:
            return False
        if self.kappa_limit_enable != other.kappa_limit_enable:
            return False
        if self.kappa_limit != other.kappa_limit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_limit_enable(self):
        """Message field 'speed_limit_enable'."""
        return self._speed_limit_enable

    @speed_limit_enable.setter
    def speed_limit_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speed_limit_enable' field must be of type 'bool'"
        self._speed_limit_enable = value

    @builtins.property
    def speed_limit(self):
        """Message field 'speed_limit'."""
        return self._speed_limit

    @speed_limit.setter
    def speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_limit = value

    @builtins.property
    def kappa_limit_enable(self):
        """Message field 'kappa_limit_enable'."""
        return self._kappa_limit_enable

    @kappa_limit_enable.setter
    def kappa_limit_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'kappa_limit_enable' field must be of type 'bool'"
        self._kappa_limit_enable = value

    @builtins.property
    def kappa_limit(self):
        """Message field 'kappa_limit'."""
        return self._kappa_limit

    @kappa_limit.setter
    def kappa_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kappa_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kappa_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kappa_limit = value
