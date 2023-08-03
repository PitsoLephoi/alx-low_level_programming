#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number using recursion.
 * @n: The input number.
 *
 * Return: The square root of the number or -1 if the number doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return find_sqrt(n, 1, n);
}

/**
 * find_sqrt - Helper function to find the square root using binary search.
 * @n: The input number.
 * @start: The start value for binary search.
 * @end: The end value for binary search.
 *
 * Return: The square root of the number or -1 if the number doesn't have a natural square root.
 */
int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int sqr = mid * mid;

	if (start > end)
	{
		return (-1);
	}

	if (sqr == n)
	{
		return (mid);
	}
	else if (sqr > n)
	{
		return find_sqrt(n, start, mid - 1);
	}
	else
	{
	return find_sqrt(n, mid + 1, end);
	}
}
