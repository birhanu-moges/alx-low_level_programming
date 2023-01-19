#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - sum all its parameters
 * @separator: character to separate listed numbers
 * @n: number of parameters
 *
 * Return: (void) Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d%c", va_arg(list, int), *separator);
		printf("%d", va_arg(list, int));
	}
	va_end(list);
}
