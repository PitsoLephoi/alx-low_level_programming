#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index = 0;

	/* Capitalize the first letter of the string, if it is a lowercase letter. */
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;

	/* Loop through each character in the string. */
	while (str[index])
	{
	if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
	str[index] == ',' || str[index] == ';' || str[index] == '.' ||
	str[index] == '!' || str[index] == '?' || str[index] == '"' ||
	str[index] == '(' || str[index] == ')' || str[index] == '{' ||
	str[index] == '}')
	{
	index++;

	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
	}

	index++;
	}
	return (str);
}
