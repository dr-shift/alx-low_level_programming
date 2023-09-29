#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: number of command line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}

