#!/bin/bash

if [ -e "$1" ]; then
 echo "File $1 exsists in the current directory"
else
 echo "File $1 does not exsist in the current directory"
fi
