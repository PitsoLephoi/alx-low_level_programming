#include "main.h"

/**
 * print_line - prints a straight line of _ in the terminal
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
