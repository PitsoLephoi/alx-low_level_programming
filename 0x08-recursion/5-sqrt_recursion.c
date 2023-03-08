#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the natural square root of.
 *
 * Return: The natural square root of the number n, or -1 if n does not have
 *         a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - A helper function for _sqrt_recursion that calculates the
 *               natural square root of a number recursively.
 * @n: The number to calculate the natural square root of.
 * @i: The current value to check as the square root of n.
 *
 * Return: The natural square root of the number n, or -1 if n does not have
 *         a natural square root.
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	return (-1);

	if (i * i == n)
	return (i);

	return (sqrt_helper(n, i + 1));
}
