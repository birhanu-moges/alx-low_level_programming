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
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
                        printf("%c ", *separator);
	}
	printf("\n");
	va_end(list);
}
