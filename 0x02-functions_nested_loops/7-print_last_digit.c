#include "main.h"

/**
 * print_last_digit: A function that prints the last digit of a number
 * @i: interger to be assessed
 * 
 * Return: Last digit of interger passed
 */

int print_last_digit(int i)
{
    int value;

    value = i % 10;
    if (value < 0)
        value = -value;

    _putchar('0' + value);
    return (value);
}
