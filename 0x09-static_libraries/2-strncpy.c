#include "main.h"

/**
 * _strncpy - copies up to n characters from the source string to the
 * destination string, stopping when a null terminator is encountered
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int j = 0;

    while (j < n && src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }

    while (j < n)
    {
        dest[j] = '\0';
        j++;
    }

    return (dest);
}

