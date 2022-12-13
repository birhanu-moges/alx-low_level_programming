#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Discription: printing lower case alphabets
 * Return: (0) success
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
