#include <stdio.h>

/**
 * main - entry point
 *
 * description: a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j, k;

for (i = 0; i <= 99; i++)
{
for (j = 0; j <= 99; j++)
{
if (i < j)
{
k = (i / 10) * 100 + (i % 10) * 1 + (j / 10) * 10 + (j % 10) * 100;
while (k > 0)
{
if (k < 1000)
putchar('0');
putchar(k % 10 + '0');
if (k >= 10)
{
putchar(',');
putchar(' ');
}
k /= 10;
}
}
}
}
putchar('\n');
return (0);
}
