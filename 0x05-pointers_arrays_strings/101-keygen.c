#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum, n;
	char c;

	sum = 0;
	srand(time(0));
	while (sum < 2772)
	{
		n = rand() % 78;
		if (n == 0)
			continue;
		c = (char)n + 48;
		sum += n;
		putchar(c);
	}
	putchar(2772 - sum + 48);
	return (0);
}
