#!/bin/bash
wget -P /tmp https://github.com/LocalLso/alx-low_level_programming/blob/master/0x18-dynamic_libraries/code_injection.so
export LD_PRELOAD=/tmp/code_injection.so
