#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion
 * @n: The number to calculate the square root of
 *
 * Return: The square root of n, or -1 if n is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Helper function to calculate square root recursively
 * @n: The number to calculate the square root of
 * @i: The current value to check
 *
 * Return: The square root of n, or -1 if n is not a perfect square
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}

