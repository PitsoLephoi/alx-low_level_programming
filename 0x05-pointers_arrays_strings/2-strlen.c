#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 *
 * Description:
 * This function calculates and returns the length of the string 's' (excluding
 * the null terminating byte '\0'). The function iterates through the string
 * until it reaches the null byte and counts the number of characters encountered.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
