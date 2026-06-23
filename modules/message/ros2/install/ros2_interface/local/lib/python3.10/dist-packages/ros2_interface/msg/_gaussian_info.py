# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/GaussianInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GaussianInfo(type):
    """Metaclass of message 'GaussianInfo'."""

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
                'ros2_interface.msg.GaussianInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gaussian_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gaussian_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gaussian_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gaussian_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gaussian_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GaussianInfo(metaclass=Metaclass_GaussianInfo):
    """Message class 'GaussianInfo'."""

    __slots__ = [
        '_sigma_x',
        '_sigma_y',
        '_correlation',
        '_area_probability',
        '_ellipse_a',
        '_ellipse_b',
        '_theta_a',
    ]

    _fields_and_field_types = {
        'sigma_x': 'double',
        'sigma_y': 'double',
        'correlation': 'double',
        'area_probability': 'double',
        'ellipse_a': 'double',
        'ellipse_b': 'double',
        'theta_a': 'double',
    }

    SLOT_TYPES = (
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
        self.sigma_x = kwargs.get('sigma_x', float())
        self.sigma_y = kwargs.get('sigma_y', float())
        self.correlation = kwargs.get('correlation', float())
        self.area_probability = kwargs.get('area_probability', float())
        self.ellipse_a = kwargs.get('ellipse_a', float())
        self.ellipse_b = kwargs.get('ellipse_b', float())
        self.theta_a = kwargs.get('theta_a', float())

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
        if self.sigma_x != other.sigma_x:
            return False
        if self.sigma_y != other.sigma_y:
            return False
        if self.correlation != other.correlation:
            return False
        if self.area_probability != other.area_probability:
            return False
        if self.ellipse_a != other.ellipse_a:
            return False
        if self.ellipse_b != other.ellipse_b:
            return False
        if self.theta_a != other.theta_a:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sigma_x(self):
        """Message field 'sigma_x'."""
        return self._sigma_x

    @sigma_x.setter
    def sigma_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigma_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sigma_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sigma_x = value

    @builtins.property
    def sigma_y(self):
        """Message field 'sigma_y'."""
        return self._sigma_y

    @sigma_y.setter
    def sigma_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigma_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sigma_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sigma_y = value

    @builtins.property
    def correlation(self):
        """Message field 'correlation'."""
        return self._correlation

    @correlation.setter
    def correlation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'correlation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'correlation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._correlation = value

    @builtins.property
    def area_probability(self):
        """Message field 'area_probability'."""
        return self._area_probability

    @area_probability.setter
    def area_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'area_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'area_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._area_probability = value

    @builtins.property
    def ellipse_a(self):
        """Message field 'ellipse_a'."""
        return self._ellipse_a

    @ellipse_a.setter
    def ellipse_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ellipse_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ellipse_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ellipse_a = value

    @builtins.property
    def ellipse_b(self):
        """Message field 'ellipse_b'."""
        return self._ellipse_b

    @ellipse_b.setter
    def ellipse_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ellipse_b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ellipse_b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ellipse_b = value

    @builtins.property
    def theta_a(self):
        """Message field 'theta_a'."""
        return self._theta_a

    @theta_a.setter
    def theta_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_a = value
