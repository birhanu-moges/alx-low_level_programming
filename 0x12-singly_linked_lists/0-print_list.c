#include <lists.h>
#include <stdio.h>

/**
 * print_list - print list elements
 * @h: list
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	list_t *current;
	size_t list_size = 0;

	if (h == NULL)
		return (list_size);
	current = h;
	while (current)
	{
		printf("[%d]", current->len);
		printf(" %s", current->str);
		printf("\n");
		list_size++;
	}
	return (list_size);
}
