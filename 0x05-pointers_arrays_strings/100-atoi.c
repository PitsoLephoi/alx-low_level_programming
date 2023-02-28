#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert.
 *
 * Return: the converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int value = 0;

	while (*s != '\0' && (*s < '0' || *s > '9') && *s != '+' && *s != '-')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{

	if (value > INT_MAX / 10 ||
(value == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
	{
		return (sign == 1 ? INT_MAX : INT_MIN);
	}

	value = value * 10 + (*s - '0');
	s++;
	}

	return (sign * value);
}
