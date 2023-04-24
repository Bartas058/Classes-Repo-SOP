#!/bin/bash

echo "Select one of the options:"
echo "Current directory - c"
echo "Username - u"
echo "Home directory - h"

read -p "Your choice: " choice

case $choice in
 c) echo "Current directory: $(pwd)";;
 u) echo "Username: $(whoami)";;
 h) echo "Home directory: $HOME";;
 *) echo "Unknown choice";;
esac
