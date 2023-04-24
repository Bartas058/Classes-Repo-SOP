#!/bin/bash

echo "File name:" $(basename "$0")
echo "1. argument: $1"
echo "2. argument: $2"
echo "All arguments: $@"
echo "Number of arguments given: $#"
echo "Process ID: $$"
