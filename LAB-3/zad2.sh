#!/bin/bash

echo "File name:" $(basename "$0")
for (( i=1; i<=$#; i++))
do
 echo "$i. argument: ${!i}"
done
echo "All arguments: $@"
echo "Number of arguments given: $#"
echo "Process ID: $$"
