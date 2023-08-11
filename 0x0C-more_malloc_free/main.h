#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 0. Trust no one */
void *malloc_checked(unsigned int b);

/* 1. string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* 2. _calloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* 3. array_range */
int *array_range(int min, int max);

/* 4. _realloc */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* 5. We must accept finite disappointment, but never lose infinite hope */
int _putchar(char c);
void print_number(char *number);
int is_digit(char c);
int str_length(char *str);
void multiply(char *num1, char *num2);
int _putchar(char c);

#endif
