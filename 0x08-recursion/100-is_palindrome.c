#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string to measure the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Helper function to check if a string is a palindrome recursively
 * @s: The string to check
 * @i: The current starting index
 * @len: The current ending index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check_pal(s, i + 1, len - 1));
}

