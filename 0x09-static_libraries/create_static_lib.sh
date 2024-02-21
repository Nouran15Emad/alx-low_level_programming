#!/bin/bash
#!/bin/bash

# Check if any .c files exist in the current directory
if ls *.c &>/dev/null; then
    # Compile the .c files into object files
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

    # Create the static library
    ar -rc liball.a *.o
    ranlib liball.a

    # Clean up the object files
    rm -f *.o
