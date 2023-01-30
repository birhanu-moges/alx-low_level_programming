#include "lists.h"

/**
 * listint_len - checks the number of elements of a list
 * @h: list
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
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
