#include "main.h"
/**
 * print_diagonal - checkes digit vialue
 * Description: print diagonal lines
 * @n: input to determine  total line number
 * Return: (void)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
				_putchar('\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
