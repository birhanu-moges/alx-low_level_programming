#include "main.h"
/**
 * main - entry point
 * Discription: printing string
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
