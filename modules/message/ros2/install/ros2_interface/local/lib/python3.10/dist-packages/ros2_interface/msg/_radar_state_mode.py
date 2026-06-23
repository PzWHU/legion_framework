# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/RadarStateMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarStateMode(type):
    """Metaclass of message 'RadarStateMode'."""

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
                'ros2_interface.msg.RadarStateMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_state_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_state_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_state_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_state_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_state_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarStateMode(metaclass=Metaclass_RadarStateMode):
    """Message class 'RadarStateMode'."""

    __slots__ = [
        '_can0_work_mode',
        '_can1_work_mode',
        '_dual_can_mode',
        '_timming_mode',
        '_power_mode',
        '_performance_mode',
    ]

    _fields_and_field_types = {
        'can0_work_mode': 'uint8',
        'can1_work_mode': 'uint8',
        'dual_can_mode': 'uint8',
        'timming_mode': 'uint8',
        'power_mode': 'uint8',
        'performance_mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can0_work_mode = kwargs.get('can0_work_mode', int())
        self.can1_work_mode = kwargs.get('can1_work_mode', int())
        self.dual_can_mode = kwargs.get('dual_can_mode', int())
        self.timming_mode = kwargs.get('timming_mode', int())
        self.power_mode = kwargs.get('power_mode', int())
        self.performance_mode = kwargs.get('performance_mode', int())

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
        if self.can0_work_mode != other.can0_work_mode:
            return False
        if self.can1_work_mode != other.can1_work_mode:
            return False
        if self.dual_can_mode != other.dual_can_mode:
            return False
        if self.timming_mode != other.timming_mode:
            return False
        if self.power_mode != other.power_mode:
            return False
        if self.performance_mode != other.performance_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can0_work_mode(self):
        """Message field 'can0_work_mode'."""
        return self._can0_work_mode

    @can0_work_mode.setter
    def can0_work_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can0_work_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can0_work_mode' field must be an unsigned integer in [0, 255]"
        self._can0_work_mode = value

    @builtins.property
    def can1_work_mode(self):
        """Message field 'can1_work_mode'."""
        return self._can1_work_mode

    @can1_work_mode.setter
    def can1_work_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can1_work_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can1_work_mode' field must be an unsigned integer in [0, 255]"
        self._can1_work_mode = value

    @builtins.property
    def dual_can_mode(self):
        """Message field 'dual_can_mode'."""
        return self._dual_can_mode

    @dual_can_mode.setter
    def dual_can_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dual_can_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dual_can_mode' field must be an unsigned integer in [0, 255]"
        self._dual_can_mode = value

    @builtins.property
    def timming_mode(self):
        """Message field 'timming_mode'."""
        return self._timming_mode

    @timming_mode.setter
    def timming_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timming_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'timming_mode' field must be an unsigned integer in [0, 255]"
        self._timming_mode = value

    @builtins.property
    def power_mode(self):
        """Message field 'power_mode'."""
        return self._power_mode

    @power_mode.setter
    def power_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_mode' field must be an unsigned integer in [0, 255]"
        self._power_mode = value

    @builtins.property
    def performance_mode(self):
        """Message field 'performance_mode'."""
        return self._performance_mode

    @performance_mode.setter
    def performance_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'performance_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'performance_mode' field must be an unsigned integer in [0, 255]"
        self._performance_mode = value
