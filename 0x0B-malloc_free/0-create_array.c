#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initializes with specific char
 * @size: array size
 * @c: character to fill the array
 *
 * Return: Null or array pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(c) * size);
	while (size)
	{
		array = c;
		array++;
		size--;
	}
	return (array);
}
