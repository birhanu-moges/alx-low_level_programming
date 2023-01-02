#include "main.h"

/**
  * print_chessboard - return muching string from source
  * @a: chess array
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (a)
	{
		for (i = 0; i < 7; i++)
		{
			_putchar(a[j][i]);
		}
		j++;
		_putchar('\n');
	}
}
