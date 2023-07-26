#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a string 'str' and prints every other character
 * of the string, starting with the first character. It does this by using a while
 * loop to iterate through the string, and an if statement to check if the current
 * character is at an even index (i.e., index 0, 2, 4, ...). If it is, it prints the
 * character using the _putchar function.
 * The function stops when it reaches the null byte '\0', which marks the end of the string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
			i++;
	}

	_putchar('\n');
}
