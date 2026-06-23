# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/RadarState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarState(type):
    """Metaclass of message 'RadarState'."""

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
                'ros2_interface.msg.RadarState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_state

            from ros2_interface.msg import RadarStateError
            if RadarStateError.__class__._TYPE_SUPPORT is None:
                RadarStateError.__class__.__import_type_support__()

            from ros2_interface.msg import RadarStateMode
            if RadarStateMode.__class__._TYPE_SUPPORT is None:
                RadarStateMode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarState(metaclass=Metaclass_RadarState):
    """Message class 'RadarState'."""

    __slots__ = [
        '_sensor_id',
        '_nvm_read_status',
        '_nvm_write_status',
        '_radar_state_error',
        '_radar_state_mode',
        '_max_distance',
        '_sort_index',
        '_radar_power',
        '_ctl_relay',
        '_output_type',
        '_send_quality',
        '_send_extinfo',
        '_motion_rx_state',
        '_rcs_threshold',
        '_connector_direction',
        '_radar_position',
        '_hw_error',
    ]

    _fields_and_field_types = {
        'sensor_id': 'uint8',
        'nvm_read_status': 'uint8',
        'nvm_write_status': 'uint8',
        'radar_state_error': 'ros2_interface/RadarStateError',
        'radar_state_mode': 'ros2_interface/RadarStateMode',
        'max_distance': 'uint16',
        'sort_index': 'uint8',
        'radar_power': 'uint8',
        'ctl_relay': 'uint8',
        'output_type': 'uint8',
        'send_quality': 'uint8',
        'send_extinfo': 'uint8',
        'motion_rx_state': 'uint8',
        'rcs_threshold': 'uint8',
        'connector_direction': 'uint8',
        'radar_position': 'uint8',
        'hw_error': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'RadarStateError'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'RadarStateMode'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_id = kwargs.get('sensor_id', int())
        self.nvm_read_status = kwargs.get('nvm_read_status', int())
        self.nvm_write_status = kwargs.get('nvm_write_status', int())
        from ros2_interface.msg import RadarStateError
        self.radar_state_error = kwargs.get('radar_state_error', RadarStateError())
        from ros2_interface.msg import RadarStateMode
        self.radar_state_mode = kwargs.get('radar_state_mode', RadarStateMode())
        self.max_distance = kwargs.get('max_distance', int())
        self.sort_index = kwargs.get('sort_index', int())
        self.radar_power = kwargs.get('radar_power', int())
        self.ctl_relay = kwargs.get('ctl_relay', int())
        self.output_type = kwargs.get('output_type', int())
        self.send_quality = kwargs.get('send_quality', int())
        self.send_extinfo = kwargs.get('send_extinfo', int())
        self.motion_rx_state = kwargs.get('motion_rx_state', int())
        self.rcs_threshold = kwargs.get('rcs_threshold', int())
        self.connector_direction = kwargs.get('connector_direction', int())
        self.radar_position = kwargs.get('radar_position', int())
        self.hw_error = kwargs.get('hw_error', int())

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
        if self.sensor_id != other.sensor_id:
            return False
        if self.nvm_read_status != other.nvm_read_status:
            return False
        if self.nvm_write_status != other.nvm_write_status:
            return False
        if self.radar_state_error != other.radar_state_error:
            return False
        if self.radar_state_mode != other.radar_state_mode:
            return False
        if self.max_distance != other.max_distance:
            return False
        if self.sort_index != other.sort_index:
            return False
        if self.radar_power != other.radar_power:
            return False
        if self.ctl_relay != other.ctl_relay:
            return False
        if self.output_type != other.output_type:
            return False
        if self.send_quality != other.send_quality:
            return False
        if self.send_extinfo != other.send_extinfo:
            return False
        if self.motion_rx_state != other.motion_rx_state:
            return False
        if self.rcs_threshold != other.rcs_threshold:
            return False
        if self.connector_direction != other.connector_direction:
            return False
        if self.radar_position != other.radar_position:
            return False
        if self.hw_error != other.hw_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_id' field must be an unsigned integer in [0, 255]"
        self._sensor_id = value

    @builtins.property
    def nvm_read_status(self):
        """Message field 'nvm_read_status'."""
        return self._nvm_read_status

    @nvm_read_status.setter
    def nvm_read_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nvm_read_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nvm_read_status' field must be an unsigned integer in [0, 255]"
        self._nvm_read_status = value

    @builtins.property
    def nvm_write_status(self):
        """Message field 'nvm_write_status'."""
        return self._nvm_write_status

    @nvm_write_status.setter
    def nvm_write_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nvm_write_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nvm_write_status' field must be an unsigned integer in [0, 255]"
        self._nvm_write_status = value

    @builtins.property
    def radar_state_error(self):
        """Message field 'radar_state_error'."""
        return self._radar_state_error

    @radar_state_error.setter
    def radar_state_error(self, value):
        if __debug__:
            from ros2_interface.msg import RadarStateError
            assert \
                isinstance(value, RadarStateError), \
                "The 'radar_state_error' field must be a sub message of type 'RadarStateError'"
        self._radar_state_error = value

    @builtins.property
    def radar_state_mode(self):
        """Message field 'radar_state_mode'."""
        return self._radar_state_mode

    @radar_state_mode.setter
    def radar_state_mode(self, value):
        if __debug__:
            from ros2_interface.msg import RadarStateMode
            assert \
                isinstance(value, RadarStateMode), \
                "The 'radar_state_mode' field must be a sub message of type 'RadarStateMode'"
        self._radar_state_mode = value

    @builtins.property
    def max_distance(self):
        """Message field 'max_distance'."""
        return self._max_distance

    @max_distance.setter
    def max_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_distance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_distance' field must be an unsigned integer in [0, 65535]"
        self._max_distance = value

    @builtins.property
    def sort_index(self):
        """Message field 'sort_index'."""
        return self._sort_index

    @sort_index.setter
    def sort_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sort_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sort_index' field must be an unsigned integer in [0, 255]"
        self._sort_index = value

    @builtins.property
    def radar_power(self):
        """Message field 'radar_power'."""
        return self._radar_power

    @radar_power.setter
    def radar_power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radar_power' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radar_power' field must be an unsigned integer in [0, 255]"
        self._radar_power = value

    @builtins.property
    def ctl_relay(self):
        """Message field 'ctl_relay'."""
        return self._ctl_relay

    @ctl_relay.setter
    def ctl_relay(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ctl_relay' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ctl_relay' field must be an unsigned integer in [0, 255]"
        self._ctl_relay = value

    @builtins.property
    def output_type(self):
        """Message field 'output_type'."""
        return self._output_type

    @output_type.setter
    def output_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'output_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'output_type' field must be an unsigned integer in [0, 255]"
        self._output_type = value

    @builtins.property
    def send_quality(self):
        """Message field 'send_quality'."""
        return self._send_quality

    @send_quality.setter
    def send_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'send_quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'send_quality' field must be an unsigned integer in [0, 255]"
        self._send_quality = value

    @builtins.property
    def send_extinfo(self):
        """Message field 'send_extinfo'."""
        return self._send_extinfo

    @send_extinfo.setter
    def send_extinfo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'send_extinfo' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'send_extinfo' field must be an unsigned integer in [0, 255]"
        self._send_extinfo = value

    @builtins.property
    def motion_rx_state(self):
        """Message field 'motion_rx_state'."""
        return self._motion_rx_state

    @motion_rx_state.setter
    def motion_rx_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_rx_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_rx_state' field must be an unsigned integer in [0, 255]"
        self._motion_rx_state = value

    @builtins.property
    def rcs_threshold(self):
        """Message field 'rcs_threshold'."""
        return self._rcs_threshold

    @rcs_threshold.setter
    def rcs_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rcs_threshold' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rcs_threshold' field must be an unsigned integer in [0, 255]"
        self._rcs_threshold = value

    @builtins.property
    def connector_direction(self):
        """Message field 'connector_direction'."""
        return self._connector_direction

    @connector_direction.setter
    def connector_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'connector_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'connector_direction' field must be an unsigned integer in [0, 255]"
        self._connector_direction = value

    @builtins.property
    def radar_position(self):
        """Message field 'radar_position'."""
        return self._radar_position

    @radar_position.setter
    def radar_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radar_position' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radar_position' field must be an unsigned integer in [0, 255]"
        self._radar_position = value

    @builtins.property
    def hw_error(self):
        """Message field 'hw_error'."""
        return self._hw_error

    @hw_error.setter
    def hw_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hw_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hw_error' field must be an unsigned integer in [0, 255]"
        self._hw_error = value
