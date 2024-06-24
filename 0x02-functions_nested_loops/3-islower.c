#include "main.h"

/**
 * _islower: A function that checks for lowercase character.
 * @c: The chracrter to be checked
 *
 * Return: Return 1 if c is lowercase, otherwise return 0 
 */

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
