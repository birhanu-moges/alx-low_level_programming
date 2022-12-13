#include "main.h"
/**
 * main - entry point
 * Discription: printing lower case alphabets
 * Return: (0) success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
