# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/RadarObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarObstacle(type):
    """Metaclass of message 'RadarObstacle'."""

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
                'ros2_interface.msg.RadarObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_obstacle

            from ros2_interface.msg import Point2D
            if Point2D.__class__._TYPE_SUPPORT is None:
                Point2D.__class__.__import_type_support__()

            from ros2_interface.msg import Status
            if Status.__class__._TYPE_SUPPORT is None:
                Status.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarObstacle(metaclass=Metaclass_RadarObstacle):
    """Message class 'RadarObstacle'."""

    __slots__ = [
        '_id',
        '_life_time',
        '_relative_position',
        '_relative_position_rms',
        '_relative_velocity',
        '_relative_velocity_rms',
        '_relative_acceleration',
        '_relative_acceleration_rms',
        '_rcs',
        '_snr',
        '_moving_status',
        '_width',
        '_length',
        '_height',
        '_theta',
        '_absolute_position',
        '_absolute_position_rms',
        '_absolute_velocity',
        '_absolute_velocity_rms',
        '_absolute_acceleration',
        '_absolute_acceleration_rms',
        '_orientation',
        '_orient_rms',
        '_yaw',
        '_yaw_rms',
        '_count',
        '_moving_frames_count',
        '_status',
        '_underpass_probability',
        '_overpass_probability',
        '_exist_probability',
        '_mov_property',
        '_track_state',
        '_track_type',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'life_time': 'uint8',
        'relative_position': 'ros2_interface/Point2D',
        'relative_position_rms': 'ros2_interface/Point2D',
        'relative_velocity': 'ros2_interface/Point2D',
        'relative_velocity_rms': 'ros2_interface/Point2D',
        'relative_acceleration': 'ros2_interface/Point2D',
        'relative_acceleration_rms': 'ros2_interface/Point2D',
        'rcs': 'double',
        'snr': 'double',
        'moving_status': 'int32',
        'width': 'double',
        'length': 'double',
        'height': 'double',
        'theta': 'double',
        'absolute_position': 'ros2_interface/Point2D',
        'absolute_position_rms': 'ros2_interface/Point2D',
        'absolute_velocity': 'ros2_interface/Point2D',
        'absolute_velocity_rms': 'ros2_interface/Point2D',
        'absolute_acceleration': 'ros2_interface/Point2D',
        'absolute_acceleration_rms': 'ros2_interface/Point2D',
        'orientation': 'double',
        'orient_rms': 'double',
        'yaw': 'double',
        'yaw_rms': 'double',
        'count': 'int32',
        'moving_frames_count': 'int32',
        'status': 'ros2_interface/Status',
        'underpass_probability': 'double',
        'overpass_probability': 'double',
        'exist_probability': 'uint8',
        'mov_property': 'uint8',
        'track_state': 'uint8',
        'track_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Status'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.life_time = kwargs.get('life_time', int())
        from ros2_interface.msg import Point2D
        self.relative_position = kwargs.get('relative_position', Point2D())
        from ros2_interface.msg import Point2D
        self.relative_position_rms = kwargs.get('relative_position_rms', Point2D())
        from ros2_interface.msg import Point2D
        self.relative_velocity = kwargs.get('relative_velocity', Point2D())
        from ros2_interface.msg import Point2D
        self.relative_velocity_rms = kwargs.get('relative_velocity_rms', Point2D())
        from ros2_interface.msg import Point2D
        self.relative_acceleration = kwargs.get('relative_acceleration', Point2D())
        from ros2_interface.msg import Point2D
        self.relative_acceleration_rms = kwargs.get('relative_acceleration_rms', Point2D())
        self.rcs = kwargs.get('rcs', float())
        self.snr = kwargs.get('snr', float())
        self.moving_status = kwargs.get('moving_status', int())
        self.width = kwargs.get('width', float())
        self.length = kwargs.get('length', float())
        self.height = kwargs.get('height', float())
        self.theta = kwargs.get('theta', float())
        from ros2_interface.msg import Point2D
        self.absolute_position = kwargs.get('absolute_position', Point2D())
        from ros2_interface.msg import Point2D
        self.absolute_position_rms = kwargs.get('absolute_position_rms', Point2D())
        from ros2_interface.msg import Point2D
        self.absolute_velocity = kwargs.get('absolute_velocity', Point2D())
        from ros2_interface.msg import Point2D
        self.absolute_velocity_rms = kwargs.get('absolute_velocity_rms', Point2D())
        from ros2_interface.msg import Point2D
        self.absolute_acceleration = kwargs.get('absolute_acceleration', Point2D())
        from ros2_interface.msg import Point2D
        self.absolute_acceleration_rms = kwargs.get('absolute_acceleration_rms', Point2D())
        self.orientation = kwargs.get('orientation', float())
        self.orient_rms = kwargs.get('orient_rms', float())
        self.yaw = kwargs.get('yaw', float())
        self.yaw_rms = kwargs.get('yaw_rms', float())
        self.count = kwargs.get('count', int())
        self.moving_frames_count = kwargs.get('moving_frames_count', int())
        from ros2_interface.msg import Status
        self.status = kwargs.get('status', Status())
        self.underpass_probability = kwargs.get('underpass_probability', float())
        self.overpass_probability = kwargs.get('overpass_probability', float())
        self.exist_probability = kwargs.get('exist_probability', int())
        self.mov_property = kwargs.get('mov_property', int())
        self.track_state = kwargs.get('track_state', int())
        self.track_type = kwargs.get('track_type', int())

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
        if self.id != other.id:
            return False
        if self.life_time != other.life_time:
            return False
        if self.relative_position != other.relative_position:
            return False
        if self.relative_position_rms != other.relative_position_rms:
            return False
        if self.relative_velocity != other.relative_velocity:
            return False
        if self.relative_velocity_rms != other.relative_velocity_rms:
            return False
        if self.relative_acceleration != other.relative_acceleration:
            return False
        if self.relative_acceleration_rms != other.relative_acceleration_rms:
            return False
        if self.rcs != other.rcs:
            return False
        if self.snr != other.snr:
            return False
        if self.moving_status != other.moving_status:
            return False
        if self.width != other.width:
            return False
        if self.length != other.length:
            return False
        if self.height != other.height:
            return False
        if self.theta != other.theta:
            return False
        if self.absolute_position != other.absolute_position:
            return False
        if self.absolute_position_rms != other.absolute_position_rms:
            return False
        if self.absolute_velocity != other.absolute_velocity:
            return False
        if self.absolute_velocity_rms != other.absolute_velocity_rms:
            return False
        if self.absolute_acceleration != other.absolute_acceleration:
            return False
        if self.absolute_acceleration_rms != other.absolute_acceleration_rms:
            return False
        if self.orientation != other.orientation:
            return False
        if self.orient_rms != other.orient_rms:
            return False
        if self.yaw != other.yaw:
            return False
        if self.yaw_rms != other.yaw_rms:
            return False
        if self.count != other.count:
            return False
        if self.moving_frames_count != other.moving_frames_count:
            return False
        if self.status != other.status:
            return False
        if self.underpass_probability != other.underpass_probability:
            return False
        if self.overpass_probability != other.overpass_probability:
            return False
        if self.exist_probability != other.exist_probability:
            return False
        if self.mov_property != other.mov_property:
            return False
        if self.track_state != other.track_state:
            return False
        if self.track_type != other.track_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def life_time(self):
        """Message field 'life_time'."""
        return self._life_time

    @life_time.setter
    def life_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'life_time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'life_time' field must be an unsigned integer in [0, 255]"
        self._life_time = value

    @builtins.property
    def relative_position(self):
        """Message field 'relative_position'."""
        return self._relative_position

    @relative_position.setter
    def relative_position(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'relative_position' field must be a sub message of type 'Point2D'"
        self._relative_position = value

    @builtins.property
    def relative_position_rms(self):
        """Message field 'relative_position_rms'."""
        return self._relative_position_rms

    @relative_position_rms.setter
    def relative_position_rms(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'relative_position_rms' field must be a sub message of type 'Point2D'"
        self._relative_position_rms = value

    @builtins.property
    def relative_velocity(self):
        """Message field 'relative_velocity'."""
        return self._relative_velocity

    @relative_velocity.setter
    def relative_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'relative_velocity' field must be a sub message of type 'Point2D'"
        self._relative_velocity = value

    @builtins.property
    def relative_velocity_rms(self):
        """Message field 'relative_velocity_rms'."""
        return self._relative_velocity_rms

    @relative_velocity_rms.setter
    def relative_velocity_rms(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'relative_velocity_rms' field must be a sub message of type 'Point2D'"
        self._relative_velocity_rms = value

    @builtins.property
    def relative_acceleration(self):
        """Message field 'relative_acceleration'."""
        return self._relative_acceleration

    @relative_acceleration.setter
    def relative_acceleration(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'relative_acceleration' field must be a sub message of type 'Point2D'"
        self._relative_acceleration = value

    @builtins.property
    def relative_acceleration_rms(self):
        """Message field 'relative_acceleration_rms'."""
        return self._relative_acceleration_rms

    @relative_acceleration_rms.setter
    def relative_acceleration_rms(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'relative_acceleration_rms' field must be a sub message of type 'Point2D'"
        self._relative_acceleration_rms = value

    @builtins.property
    def rcs(self):
        """Message field 'rcs'."""
        return self._rcs

    @rcs.setter
    def rcs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rcs' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rcs' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rcs = value

    @builtins.property
    def snr(self):
        """Message field 'snr'."""
        return self._snr

    @snr.setter
    def snr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'snr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'snr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._snr = value

    @builtins.property
    def moving_status(self):
        """Message field 'moving_status'."""
        return self._moving_status

    @moving_status.setter
    def moving_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'moving_status' field must be an integer in [-2147483648, 2147483647]"
        self._moving_status = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._width = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height = value

    @builtins.property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta = value

    @builtins.property
    def absolute_position(self):
        """Message field 'absolute_position'."""
        return self._absolute_position

    @absolute_position.setter
    def absolute_position(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'absolute_position' field must be a sub message of type 'Point2D'"
        self._absolute_position = value

    @builtins.property
    def absolute_position_rms(self):
        """Message field 'absolute_position_rms'."""
        return self._absolute_position_rms

    @absolute_position_rms.setter
    def absolute_position_rms(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'absolute_position_rms' field must be a sub message of type 'Point2D'"
        self._absolute_position_rms = value

    @builtins.property
    def absolute_velocity(self):
        """Message field 'absolute_velocity'."""
        return self._absolute_velocity

    @absolute_velocity.setter
    def absolute_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'absolute_velocity' field must be a sub message of type 'Point2D'"
        self._absolute_velocity = value

    @builtins.property
    def absolute_velocity_rms(self):
        """Message field 'absolute_velocity_rms'."""
        return self._absolute_velocity_rms

    @absolute_velocity_rms.setter
    def absolute_velocity_rms(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'absolute_velocity_rms' field must be a sub message of type 'Point2D'"
        self._absolute_velocity_rms = value

    @builtins.property
    def absolute_acceleration(self):
        """Message field 'absolute_acceleration'."""
        return self._absolute_acceleration

    @absolute_acceleration.setter
    def absolute_acceleration(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'absolute_acceleration' field must be a sub message of type 'Point2D'"
        self._absolute_acceleration = value

    @builtins.property
    def absolute_acceleration_rms(self):
        """Message field 'absolute_acceleration_rms'."""
        return self._absolute_acceleration_rms

    @absolute_acceleration_rms.setter
    def absolute_acceleration_rms(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'absolute_acceleration_rms' field must be a sub message of type 'Point2D'"
        self._absolute_acceleration_rms = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'orientation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._orientation = value

    @builtins.property
    def orient_rms(self):
        """Message field 'orient_rms'."""
        return self._orient_rms

    @orient_rms.setter
    def orient_rms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orient_rms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'orient_rms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._orient_rms = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def yaw_rms(self):
        """Message field 'yaw_rms'."""
        return self._yaw_rms

    @yaw_rms.setter
    def yaw_rms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rms = value

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'count' field must be an integer in [-2147483648, 2147483647]"
        self._count = value

    @builtins.property
    def moving_frames_count(self):
        """Message field 'moving_frames_count'."""
        return self._moving_frames_count

    @moving_frames_count.setter
    def moving_frames_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving_frames_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'moving_frames_count' field must be an integer in [-2147483648, 2147483647]"
        self._moving_frames_count = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from ros2_interface.msg import Status
            assert \
                isinstance(value, Status), \
                "The 'status' field must be a sub message of type 'Status'"
        self._status = value

    @builtins.property
    def underpass_probability(self):
        """Message field 'underpass_probability'."""
        return self._underpass_probability

    @underpass_probability.setter
    def underpass_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'underpass_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'underpass_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._underpass_probability = value

    @builtins.property
    def overpass_probability(self):
        """Message field 'overpass_probability'."""
        return self._overpass_probability

    @overpass_probability.setter
    def overpass_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'overpass_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'overpass_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._overpass_probability = value

    @builtins.property
    def exist_probability(self):
        """Message field 'exist_probability'."""
        return self._exist_probability

    @exist_probability.setter
    def exist_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exist_probability' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'exist_probability' field must be an unsigned integer in [0, 255]"
        self._exist_probability = value

    @builtins.property
    def mov_property(self):
        """Message field 'mov_property'."""
        return self._mov_property

    @mov_property.setter
    def mov_property(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mov_property' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mov_property' field must be an unsigned integer in [0, 255]"
        self._mov_property = value

    @builtins.property
    def track_state(self):
        """Message field 'track_state'."""
        return self._track_state

    @track_state.setter
    def track_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_state' field must be an unsigned integer in [0, 255]"
        self._track_state = value

    @builtins.property
    def track_type(self):
        """Message field 'track_type'."""
        return self._track_type

    @track_type.setter
    def track_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_type' field must be an unsigned integer in [0, 255]"
        self._track_type = value
