#include <stdio.h>

/**
 * main - Entry point of the program
 * 
 * Descrption: A program that prints the lowercase
 *             alphabet in reverse, followed by a new line
 *
 * Return: Always return (0)
 */

int main(void)
{
    char value = 'z';

    while (value >= 'a')
    {
        putchar(value);
        --value;
    }
    putchar('\n');
    return (0);
}
