# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Pose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pose(type):
    """Metaclass of message 'Pose'."""

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
                'ros2_interface.msg.Pose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

            from ros2_interface.msg import PointENU
            if PointENU.__class__._TYPE_SUPPORT is None:
                PointENU.__class__.__import_type_support__()

            from ros2_interface.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pose(metaclass=Metaclass_Pose):
    """Message class 'Pose'."""

    __slots__ = [
        '_position',
        '_orientation',
        '_linear_velocity',
        '_linear_acceleration',
        '_angular_velocity',
        '_heading',
        '_linear_acceleration_vrf',
        '_angular_velocity_vrf',
        '_euler_angles',
    ]

    _fields_and_field_types = {
        'position': 'ros2_interface/PointENU',
        'orientation': 'ros2_interface/Quaternion',
        'linear_velocity': 'ros2_interface/Point3D',
        'linear_acceleration': 'ros2_interface/Point3D',
        'angular_velocity': 'ros2_interface/Point3D',
        'heading': 'double',
        'linear_acceleration_vrf': 'ros2_interface/Point3D',
        'angular_velocity_vrf': 'ros2_interface/Point3D',
        'euler_angles': 'ros2_interface/Point3D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PointENU'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ros2_interface.msg import PointENU
        self.position = kwargs.get('position', PointENU())
        from ros2_interface.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        from ros2_interface.msg import Point3D
        self.linear_velocity = kwargs.get('linear_velocity', Point3D())
        from ros2_interface.msg import Point3D
        self.linear_acceleration = kwargs.get('linear_acceleration', Point3D())
        from ros2_interface.msg import Point3D
        self.angular_velocity = kwargs.get('angular_velocity', Point3D())
        self.heading = kwargs.get('heading', float())
        from ros2_interface.msg import Point3D
        self.linear_acceleration_vrf = kwargs.get('linear_acceleration_vrf', Point3D())
        from ros2_interface.msg import Point3D
        self.angular_velocity_vrf = kwargs.get('angular_velocity_vrf', Point3D())
        from ros2_interface.msg import Point3D
        self.euler_angles = kwargs.get('euler_angles', Point3D())

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
        if self.position != other.position:
            return False
        if self.orientation != other.orientation:
            return False
        if self.linear_velocity != other.linear_velocity:
            return False
        if self.linear_acceleration != other.linear_acceleration:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.heading != other.heading:
            return False
        if self.linear_acceleration_vrf != other.linear_acceleration_vrf:
            return False
        if self.angular_velocity_vrf != other.angular_velocity_vrf:
            return False
        if self.euler_angles != other.euler_angles:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from ros2_interface.msg import PointENU
            assert \
                isinstance(value, PointENU), \
                "The 'position' field must be a sub message of type 'PointENU'"
        self._position = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from ros2_interface.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def linear_velocity(self):
        """Message field 'linear_velocity'."""
        return self._linear_velocity

    @linear_velocity.setter
    def linear_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_velocity' field must be a sub message of type 'Point3D'"
        self._linear_velocity = value

    @builtins.property
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_acceleration' field must be a sub message of type 'Point3D'"
        self._linear_acceleration = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'angular_velocity' field must be a sub message of type 'Point3D'"
        self._angular_velocity = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading = value

    @builtins.property
    def linear_acceleration_vrf(self):
        """Message field 'linear_acceleration_vrf'."""
        return self._linear_acceleration_vrf

    @linear_acceleration_vrf.setter
    def linear_acceleration_vrf(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_acceleration_vrf' field must be a sub message of type 'Point3D'"
        self._linear_acceleration_vrf = value

    @builtins.property
    def angular_velocity_vrf(self):
        """Message field 'angular_velocity_vrf'."""
        return self._angular_velocity_vrf

    @angular_velocity_vrf.setter
    def angular_velocity_vrf(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'angular_velocity_vrf' field must be a sub message of type 'Point3D'"
        self._angular_velocity_vrf = value

    @builtins.property
    def euler_angles(self):
        """Message field 'euler_angles'."""
        return self._euler_angles

    @euler_angles.setter
    def euler_angles(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'euler_angles' field must be a sub message of type 'Point3D'"
        self._euler_angles = value
