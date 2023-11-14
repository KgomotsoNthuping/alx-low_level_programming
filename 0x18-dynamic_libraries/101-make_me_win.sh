#!/bin/bash
wget -q -O /tmp/gigalib.so "https://github.com/Kgomotso222/alx-low_level_programming/tree/master/0x18-dynamic_libraries/gigalib.so"
export LD_PRELOAD=/tmp/gigalib.so
