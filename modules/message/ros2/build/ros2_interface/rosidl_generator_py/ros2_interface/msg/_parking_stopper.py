# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/ParkingStopper.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParkingStopper(type):
    """Metaclass of message 'ParkingStopper'."""

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
                'ros2_interface.msg.ParkingStopper')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parking_stopper
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parking_stopper
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parking_stopper
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parking_stopper
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parking_stopper

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

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


class ParkingStopper(metaclass=Metaclass_ParkingStopper):
    """Message class 'ParkingStopper'."""

    __slots__ = [
        '_header',
        '_center_point_vehicle',
        '_center_point_abs',
        '_stopper_points_vehicle',
        '_stopper_points_abs',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'center_point_vehicle': 'ros2_interface/Point3D',
        'center_point_abs': 'ros2_interface/Point3D',
        'stopper_points_vehicle': 'sequence<ros2_interface/Point3D>',
        'stopper_points_abs': 'sequence<ros2_interface/Point3D>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ros2_interface.msg import Point3D
        self.center_point_vehicle = kwargs.get('center_point_vehicle', Point3D())
        from ros2_interface.msg import Point3D
        self.center_point_abs = kwargs.get('center_point_abs', Point3D())
        self.stopper_points_vehicle = kwargs.get('stopper_points_vehicle', [])
        self.stopper_points_abs = kwargs.get('stopper_points_abs', [])

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
        if self.center_point_vehicle != other.center_point_vehicle:
            return False
        if self.center_point_abs != other.center_point_abs:
            return False
        if self.stopper_points_vehicle != other.stopper_points_vehicle:
            return False
        if self.stopper_points_abs != other.stopper_points_abs:
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
    def center_point_vehicle(self):
        """Message field 'center_point_vehicle'."""
        return self._center_point_vehicle

    @center_point_vehicle.setter
    def center_point_vehicle(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'center_point_vehicle' field must be a sub message of type 'Point3D'"
        self._center_point_vehicle = value

    @builtins.property
    def center_point_abs(self):
        """Message field 'center_point_abs'."""
        return self._center_point_abs

    @center_point_abs.setter
    def center_point_abs(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'center_point_abs' field must be a sub message of type 'Point3D'"
        self._center_point_abs = value

    @builtins.property
    def stopper_points_vehicle(self):
        """Message field 'stopper_points_vehicle'."""
        return self._stopper_points_vehicle

    @stopper_points_vehicle.setter
    def stopper_points_vehicle(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point3D) for v in value) and
                 True), \
                "The 'stopper_points_vehicle' field must be a set or sequence and each value of type 'Point3D'"
        self._stopper_points_vehicle = value

    @builtins.property
    def stopper_points_abs(self):
        """Message field 'stopper_points_abs'."""
        return self._stopper_points_abs

    @stopper_points_abs.setter
    def stopper_points_abs(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point3D) for v in value) and
                 True), \
                "The 'stopper_points_abs' field must be a set or sequence and each value of type 'Point3D'"
        self._stopper_points_abs = value
