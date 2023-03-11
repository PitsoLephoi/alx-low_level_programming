#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all command-line
 * arguments passed to the program, one per line.
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	/* Print each command-line argument */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
