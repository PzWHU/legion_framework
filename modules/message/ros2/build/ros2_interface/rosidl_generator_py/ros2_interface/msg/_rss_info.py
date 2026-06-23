# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/RSSInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RSSInfo(type):
    """Metaclass of message 'RSSInfo'."""

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
                'ros2_interface.msg.RSSInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rss_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rss_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rss_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rss_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rss_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RSSInfo(metaclass=Metaclass_RSSInfo):
    """Message class 'RSSInfo'."""

    __slots__ = [
        '_is_rss_safe',
        '_cur_dist_lon',
        '_rss_safe_dist_lon',
        '_acc_lon_range_minimum',
        '_acc_lon_range_maximum',
        '_acc_lat_left_range_minimum',
        '_acc_lat_left_range_maximum',
        '_acc_lat_right_range_minimum',
        '_acc_lat_right_range_maximum',
    ]

    _fields_and_field_types = {
        'is_rss_safe': 'boolean',
        'cur_dist_lon': 'double',
        'rss_safe_dist_lon': 'double',
        'acc_lon_range_minimum': 'double',
        'acc_lon_range_maximum': 'double',
        'acc_lat_left_range_minimum': 'double',
        'acc_lat_left_range_maximum': 'double',
        'acc_lat_right_range_minimum': 'double',
        'acc_lat_right_range_maximum': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_rss_safe = kwargs.get('is_rss_safe', bool())
        self.cur_dist_lon = kwargs.get('cur_dist_lon', float())
        self.rss_safe_dist_lon = kwargs.get('rss_safe_dist_lon', float())
        self.acc_lon_range_minimum = kwargs.get('acc_lon_range_minimum', float())
        self.acc_lon_range_maximum = kwargs.get('acc_lon_range_maximum', float())
        self.acc_lat_left_range_minimum = kwargs.get('acc_lat_left_range_minimum', float())
        self.acc_lat_left_range_maximum = kwargs.get('acc_lat_left_range_maximum', float())
        self.acc_lat_right_range_minimum = kwargs.get('acc_lat_right_range_minimum', float())
        self.acc_lat_right_range_maximum = kwargs.get('acc_lat_right_range_maximum', float())

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
        if self.is_rss_safe != other.is_rss_safe:
            return False
        if self.cur_dist_lon != other.cur_dist_lon:
            return False
        if self.rss_safe_dist_lon != other.rss_safe_dist_lon:
            return False
        if self.acc_lon_range_minimum != other.acc_lon_range_minimum:
            return False
        if self.acc_lon_range_maximum != other.acc_lon_range_maximum:
            return False
        if self.acc_lat_left_range_minimum != other.acc_lat_left_range_minimum:
            return False
        if self.acc_lat_left_range_maximum != other.acc_lat_left_range_maximum:
            return False
        if self.acc_lat_right_range_minimum != other.acc_lat_right_range_minimum:
            return False
        if self.acc_lat_right_range_maximum != other.acc_lat_right_range_maximum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_rss_safe(self):
        """Message field 'is_rss_safe'."""
        return self._is_rss_safe

    @is_rss_safe.setter
    def is_rss_safe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_rss_safe' field must be of type 'bool'"
        self._is_rss_safe = value

    @builtins.property
    def cur_dist_lon(self):
        """Message field 'cur_dist_lon'."""
        return self._cur_dist_lon

    @cur_dist_lon.setter
    def cur_dist_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cur_dist_lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_dist_lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_dist_lon = value

    @builtins.property
    def rss_safe_dist_lon(self):
        """Message field 'rss_safe_dist_lon'."""
        return self._rss_safe_dist_lon

    @rss_safe_dist_lon.setter
    def rss_safe_dist_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rss_safe_dist_lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rss_safe_dist_lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rss_safe_dist_lon = value

    @builtins.property
    def acc_lon_range_minimum(self):
        """Message field 'acc_lon_range_minimum'."""
        return self._acc_lon_range_minimum

    @acc_lon_range_minimum.setter
    def acc_lon_range_minimum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_lon_range_minimum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_lon_range_minimum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_lon_range_minimum = value

    @builtins.property
    def acc_lon_range_maximum(self):
        """Message field 'acc_lon_range_maximum'."""
        return self._acc_lon_range_maximum

    @acc_lon_range_maximum.setter
    def acc_lon_range_maximum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_lon_range_maximum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_lon_range_maximum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_lon_range_maximum = value

    @builtins.property
    def acc_lat_left_range_minimum(self):
        """Message field 'acc_lat_left_range_minimum'."""
        return self._acc_lat_left_range_minimum

    @acc_lat_left_range_minimum.setter
    def acc_lat_left_range_minimum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_lat_left_range_minimum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_lat_left_range_minimum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_lat_left_range_minimum = value

    @builtins.property
    def acc_lat_left_range_maximum(self):
        """Message field 'acc_lat_left_range_maximum'."""
        return self._acc_lat_left_range_maximum

    @acc_lat_left_range_maximum.setter
    def acc_lat_left_range_maximum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_lat_left_range_maximum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_lat_left_range_maximum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_lat_left_range_maximum = value

    @builtins.property
    def acc_lat_right_range_minimum(self):
        """Message field 'acc_lat_right_range_minimum'."""
        return self._acc_lat_right_range_minimum

    @acc_lat_right_range_minimum.setter
    def acc_lat_right_range_minimum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_lat_right_range_minimum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_lat_right_range_minimum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_lat_right_range_minimum = value

    @builtins.property
    def acc_lat_right_range_maximum(self):
        """Message field 'acc_lat_right_range_maximum'."""
        return self._acc_lat_right_range_maximum

    @acc_lat_right_range_maximum.setter
    def acc_lat_right_range_maximum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_lat_right_range_maximum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_lat_right_range_maximum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_lat_right_range_maximum = value
