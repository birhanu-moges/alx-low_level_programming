#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory size
 *
 * Return: return allocated memory on success or 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		return (98);
	return (malloc(b));
}
