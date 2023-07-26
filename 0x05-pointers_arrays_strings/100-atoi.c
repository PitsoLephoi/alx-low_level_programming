#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer value.
 *
 * Description:
 * This function converts a string to an integer. It takes into account all the
 * - and + signs before the number. If there are no numbers in the string, it
 * returns 0. The function does not use long, declare new variables of "type"
 * array, or hard-code special values.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;

	i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}

		result = result * 10 + (s[i] - '0');
		i++;
		}

	return result * sign;
}
