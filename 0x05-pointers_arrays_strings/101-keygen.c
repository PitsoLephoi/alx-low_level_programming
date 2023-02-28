#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 9

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuv
wxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Random valid password: %s\n", password);

	return (0);
}
