#include "main.h"

/**
 * _memcpy_custom - Copies memory area from src to dest.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area.
 */
char *_memcpy_custom(char *dest, char *src, unsigned int n)
{
	int index = 0;
	int count = n;

	for (; index < count; index++)
	{
		dest[index] = src[index];
		n--;
	}

	return (dest);
}

