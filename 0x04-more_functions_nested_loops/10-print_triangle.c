#include "main.h"

/**
 * print_triangle - prints a triangle made of # symbols
 *
 * @size: size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size - row; column++)
		{
			_putchar(' ');
		}
		for (column = 1; column <= row; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
