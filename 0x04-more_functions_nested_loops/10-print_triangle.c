#include "main.h"
/**
 * print_triangle - checkes digit vialue
 * Description: print triangle
 * @size: input to determine  triangle size
 * Return: (void)
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	return (0);
}
