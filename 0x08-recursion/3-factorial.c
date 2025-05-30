#include "main.h"

/**
 * factorial: Returns the factorial of a given number.
 * @n: Number.
 * 
 * Return: 1 if successful.
 * Error: return -1 if not successful.
 */

int factorial(int n)
{
    if(n < 0)
        return (-1);
    
    if(n == 0)
        return(1);
    return(n * factorial(n - 1));
}