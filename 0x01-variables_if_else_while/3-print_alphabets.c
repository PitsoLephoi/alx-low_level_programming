#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase then in uppercase
 * using putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char letter = 'a';
    char letter2 = 'A';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    while (letter2 <= 'Z')
    {
        putchar(letter2);
        letter2++;
    }
    putchar('\n');

    return (0);
}
