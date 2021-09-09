#!/bin/bash

if [ -e lab4/main.cc ]; then
    cd lab4
    zip ../LAB4_$1.zip main.cc
    cd ..
else
    echo "No lab4/main.cc file"
fi

cd hw4/src

if [ -e tags ]; then
    zip ../../HW4_$1.zip main.cc ppm.h ppm.cc Makefile tags
else
    echo "No ctag file"
fi

cd ../..
