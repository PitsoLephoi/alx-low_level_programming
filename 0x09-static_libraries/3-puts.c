#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string to stdout, followed by a new line.
 *
 * @str: A pointer to a string.
 *
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
