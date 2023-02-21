#include "main.h"

/**
 * main - Entry point
 *
 * Description: A function that prints the alphabet in lowercase, followed
 *              by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * This function uses the _putchar function to print each character of the
 * lowercase alphabet, starting with 'a' and ending with 'z'. After all
 * the characters are printed, a newline character is printed using _putchar.
 *
 * Return: None (void)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
}
