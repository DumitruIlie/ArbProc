#! /bin/bash

gcc ./fork.c -o ./fork && gcc ./remap.c -o ./remap && ./fork | ./remap > output.txt
