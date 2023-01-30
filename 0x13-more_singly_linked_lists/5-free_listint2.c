#include "lists.h"

/**
 * free_listint2 - free memory taken by list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
