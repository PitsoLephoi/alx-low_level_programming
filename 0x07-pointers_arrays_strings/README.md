# 0x07. C - Even more pointers, arrays and strings

## Description

This project is part of the ALX Low-Level Programming curriculum. It focuses on advanced manipulation of pointers, arrays, and strings in the C programming language. It builds upon prior knowledge of pointers and arrays to include more complex scenarios such as double pointers and multidimensional arrays.

## Learning Objectives

By the end of this project, I am expected to be able to explain the following concepts without the help of Google:

### General

- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 20.04 LTS using:  
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should use the Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- Standard C library functions such as `printf`, `puts`, etc. are **not allowed**
- Use of `_putchar` is allowed
- All function prototypes should be included in a header file called `main.h`

## Project Structure

### Files and Prototypes

| File            | Prototype                                      | Description                                 |
|-----------------|------------------------------------------------|---------------------------------------------|
| `0-memset.c`    | `char *_memset(char *s, char b, unsigned int n);` | Fills memory with a constant byte           |
| `1-memcpy.c`    | `char *_memcpy(char *dest, char *src, unsigned int n);` | Copies memory area                          |
| `2-strchr.c`    | `char *_strchr(char *s, char c);`              | Locates a character in a string             |
| `3-strspn.c`    | `unsigned int _strspn(char *s, char *accept);` | Gets the length of a prefix substring       |
| `4-strpbrk.c`   | `char *_strpbrk(char *s, char *accept);`       | Searches a string for any of a set of bytes |
| `5-strstr.c`    | `char *_strstr(char *haystack, char *needle);` | Locates a substring                         |
| `7-print_chessboard.c` | `void print_chessboard(char (*a)[8]);`       | Prints the chessboard                       |
| `8-print_diagsums.c`   | `void print_diagsums(int *a, int size);`     | Prints the sum of the diagonals of a matrix |
| `100-set_string.c`     | `void set_string(char **s, char *to);`      | Sets the value of a pointer to a char       |

### Header File

Ensure all function prototypes and the `_putchar` prototype are included in `main.h`.

## Resources

- [C - Pointer to Pointer](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [C – Pointer to Pointer with example](https://www.geeksforgeeks.org/double-pointer-pointer-pointer-c/)
- [Multi-dimensional Arrays in C](https://www.programiz.com/c-programming/c-multidimensional-arrays)
- [2D arrays in C](https://www.geeksforgeeks.org/multidimensional-arrays-in-c-cpp/)
- [Arrays, Strings & Pointers in C Programming](https://www.youtube.com/watch?v=8jLOx1hD3_o)

## Notes

- Do not use dynamic memory (`malloc`/`free`) in this project
- Do not worry about pointer to functions, arrays of structures, or dynamic memory allocation for now

## Author

Project by Pitso Alfred Lephoi

---