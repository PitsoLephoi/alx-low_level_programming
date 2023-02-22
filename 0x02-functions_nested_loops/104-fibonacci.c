#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, temp, count;

	printf("%d, %d, ", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		temp = fib2;
		fib2 += fib1;
		fib1 = temp;

		printf("%d", fib2);
		if (count != 98)
		printf(", ");
	}

    printf("\n");
	return (0);
}
