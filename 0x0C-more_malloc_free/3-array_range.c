#include "main.h"
#include <stdlib.h>

/**
 * array_range - creating int array and retuns pointer
 * @min: min value
 * @max: max value
 *
 *
 * Return: returns pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (; min <= max; min++)
		ptr[i++] = min;
	return (ptr);
}
