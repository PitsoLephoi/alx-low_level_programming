#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_map[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char leet_replacement[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; i < 10; i++)
		{
		if (*ptr == leet_map[i])
		*ptr = leet_replacement[i];
		}
		ptr++;
	}

	return (str);
}
