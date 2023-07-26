#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 *
 * Description:
 * This function copies the string pointed to by 'src', including the
 * terminating null byte, to the buffer pointed to by 'dest'. The destination
 * buffer must be large enough to hold the entire string (including the null
 * byte). The function returns the pointer to the destination buffer 'dest'.
 * It is the responsibility of the caller to ensure that 'dest' points to a
 * valid memory location with enough space to store the copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
