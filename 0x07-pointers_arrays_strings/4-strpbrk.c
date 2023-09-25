#include "main.h"

/**
 * _strpbrk_custom - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The set of characters to search for in the string.
 *
 * Return: A pointer to the first occurrence of any character in accept in s,
 *         or NULL if no such character is found.
 */
char *_strpbrk_custom(char *s, char *accept)
{
	while (*s)
	{
		int index;

		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return (NULL);
}

