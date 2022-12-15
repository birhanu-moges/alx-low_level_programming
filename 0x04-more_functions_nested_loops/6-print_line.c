#include "main.h"
/**
 * print_line - checkes digit vialue
 * Description: print number of lines
 * @n: input to determine line number
 * Return: (void)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
