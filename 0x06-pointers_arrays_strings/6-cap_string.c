#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	/* Capitalize the first letter of the string, if it is a lowercase letter. */
	if (*(s + i) >= 'a' && *(s + i) <= 'z')
	*(s + i) -= 32;

	/* Loop through each character in the string. */
	while (*(s + i) != '\0')
	{

	if (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n' ||
	*(s + i) == ',' || *(s + i) == ';' || *(s + i) == '.' ||
	*(s + i) == '!' || *(s + i) == '?' || *(s + i) == '"' ||
	*(s + i) == '(' || *(s + i) == ')' || *(s + i) == '{' || *(s + i) == '}')
	{
		i++;

		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		*(s + i) -= 32;
	}

	i++;
	}

	/* Return a pointer to the modified string. */
	return (s);
}
