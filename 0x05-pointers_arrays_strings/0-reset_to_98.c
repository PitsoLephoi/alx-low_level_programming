#include "main.h"

/**
 * reset_to_98 - Updates the value of the integer it points to 98.
 * @n: Pointer to an integer whose value needs to be updated to 98.
 *
 * Description:
 * This function takes a pointer to an integer as a parameter and updates the
 * value it points to 98. The function modifies the value of the integer stored
 * at the memory location pointed by 'n' to be equal to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
