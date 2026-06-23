cp make/CMakeLists.txt.x64 CMakeLists.txt
mkdir build
cd build
cmake -DSOCKET_CAN_ENABLE=ON -DMDC_CAN_ENABLE=OFF -DCANFD_ENABLE=OFF -DROS_ENABLE=OFF -DROS2_ENABLE=ON -DLCM_ENABLE=OFF -DDDS_ENABLE=OFF -DGLOG_ENABLE=ON  -DCMAKE_BUILD_TYPE=Debug ../
rm -rf ../bin/canbus
make -j$(nproc)