#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory size
 *
 * Return: return allocated memory on success or 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
