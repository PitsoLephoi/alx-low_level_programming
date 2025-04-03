#include"main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
    int i = 0;
    int mid;

    /*Find length of string*/
    while(str[i] != '\0')
    {
        ++i;
    }

    /*Determine middle index*/
    if (i % 2 == 0)
    {
        mid = i / 2;
    }
    else
    {
        mid = (i - 1) /2 + 1;
    }

    while(str[mid] != '\0')
    {
        _putchar(str[mid]);
        ++mid;
    }
    _putchar('\n');
    
}