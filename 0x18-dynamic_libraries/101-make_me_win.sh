#!bin/bash
wget -P /tmp https://github.com/yoniem/alx-low_level_programming/raw/master/0x018-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
