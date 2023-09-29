#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: number of command line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", *argv);
    return (0);
}

