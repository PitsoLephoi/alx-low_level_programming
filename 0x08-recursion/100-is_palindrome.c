#include "main.h"

/**
 * is_palindrome_helper - helper function to check if a string is palindrome
 * @s: the string to check
 * @len: the length of the string
 * @i: the current index to compare
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int len, int i)
{
	if (i >= len / 2)
		return (1);
	else if (s[i] != s[len - i - 1])
		return (0);
	else
		return (is_palindrome_helper(s, len, i + 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */

int _strlen(char *s)
{
	int len = 0;

	if (*s)
	{
	len = _strlen(s + 1);
		return (len + 1);
	}
	return (0);
}

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	if (len <= 1)
		return (1);
	return (is_palindrome_helper(s, len, 0));
}
