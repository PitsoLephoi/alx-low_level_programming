#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to char.
 * @to: Pointer to char whose address will be set to s.
 *
 * Return: Always void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
