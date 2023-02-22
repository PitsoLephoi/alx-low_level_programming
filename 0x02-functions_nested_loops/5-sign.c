#include <limits.h>
#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 *
 * main - entry point for the program
 *
 * @n: the number to be checked
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *         -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	putchar('0');
	return (0);
	}
	else
	{
	putchar('-');
	return (-1);
	}
}

/**
 * main - entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_sign(98);
	putchar('\n');
	print_sign(0);
	putchar('\n');
	print_sign(0xff);
	putchar('\n');
	print_sign(-1);
	putchar('\n');
	print_sign(99);
	putchar('\n');
	print_sign(INT_MAX);
	putchar('\n');
	print_sign(INT_MIN);
	putchar('\n');
	print_sign(-4);
	putchar('\n');
	return (0);
}
