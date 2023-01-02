#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - print diagonlas of s square matrix
  * @a: input array
  * @size:  square array size
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[n - i];
	}
	printf("%d, %d\n", sum1, sum2);
}
