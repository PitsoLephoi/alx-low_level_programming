#include "main.h"

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

    if (str == NULL)
        return (NULL);

    length = 0;
    while (str[length])
        length++;

    duplicate = malloc((length + 1) * sizeof(char));
    if (duplicate == NULL)
        return (NULL);

    for (i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return (duplicate);
}
