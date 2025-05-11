#include "main.h"

/**
 * _strpbrk - Searches the string `s` for any character in `accept`.
 *
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 * 
 * Return: A pointer to the first matching character in `s`, or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
    while(*s)
    {
        char *a = accept;

        while(*a)
        {
            if(*s == *a)
            {
                return s;
            }
            ++a;
        }

        ++s;
    }

    return (NULL);
}