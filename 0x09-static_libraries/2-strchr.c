#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of character @c in @s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return s;
		s++;
	}

	if (*s == c)
	return s;

	return NULL;
}
