#!/bin/bash

num_files=$(ls | wc -l)

if [ $num_files -gt 5 ]; then
 echo "More than 5 files in this directory"
else
 echo "No more than 5 files in this directory"
fi
