#include "function_pointers.h"

/**
 * int_index - return index of a value in array using pointer function
 * @array: array with elements
 * @size: array size
 * @cmp: pointer function to compare
 *
 * Return: index of a value
 */

int int_index(int *array, size_t size, void (*cmp)(int))
{
	size_t i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
