#include "main.h"

/**
 * Description: a function that prints the alphabet
 *              in lowercase, followed by a new line.
 *
 * Retrun: Void (no return type)
 */

void print_alphabet(void)
{
    char letter = 'a';

    while(letter <= 'z')
    {
        putchar(letter);
        ++letter;
    }
    putchar('\n');
}
