#!/bin/bash
for file in *.c; do
    echo "Checking $file"
    betty $file
done
