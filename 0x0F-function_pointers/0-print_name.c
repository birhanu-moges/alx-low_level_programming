#include "function_pointers.h"

/**
 * print_name - print name of user usnig pointer function
 * @name: name of the person
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	int len = 0;

	if (name == NULL || name == "")
		return;
	while (name[len])
		len++;
	name  = malloc(sizeof(char) * len);
	f(name);
}
