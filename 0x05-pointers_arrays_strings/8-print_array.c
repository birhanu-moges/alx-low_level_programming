#include <stdio.h>

/**
  * print_array - prints n # of elements from array
  * @a: given array
  * @n: given # of arrays
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");

}
