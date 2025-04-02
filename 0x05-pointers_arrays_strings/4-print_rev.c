#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 *
 * Return: Nothing (void function)
 */

 void print_rev(char *s)
 {
    int i;

    i = strlen(s) - 1; /*Find the length of the string and subtract 1 to get the last index*/
    
    while(i >= 0)
    {
        _putchar(s[i]); /*Print each character starting from the end of the string*/
        --i;
    }
    _putchar('\n');
 }