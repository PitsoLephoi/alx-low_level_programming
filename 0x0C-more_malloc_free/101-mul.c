#include <stdio.h>
#include <stdlib.h>

int _isdigit(char c)
{
	return c >= '0' && c <= '9';
}

void _multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	int *result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	int start = 0;
	while (start < len1 + len2 - 1 && result[start] == 0)
		start++;

	for (int i = start; i < len1 + len2; i++)
		printf("%d", result[i]);
		printf("\n");

	free(result);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (int i = 0; num2[i]; i++)
	{
		if (!_isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	_multiply(num1, num2);

	return (0);
}
