#include "main.h"

/**
 * print_alphabet_x10 -  a function that prints 10 times the alphabet
 *                       (in lowercase) followed by a new line.
 * 
 * Return: Void (no return value)
 */

void print_alphabet_x10(void)
{
    int i = 0;

    while (i < 10)
    {
        char letter = 'a';
        
        while (letter <= 'z')
        {
            putchar(letter);
            ++letter;
        }
        putchar('\n');
        ++i;
    }
}
