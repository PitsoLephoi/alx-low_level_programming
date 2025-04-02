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
    
    while(s[i] != '\0')
    {
        _putchar(s[i - 1]); /*Print each character starting from the end of the string*/
        --i;
    }
    _putchar('\n');
 }