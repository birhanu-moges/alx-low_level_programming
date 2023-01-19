#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print all string parameters
 * @separator: character to separate listed numbers
 * @n: number of parameters
 *
 * Return: (void) Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char temp[];

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(list, char *);
		if (temp == NULL)
			temp = "(nil)";
		printf("%s", temp);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
