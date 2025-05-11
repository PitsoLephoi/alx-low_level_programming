#include "main.h"

/**
 * 
 * 
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