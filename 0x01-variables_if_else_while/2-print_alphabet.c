#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * 
 * description: A program that prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
printf("Random number: %d\n", n);
return (0);
}
