#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int _putchar(char c);

#endif /* MAIN_H */

#include "main.h"

/**
 * main - Entry point
 *
 * description:a program that prints _putchar, followed by a new line.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}

/**
 * _putchar - Writes a character to standard output
 *
 * @c: The character to be written
 *
 * Return: When successful, returns the character written. If unsuccessful, returns -1 and
 *         sets error prompt appropriately.
 */
int _putchar(char c)
{
    return (write(STDOUT_FILENO, &c, 1));
}
