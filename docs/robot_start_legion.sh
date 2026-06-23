#!/bin/bash

# 用crontab打开配置并编辑在最后面加上需要开机启动的***.sh脚本, 例如: @reboot bash /home/zhihui/AutoRS_v2/docs/robot_start.sh
# crontab -e
# 重新加载一下crontab配置
# sudo service reload cron
# bash /home/zhihui/AutoRS_v2/docs/WatchDog.bash &


humble_path=/opt/ros/humble
eloquent_path=/opt/ros/eloquent

get_arch=$(arch)
if [[ $get_arch == "x86_64" ]]; then
  if [ -d $eloquent_path ]; then
      echo "this is x86_64 eloquent"
      source /opt/ros/eloquent/setup.bash
      export THIRD_LIBRARY_PATH=/usr/local/legion/third_party/x64
  elif [ -d $humble_path ]; then
      echo "this is x86_64 humble"
      source /opt/ros/humble/setup.bash
      export THIRD_LIBRARY_PATH=/usr/local/legion/third_party/x64
      BIN_PATH="./bin/x86"
  else
      echo "unknown!! ROS DISTRO is $ROS_DISTRO, exit"
      exit 1
  fi
elif [[ $get_arch == "aarch64" ]]; then
  echo "this is arm64"
  source /opt/ros/humble/setup.bash
  export THIRD_LIBRARY_PATH=/usr/local/legion/third_party
  BIN_PATH="./bin/arm64"
else
  echo "unknown!! get_arch is $get_arch, exit"
  exit 1
fi

export CMAKE_PREFIX_PATH=$THIRD_LIBRARY_PATH/3rdparty:$THIRD_LIBRARY_PATH/3rdparty/share:$THIRD_LIBRARY_PATH/LaserLoopMapping/lib:$THIRD_LIBRARY_PATH/LINSMapping/lib:$THIRD_LIBRARY_PATH/MotionPlanner/lib:$THIRD_LIBRARY_PATH/LocalPlanner/lib:$THIRD_LIBRARY_PATH/CartoSlam:$THIRD_LIBRARY_PATH/ObstacleDetection/lib:$THIRD_LIBRARY_PATH/GlobalPlanner/lib:$THIRD_LIBRARY_PATH/CoveragePathPlanner/lib:$THIRD_LIBRARY_PATH/LinsSlam2:$THIRD_LIBRARY_PATH/BasePlanner:$THIRD_LIBRARY_PATH/AutoCalibration:$CMAKE_PREFIX_PATH
export LD_LIBRARY_PATH=$THIRD_LIBRARY_PATH/lib/pugixml:$THIRD_LIBRARY_PATH/lib/protobuf:$THIRD_LIBRARY_PATH/lib/boost:$THIRD_LIBRARY_PATH/lib/gflags:$THIRD_LIBRARY_PATH/lib/glog:$THIRD_LIBRARY_PATH/lib/Geographic:$LD_LIBRARY_PATH


export ROS_DOMAIN_ID=16
BASHRC_FILE="$HOME/.bashrc"
if grep -q "export ROS_DOMAIN_ID=" "$BASHRC_FILE"; then
    sed -i "s/export ROS_DOMAIN_ID=.*/export ROS_DOMAIN_ID=$ROS_DOMAIN_ID/" "$BASHRC_FILE"
    echo "updated ROS_DOMAIN_ID in .bashrc to: $ROS_DOMAIN_ID"
else
    echo "export ROS_DOMAIN_ID=$ROS_DOMAIN_ID" >> "$BASHRC_FILE"
    echo "added ROS_DOMAIN_ID to .bashrc: $ROS_DOMAIN_ID"
fi

#if [[ $get_arch == "aarch64" ]]; then
#    echo "arm64 use cyclonedds"
#    export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
#    export RCL_ASSERT_RMW_ID_MATCHES=rmw_cyclonedds_cpp
#    export CYCLONEDDS_URI=/home/zhihui/AutoRS_v2/docs/ros_cyclonedds.xml
#fi
#
#if [ -d $humble_path ]; then
#    echo "humble use dds_xml "
#    export FASTRTPS_DEFAULT_PROFILES_FILE=/home/zhihui/AutoRS_v2/docs/ros_fastdds.xml
#    export RMW_FASTRTPS_USE_QOS_FROM_XML=1
#fi

#bash /home/zhihui/AutoRS_v2/docs/ping_ntp.sh
cd modules/message/ros2
source install/setup.bash
cd ../../../

while :; do

  sleep 0.5

  cd modules/control/bin
  control=$(ps -ef | grep "./control" | grep -v "grep")
  if [ "$control" ]; then
    echo "The service is alive! -------control" >/dev/null 2>&1
    sleep 0.5
  else
    echo "The service was shutdown! ---control" >/dev/null 2>&1
    echo "Starting service ...	  	---control" >/dev/null 2>&1
    ./control  &
    echo "The service was started! ----control" >/dev/null 2>&1
    sleep 1
  fi
  cd ../../../

  sleep 5

  cd modules/planning/bin
  planning=$(ps -ef | grep "./planning" | grep -v "grep")
  if [ "$planning" ]; then
    echo "The service is alive! -------planning" >/dev/null 2>&1
    sleep 0.5
  else
    echo "The service was shutdown! ---planning" >/dev/null 2>&1
    echo "Starting service ...	  	---planning" >/dev/null 2>&1
    ./planning  &
    echo "The service was started! ----planning" >/dev/null 2>&1
    sleep 1
  fi
  cd ../../../
  sleep 5

  cd modules/routing/bin
  routing=$(ps -ef | grep "./routing" | grep -v "grep")
  if [ "$routing" ]; then
    echo "The service is alive! -------routing" >/dev/null 2>&1
    sleep 0.5
  else
    echo "The service was shutdown! ---routing" >/dev/null 2>&1
    echo "Starting service ...	  	---routing" >/dev/null 2>&1
    ./routing  &
    echo "The service was started! ----routing" >/dev/null 2>&1
    sleep 1
  fi
  cd ../../../

  sleep 5
done
