#include <stdio.h>

/**
 * main - Entry point
 *
 * description: a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char hex_digit;

for (num = 0; num < 16; num++)
{
if (num < 10)
hex_digit = num + '0';
else
hex_digit = num - 10 + 'a';

putchar(hex_digit);
}

putchar('\n');

return (0);
}
