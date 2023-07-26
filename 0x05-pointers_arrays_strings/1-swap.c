#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description:
 * This function swaps the values of two integers pointed to by 'a' and 'b'.
 * The value pointed by 'a' will be assigned to 'b', and the value pointed by
 * 'b' will be assigned to 'a'.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
