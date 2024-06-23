#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Desscription: A program that prints all the numbers
 *               of base 16 in lowercase, followed by a new line.
 *
 * Return: Always return (0)
 */

int main(void)
{
    char letter;
    int number;

    for (number = 0; number < 10; ++number)
    {
        putchar(number + '0');
    }
    for (letter = 'a'; letter <= 'f'; ++letter)
    {
        putchar(letter);
    }
    putchar('\n');
    return (0);
}
