#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the program received two arguments */
	if (argc != 3)
	{
	printf("Error\n");
		return (1);
	}

	/* Convert the arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Calculate the product */
	result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
