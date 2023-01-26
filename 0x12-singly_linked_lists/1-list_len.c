#include "lists.h"

/**
 *  list_len - counts length of list
 * @h: list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t list_size = 0;

	if (h == NULL)
		return (list_size);
	while (h)
	{
		list_size++;
		h = h->next;
	}
	return (list_size);
}
