#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program assigns a random number
 * to the variable n and prints whether the
 * number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
