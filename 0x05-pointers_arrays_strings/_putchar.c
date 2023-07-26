#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * Description:
 * This function writes a character 'c' to the standard output (stdout)
 * using the `write` system call.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
