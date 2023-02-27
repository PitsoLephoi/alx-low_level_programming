#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: A pointer to a string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		write(1, &s[length - 1], 1);
		length--;
	}

	write(1, "\n", 1);
}
