#include "main.h"
#include <unistd.h>

/**
 * puts2 - Prints every other character of a string,
 *starting with the first character, followed by a new line.
 *
 * @str: A pointer to a string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		write(1, &str[i], 1);
	}

	write(1, "\n", 1);
}
