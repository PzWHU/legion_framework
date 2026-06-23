#!/bin/bash
# ./build_simple.sh [平台] [编译类型]
# 示例: ./build_simple.sh x64 release

set -e

# 默认参数
PLATFORM=${1:-"x64"} # arm64
BUILD_TYPE=${2:-"release"} # debug

if [ "$PLATFORM" != "x64" ] && [ "$PLATFORM" != "arm64" ]; then
    echo "Unsupported : $PLATFORM"
    echo "Only supported: x64 or arm64"
    exit 1
fi

if [ "$BUILD_TYPE" != "debug" ] && [ "$BUILD_TYPE" != "release" ]; then
    echo "Unsupported: $BUILD_TYPE"
    echo "Only supported: debug 或 release"
    exit 1
fi

echo "build..."
cd modules/message/ros2
source /opt/ros/humble/setup.bash
colcon build
source install/setup.bash
cd ../../../

build_module() {
    module=$1
    echo "build: $module"

    cd modules/$module
    build_script="./scripts/build.$PLATFORM.sh"

    if [ -f "$build_script" ]; then
        if [ "$BUILD_TYPE" = "release" ]; then
            sed -i 's/-DCMAKE_BUILD_TYPE=Debug/-DCMAKE_BUILD_TYPE=Release/g' $build_script
        fi
        chmod +x $build_script
        ./$build_script
    else
        echo "not exist: $build_script"
        return 1
    fi

    cd ../../
}


echo "build..."
build_module planning
build_module control
build_module routing
build_module prediction

echo "Package..."
tar -zcvf packages_${PLATFORM}_${BUILD_TYPE}.tar.gz \
    ./docs \
    ./modules/common/data/ \
    ./modules/message/ros2/install/ \
    ./modules/control/bin/ \
    ./modules/planning/bin/ \
    ./modules/routing/bin/ \
    ./modules/prediction/bin/

echo "success: packages_${PLATFORM}_${BUILD_TYPE}.tar.gz"