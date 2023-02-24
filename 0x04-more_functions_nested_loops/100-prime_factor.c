#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds the largest prime factor of a given number
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int div = 2, max;

	while (n != 0)
	{
		if (n % div != 0)
			div++;
		else
		{
			max = n;
			n /= div;
			if (n == 1)
			{
				printf("%lu\n", max);
				break;
			}
		}
	}
	return (0);
}
