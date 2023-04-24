#!/bin/bash

source funkcje.f

while true; do
 display_menu
 client_choice

 case $choice in
  c) echo "Current directory: $(pwd)";;
  u) echo "Username: $(whoami)";;
  h) echo "Home directory: $HOME";;
  x) echo "Shutting down"; exit 0;;
  *) echo "Unknown choice";;
 esac
done
