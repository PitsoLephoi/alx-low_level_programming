#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
   if (*s == '\0')  /* Check if current character is the null terminator */
    {
        _putchar('\n');  /* Print newline at the end of the string */
        return;          /* Exit the recursion */
    }
    _putchar(*s);            /*Print the current charcter*/
    _puts_recursion(s + 1);   /* Move to the next character */

}