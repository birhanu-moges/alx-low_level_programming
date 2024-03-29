#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: given number
 *
 * Return: binary value
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0, k, temp;
	int count;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n;

	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}

	for (count = i - 1; count >= 0; count--)
	{
		k = n >> count;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
