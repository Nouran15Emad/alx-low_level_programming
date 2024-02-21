#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c


# Get all the .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into an object file
for file in $c_files; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library
ar -rc  liball.a *.o
ranlib liball.a

# Clean up the object files
rm -f *.o
