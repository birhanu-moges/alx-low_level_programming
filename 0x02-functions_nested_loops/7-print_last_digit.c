#include "main.h"
/**
 * print_last_digit - entry point
 * @n: The number to be checked
 * Discription: print last digit of a number
 * Return: (0) success
 */

int print_last_digit(int n)
{
	int rem;

	rem = n % 10 > 0 ? n % 10 : -1 * n % 10;
	_putchar(rem + '0');
	return (rem);
}
