#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 *               followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 *
 * Description:
 * This function takes a pointer to an array of integers 'a' and
 * an integer 'n', and prints 'n' elements of the array, separated
 * by commas and followed by a new line. The numbers are displayed
 * in the same order as they are stored in the array.
 *
 * Example:
 * If the array contains {98, 402, -198, 298, -1024} and n = 5,
 * the function will print: "98, 402, -198, 298, -1024\n".
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
