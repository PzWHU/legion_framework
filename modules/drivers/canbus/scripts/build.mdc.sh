cp make/CMakeLists.txt.mdc CMakeLists.txt
cmake .
rm -rf ../bin/canbus
make -j$(nproc)