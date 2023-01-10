#include "main.h"
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

	ptr = malloc(sizeof(int) * width * height);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
		_putchar('\n');
	}
	return (ptr);
}
