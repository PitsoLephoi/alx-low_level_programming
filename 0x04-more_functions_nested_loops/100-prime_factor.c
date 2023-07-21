#include <stdio.h>
#include <math.h>

/**
 * is_prime - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(unsigned long n)
{
    unsigned long i;

    if (n <= 1)
        return (0);

    if (n == 2)
        return (1);

    if (n % 2 == 0)
        return (0);

    for (i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return (0);
    }

    return (1);
}

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 *
 * Return: the largest prime factor of n
 */
unsigned long largest_prime_factor(unsigned long n)
{
    unsigned long i;

    for (i = sqrt(n); i > 1; i--)
    {
        if (n % i == 0 && is_prime(i))
            return (i);
    }

    return (n);
}

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long number = 612852475143;
    unsigned long largest_prime = largest_prime_factor(number);

    printf("%lu\n", largest_prime);

    return (0);
}
