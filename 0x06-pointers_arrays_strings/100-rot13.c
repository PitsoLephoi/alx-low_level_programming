#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *rot13_map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_replacement = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		for (i = 0; rot13_map[i]; i++)
		{
			if (*ptr == rot13_map[i])
			{
				*ptr = rot13_replacement[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
