#include <stdio.h>

/**
 * main - Entry point of the program
 * 
 * Description: This is a program that prints the alphabet in
 *              lowercase while skipping q and e.
 * 
 * Return: Always return 0
 */

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; ++letter)
    {
        if (letter == 'e' || letter == 'q')
        {
            continue;
        }
        putchar(letter);
    }
    putchar('\n');
    return (0);
}
