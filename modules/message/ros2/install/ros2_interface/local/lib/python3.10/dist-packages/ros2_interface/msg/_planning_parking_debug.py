# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/PlanningParkingDebug.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningParkingDebug(type):
    """Metaclass of message 'PlanningParkingDebug'."""

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
                'ros2_interface.msg.PlanningParkingDebug')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_parking_debug
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_parking_debug
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_parking_debug
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_parking_debug
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_parking_debug

            from ros2_interface.msg import PathPoint
            if PathPoint.__class__._TYPE_SUPPORT is None:
                PathPoint.__class__.__import_type_support__()

            from ros2_interface.msg import Point2dList
            if Point2dList.__class__._TYPE_SUPPORT is None:
                Point2dList.__class__.__import_type_support__()

            from ros2_interface.msg import Polygon2D
            if Polygon2D.__class__._TYPE_SUPPORT is None:
                Polygon2D.__class__.__import_type_support__()

            from ros2_interface.msg import Trajectory
            if Trajectory.__class__._TYPE_SUPPORT is None:
                Trajectory.__class__.__import_type_support__()

            from ros2_interface.msg import TrajectoryPoint
            if TrajectoryPoint.__class__._TYPE_SUPPORT is None:
                TrajectoryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanningParkingDebug(metaclass=Metaclass_PlanningParkingDebug):
    """Message class 'PlanningParkingDebug'."""

    __slots__ = [
        '_vehicle_preiew_polygon',
        '_obstacles_polygon',
        '_path_points',
        '_lat_error',
        '_lon_error',
        '_yaw_error',
        '_obstacles_vec',
        '_warm_start_traj',
        '_smoothed_traj_stage1',
        '_smoothed_traj_stage2',
        '_reference_line',
        '_trajectory_array',
        '_optimal_coarse_trajectory',
        '_optimal_smooth_trajectory',
        '_hybrid_a_star_map_time',
        '_hybrid_a_star_heuristic_time',
        '_hybrid_a_star_rs_time',
        '_hybrid_a_star_total_time',
        '_ias_collision_avoidance_time',
        '_ias_path_smooth_time',
        '_ias_speed_smooth_time',
        '_ias_total_time',
        '_samping_trajectory_time',
        '_is_replan',
        '_replan_reason',
        '_replan_time',
        '_replan_num',
        '_optimizer_thread_counter',
        '_replan_by_context_update_counter',
        '_replan_by_large_error_counter',
        '_parking_type',
        '_moves_counter',
        '_remain_distance',
        '_distance_to_leader_obj',
        '_state',
    ]

    _fields_and_field_types = {
        'vehicle_preiew_polygon': 'sequence<ros2_interface/Polygon2D>',
        'obstacles_polygon': 'sequence<ros2_interface/Polygon2D>',
        'path_points': 'sequence<ros2_interface/PathPoint>',
        'lat_error': 'double',
        'lon_error': 'double',
        'yaw_error': 'double',
        'obstacles_vec': 'sequence<ros2_interface/Point2dList>',
        'warm_start_traj': 'sequence<ros2_interface/TrajectoryPoint>',
        'smoothed_traj_stage1': 'sequence<ros2_interface/TrajectoryPoint>',
        'smoothed_traj_stage2': 'sequence<ros2_interface/TrajectoryPoint>',
        'reference_line': 'ros2_interface/Trajectory',
        'trajectory_array': 'sequence<ros2_interface/Trajectory>',
        'optimal_coarse_trajectory': 'ros2_interface/Trajectory',
        'optimal_smooth_trajectory': 'ros2_interface/Trajectory',
        'hybrid_a_star_map_time': 'double',
        'hybrid_a_star_heuristic_time': 'double',
        'hybrid_a_star_rs_time': 'double',
        'hybrid_a_star_total_time': 'double',
        'ias_collision_avoidance_time': 'double',
        'ias_path_smooth_time': 'double',
        'ias_speed_smooth_time': 'double',
        'ias_total_time': 'double',
        'samping_trajectory_time': 'double',
        'is_replan': 'boolean',
        'replan_reason': 'string',
        'replan_time': 'double',
        'replan_num': 'int32',
        'optimizer_thread_counter': 'int32',
        'replan_by_context_update_counter': 'int32',
        'replan_by_large_error_counter': 'int32',
        'parking_type': 'int32',
        'moves_counter': 'int32',
        'remain_distance': 'double',
        'distance_to_leader_obj': 'double',
        'state': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Polygon2D')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Polygon2D')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PathPoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2dList')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryPoint')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Trajectory'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Trajectory')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Trajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Trajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_preiew_polygon = kwargs.get('vehicle_preiew_polygon', [])
        self.obstacles_polygon = kwargs.get('obstacles_polygon', [])
        self.path_points = kwargs.get('path_points', [])
        self.lat_error = kwargs.get('lat_error', float())
        self.lon_error = kwargs.get('lon_error', float())
        self.yaw_error = kwargs.get('yaw_error', float())
        self.obstacles_vec = kwargs.get('obstacles_vec', [])
        self.warm_start_traj = kwargs.get('warm_start_traj', [])
        self.smoothed_traj_stage1 = kwargs.get('smoothed_traj_stage1', [])
        self.smoothed_traj_stage2 = kwargs.get('smoothed_traj_stage2', [])
        from ros2_interface.msg import Trajectory
        self.reference_line = kwargs.get('reference_line', Trajectory())
        self.trajectory_array = kwargs.get('trajectory_array', [])
        from ros2_interface.msg import Trajectory
        self.optimal_coarse_trajectory = kwargs.get('optimal_coarse_trajectory', Trajectory())
        from ros2_interface.msg import Trajectory
        self.optimal_smooth_trajectory = kwargs.get('optimal_smooth_trajectory', Trajectory())
        self.hybrid_a_star_map_time = kwargs.get('hybrid_a_star_map_time', float())
        self.hybrid_a_star_heuristic_time = kwargs.get('hybrid_a_star_heuristic_time', float())
        self.hybrid_a_star_rs_time = kwargs.get('hybrid_a_star_rs_time', float())
        self.hybrid_a_star_total_time = kwargs.get('hybrid_a_star_total_time', float())
        self.ias_collision_avoidance_time = kwargs.get('ias_collision_avoidance_time', float())
        self.ias_path_smooth_time = kwargs.get('ias_path_smooth_time', float())
        self.ias_speed_smooth_time = kwargs.get('ias_speed_smooth_time', float())
        self.ias_total_time = kwargs.get('ias_total_time', float())
        self.samping_trajectory_time = kwargs.get('samping_trajectory_time', float())
        self.is_replan = kwargs.get('is_replan', bool())
        self.replan_reason = kwargs.get('replan_reason', str())
        self.replan_time = kwargs.get('replan_time', float())
        self.replan_num = kwargs.get('replan_num', int())
        self.optimizer_thread_counter = kwargs.get('optimizer_thread_counter', int())
        self.replan_by_context_update_counter = kwargs.get('replan_by_context_update_counter', int())
        self.replan_by_large_error_counter = kwargs.get('replan_by_large_error_counter', int())
        self.parking_type = kwargs.get('parking_type', int())
        self.moves_counter = kwargs.get('moves_counter', int())
        self.remain_distance = kwargs.get('remain_distance', float())
        self.distance_to_leader_obj = kwargs.get('distance_to_leader_obj', float())
        self.state = kwargs.get('state', int())

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
        if self.vehicle_preiew_polygon != other.vehicle_preiew_polygon:
            return False
        if self.obstacles_polygon != other.obstacles_polygon:
            return False
        if self.path_points != other.path_points:
            return False
        if self.lat_error != other.lat_error:
            return False
        if self.lon_error != other.lon_error:
            return False
        if self.yaw_error != other.yaw_error:
            return False
        if self.obstacles_vec != other.obstacles_vec:
            return False
        if self.warm_start_traj != other.warm_start_traj:
            return False
        if self.smoothed_traj_stage1 != other.smoothed_traj_stage1:
            return False
        if self.smoothed_traj_stage2 != other.smoothed_traj_stage2:
            return False
        if self.reference_line != other.reference_line:
            return False
        if self.trajectory_array != other.trajectory_array:
            return False
        if self.optimal_coarse_trajectory != other.optimal_coarse_trajectory:
            return False
        if self.optimal_smooth_trajectory != other.optimal_smooth_trajectory:
            return False
        if self.hybrid_a_star_map_time != other.hybrid_a_star_map_time:
            return False
        if self.hybrid_a_star_heuristic_time != other.hybrid_a_star_heuristic_time:
            return False
        if self.hybrid_a_star_rs_time != other.hybrid_a_star_rs_time:
            return False
        if self.hybrid_a_star_total_time != other.hybrid_a_star_total_time:
            return False
        if self.ias_collision_avoidance_time != other.ias_collision_avoidance_time:
            return False
        if self.ias_path_smooth_time != other.ias_path_smooth_time:
            return False
        if self.ias_speed_smooth_time != other.ias_speed_smooth_time:
            return False
        if self.ias_total_time != other.ias_total_time:
            return False
        if self.samping_trajectory_time != other.samping_trajectory_time:
            return False
        if self.is_replan != other.is_replan:
            return False
        if self.replan_reason != other.replan_reason:
            return False
        if self.replan_time != other.replan_time:
            return False
        if self.replan_num != other.replan_num:
            return False
        if self.optimizer_thread_counter != other.optimizer_thread_counter:
            return False
        if self.replan_by_context_update_counter != other.replan_by_context_update_counter:
            return False
        if self.replan_by_large_error_counter != other.replan_by_large_error_counter:
            return False
        if self.parking_type != other.parking_type:
            return False
        if self.moves_counter != other.moves_counter:
            return False
        if self.remain_distance != other.remain_distance:
            return False
        if self.distance_to_leader_obj != other.distance_to_leader_obj:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vehicle_preiew_polygon(self):
        """Message field 'vehicle_preiew_polygon'."""
        return self._vehicle_preiew_polygon

    @vehicle_preiew_polygon.setter
    def vehicle_preiew_polygon(self, value):
        if __debug__:
            from ros2_interface.msg import Polygon2D
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
                 all(isinstance(v, Polygon2D) for v in value) and
                 True), \
                "The 'vehicle_preiew_polygon' field must be a set or sequence and each value of type 'Polygon2D'"
        self._vehicle_preiew_polygon = value

    @builtins.property
    def obstacles_polygon(self):
        """Message field 'obstacles_polygon'."""
        return self._obstacles_polygon

    @obstacles_polygon.setter
    def obstacles_polygon(self, value):
        if __debug__:
            from ros2_interface.msg import Polygon2D
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
                 all(isinstance(v, Polygon2D) for v in value) and
                 True), \
                "The 'obstacles_polygon' field must be a set or sequence and each value of type 'Polygon2D'"
        self._obstacles_polygon = value

    @builtins.property
    def path_points(self):
        """Message field 'path_points'."""
        return self._path_points

    @path_points.setter
    def path_points(self, value):
        if __debug__:
            from ros2_interface.msg import PathPoint
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
                 all(isinstance(v, PathPoint) for v in value) and
                 True), \
                "The 'path_points' field must be a set or sequence and each value of type 'PathPoint'"
        self._path_points = value

    @builtins.property
    def lat_error(self):
        """Message field 'lat_error'."""
        return self._lat_error

    @lat_error.setter
    def lat_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat_error = value

    @builtins.property
    def lon_error(self):
        """Message field 'lon_error'."""
        return self._lon_error

    @lon_error.setter
    def lon_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon_error = value

    @builtins.property
    def yaw_error(self):
        """Message field 'yaw_error'."""
        return self._yaw_error

    @yaw_error.setter
    def yaw_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_error = value

    @builtins.property
    def obstacles_vec(self):
        """Message field 'obstacles_vec'."""
        return self._obstacles_vec

    @obstacles_vec.setter
    def obstacles_vec(self, value):
        if __debug__:
            from ros2_interface.msg import Point2dList
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
                 all(isinstance(v, Point2dList) for v in value) and
                 True), \
                "The 'obstacles_vec' field must be a set or sequence and each value of type 'Point2dList'"
        self._obstacles_vec = value

    @builtins.property
    def warm_start_traj(self):
        """Message field 'warm_start_traj'."""
        return self._warm_start_traj

    @warm_start_traj.setter
    def warm_start_traj(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryPoint
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
                 all(isinstance(v, TrajectoryPoint) for v in value) and
                 True), \
                "The 'warm_start_traj' field must be a set or sequence and each value of type 'TrajectoryPoint'"
        self._warm_start_traj = value

    @builtins.property
    def smoothed_traj_stage1(self):
        """Message field 'smoothed_traj_stage1'."""
        return self._smoothed_traj_stage1

    @smoothed_traj_stage1.setter
    def smoothed_traj_stage1(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryPoint
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
                 all(isinstance(v, TrajectoryPoint) for v in value) and
                 True), \
                "The 'smoothed_traj_stage1' field must be a set or sequence and each value of type 'TrajectoryPoint'"
        self._smoothed_traj_stage1 = value

    @builtins.property
    def smoothed_traj_stage2(self):
        """Message field 'smoothed_traj_stage2'."""
        return self._smoothed_traj_stage2

    @smoothed_traj_stage2.setter
    def smoothed_traj_stage2(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryPoint
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
                 all(isinstance(v, TrajectoryPoint) for v in value) and
                 True), \
                "The 'smoothed_traj_stage2' field must be a set or sequence and each value of type 'TrajectoryPoint'"
        self._smoothed_traj_stage2 = value

    @builtins.property
    def reference_line(self):
        """Message field 'reference_line'."""
        return self._reference_line

    @reference_line.setter
    def reference_line(self, value):
        if __debug__:
            from ros2_interface.msg import Trajectory
            assert \
                isinstance(value, Trajectory), \
                "The 'reference_line' field must be a sub message of type 'Trajectory'"
        self._reference_line = value

    @builtins.property
    def trajectory_array(self):
        """Message field 'trajectory_array'."""
        return self._trajectory_array

    @trajectory_array.setter
    def trajectory_array(self, value):
        if __debug__:
            from ros2_interface.msg import Trajectory
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
                 all(isinstance(v, Trajectory) for v in value) and
                 True), \
                "The 'trajectory_array' field must be a set or sequence and each value of type 'Trajectory'"
        self._trajectory_array = value

    @builtins.property
    def optimal_coarse_trajectory(self):
        """Message field 'optimal_coarse_trajectory'."""
        return self._optimal_coarse_trajectory

    @optimal_coarse_trajectory.setter
    def optimal_coarse_trajectory(self, value):
        if __debug__:
            from ros2_interface.msg import Trajectory
            assert \
                isinstance(value, Trajectory), \
                "The 'optimal_coarse_trajectory' field must be a sub message of type 'Trajectory'"
        self._optimal_coarse_trajectory = value

    @builtins.property
    def optimal_smooth_trajectory(self):
        """Message field 'optimal_smooth_trajectory'."""
        return self._optimal_smooth_trajectory

    @optimal_smooth_trajectory.setter
    def optimal_smooth_trajectory(self, value):
        if __debug__:
            from ros2_interface.msg import Trajectory
            assert \
                isinstance(value, Trajectory), \
                "The 'optimal_smooth_trajectory' field must be a sub message of type 'Trajectory'"
        self._optimal_smooth_trajectory = value

    @builtins.property
    def hybrid_a_star_map_time(self):
        """Message field 'hybrid_a_star_map_time'."""
        return self._hybrid_a_star_map_time

    @hybrid_a_star_map_time.setter
    def hybrid_a_star_map_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hybrid_a_star_map_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hybrid_a_star_map_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hybrid_a_star_map_time = value

    @builtins.property
    def hybrid_a_star_heuristic_time(self):
        """Message field 'hybrid_a_star_heuristic_time'."""
        return self._hybrid_a_star_heuristic_time

    @hybrid_a_star_heuristic_time.setter
    def hybrid_a_star_heuristic_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hybrid_a_star_heuristic_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hybrid_a_star_heuristic_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hybrid_a_star_heuristic_time = value

    @builtins.property
    def hybrid_a_star_rs_time(self):
        """Message field 'hybrid_a_star_rs_time'."""
        return self._hybrid_a_star_rs_time

    @hybrid_a_star_rs_time.setter
    def hybrid_a_star_rs_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hybrid_a_star_rs_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hybrid_a_star_rs_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hybrid_a_star_rs_time = value

    @builtins.property
    def hybrid_a_star_total_time(self):
        """Message field 'hybrid_a_star_total_time'."""
        return self._hybrid_a_star_total_time

    @hybrid_a_star_total_time.setter
    def hybrid_a_star_total_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hybrid_a_star_total_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hybrid_a_star_total_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hybrid_a_star_total_time = value

    @builtins.property
    def ias_collision_avoidance_time(self):
        """Message field 'ias_collision_avoidance_time'."""
        return self._ias_collision_avoidance_time

    @ias_collision_avoidance_time.setter
    def ias_collision_avoidance_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ias_collision_avoidance_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ias_collision_avoidance_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ias_collision_avoidance_time = value

    @builtins.property
    def ias_path_smooth_time(self):
        """Message field 'ias_path_smooth_time'."""
        return self._ias_path_smooth_time

    @ias_path_smooth_time.setter
    def ias_path_smooth_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ias_path_smooth_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ias_path_smooth_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ias_path_smooth_time = value

    @builtins.property
    def ias_speed_smooth_time(self):
        """Message field 'ias_speed_smooth_time'."""
        return self._ias_speed_smooth_time

    @ias_speed_smooth_time.setter
    def ias_speed_smooth_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ias_speed_smooth_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ias_speed_smooth_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ias_speed_smooth_time = value

    @builtins.property
    def ias_total_time(self):
        """Message field 'ias_total_time'."""
        return self._ias_total_time

    @ias_total_time.setter
    def ias_total_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ias_total_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ias_total_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ias_total_time = value

    @builtins.property
    def samping_trajectory_time(self):
        """Message field 'samping_trajectory_time'."""
        return self._samping_trajectory_time

    @samping_trajectory_time.setter
    def samping_trajectory_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'samping_trajectory_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'samping_trajectory_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._samping_trajectory_time = value

    @builtins.property
    def is_replan(self):
        """Message field 'is_replan'."""
        return self._is_replan

    @is_replan.setter
    def is_replan(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_replan' field must be of type 'bool'"
        self._is_replan = value

    @builtins.property
    def replan_reason(self):
        """Message field 'replan_reason'."""
        return self._replan_reason

    @replan_reason.setter
    def replan_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'replan_reason' field must be of type 'str'"
        self._replan_reason = value

    @builtins.property
    def replan_time(self):
        """Message field 'replan_time'."""
        return self._replan_time

    @replan_time.setter
    def replan_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'replan_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'replan_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._replan_time = value

    @builtins.property
    def replan_num(self):
        """Message field 'replan_num'."""
        return self._replan_num

    @replan_num.setter
    def replan_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'replan_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'replan_num' field must be an integer in [-2147483648, 2147483647]"
        self._replan_num = value

    @builtins.property
    def optimizer_thread_counter(self):
        """Message field 'optimizer_thread_counter'."""
        return self._optimizer_thread_counter

    @optimizer_thread_counter.setter
    def optimizer_thread_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'optimizer_thread_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'optimizer_thread_counter' field must be an integer in [-2147483648, 2147483647]"
        self._optimizer_thread_counter = value

    @builtins.property
    def replan_by_context_update_counter(self):
        """Message field 'replan_by_context_update_counter'."""
        return self._replan_by_context_update_counter

    @replan_by_context_update_counter.setter
    def replan_by_context_update_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'replan_by_context_update_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'replan_by_context_update_counter' field must be an integer in [-2147483648, 2147483647]"
        self._replan_by_context_update_counter = value

    @builtins.property
    def replan_by_large_error_counter(self):
        """Message field 'replan_by_large_error_counter'."""
        return self._replan_by_large_error_counter

    @replan_by_large_error_counter.setter
    def replan_by_large_error_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'replan_by_large_error_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'replan_by_large_error_counter' field must be an integer in [-2147483648, 2147483647]"
        self._replan_by_large_error_counter = value

    @builtins.property
    def parking_type(self):
        """Message field 'parking_type'."""
        return self._parking_type

    @parking_type.setter
    def parking_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_type' field must be an integer in [-2147483648, 2147483647]"
        self._parking_type = value

    @builtins.property
    def moves_counter(self):
        """Message field 'moves_counter'."""
        return self._moves_counter

    @moves_counter.setter
    def moves_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moves_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'moves_counter' field must be an integer in [-2147483648, 2147483647]"
        self._moves_counter = value

    @builtins.property
    def remain_distance(self):
        """Message field 'remain_distance'."""
        return self._remain_distance

    @remain_distance.setter
    def remain_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remain_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remain_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remain_distance = value

    @builtins.property
    def distance_to_leader_obj(self):
        """Message field 'distance_to_leader_obj'."""
        return self._distance_to_leader_obj

    @distance_to_leader_obj.setter
    def distance_to_leader_obj(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_leader_obj' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_to_leader_obj' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_to_leader_obj = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state' field must be an integer in [-2147483648, 2147483647]"
        self._state = value
