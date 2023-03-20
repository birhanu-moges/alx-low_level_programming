#include "lists.h"
#include <stdio.h>
/**
 * print_slistint - prints list elements
 * @h: head of a list
 * Return: number of node or 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
