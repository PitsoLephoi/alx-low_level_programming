#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the single-digit numbers of base 10,
 *              starting from 0, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	}

	putchar('\n');

	return (0);
}
