#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print list elements
 * @h: list
 *
 * Return: size of list
 */
size_t print_list(const listint_t *h)
{
	size_t list_size = 0;

	if (h == NULL)
		return (list_size);
	while (h)
	{
		printf("[%d]", h->len);
		printf("\n");
		list_size++;
		h = h->next;
	}
	return (list_size);
}
