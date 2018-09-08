#!/bin/bash

basnam=`basename $1 .cpp`

if [ $basnam == "$1" ]; then
  echo "Error: file name does not have *.cpp extension"
  exit 1
fi

g++ -std=c++11 -Wall $1 -o $basnam.exe

