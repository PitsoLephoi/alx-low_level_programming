#include "main.h"

/**
 * print_sign: a function that prints the sign of a number.
 * @n is the character that will be evaluated
 * 
 * Return: 1 for positive, 0 for zero and -1 for a negative value
 */

int print_sign(int n)
{
    int result;

    if(n > 0)
    {
        putchar('+');
        result = 1;
    }
    else if (n == 0)
    {
        putchar('0');
        result = 0;
    }
    else if (n < 0)
    {
        putchar('-');
        result = -1;
    }
    putchar(result + '0');
    return (result);
}
