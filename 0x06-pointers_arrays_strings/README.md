# 0x06. C - More pointers, arrays and strings

## Description
This project continues the exploration of pointers, arrays, and strings in C. It builds on previous knowledge by introducing more advanced string manipulation and memory concepts.

## Learning Objectives
By the end of this project, I was able to explain the following without external help:
- What pointers are and how to use them
- The difference between pointers and arrays
- How to manipulate strings in C
- The concept of scope of variables in C

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation with: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of global variables
- No more than 5 functions per file
- No use of standard library functions like `printf`, `puts`, etc.
- Use of `_putchar` allowed
- Header file `main.h` must contain all function prototypes

## Files and Functions

| File | Function |
|------|----------|
| `0-strcat.c` | `char *_strcat(char *dest, char *src);` |
| `1-strncat.c` | `char *_strncat(char *dest, char *src, int n);` |
| `2-strncpy.c` | `char *_strncpy(char *dest, char *src, int n);` |
| `3-strcmp.c` | `int _strcmp(char *s1, char *s2);` |
| `4-rev_array.c` | `void reverse_array(int *a, int n);` |
| `5-string_toupper.c` | `char *string_toupper(char *);` |
| `6-cap_string.c` | `char *cap_string(char *);` |
<!-- Add more as needed -->

## Compilation Example

To compile any of the files, use:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c filename.c -o output
