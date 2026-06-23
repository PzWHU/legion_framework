# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/AlarmMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AlarmMessage(type):
    """Metaclass of message 'AlarmMessage'."""

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
                'ros2_interface.msg.AlarmMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__alarm_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__alarm_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__alarm_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__alarm_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__alarm_message

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


class AlarmMessage(metaclass=Metaclass_AlarmMessage):
    """Message class 'AlarmMessage'."""

    __slots__ = [
        '_header',
        '_alarm_proc',
        '_alarm_level',
        '_alarm_type',
        '_alarm_id',
        '_alarm_display',
        '_alarm_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'alarm_proc': 'string',
        'alarm_level': 'int32',
        'alarm_type': 'int32',
        'alarm_id': 'int32',
        'alarm_display': 'int32',
        'alarm_data': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.alarm_proc = kwargs.get('alarm_proc', str())
        self.alarm_level = kwargs.get('alarm_level', int())
        self.alarm_type = kwargs.get('alarm_type', int())
        self.alarm_id = kwargs.get('alarm_id', int())
        self.alarm_display = kwargs.get('alarm_display', int())
        self.alarm_data = kwargs.get('alarm_data', str())

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
        if self.alarm_proc != other.alarm_proc:
            return False
        if self.alarm_level != other.alarm_level:
            return False
        if self.alarm_type != other.alarm_type:
            return False
        if self.alarm_id != other.alarm_id:
            return False
        if self.alarm_display != other.alarm_display:
            return False
        if self.alarm_data != other.alarm_data:
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
    def alarm_proc(self):
        """Message field 'alarm_proc'."""
        return self._alarm_proc

    @alarm_proc.setter
    def alarm_proc(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'alarm_proc' field must be of type 'str'"
        self._alarm_proc = value

    @builtins.property
    def alarm_level(self):
        """Message field 'alarm_level'."""
        return self._alarm_level

    @alarm_level.setter
    def alarm_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_level' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'alarm_level' field must be an integer in [-2147483648, 2147483647]"
        self._alarm_level = value

    @builtins.property
    def alarm_type(self):
        """Message field 'alarm_type'."""
        return self._alarm_type

    @alarm_type.setter
    def alarm_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'alarm_type' field must be an integer in [-2147483648, 2147483647]"
        self._alarm_type = value

    @builtins.property
    def alarm_id(self):
        """Message field 'alarm_id'."""
        return self._alarm_id

    @alarm_id.setter
    def alarm_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'alarm_id' field must be an integer in [-2147483648, 2147483647]"
        self._alarm_id = value

    @builtins.property
    def alarm_display(self):
        """Message field 'alarm_display'."""
        return self._alarm_display

    @alarm_display.setter
    def alarm_display(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_display' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'alarm_display' field must be an integer in [-2147483648, 2147483647]"
        self._alarm_display = value

    @builtins.property
    def alarm_data(self):
        """Message field 'alarm_data'."""
        return self._alarm_data

    @alarm_data.setter
    def alarm_data(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'alarm_data' field must be of type 'str'"
        self._alarm_data = value
