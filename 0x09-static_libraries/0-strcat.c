#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string to be appended
 *
 * Return: pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
