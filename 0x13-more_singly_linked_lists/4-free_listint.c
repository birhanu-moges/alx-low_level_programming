#include "lists.h"

/**
 * free_listint - free memory taken by list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
		free(head);
}
