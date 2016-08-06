#! /bin/sh
if g++ startPing.cpp udp_client_server.cpp -o ./build/startPing; then
    ./build/startPing
fi
