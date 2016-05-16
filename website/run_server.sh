#!/bin/bash

PORT=""
if [ $# -gt 1 ]; then
    PORT="$1"
fi

if [ "$PORT" != "" ]; then
    ./server_main.py --port $PORT
else
    ./server_main.py
fi
