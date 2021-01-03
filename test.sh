#!/bin/bash

# ensure a clean build
make clean

# compile
printf "gcc make\n\n"
make TYPE=test -j8
printf "\n\ngcc test\n\n"
make TYPE=test test -j8

# run
printf "\n\ntest\n\n"
bash test/run.sh

# coverage
printf "\n\ncoverage\n\n"
make coverage
