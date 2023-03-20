#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free memory form list
 * @head: head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
