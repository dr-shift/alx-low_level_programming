#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @n: String to be modified
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}

	return (n);
}

