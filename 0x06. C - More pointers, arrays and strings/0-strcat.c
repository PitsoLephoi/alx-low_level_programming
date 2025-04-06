#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
    int i = 0;

    int dest_len = 0;

    if(dest == NULL || src == NULL) /* Ensure both dest and src are valid pointers */
    {
        return NULL;
    }

    while(dest[dest_len] != '\0') /* Find the end of the dest string */
    {
        ++dest_len;
    }

    while(src[i] != '\0') /* Append each character from src to dest */
    {
        dest[dest_len + i] = src[i];
        ++i;
    }
    dest[dest_len + i] = '\0'; /* Null-terminate the resulting string */

    return (dest);
}