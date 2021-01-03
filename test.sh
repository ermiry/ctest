#!/bin/bash

# ensure a clean build
make clean

# compile
printf "gcc make\n\n"
make TYPE=test -j8
printf "\n\ngcc test\n\n"
make test -j8

# coverage
printf "\n\ncoverage\n\n"
make coverage
