#include "main.h"

/**
 * _strchr_custom - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr_custom(char *s, char c)
{
	int index = 0;

	for (; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}

	return (NULL);
}

