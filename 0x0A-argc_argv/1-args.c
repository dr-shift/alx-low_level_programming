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
    (void)argv; /* Ignore argv */

    printf("%d\n", argc - 1);

    return (0);
}

