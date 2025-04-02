#include"main.h"

/**
 * rev_string - Reverses a given string in place.
 * @s: A pointer to the string to be reversed.
 * 
 * This function takes a string and reverses the characters in it without using
 * additional memory for a new array. It swaps the characters at the start 
 * and end of the string, moving towards the center, until the string is reversed.
 * 
 * Return: This function does not return any value. The string is modified in place.
 */

void rev_string(char *s)
{
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j)
    {
        /*Swap characters at i and j*/
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        /*Move towards the center*/
        ++i;
        --j;
    }
}