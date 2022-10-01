#!/bin/bash
gcc -c -Wall -Wextra -Werror *.c
ar -rcs liball.a *.o
