#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the input string.
 *
 * Description:
 * This function prints the string pointed to by 'str' to the standard output
 * (stdout) followed by a new line. It iterates through the string and uses the
 * _putchar function to print each character until it reaches the null byte
 * '\0', which marks the end of the string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
