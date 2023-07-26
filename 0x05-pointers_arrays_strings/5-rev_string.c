#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a string 's' and reverses the order of
 * characters in the string in-place. It uses two pointers, 'start' and 'end',
 * to swap characters from the start and end of the string and gradually moves
 * towards the middle until they meet at the middle element (or the null byte).
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
	{
		end++;
	}

	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
