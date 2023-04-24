#!/bin/bash

display_menu() {

 echo "Select one of the options:"
 echo "Current directory - c"
 echo "Username - u"
 echo "Home directory - h"
 echo "Exit - x"
}

client_choice() {
 read -p "Your choice: " choice
 case $choice in
  c) echo "Current directory: $(pwd)";;
  u) echo "Username: $(whoami)";;
  h) echo "Home directory: $HOME";;
  x) echo "Shutting down"; exit 0;;
  *) echo "Unknown choice";;
 esac
}

while true; do
 display_menu
 client_choice
done
