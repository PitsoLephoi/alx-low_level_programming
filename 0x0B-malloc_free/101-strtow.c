#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0, in_word = 0, i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        i++;
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if fails.
 */
char **strtow(char *str)
{
    int i, j, k = 0, word_len = 0, word_count = 0;
    char **words;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0; i < word_count; i++)
    {
        while (str[k] == ' ')
            k++;
        word_len = 0;
        while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
            word_len++;
        words[i] = malloc((word_len + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }
        for (j = 0; j < word_len; j++)
            words[i][j] = str[k++];
        words[i][j] = '\0';
    }
    words[i] = NULL;

    return (words);
}
