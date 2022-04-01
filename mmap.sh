#!/bin/bash
gcc mmap.c -o mmap
./hello
cd ../../../usr/bin
busybox devmem 0