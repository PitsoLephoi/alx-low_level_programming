#include "main.h"

/**
 * _sqrt_helper - Recursive helper to find natural square root
 * @n: Number to find the square root of
 * @guess: Current guess value
 *
 * Return: Natural square root of n or -1 if none exists
 */
int _sqrt_helper(int n, int guess)
{
    if(guess * guess ==n)
        return (guess);
    if(guess * guess > n)
        return (-1);
    return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to compute the square root of
 *
 * Return: Natural square root, or -1 if not a perfect square
 */

int _sqrt_recursion(int n)
{
    if(n < 0)
        return(-1);
    return(_sqrt_helper(n, 0));   
}