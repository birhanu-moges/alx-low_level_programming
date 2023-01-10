#include <stdlib.h>

/**
 * alloc_grid - creates and returns two dimensioal arry of integers
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: return pointer for 2D array
 */

int **alloc_grid(int width, int height)
{
        int **ptr;
        int i, j;

        if (width <= 0 || height <= 0)
                return (NULL);
        ptr = malloc(sizeof(int *) * height);
        if (ptr == NULL)
                return (NULL);
        for (i = 0; i < height; i++)
        {
                ptr[i] == malloc(width * sizeof(int));
                if (ptr[i] == NULL)
                {
                        for (j = 0; j < i; j++)
                                free(ptr[j]);
                        free(ptr);
                        return (NULL);
                }
                for (j = 0; j < width; j++)
                        ptr[i][j] = 0;
        }
        return (ptr);
}

