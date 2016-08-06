#! /bin/sh
if g++ mjpg-test.cpp build/lazer-vision.so -o build/mjpg-test -L/usr/local/cuda-6.5/lib/ `pkg-config opencv --cflags --libs` --std=c++11; then
    ./build/mjpg-test
fi
