#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the characters to search for
 *
 * Return: pointer to the first occurrence of any character from accept in s, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (_strchr(accept, *s))
            return s;
        s++;
    }

    return NULL;
}
