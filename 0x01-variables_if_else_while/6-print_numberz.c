#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: a program that prints all single digit numbers 
 *              of base 10 starting from 0, followed by a new 
 *              line using the putchar function
 *
 * Return: Always return (0)
 */

int main(void)
{
    int a;

    for (a = 0; a < 10; ++a)
    {
        putchar(a + '0');
    }
    putchar('\n');
    return (0);
}
