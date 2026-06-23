cp make/CMakeLists.txt.mdc CMakeLists.txt
cmake .
rm -rf ../bin/legion_bridge
make -j$(nproc)