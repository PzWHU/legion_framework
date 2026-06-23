# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/WarningCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WarningCommand(type):
    """Metaclass of message 'WarningCommand'."""

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
                'ros2_interface.msg.WarningCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__warning_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__warning_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__warning_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__warning_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__warning_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WarningCommand(metaclass=Metaclass_WarningCommand):
    """Message class 'WarningCommand'."""

    __slots__ = [
        '_sound_alarm',
        '_light_alarm',
        '_media_alarm',
        '_motion_alarm',
    ]

    _fields_and_field_types = {
        'sound_alarm': 'int32',
        'light_alarm': 'int32',
        'media_alarm': 'int32',
        'motion_alarm': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sound_alarm = kwargs.get('sound_alarm', int())
        self.light_alarm = kwargs.get('light_alarm', int())
        self.media_alarm = kwargs.get('media_alarm', int())
        self.motion_alarm = kwargs.get('motion_alarm', int())

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
        if self.sound_alarm != other.sound_alarm:
            return False
        if self.light_alarm != other.light_alarm:
            return False
        if self.media_alarm != other.media_alarm:
            return False
        if self.motion_alarm != other.motion_alarm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sound_alarm(self):
        """Message field 'sound_alarm'."""
        return self._sound_alarm

    @sound_alarm.setter
    def sound_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sound_alarm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sound_alarm' field must be an integer in [-2147483648, 2147483647]"
        self._sound_alarm = value

    @builtins.property
    def light_alarm(self):
        """Message field 'light_alarm'."""
        return self._light_alarm

    @light_alarm.setter
    def light_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_alarm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'light_alarm' field must be an integer in [-2147483648, 2147483647]"
        self._light_alarm = value

    @builtins.property
    def media_alarm(self):
        """Message field 'media_alarm'."""
        return self._media_alarm

    @media_alarm.setter
    def media_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'media_alarm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'media_alarm' field must be an integer in [-2147483648, 2147483647]"
        self._media_alarm = value

    @builtins.property
    def motion_alarm(self):
        """Message field 'motion_alarm'."""
        return self._motion_alarm

    @motion_alarm.setter
    def motion_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_alarm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motion_alarm' field must be an integer in [-2147483648, 2147483647]"
        self._motion_alarm = value
