#include "main.h"

/**
  * reverse_array - reverse array elements
  * @a: int array
  * @n: # of elements of array
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[(n / 2) - i];
		a[(n / 2) - i] = tmp;
	}
	return (a);
}
