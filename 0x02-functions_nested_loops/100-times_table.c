#include "main.h"
/**
 * times_table - entry point
 * Discription: printing 9 time table
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (p >= 10)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(p + '0');
				if (j != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}
		 _putchar('\n');

	}
}
