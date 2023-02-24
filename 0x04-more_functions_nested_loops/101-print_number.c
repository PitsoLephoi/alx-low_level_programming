#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 */
void print_number(int n)
{
	int digits = 1, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n / divisor > 9)
	{
		digits++;
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
