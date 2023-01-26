#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list elements
 * @h: list
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t list_size = 0;

	if (h == NULL)
		return (list_size);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d]", h->len);
			printf(" %s", h->str);
		}
		printf("\n");
		list_size++;
		h = h->next;
	}
	return (list_size);
}
