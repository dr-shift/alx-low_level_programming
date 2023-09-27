#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Helper function to check if a number is prime recursively
 * @n: The number to check for primality
 * @i: The current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime(n, i - 1));
}

