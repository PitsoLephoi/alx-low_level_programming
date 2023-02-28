#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert.
 *
 * Return: the converted integer.
 */
int _atoi(char *s)
{
	int sign = 1, num = 0;

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
		num = num * 10 + (*s - '0');
		s++;
	}

	return (sign * num);
}
