# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Uncertainty.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Uncertainty(type):
    """Metaclass of message 'Uncertainty'."""

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
                'ros2_interface.msg.Uncertainty')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uncertainty
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uncertainty
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uncertainty
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uncertainty
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uncertainty

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Uncertainty(metaclass=Metaclass_Uncertainty):
    """Message class 'Uncertainty'."""

    __slots__ = [
        '_position_std_dev',
        '_orientation_std_dev',
        '_linear_velocity_std_dev',
        '_linear_acceleration_std_dev',
        '_angular_velocity_std_dev',
    ]

    _fields_and_field_types = {
        'position_std_dev': 'ros2_interface/Point3D',
        'orientation_std_dev': 'ros2_interface/Point3D',
        'linear_velocity_std_dev': 'ros2_interface/Point3D',
        'linear_acceleration_std_dev': 'ros2_interface/Point3D',
        'angular_velocity_std_dev': 'ros2_interface/Point3D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ros2_interface.msg import Point3D
        self.position_std_dev = kwargs.get('position_std_dev', Point3D())
        from ros2_interface.msg import Point3D
        self.orientation_std_dev = kwargs.get('orientation_std_dev', Point3D())
        from ros2_interface.msg import Point3D
        self.linear_velocity_std_dev = kwargs.get('linear_velocity_std_dev', Point3D())
        from ros2_interface.msg import Point3D
        self.linear_acceleration_std_dev = kwargs.get('linear_acceleration_std_dev', Point3D())
        from ros2_interface.msg import Point3D
        self.angular_velocity_std_dev = kwargs.get('angular_velocity_std_dev', Point3D())

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
        if self.position_std_dev != other.position_std_dev:
            return False
        if self.orientation_std_dev != other.orientation_std_dev:
            return False
        if self.linear_velocity_std_dev != other.linear_velocity_std_dev:
            return False
        if self.linear_acceleration_std_dev != other.linear_acceleration_std_dev:
            return False
        if self.angular_velocity_std_dev != other.angular_velocity_std_dev:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position_std_dev(self):
        """Message field 'position_std_dev'."""
        return self._position_std_dev

    @position_std_dev.setter
    def position_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'position_std_dev' field must be a sub message of type 'Point3D'"
        self._position_std_dev = value

    @builtins.property
    def orientation_std_dev(self):
        """Message field 'orientation_std_dev'."""
        return self._orientation_std_dev

    @orientation_std_dev.setter
    def orientation_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'orientation_std_dev' field must be a sub message of type 'Point3D'"
        self._orientation_std_dev = value

    @builtins.property
    def linear_velocity_std_dev(self):
        """Message field 'linear_velocity_std_dev'."""
        return self._linear_velocity_std_dev

    @linear_velocity_std_dev.setter
    def linear_velocity_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_velocity_std_dev' field must be a sub message of type 'Point3D'"
        self._linear_velocity_std_dev = value

    @builtins.property
    def linear_acceleration_std_dev(self):
        """Message field 'linear_acceleration_std_dev'."""
        return self._linear_acceleration_std_dev

    @linear_acceleration_std_dev.setter
    def linear_acceleration_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_acceleration_std_dev' field must be a sub message of type 'Point3D'"
        self._linear_acceleration_std_dev = value

    @builtins.property
    def angular_velocity_std_dev(self):
        """Message field 'angular_velocity_std_dev'."""
        return self._angular_velocity_std_dev

    @angular_velocity_std_dev.setter
    def angular_velocity_std_dev(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'angular_velocity_std_dev' field must be a sub message of type 'Point3D'"
        self._angular_velocity_std_dev = value
