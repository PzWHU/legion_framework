# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/HolisticPathPrediction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HolisticPathPrediction(type):
    """Metaclass of message 'HolisticPathPrediction'."""

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
                'ros2_interface.msg.HolisticPathPrediction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__holistic_path_prediction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__holistic_path_prediction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__holistic_path_prediction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__holistic_path_prediction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__holistic_path_prediction

            from ros2_interface.msg import LaneLineCubicCurve
            if LaneLineCubicCurve.__class__._TYPE_SUPPORT is None:
                LaneLineCubicCurve.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HolisticPathPrediction(metaclass=Metaclass_HolisticPathPrediction):
    """Message class 'HolisticPathPrediction'."""

    __slots__ = [
        '_hpp',
        '_planning_source',
        '_ego_lane_width',
        '_confidence',
    ]

    _fields_and_field_types = {
        'hpp': 'ros2_interface/LaneLineCubicCurve',
        'planning_source': 'int32',
        'ego_lane_width': 'double',
        'confidence': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneLineCubicCurve'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ros2_interface.msg import LaneLineCubicCurve
        self.hpp = kwargs.get('hpp', LaneLineCubicCurve())
        self.planning_source = kwargs.get('planning_source', int())
        self.ego_lane_width = kwargs.get('ego_lane_width', float())
        self.confidence = kwargs.get('confidence', float())

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
        if self.hpp != other.hpp:
            return False
        if self.planning_source != other.planning_source:
            return False
        if self.ego_lane_width != other.ego_lane_width:
            return False
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hpp(self):
        """Message field 'hpp'."""
        return self._hpp

    @hpp.setter
    def hpp(self, value):
        if __debug__:
            from ros2_interface.msg import LaneLineCubicCurve
            assert \
                isinstance(value, LaneLineCubicCurve), \
                "The 'hpp' field must be a sub message of type 'LaneLineCubicCurve'"
        self._hpp = value

    @builtins.property
    def planning_source(self):
        """Message field 'planning_source'."""
        return self._planning_source

    @planning_source.setter
    def planning_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'planning_source' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'planning_source' field must be an integer in [-2147483648, 2147483647]"
        self._planning_source = value

    @builtins.property
    def ego_lane_width(self):
        """Message field 'ego_lane_width'."""
        return self._ego_lane_width

    @ego_lane_width.setter
    def ego_lane_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_lane_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ego_lane_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ego_lane_width = value

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
