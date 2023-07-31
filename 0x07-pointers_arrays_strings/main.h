#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
/* 0. _memset */
char *_memset(char *s, char b, unsigned int n);

/* 1. _memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2. _strchr */
char *_strchr(char *s, char c);

/* 3. _strspn */
unsigned int _strspn(char *s, char *accept);

/* 4. _strpbrk */
char *_strpbrk(char *s, char *accept);

/* 5. _strstr */
char *_strstr(char *haystack, char *needle);

/* 6. print_chessboard */
void print_chessboard(char (*a)[8]);

/* 7. print_diagsums */
void print_diagsums(int *a, int size);

/* 8. set_string */
void set_string(char **s, char *to);

#endif
