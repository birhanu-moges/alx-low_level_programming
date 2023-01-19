#include "variadic_functions.h"
/**
 * sum_them_all - sum all its parameters
 * @n: number of parameters
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list args;
	int sum = 0, i;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_args(args, int);
	return (sum);
}

