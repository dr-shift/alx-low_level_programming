#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to the newly allocated 2D array,
 * or NULL if width or height is 0 or if memory allocation fails
 */
int **alloc_grid(int width, int height)
{
    int **mee;
    int x, y;

    if (width <= 0 || height <= 0)
        return (NULL);

    mee = malloc(sizeof(int *) * height);

    if (mee == NULL)
        return (NULL);

    for (x = 0; x < height; x++)
    {
        mee[x] = malloc(sizeof(int) * width);

        if (mee[x] == NULL)
        {
            for (; x >= 0; x--)
                free(mee[x]);

            free(mee);
            return (NULL);
        }
    }

    for (x = 0; x < height; x++)
    {
        for (y = 0; y < width; y++)
            mee[x][y] = 0;
    }

    return (mee);
}

