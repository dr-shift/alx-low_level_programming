#include "main.h"

/**
 * _strncat - concatenates n characters from the source string to the
 * destination string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to concatenate
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    j = 0;
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest);
}

