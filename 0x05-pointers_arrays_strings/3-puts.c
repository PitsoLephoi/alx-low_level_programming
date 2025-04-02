#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: The string to print.
 *
 * Description: Loops through the string and prints
 * each character using _putchar, followed by '\n'.
 */

void _puts(char *str)
{
    while(*str) /*Loop until the NULL character*/
    {
        _putchar(*str); /*Print value at current pointer location*/
        ++str; /*Move pointer to next character*/
    }
    _putchar('\n');
}