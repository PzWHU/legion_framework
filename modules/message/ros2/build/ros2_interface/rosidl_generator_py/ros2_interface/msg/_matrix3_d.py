# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Matrix3D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Matrix3D(type):
    """Metaclass of message 'Matrix3D'."""

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
                'ros2_interface.msg.Matrix3D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__matrix3_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__matrix3_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__matrix3_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__matrix3_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__matrix3_d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Matrix3D(metaclass=Metaclass_Matrix3D):
    """Message class 'Matrix3D'."""

    __slots__ = [
        '_a00',
        '_a01',
        '_a02',
        '_a10',
        '_a11',
        '_a12',
        '_a20',
        '_a21',
        '_a22',
    ]

    _fields_and_field_types = {
        'a00': 'double',
        'a01': 'double',
        'a02': 'double',
        'a10': 'double',
        'a11': 'double',
        'a12': 'double',
        'a20': 'double',
        'a21': 'double',
        'a22': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.a00 = kwargs.get('a00', float())
        self.a01 = kwargs.get('a01', float())
        self.a02 = kwargs.get('a02', float())
        self.a10 = kwargs.get('a10', float())
        self.a11 = kwargs.get('a11', float())
        self.a12 = kwargs.get('a12', float())
        self.a20 = kwargs.get('a20', float())
        self.a21 = kwargs.get('a21', float())
        self.a22 = kwargs.get('a22', float())

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
        if self.a00 != other.a00:
            return False
        if self.a01 != other.a01:
            return False
        if self.a02 != other.a02:
            return False
        if self.a10 != other.a10:
            return False
        if self.a11 != other.a11:
            return False
        if self.a12 != other.a12:
            return False
        if self.a20 != other.a20:
            return False
        if self.a21 != other.a21:
            return False
        if self.a22 != other.a22:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a00(self):
        """Message field 'a00'."""
        return self._a00

    @a00.setter
    def a00(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a00' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a00' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a00 = value

    @builtins.property
    def a01(self):
        """Message field 'a01'."""
        return self._a01

    @a01.setter
    def a01(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a01' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a01' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a01 = value

    @builtins.property
    def a02(self):
        """Message field 'a02'."""
        return self._a02

    @a02.setter
    def a02(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a02' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a02' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a02 = value

    @builtins.property
    def a10(self):
        """Message field 'a10'."""
        return self._a10

    @a10.setter
    def a10(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a10' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a10' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a10 = value

    @builtins.property
    def a11(self):
        """Message field 'a11'."""
        return self._a11

    @a11.setter
    def a11(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a11' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a11' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a11 = value

    @builtins.property
    def a12(self):
        """Message field 'a12'."""
        return self._a12

    @a12.setter
    def a12(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a12' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a12' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a12 = value

    @builtins.property
    def a20(self):
        """Message field 'a20'."""
        return self._a20

    @a20.setter
    def a20(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a20' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a20' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a20 = value

    @builtins.property
    def a21(self):
        """Message field 'a21'."""
        return self._a21

    @a21.setter
    def a21(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a21' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a21' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a21 = value

    @builtins.property
    def a22(self):
        """Message field 'a22'."""
        return self._a22

    @a22.setter
    def a22(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a22' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a22' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a22 = value
