#!/bin/bash

script_name=$(basename "$0")

if [ "${script_name: -3}" == ".sh" ]; then
 echo "Script name ends with .sh"
else
 new_name="${script_name}.sh"
 echo "Name changed: ${new_name}"
 mv "$script_name" "$new_name"
fi
