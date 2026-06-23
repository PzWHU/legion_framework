# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/RadarStateError.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarStateError(type):
    """Metaclass of message 'RadarStateError'."""

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
                'ros2_interface.msg.RadarStateError')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_state_error
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_state_error
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_state_error
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_state_error
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_state_error

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarStateError(metaclass=Metaclass_RadarStateError):
    """Message class 'RadarStateError'."""

    __slots__ = [
        '_persistent_error',
        '_temporary_error',
        '_interference_error',
        '_temperature_error',
        '_voltage_error',
        '_block_error',
        '_broadcast_error',
        '_electric_axis_error',
        '_config_error',
        '_calibration_error',
    ]

    _fields_and_field_types = {
        'persistent_error': 'uint8',
        'temporary_error': 'uint8',
        'interference_error': 'uint8',
        'temperature_error': 'uint8',
        'voltage_error': 'uint8',
        'block_error': 'uint8',
        'broadcast_error': 'uint8',
        'electric_axis_error': 'uint8',
        'config_error': 'uint8',
        'calibration_error': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.persistent_error = kwargs.get('persistent_error', int())
        self.temporary_error = kwargs.get('temporary_error', int())
        self.interference_error = kwargs.get('interference_error', int())
        self.temperature_error = kwargs.get('temperature_error', int())
        self.voltage_error = kwargs.get('voltage_error', int())
        self.block_error = kwargs.get('block_error', int())
        self.broadcast_error = kwargs.get('broadcast_error', int())
        self.electric_axis_error = kwargs.get('electric_axis_error', int())
        self.config_error = kwargs.get('config_error', int())
        self.calibration_error = kwargs.get('calibration_error', int())

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
        if self.persistent_error != other.persistent_error:
            return False
        if self.temporary_error != other.temporary_error:
            return False
        if self.interference_error != other.interference_error:
            return False
        if self.temperature_error != other.temperature_error:
            return False
        if self.voltage_error != other.voltage_error:
            return False
        if self.block_error != other.block_error:
            return False
        if self.broadcast_error != other.broadcast_error:
            return False
        if self.electric_axis_error != other.electric_axis_error:
            return False
        if self.config_error != other.config_error:
            return False
        if self.calibration_error != other.calibration_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def persistent_error(self):
        """Message field 'persistent_error'."""
        return self._persistent_error

    @persistent_error.setter
    def persistent_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'persistent_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'persistent_error' field must be an unsigned integer in [0, 255]"
        self._persistent_error = value

    @builtins.property
    def temporary_error(self):
        """Message field 'temporary_error'."""
        return self._temporary_error

    @temporary_error.setter
    def temporary_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temporary_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temporary_error' field must be an unsigned integer in [0, 255]"
        self._temporary_error = value

    @builtins.property
    def interference_error(self):
        """Message field 'interference_error'."""
        return self._interference_error

    @interference_error.setter
    def interference_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interference_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'interference_error' field must be an unsigned integer in [0, 255]"
        self._interference_error = value

    @builtins.property
    def temperature_error(self):
        """Message field 'temperature_error'."""
        return self._temperature_error

    @temperature_error.setter
    def temperature_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temperature_error' field must be an unsigned integer in [0, 255]"
        self._temperature_error = value

    @builtins.property
    def voltage_error(self):
        """Message field 'voltage_error'."""
        return self._voltage_error

    @voltage_error.setter
    def voltage_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'voltage_error' field must be an unsigned integer in [0, 255]"
        self._voltage_error = value

    @builtins.property
    def block_error(self):
        """Message field 'block_error'."""
        return self._block_error

    @block_error.setter
    def block_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'block_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'block_error' field must be an unsigned integer in [0, 255]"
        self._block_error = value

    @builtins.property
    def broadcast_error(self):
        """Message field 'broadcast_error'."""
        return self._broadcast_error

    @broadcast_error.setter
    def broadcast_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'broadcast_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'broadcast_error' field must be an unsigned integer in [0, 255]"
        self._broadcast_error = value

    @builtins.property
    def electric_axis_error(self):
        """Message field 'electric_axis_error'."""
        return self._electric_axis_error

    @electric_axis_error.setter
    def electric_axis_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'electric_axis_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'electric_axis_error' field must be an unsigned integer in [0, 255]"
        self._electric_axis_error = value

    @builtins.property
    def config_error(self):
        """Message field 'config_error'."""
        return self._config_error

    @config_error.setter
    def config_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'config_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'config_error' field must be an unsigned integer in [0, 255]"
        self._config_error = value

    @builtins.property
    def calibration_error(self):
        """Message field 'calibration_error'."""
        return self._calibration_error

    @calibration_error.setter
    def calibration_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibration_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'calibration_error' field must be an unsigned integer in [0, 255]"
        self._calibration_error = value
