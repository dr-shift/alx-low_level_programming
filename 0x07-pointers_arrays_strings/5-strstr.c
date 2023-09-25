#include "main.h"

/**
 * _strstr_custom - Locates the first occurrence of a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for in the string.
 *
 * Return: A pointer to the first occurrence of the substring in the string,
 *         or NULL if the substring is not found.
 */
char *_strstr_custom(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *current_haystack = haystack;
		char *current_needle = needle;

		while (*current_haystack == *current_needle && *current_needle != '\0')
		{
			current_haystack++;
			current_needle++;
		}

		if (*current_needle == '\0')
			return (haystack);
	}

	return (NULL);
}

