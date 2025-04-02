#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 *
 * Return: Nothing (void function)
 */

 void print_rev(char *s)
 {
    int i = 0;

    while(s[i] != '\0')
    {
        ++i;
    }
    --i; /*Move i to the last character*/
    
    while(i >= 0)
    {
        _putchar(s[i]); /*Print each character starting from the end of the string*/
        --i;
    }
    _putchar('\n');
 }