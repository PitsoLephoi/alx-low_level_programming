#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the input string.
 *
 * Description:
 * This function prints the string pointed to by 's' in reverse order,
 * followed by a new line. It first moves the pointer to the end of the
 * string and then iterates backwards through the string using a while loop,
 * printing each character until it reaches the beginning (the null byte '\0')
 * of the string.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
