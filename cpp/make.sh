#!/bin/bash
echo "Starting build"
g++ -c source/*.cpp
mv *.o objects/
g++ -o main.exe objects/*.o
echo "Build done"