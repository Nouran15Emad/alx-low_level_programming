#!/bin/bash

# Compile each .c file into an object file
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the object files
rm -f *.o
