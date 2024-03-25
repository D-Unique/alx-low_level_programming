#!/bin/bash
wget -P /tm phttps://github.com/Lexxyla/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
rt LD_PRELOAD=/tmp/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
