#include <stdio.h>
#include <math.h>

/**
 * is_prime - Check if a number is prime
 * @n: The number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long n)
{
    long i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
    long i;

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0 && is_prime(i))
            n /= i;
    }

    return i - 1;
}

int main(void)
{
    long number = 612852475143;
    long largest_factor = largest_prime_factor(number);

    printf("%ld\n", largest_factor);

    return 0;
}
