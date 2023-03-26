#!/bin/bash

if [ $# -eq 0 ]; then
 echo "No parameters given"
else [ $# -eq 1 ];
 echo "The first parameter given: $1"
fi
