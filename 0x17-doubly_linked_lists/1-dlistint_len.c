#include "lists.h"
/**
 * dlistint_len - prints list elements count
 * @h: head of a list
 * Return: number of node or 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
