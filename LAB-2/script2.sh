#!/bin/bash

if [[ -f SOP_display.sh ]]; then
 echo "File SOP_display.sh is performed"
 bash SOP_display.sh
elif [[ $# -eq 1 && -f "$1" ]]; then
 echo "File $1 is performed"
 bash "$1"
else
 echo "File SOP_display.sh does not exsist. No valid argument given"
fi
