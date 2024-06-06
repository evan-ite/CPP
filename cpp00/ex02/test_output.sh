#!/bin/bash

make re && ./account > output.log
diff <(cut -c 19- output.log) <(cut -c 19- 19920104_091532.log) > compare
