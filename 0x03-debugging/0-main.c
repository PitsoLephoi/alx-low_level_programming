#include <stdio.h>
#include "main.h"

/**
 * main - tests the positive_or_negative() function with an input of 0
 *
 * Description: This program is used to test the behavior of the
 * positive_or_negative() function when the input is 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
