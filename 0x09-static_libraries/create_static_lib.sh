#!/bin/bash
gcc -Wall -pedantic -werror -wextra -c *c
ar -rcs liball.a *.o
ranlib liball.a
