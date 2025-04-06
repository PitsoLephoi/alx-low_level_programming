#include "main.h"

/**
 * 
 * 
 */

 char *_strncat(char *dest, char *src, int n)
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

    while(i < n && src[i] != '\0') /* Append each character from src to dest */
    {
        dest[dest_len + i] = src[i];
        ++i;
    }
    dest[dest_len + i] = '\0'; /* Null-terminate the resulting string */

    return (dest);
 }