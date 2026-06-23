# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/ObstacleFeature.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleFeature(type):
    """Metaclass of message 'ObstacleFeature'."""

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
                'ros2_interface.msg.ObstacleFeature')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_feature
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_feature
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_feature
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_feature
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_feature

            from ros2_interface.msg import ObstaclePriority
            if ObstaclePriority.__class__._TYPE_SUPPORT is None:
                ObstaclePriority.__class__.__import_type_support__()

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

            from ros2_interface.msg import PredictionTrajectoryPoint
            if PredictionTrajectoryPoint.__class__._TYPE_SUPPORT is None:
                PredictionTrajectoryPoint.__class__.__import_type_support__()

            from ros2_interface.msg import TrajectoryInPrediction
            if TrajectoryInPrediction.__class__._TYPE_SUPPORT is None:
                TrajectoryInPrediction.__class__.__import_type_support__()

            from ros2_interface.msg import TrajectoryPointInPrediction
            if TrajectoryPointInPrediction.__class__._TYPE_SUPPORT is None:
                TrajectoryPointInPrediction.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObstacleFeature(metaclass=Metaclass_ObstacleFeature):
    """Message class 'ObstacleFeature'."""

    __slots__ = [
        '_obstacle_id',
        '_polygon_point',
        '_position',
        '_front_position',
        '_velocity',
        '_raw_velocity',
        '_acceleration',
        '_velocity_heading',
        '_speed',
        '_acc',
        '_theta',
        '_length',
        '_width',
        '_height',
        '_tracking_time',
        '_timestamp',
        '_t_position',
        '_t_velocity',
        '_t_velocity_heading',
        '_t_speed',
        '_t_acceleration',
        '_t_acc',
        '_is_still',
        '_type',
        '_label_update_time_delta',
        '_priority',
        '_is_near_junction',
        '_future_trajectory_points',
        '_short_term_predicted_trajectory_points',
        '_predicted_trajectory',
        '_adc_trajectory_point',
    ]

    _fields_and_field_types = {
        'obstacle_id': 'int32',
        'polygon_point': 'ros2_interface/Point3D',
        'position': 'ros2_interface/Point3D',
        'front_position': 'ros2_interface/Point3D',
        'velocity': 'ros2_interface/Point3D',
        'raw_velocity': 'ros2_interface/Point3D',
        'acceleration': 'ros2_interface/Point3D',
        'velocity_heading': 'double',
        'speed': 'double',
        'acc': 'double',
        'theta': 'double',
        'length': 'double',
        'width': 'double',
        'height': 'double',
        'tracking_time': 'double',
        'timestamp': 'double',
        't_position': 'ros2_interface/Point3D',
        't_velocity': 'ros2_interface/Point3D',
        't_velocity_heading': 'double',
        't_speed': 'double',
        't_acceleration': 'ros2_interface/Point3D',
        't_acc': 'double',
        'is_still': 'boolean',
        'type': 'int32',
        'label_update_time_delta': 'double',
        'priority': 'ros2_interface/ObstaclePriority',
        'is_near_junction': 'boolean',
        'future_trajectory_points': 'sequence<ros2_interface/PredictionTrajectoryPoint>',
        'short_term_predicted_trajectory_points': 'sequence<ros2_interface/TrajectoryPointInPrediction>',
        'predicted_trajectory': 'sequence<ros2_interface/TrajectoryInPrediction>',
        'adc_trajectory_point': 'sequence<ros2_interface/TrajectoryPointInPrediction>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'ObstaclePriority'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PredictionTrajectoryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryPointInPrediction')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryInPrediction')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryPointInPrediction')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.obstacle_id = kwargs.get('obstacle_id', int())
        from ros2_interface.msg import Point3D
        self.polygon_point = kwargs.get('polygon_point', Point3D())
        from ros2_interface.msg import Point3D
        self.position = kwargs.get('position', Point3D())
        from ros2_interface.msg import Point3D
        self.front_position = kwargs.get('front_position', Point3D())
        from ros2_interface.msg import Point3D
        self.velocity = kwargs.get('velocity', Point3D())
        from ros2_interface.msg import Point3D
        self.raw_velocity = kwargs.get('raw_velocity', Point3D())
        from ros2_interface.msg import Point3D
        self.acceleration = kwargs.get('acceleration', Point3D())
        self.velocity_heading = kwargs.get('velocity_heading', float())
        self.speed = kwargs.get('speed', float())
        self.acc = kwargs.get('acc', float())
        self.theta = kwargs.get('theta', float())
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.height = kwargs.get('height', float())
        self.tracking_time = kwargs.get('tracking_time', float())
        self.timestamp = kwargs.get('timestamp', float())
        from ros2_interface.msg import Point3D
        self.t_position = kwargs.get('t_position', Point3D())
        from ros2_interface.msg import Point3D
        self.t_velocity = kwargs.get('t_velocity', Point3D())
        self.t_velocity_heading = kwargs.get('t_velocity_heading', float())
        self.t_speed = kwargs.get('t_speed', float())
        from ros2_interface.msg import Point3D
        self.t_acceleration = kwargs.get('t_acceleration', Point3D())
        self.t_acc = kwargs.get('t_acc', float())
        self.is_still = kwargs.get('is_still', bool())
        self.type = kwargs.get('type', int())
        self.label_update_time_delta = kwargs.get('label_update_time_delta', float())
        from ros2_interface.msg import ObstaclePriority
        self.priority = kwargs.get('priority', ObstaclePriority())
        self.is_near_junction = kwargs.get('is_near_junction', bool())
        self.future_trajectory_points = kwargs.get('future_trajectory_points', [])
        self.short_term_predicted_trajectory_points = kwargs.get('short_term_predicted_trajectory_points', [])
        self.predicted_trajectory = kwargs.get('predicted_trajectory', [])
        self.adc_trajectory_point = kwargs.get('adc_trajectory_point', [])

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
        if self.obstacle_id != other.obstacle_id:
            return False
        if self.polygon_point != other.polygon_point:
            return False
        if self.position != other.position:
            return False
        if self.front_position != other.front_position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.raw_velocity != other.raw_velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.velocity_heading != other.velocity_heading:
            return False
        if self.speed != other.speed:
            return False
        if self.acc != other.acc:
            return False
        if self.theta != other.theta:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.tracking_time != other.tracking_time:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.t_position != other.t_position:
            return False
        if self.t_velocity != other.t_velocity:
            return False
        if self.t_velocity_heading != other.t_velocity_heading:
            return False
        if self.t_speed != other.t_speed:
            return False
        if self.t_acceleration != other.t_acceleration:
            return False
        if self.t_acc != other.t_acc:
            return False
        if self.is_still != other.is_still:
            return False
        if self.type != other.type:
            return False
        if self.label_update_time_delta != other.label_update_time_delta:
            return False
        if self.priority != other.priority:
            return False
        if self.is_near_junction != other.is_near_junction:
            return False
        if self.future_trajectory_points != other.future_trajectory_points:
            return False
        if self.short_term_predicted_trajectory_points != other.short_term_predicted_trajectory_points:
            return False
        if self.predicted_trajectory != other.predicted_trajectory:
            return False
        if self.adc_trajectory_point != other.adc_trajectory_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obstacle_id(self):
        """Message field 'obstacle_id'."""
        return self._obstacle_id

    @obstacle_id.setter
    def obstacle_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'obstacle_id' field must be an integer in [-2147483648, 2147483647]"
        self._obstacle_id = value

    @builtins.property
    def polygon_point(self):
        """Message field 'polygon_point'."""
        return self._polygon_point

    @polygon_point.setter
    def polygon_point(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'polygon_point' field must be a sub message of type 'Point3D'"
        self._polygon_point = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'position' field must be a sub message of type 'Point3D'"
        self._position = value

    @builtins.property
    def front_position(self):
        """Message field 'front_position'."""
        return self._front_position

    @front_position.setter
    def front_position(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'front_position' field must be a sub message of type 'Point3D'"
        self._front_position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'velocity' field must be a sub message of type 'Point3D'"
        self._velocity = value

    @builtins.property
    def raw_velocity(self):
        """Message field 'raw_velocity'."""
        return self._raw_velocity

    @raw_velocity.setter
    def raw_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'raw_velocity' field must be a sub message of type 'Point3D'"
        self._raw_velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'acceleration' field must be a sub message of type 'Point3D'"
        self._acceleration = value

    @builtins.property
    def velocity_heading(self):
        """Message field 'velocity_heading'."""
        return self._velocity_heading

    @velocity_heading.setter
    def velocity_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity_heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity_heading = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def acc(self):
        """Message field 'acc'."""
        return self._acc

    @acc.setter
    def acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc = value

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
    def tracking_time(self):
        """Message field 'tracking_time'."""
        return self._tracking_time

    @tracking_time.setter
    def tracking_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tracking_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tracking_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tracking_time = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def t_position(self):
        """Message field 't_position'."""
        return self._t_position

    @t_position.setter
    def t_position(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 't_position' field must be a sub message of type 'Point3D'"
        self._t_position = value

    @builtins.property
    def t_velocity(self):
        """Message field 't_velocity'."""
        return self._t_velocity

    @t_velocity.setter
    def t_velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 't_velocity' field must be a sub message of type 'Point3D'"
        self._t_velocity = value

    @builtins.property
    def t_velocity_heading(self):
        """Message field 't_velocity_heading'."""
        return self._t_velocity_heading

    @t_velocity_heading.setter
    def t_velocity_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_velocity_heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't_velocity_heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t_velocity_heading = value

    @builtins.property
    def t_speed(self):
        """Message field 't_speed'."""
        return self._t_speed

    @t_speed.setter
    def t_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t_speed = value

    @builtins.property
    def t_acceleration(self):
        """Message field 't_acceleration'."""
        return self._t_acceleration

    @t_acceleration.setter
    def t_acceleration(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 't_acceleration' field must be a sub message of type 'Point3D'"
        self._t_acceleration = value

    @builtins.property
    def t_acc(self):
        """Message field 't_acc'."""
        return self._t_acc

    @t_acc.setter
    def t_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t_acc = value

    @builtins.property
    def is_still(self):
        """Message field 'is_still'."""
        return self._is_still

    @is_still.setter
    def is_still(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_still' field must be of type 'bool'"
        self._is_still = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def label_update_time_delta(self):
        """Message field 'label_update_time_delta'."""
        return self._label_update_time_delta

    @label_update_time_delta.setter
    def label_update_time_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'label_update_time_delta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'label_update_time_delta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._label_update_time_delta = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            from ros2_interface.msg import ObstaclePriority
            assert \
                isinstance(value, ObstaclePriority), \
                "The 'priority' field must be a sub message of type 'ObstaclePriority'"
        self._priority = value

    @builtins.property
    def is_near_junction(self):
        """Message field 'is_near_junction'."""
        return self._is_near_junction

    @is_near_junction.setter
    def is_near_junction(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_near_junction' field must be of type 'bool'"
        self._is_near_junction = value

    @builtins.property
    def future_trajectory_points(self):
        """Message field 'future_trajectory_points'."""
        return self._future_trajectory_points

    @future_trajectory_points.setter
    def future_trajectory_points(self, value):
        if __debug__:
            from ros2_interface.msg import PredictionTrajectoryPoint
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
                 all(isinstance(v, PredictionTrajectoryPoint) for v in value) and
                 True), \
                "The 'future_trajectory_points' field must be a set or sequence and each value of type 'PredictionTrajectoryPoint'"
        self._future_trajectory_points = value

    @builtins.property
    def short_term_predicted_trajectory_points(self):
        """Message field 'short_term_predicted_trajectory_points'."""
        return self._short_term_predicted_trajectory_points

    @short_term_predicted_trajectory_points.setter
    def short_term_predicted_trajectory_points(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryPointInPrediction
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
                 all(isinstance(v, TrajectoryPointInPrediction) for v in value) and
                 True), \
                "The 'short_term_predicted_trajectory_points' field must be a set or sequence and each value of type 'TrajectoryPointInPrediction'"
        self._short_term_predicted_trajectory_points = value

    @builtins.property
    def predicted_trajectory(self):
        """Message field 'predicted_trajectory'."""
        return self._predicted_trajectory

    @predicted_trajectory.setter
    def predicted_trajectory(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryInPrediction
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
                 all(isinstance(v, TrajectoryInPrediction) for v in value) and
                 True), \
                "The 'predicted_trajectory' field must be a set or sequence and each value of type 'TrajectoryInPrediction'"
        self._predicted_trajectory = value

    @builtins.property
    def adc_trajectory_point(self):
        """Message field 'adc_trajectory_point'."""
        return self._adc_trajectory_point

    @adc_trajectory_point.setter
    def adc_trajectory_point(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryPointInPrediction
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
                 all(isinstance(v, TrajectoryPointInPrediction) for v in value) and
                 True), \
                "The 'adc_trajectory_point' field must be a set or sequence and each value of type 'TrajectoryPointInPrediction'"
        self._adc_trajectory_point = value
