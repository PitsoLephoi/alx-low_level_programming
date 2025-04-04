#include "main.h"

/**
 * _strcpy - Copies a string from src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /*Loop to copy each index value into the array*/

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';

    return dest;
}