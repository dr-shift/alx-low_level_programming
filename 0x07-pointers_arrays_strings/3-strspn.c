#include "main.h"

/**
 * _strspn_custom - Gets the length of a prefix substring consisting of only
 *                  characters that appear in accept.
 * @s: The string to search in.
 * @accept: The set of characters to search for in the string.
 *
 * Return: The number of bytes in the initial segment of s that consist only
 *         of bytes from accept.
 */
unsigned int _strspn_custom(char *s, char *accept)
{
	unsigned int length = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				length++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (length);
		}
		s++;
	}

	return (length);
}

