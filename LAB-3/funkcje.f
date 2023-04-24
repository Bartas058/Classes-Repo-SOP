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
}
