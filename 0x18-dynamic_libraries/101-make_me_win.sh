#!/bin/bash
wget https://github.com/jassemb/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/wincode.so
export LD_PRELOAD=wincode.so
