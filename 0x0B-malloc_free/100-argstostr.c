#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the new concatenated string, or NULL if fails.
 */
char *argstostr(int ac, char **av)
{
    int total_length = 0, i, j, k = 0;
    char *concatenated;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_length++;
        total_length++; /* For the '\n' character */
    }

    concatenated = malloc((total_length + 1) * sizeof(char));
    if (concatenated == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            concatenated[k++] = av[i][j];
        concatenated[k++] = '\n';
    }
    concatenated[k] = '\0';

    return (concatenated);
}
