#include "main.h"

/**
 * fill_memory - Fills the first n bytes of the memory area pointed to by dest with value.
 * @dest: A pointer to the memory area to fill.
 * @value: The value to fill the memory area with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the filled memory area.
 */
char *fill_memory(char *dest, char value, unsigned int n)
{
	int index = 0;

	for (; n > 0; index++)
	{
		dest[index] = value;
		n--;
	}

	return (dest);
}

