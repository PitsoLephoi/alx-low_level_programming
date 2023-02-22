#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, temp, sum = 0;

	while (fib2 <= 4000000)
	{
	if (fib2 % 2 == 0)
		sum += fib2;

	temp = fib2;
	fib2 += fib1;
	fib1 = temp;
	}

	printf("%d\n", sum);
	return (0);
}
