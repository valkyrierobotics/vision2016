#! /bin/sh
if g++ stopPing.cpp udp_client_server.cpp -o ./build/stopPing; then
    ./build/stopPing
fi
