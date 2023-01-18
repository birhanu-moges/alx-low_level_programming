#include "function_pointers.h"

/**
 * array_iterator - print array elements using pointer fuction
 * @array: array with elements
 * @size: array size
 * @action: pointer function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL || size < 1)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
