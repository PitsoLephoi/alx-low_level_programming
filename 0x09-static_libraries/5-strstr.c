#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The main string
 * @needle: The substring to be located
 *
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *substring = needle;

        while (*substring && *haystack && *haystack == *substring)
        {
            haystack++;
            substring++;
        }

        if (!*substring)
            return start;

        haystack = start + 1;
    }

    return NULL;
}
