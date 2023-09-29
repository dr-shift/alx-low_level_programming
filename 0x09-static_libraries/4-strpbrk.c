#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return: pointer to the first occurrence in s of any of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    int k;

    while (*s)
    {
        for (k = 0; accept[k]; k++)
        {
            if (*s == accept[k])
            {
                return (s);
            }
        }
        s++;
    }

    return ('\0');
}

