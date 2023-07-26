#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a string 'str' and prints the second half of the string.
 * If the length of the string is odd, it prints the last n characters, where n is
 * (length_of_the_string - 1) / 2. To achieve this, the function first calculates
 * the length of the string using the _strlen function. Then it calculates the starting
 * index for printing the second half. If the length is even, it starts from length / 2,
 * and if it is odd, it starts from (length + 1) / 2. The function then uses a while loop
 * to print the characters from the calculated starting index until the null byte '\0'.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
