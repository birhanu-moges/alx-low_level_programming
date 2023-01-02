#include "main.h"

/**
  * print_chessboard - return muching string from source
  * @a: chess array
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		j++;
		_putchar('\n');
	}
}
