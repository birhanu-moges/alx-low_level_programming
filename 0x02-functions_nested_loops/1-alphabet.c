#include "main.h"
/**
 * main - entry point
 * Discription: printing lower case alphabets
 * Return: (0) success
 */

int main(void)
{
	char *ptr = "_putchar";

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
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
