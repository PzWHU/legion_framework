#!/bin/bash

cd /home/titan/legion_framework/modules/drivers/wxapp/map/$1
rosrun map_server map_saver -f test
cd ..
python3 pgm2png.py $1/test.pgm
