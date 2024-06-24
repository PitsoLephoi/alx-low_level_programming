#include "main.h"

/**
 * 4-isalpha: a function that checks for alphabetic character.
 * @c is the character to be checked
 * 
 * Return: Always return 1 if c is a alphabet character
 *         and return 0 if not a alphabet character
 */

int _isalpha(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return(1);
    }
    else
    {
        return (0);
    }
}
