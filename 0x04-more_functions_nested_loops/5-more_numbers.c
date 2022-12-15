#include "main.h"
#include <stdlib.h>
/**
 * more_numbers - multiply two values
 * Description: print ten times numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				_putchar(j + '0');
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}

		system("echo \"\"");
	}
}
