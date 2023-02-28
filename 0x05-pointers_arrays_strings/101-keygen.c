#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUM_OF_BYTES 2772

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum, n;
	time_t t;

	srand((unsigned int) time(&t));
	while (sum < SUM_OF_BYTES)
	{
		n = rand() % 128;
		if (n < 33)
			n += 33;
		printf("%c", n);
		sum += n;
	}
	printf("%c", SUM_OF_BYTES - sum);
	return (0);
}
