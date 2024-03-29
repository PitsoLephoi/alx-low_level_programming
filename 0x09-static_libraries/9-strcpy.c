#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte, to the buffer pointed to by dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return dest_start;
}
