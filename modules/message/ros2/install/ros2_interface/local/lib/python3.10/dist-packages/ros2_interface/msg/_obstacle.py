# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Obstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'position_abs_covariance'
# Member 'velocity_abs_covariance'
# Member 'acceleration_abs_covariance'
# Member 'position_vehicle_covariance'
# Member 'velocity_vehicle_covariance'
# Member 'acceleration_vehicle_covariance'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Obstacle(type):
    """Metaclass of message 'Obstacle'."""

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
                'ros2_interface.msg.Obstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle

            from ros2_interface.msg import BBox2D
            if BBox2D.__class__._TYPE_SUPPORT is None:
                BBox2D.__class__.__import_type_support__()

            from ros2_interface.msg import ImageKeyPoint
            if ImageKeyPoint.__class__._TYPE_SUPPORT is None:
                ImageKeyPoint.__class__.__import_type_support__()

            from ros2_interface.msg import Point2D
            if Point2D.__class__._TYPE_SUPPORT is None:
                Point2D.__class__.__import_type_support__()

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

            from ros2_interface.msg import SensorCalibrator
            if SensorCalibrator.__class__._TYPE_SUPPORT is None:
                SensorCalibrator.__class__.__import_type_support__()

            from ros2_interface.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Obstacle(metaclass=Metaclass_Obstacle):
    """Message class 'Obstacle'."""

    __slots__ = [
        '_timestamp',
        '_id',
        '_existence_prob',
        '_create_time',
        '_last_updated_time',
        '_center_pos_vehicle',
        '_center_pos_abs',
        '_theta_vehicle',
        '_theta_abs',
        '_velocity_vehicle',
        '_velocity_abs',
        '_length',
        '_width',
        '_height',
        '_image_key_points',
        '_polygon_point_abs',
        '_polygon_point_vehicle',
        '_tracking_time',
        '_type',
        '_confidence',
        '_confidence_type',
        '_drops',
        '_acceleration_vehicle',
        '_acceleration_abs',
        '_anchor_point_image',
        '_anchor_point_vehicle',
        '_anchor_point_abs',
        '_bbox2d',
        '_bbox2d_rear',
        '_sub_type',
        '_height_above_ground',
        '_position_abs_covariance',
        '_velocity_abs_covariance',
        '_acceleration_abs_covariance',
        '_theta_abs_covariance',
        '_position_vehicle_covariance',
        '_velocity_vehicle_covariance',
        '_acceleration_vehicle_covariance',
        '_theta_vehicle_covariance',
        '_sensor_calibrator',
        '_cipv_flag',
        '_lane_position',
        '_pihp_percentage',
        '_blinker_flag',
        '_fusion_type',
    ]

    _fields_and_field_types = {
        'timestamp': 'ros2_interface/Time',
        'id': 'int32',
        'existence_prob': 'double',
        'create_time': 'ros2_interface/Time',
        'last_updated_time': 'ros2_interface/Time',
        'center_pos_vehicle': 'ros2_interface/Point3D',
        'center_pos_abs': 'ros2_interface/Point3D',
        'theta_vehicle': 'double',
        'theta_abs': 'double',
        'velocity_vehicle': 'ros2_interface/Point3D',
        'velocity_abs': 'ros2_interface/Point3D',
        'length': 'double',
        'width': 'double',
        'height': 'double',
        'image_key_points': 'sequence<ros2_interface/ImageKeyPoint>',
        'polygon_point_abs': 'sequence<ros2_interface/Point3D>',
        'polygon_point_vehicle': 'sequence<ros2_interface/Point3D>',
        'tracking_time': 'double',
        'type': 'int32',
        'confidence': 'double',
        'confidence_type': 'int32',
        'drops': 'sequence<ros2_interface/Point3D>',
        'acceleration_vehicle': 'ros2_interface/Point3D',
        'acceleration_abs': 'ros2_interface/Point3D',
        'anchor_point_image': 'ros2_interface/Point2D',
        'anchor_point_vehicle': 'ros2_interface/Point3D',
        'anchor_point_abs': 'ros2_interface/Point3D',
        'bbox2d': 'ros2_interface/BBox2D',
        'bbox2d_rear': 'ros2_interface/BBox2D',
        'sub_type': 'int32',
        'height_above_ground': 'double',
        'position_abs_covariance': 'sequence<double>',
        'velocity_abs_covariance': 'sequence<double>',
        'acceleration_abs_covariance': 'sequence<double>',
        'theta_abs_covariance': 'double',
        'position_vehicle_covariance': 'sequence<double>',
        'velocity_vehicle_covariance': 'sequence<double>',
        'acceleration_vehicle_covariance': 'sequence<double>',
        'theta_vehicle_covariance': 'double',
        'sensor_calibrator': 'ros2_interface/SensorCalibrator',
        'cipv_flag': 'uint8',
        'lane_position': 'int32',
        'pihp_percentage': 'double',
        'blinker_flag': 'int32',
        'fusion_type': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'ImageKeyPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'BBox2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'BBox2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'SensorCalibrator'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ros2_interface.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.id = kwargs.get('id', int())
        self.existence_prob = kwargs.get('existence_prob', float())
        from ros2_interface.msg import Time
        self.create_time = kwargs.get('create_time', Time())
        from ros2_interface.msg import Time
        self.last_updated_time = kwargs.get('last_updated_time', Time())
        from ros2_interface.msg import Point3D
        self.center_pos_vehicle = kwargs.get('center_pos_vehicle', Point3D())
        from ros2_interface.msg import Point3D
        self.center_pos_abs = kwargs.get('center_pos_abs', Point3D())
        self.theta_vehicle = kwargs.get('theta_vehicle', float())
        self.theta_abs = kwargs.get('theta_abs', float())
        from ros2_interface.msg import Point3D
        self.velocity_vehicle = kwargs.get('velocity_vehicle', Point3D())
        from ros2_interface.msg import Point3D
        self.velocity_abs = kwargs.get('velocity_abs', Point3D())
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.height = kwargs.get('height', float())
        self.image_key_points = kwargs.get('image_key_points', [])
        self.polygon_point_abs = kwargs.get('polygon_point_abs', [])
        self.polygon_point_vehicle = kwargs.get('polygon_point_vehicle', [])
        self.tracking_time = kwargs.get('tracking_time', float())
        self.type = kwargs.get('type', int())
        self.confidence = kwargs.get('confidence', float())
        self.confidence_type = kwargs.get('confidence_type', int())
        self.drops = kwargs.get('drops', [])
        from ros2_interface.msg import Point3D
        self.acceleration_vehicle = kwargs.get('acceleration_vehicle', Point3D())
        from ros2_interface.msg import Point3D
        self.acceleration_abs = kwargs.get('acceleration_abs', Point3D())
        from ros2_interface.msg import Point2D
        self.anchor_point_image = kwargs.get('anchor_point_image', Point2D())
        from ros2_interface.msg import Point3D
        self.anchor_point_vehicle = kwargs.get('anchor_point_vehicle', Point3D())
        from ros2_interface.msg import Point3D
        self.anchor_point_abs = kwargs.get('anchor_point_abs', Point3D())
        from ros2_interface.msg import BBox2D
        self.bbox2d = kwargs.get('bbox2d', BBox2D())
        from ros2_interface.msg import BBox2D
        self.bbox2d_rear = kwargs.get('bbox2d_rear', BBox2D())
        self.sub_type = kwargs.get('sub_type', int())
        self.height_above_ground = kwargs.get('height_above_ground', float())
        self.position_abs_covariance = array.array('d', kwargs.get('position_abs_covariance', []))
        self.velocity_abs_covariance = array.array('d', kwargs.get('velocity_abs_covariance', []))
        self.acceleration_abs_covariance = array.array('d', kwargs.get('acceleration_abs_covariance', []))
        self.theta_abs_covariance = kwargs.get('theta_abs_covariance', float())
        self.position_vehicle_covariance = array.array('d', kwargs.get('position_vehicle_covariance', []))
        self.velocity_vehicle_covariance = array.array('d', kwargs.get('velocity_vehicle_covariance', []))
        self.acceleration_vehicle_covariance = array.array('d', kwargs.get('acceleration_vehicle_covariance', []))
        self.theta_vehicle_covariance = kwargs.get('theta_vehicle_covariance', float())
        from ros2_interface.msg import SensorCalibrator
        self.sensor_calibrator = kwargs.get('sensor_calibrator', SensorCalibrator())
        self.cipv_flag = kwargs.get('cipv_flag', int())
        self.lane_position = kwargs.get('lane_position', int())
        self.pihp_percentage = kwargs.get('pihp_percentage', float())
        self.blinker_flag = kwargs.get('blinker_flag', int())
        self.fusion_type = kwargs.get('fusion_type', int())

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
        if self.timestamp != other.timestamp:
            return False
        if self.id != other.id:
            return False
        if self.existence_prob != other.existence_prob:
            return False
        if self.create_time != other.create_time:
            return False
        if self.last_updated_time != other.last_updated_time:
            return False
        if self.center_pos_vehicle != other.center_pos_vehicle:
            return False
        if self.center_pos_abs != other.center_pos_abs:
            return False
        if self.theta_vehicle != other.theta_vehicle:
            return False
        if self.theta_abs != other.theta_abs:
            return False
        if self.velocity_vehicle != other.velocity_vehicle:
            return False
        if self.velocity_abs != other.velocity_abs:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.image_key_points != other.image_key_points:
            return False
        if self.polygon_point_abs != other.polygon_point_abs:
            return False
        if self.polygon_point_vehicle != other.polygon_point_vehicle:
            return False
        if self.tracking_time != other.tracking_time:
            return False
        if self.type != other.type:
            return False
        if self.confidence != other.confidence:
            return False
        if self.confidence_type != other.confidence_type:
            return False
        if self.drops != other.drops:
            return False
        if self.acceleration_vehicle != other.acceleration_vehicle:
            return False
        if self.acceleration_abs != other.acceleration_abs:
            return False
        if self.anchor_point_image != other.anchor_point_image:
            return False
        if self.anchor_point_vehicle != other.anchor_point_vehicle:
            return False
        if self.anchor_point_abs != other.anchor_point_abs:
            return False
        if self.bbox2d != other.bbox2d:
            return False
        if self.bbox2d_rear != other.bbox2d_rear:
            return False
        if self.sub_type != other.sub_type:
            return False
        if self.height_above_ground != other.height_above_ground:
            return False
        if self.position_abs_covariance != other.position_abs_covariance:
            return False
        if self.velocity_abs_covariance != other.velocity_abs_covariance:
            return False
        if self.acceleration_abs_covariance != other.acceleration_abs_covariance:
            return False
        if self.theta_abs_covariance != other.theta_abs_covariance:
            return False
        if self.position_vehicle_covariance != other.position_vehicle_covariance:
            return False
        if self.velocity_vehicle_covariance != other.velocity_vehicle_covariance:
            return False
        if self.acceleration_vehicle_covariance != other.acceleration_vehicle_covariance:
            return False
        if self.theta_vehicle_covariance != other.theta_vehicle_covariance:
            return False
        if self.sensor_calibrator != other.sensor_calibrator:
            return False
        if self.cipv_flag != other.cipv_flag:
            return False
        if self.lane_position != other.lane_position:
            return False
        if self.pihp_percentage != other.pihp_percentage:
            return False
        if self.blinker_flag != other.blinker_flag:
            return False
        if self.fusion_type != other.fusion_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from ros2_interface.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

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
    def existence_prob(self):
        """Message field 'existence_prob'."""
        return self._existence_prob

    @existence_prob.setter
    def existence_prob(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'existence_prob' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'existence_prob' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._existence_prob = value

    @builtins.property
    def create_time(self):
        """Message field 'create_time'."""
        return self._create_time

    @create_time.setter
    def create_time(self, value):
        if __debug__:
            from ros2_interface.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'create_time' field must be a sub message of type 'Time'"
        self._create_time = value

    @builtins.property
    def last_updated_time(self):
        """Message field 'last_updated_time'."""
        return self._last_updated_time

    @last_updated_time.setter
    def last_updated_time(self, value):
        if __debug__:
            from ros2_interface.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'last_updated_time' field must be a sub message of type 'Time'"
        self._last_updated_time = value

    @builtins.property
    def center_pos_vehicle(self):
        """Message field 'center_pos_vehicle'."""
        return self._center_pos_vehicle

    @center_pos_vehicle.setter
    def center_pos_vehicle(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'center_pos_vehicle' field must be a sub message of type 'Point3D'"
        self._center_pos_vehicle = value

    @builtins.property
    def center_pos_abs(self):
        """Message field 'center_pos_abs'."""
        return self._center_pos_abs

    @center_pos_abs.setter
    def center_pos_abs(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'center_pos_abs' field must be a sub message of type 'Point3D'"
        self._center_pos_abs = value

    @builtins.property
    def theta_vehicle(self):
        """Message field 'theta_vehicle'."""
        return self._theta_vehicle

    @theta_vehicle.setter
    def theta_vehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_vehicle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_vehicle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_vehicle = value

    @builtins.property
    def theta_abs(self):
        """Message field 'theta_abs'."""
        return self._theta_abs

    @theta_abs.setter
    def theta_abs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_abs' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_abs' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_abs = value

    @builtins.property
    def velocity_vehicle(self):
        """Message field 'velocity_vehicle'."""
        return self._velocity_vehicle

    @velocity_vehicle.setter
    def velocity_vehicle(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'velocity_vehicle' field must be a sub message of type 'Point3D'"
        self._velocity_vehicle = value

    @builtins.property
    def velocity_abs(self):
        """Message field 'velocity_abs'."""
        return self._velocity_abs

    @velocity_abs.setter
    def velocity_abs(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'velocity_abs' field must be a sub message of type 'Point3D'"
        self._velocity_abs = value

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
    def image_key_points(self):
        """Message field 'image_key_points'."""
        return self._image_key_points

    @image_key_points.setter
    def image_key_points(self, value):
        if __debug__:
            from ros2_interface.msg import ImageKeyPoint
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
                 all(isinstance(v, ImageKeyPoint) for v in value) and
                 True), \
                "The 'image_key_points' field must be a set or sequence and each value of type 'ImageKeyPoint'"
        self._image_key_points = value

    @builtins.property
    def polygon_point_abs(self):
        """Message field 'polygon_point_abs'."""
        return self._polygon_point_abs

    @polygon_point_abs.setter
    def polygon_point_abs(self, value):
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
                "The 'polygon_point_abs' field must be a set or sequence and each value of type 'Point3D'"
        self._polygon_point_abs = value

    @builtins.property
    def polygon_point_vehicle(self):
        """Message field 'polygon_point_vehicle'."""
        return self._polygon_point_vehicle

    @polygon_point_vehicle.setter
    def polygon_point_vehicle(self, value):
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
                "The 'polygon_point_vehicle' field must be a set or sequence and each value of type 'Point3D'"
        self._polygon_point_vehicle = value

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
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def confidence_type(self):
        """Message field 'confidence_type'."""
        return self._confidence_type

    @confidence_type.setter
    def confidence_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'confidence_type' field must be an integer in [-2147483648, 2147483647]"
        self._confidence_type = value

    @builtins.property
    def drops(self):
        """Message field 'drops'."""
        return self._drops

    @drops.setter
    def drops(self, value):
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
                "The 'drops' field must be a set or sequence and each value of type 'Point3D'"
        self._drops = value

    @builtins.property
    def acceleration_vehicle(self):
        """Message field 'acceleration_vehicle'."""
        return self._acceleration_vehicle

    @acceleration_vehicle.setter
    def acceleration_vehicle(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'acceleration_vehicle' field must be a sub message of type 'Point3D'"
        self._acceleration_vehicle = value

    @builtins.property
    def acceleration_abs(self):
        """Message field 'acceleration_abs'."""
        return self._acceleration_abs

    @acceleration_abs.setter
    def acceleration_abs(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'acceleration_abs' field must be a sub message of type 'Point3D'"
        self._acceleration_abs = value

    @builtins.property
    def anchor_point_image(self):
        """Message field 'anchor_point_image'."""
        return self._anchor_point_image

    @anchor_point_image.setter
    def anchor_point_image(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'anchor_point_image' field must be a sub message of type 'Point2D'"
        self._anchor_point_image = value

    @builtins.property
    def anchor_point_vehicle(self):
        """Message field 'anchor_point_vehicle'."""
        return self._anchor_point_vehicle

    @anchor_point_vehicle.setter
    def anchor_point_vehicle(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'anchor_point_vehicle' field must be a sub message of type 'Point3D'"
        self._anchor_point_vehicle = value

    @builtins.property
    def anchor_point_abs(self):
        """Message field 'anchor_point_abs'."""
        return self._anchor_point_abs

    @anchor_point_abs.setter
    def anchor_point_abs(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'anchor_point_abs' field must be a sub message of type 'Point3D'"
        self._anchor_point_abs = value

    @builtins.property
    def bbox2d(self):
        """Message field 'bbox2d'."""
        return self._bbox2d

    @bbox2d.setter
    def bbox2d(self, value):
        if __debug__:
            from ros2_interface.msg import BBox2D
            assert \
                isinstance(value, BBox2D), \
                "The 'bbox2d' field must be a sub message of type 'BBox2D'"
        self._bbox2d = value

    @builtins.property
    def bbox2d_rear(self):
        """Message field 'bbox2d_rear'."""
        return self._bbox2d_rear

    @bbox2d_rear.setter
    def bbox2d_rear(self, value):
        if __debug__:
            from ros2_interface.msg import BBox2D
            assert \
                isinstance(value, BBox2D), \
                "The 'bbox2d_rear' field must be a sub message of type 'BBox2D'"
        self._bbox2d_rear = value

    @builtins.property
    def sub_type(self):
        """Message field 'sub_type'."""
        return self._sub_type

    @sub_type.setter
    def sub_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sub_type' field must be an integer in [-2147483648, 2147483647]"
        self._sub_type = value

    @builtins.property
    def height_above_ground(self):
        """Message field 'height_above_ground'."""
        return self._height_above_ground

    @height_above_ground.setter
    def height_above_ground(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_above_ground' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height_above_ground' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height_above_ground = value

    @builtins.property
    def position_abs_covariance(self):
        """Message field 'position_abs_covariance'."""
        return self._position_abs_covariance

    @position_abs_covariance.setter
    def position_abs_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'position_abs_covariance' array.array() must have the type code of 'd'"
            self._position_abs_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position_abs_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position_abs_covariance = array.array('d', value)

    @builtins.property
    def velocity_abs_covariance(self):
        """Message field 'velocity_abs_covariance'."""
        return self._velocity_abs_covariance

    @velocity_abs_covariance.setter
    def velocity_abs_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'velocity_abs_covariance' array.array() must have the type code of 'd'"
            self._velocity_abs_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'velocity_abs_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._velocity_abs_covariance = array.array('d', value)

    @builtins.property
    def acceleration_abs_covariance(self):
        """Message field 'acceleration_abs_covariance'."""
        return self._acceleration_abs_covariance

    @acceleration_abs_covariance.setter
    def acceleration_abs_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'acceleration_abs_covariance' array.array() must have the type code of 'd'"
            self._acceleration_abs_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'acceleration_abs_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._acceleration_abs_covariance = array.array('d', value)

    @builtins.property
    def theta_abs_covariance(self):
        """Message field 'theta_abs_covariance'."""
        return self._theta_abs_covariance

    @theta_abs_covariance.setter
    def theta_abs_covariance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_abs_covariance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_abs_covariance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_abs_covariance = value

    @builtins.property
    def position_vehicle_covariance(self):
        """Message field 'position_vehicle_covariance'."""
        return self._position_vehicle_covariance

    @position_vehicle_covariance.setter
    def position_vehicle_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'position_vehicle_covariance' array.array() must have the type code of 'd'"
            self._position_vehicle_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position_vehicle_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position_vehicle_covariance = array.array('d', value)

    @builtins.property
    def velocity_vehicle_covariance(self):
        """Message field 'velocity_vehicle_covariance'."""
        return self._velocity_vehicle_covariance

    @velocity_vehicle_covariance.setter
    def velocity_vehicle_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'velocity_vehicle_covariance' array.array() must have the type code of 'd'"
            self._velocity_vehicle_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'velocity_vehicle_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._velocity_vehicle_covariance = array.array('d', value)

    @builtins.property
    def acceleration_vehicle_covariance(self):
        """Message field 'acceleration_vehicle_covariance'."""
        return self._acceleration_vehicle_covariance

    @acceleration_vehicle_covariance.setter
    def acceleration_vehicle_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'acceleration_vehicle_covariance' array.array() must have the type code of 'd'"
            self._acceleration_vehicle_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'acceleration_vehicle_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._acceleration_vehicle_covariance = array.array('d', value)

    @builtins.property
    def theta_vehicle_covariance(self):
        """Message field 'theta_vehicle_covariance'."""
        return self._theta_vehicle_covariance

    @theta_vehicle_covariance.setter
    def theta_vehicle_covariance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_vehicle_covariance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_vehicle_covariance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_vehicle_covariance = value

    @builtins.property
    def sensor_calibrator(self):
        """Message field 'sensor_calibrator'."""
        return self._sensor_calibrator

    @sensor_calibrator.setter
    def sensor_calibrator(self, value):
        if __debug__:
            from ros2_interface.msg import SensorCalibrator
            assert \
                isinstance(value, SensorCalibrator), \
                "The 'sensor_calibrator' field must be a sub message of type 'SensorCalibrator'"
        self._sensor_calibrator = value

    @builtins.property
    def cipv_flag(self):
        """Message field 'cipv_flag'."""
        return self._cipv_flag

    @cipv_flag.setter
    def cipv_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cipv_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cipv_flag' field must be an unsigned integer in [0, 255]"
        self._cipv_flag = value

    @builtins.property
    def lane_position(self):
        """Message field 'lane_position'."""
        return self._lane_position

    @lane_position.setter
    def lane_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_position' field must be an integer in [-2147483648, 2147483647]"
        self._lane_position = value

    @builtins.property
    def pihp_percentage(self):
        """Message field 'pihp_percentage'."""
        return self._pihp_percentage

    @pihp_percentage.setter
    def pihp_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pihp_percentage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pihp_percentage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pihp_percentage = value

    @builtins.property
    def blinker_flag(self):
        """Message field 'blinker_flag'."""
        return self._blinker_flag

    @blinker_flag.setter
    def blinker_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blinker_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'blinker_flag' field must be an integer in [-2147483648, 2147483647]"
        self._blinker_flag = value

    @builtins.property
    def fusion_type(self):
        """Message field 'fusion_type'."""
        return self._fusion_type

    @fusion_type.setter
    def fusion_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fusion_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fusion_type' field must be an integer in [-2147483648, 2147483647]"
        self._fusion_type = value
