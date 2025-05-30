#include "main.h"

/**
 * _strspn - Returns the length of the initial segment of 's' 
 *           consisting only of characters in 'accept'.
 * 
 * @s: The string to search.
 * @accept: The string of characters to match.
 * 
 * Return: The count of characters in 's' that are also in 'accept'.
 */

 unsigned int _strspn(char *s, char *accept)
 {
    unsigned int count = 0;
    int i, j, found;

    for (i = 0; s[i] != '\0'; i++)
    {
        found = 0;

        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
            break;

        count++;
    }

    return count;
 
}